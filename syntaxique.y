%{
    extern int nb_lignes;
    extern int col;
    int yyerror(char * msg);
    char sauvType[20];
%}
%start Program
%union{
    int entier;
    char * str;
    float numvrg;
}
%token mc_begin mc_end <str>String pvg aff <str>identificateur mc_program mc_Const mc_For mc_In mc_Out <str>mc_integer <str>mc_float <str>mc_String <entier>taille <numvrg>FLOAT_TOK <entier>integer commentaire equals doesnt_equal less less_or_equals greater greater_or_equals add substract divide multiply open_bracket close_bracket open_bracket_square close_bracket_square open_parenthesis close_parenthesis vrg err <str>signe_formatage
%left add substract
%left multiply divide
%nonassoc equals less less_or_equals greater greater_or_equals doesnt_equal
%%
Program: mc_program identificateur open_bracket Bloc_Instructions close_bracket{
    printf("Programme terminé..\n");
    YYACCEPT;
};

Donnee: String | taille | integer | FLOAT_TOK | identificateur open_bracket_square taille close_bracket_square {
    if(rechercherType($1)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
} | identificateur{
    if(rechercherType($1)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
};
Expression: Expression add Expression
          | Expression substract Expression
          | Expression multiply Expression
          | Expression divide Expression
          | Donnee;
Type_Donnee: mc_String{
    strcpy(sauvType, $1);
} | mc_float{
    strcpy(sauvType, $1);
}| mc_integer{
    strcpy(sauvType, $1);
};
Groupe_Identificateurs: identificateur {
    if(rechercherType($1)==0){
        inserer($1, sauvType,1);
    }else{
        printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
} | identificateur vrg Groupe_Identificateurs{
        if(rechercherType($1)==0){
            inserer($1, sauvType,1);
        }else{
            printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", $1, nb_lignes, col);
        }
    };
Declaration_Variable_Simple: Type_Donnee Groupe_Identificateurs pvg;
Declaration_Constant: Type_Donnee mc_Const identificateur pvg {
    if(rechercherType($3)==0){
        inserer($3, sauvType, 1);
    }else{
        printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", $3, nb_lignes, col);
    }
}
Declaration_Tableau: Type_Donnee identificateur open_bracket_square taille close_bracket_square pvg {
    if(rechercherType($2)==0){
        inserer($2, sauvType,$4);
    }else{
        printf("Erreur semantique: double declaration de %s, ligne %d, colonne %d\n", $2, nb_lignes, col);
    }
}
Affectation_Variable_Simple: identificateur aff Expression pvg {
    if(rechercherType($1)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
}
Affectation_Element_Tableau: identificateur open_bracket_square taille close_bracket_square aff Expression pvg {
    if(rechercherType($1)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
    if(rechercherTaille($1)<$3){
        printf("Erreur semantique: %s dépassement taille tableau, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
}
Incrementation: identificateur add add{
    if(rechercherType($1)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
};
Decrementation: identificateur substract substract{
    if(rechercherType($1)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $1, nb_lignes, col);
    }
};
Operation_Speciale: Incrementation | Decrementation;
Comparaison: doesnt_equal | equals | less | less_or_equals | greater | greater_or_equals;
Condition: Expression Comparaison Expression;
Declaration: Declaration_Variable_Simple | Declaration_Tableau;
Affectation: Affectation_Variable_Simple | Declaration_Constant | Affectation_Element_Tableau | Operation_Speciale pvg;
Out_Function: mc_Out open_parenthesis String vrg Expression close_parenthesis pvg{
}; 
In_Function: mc_In open_parenthesis signe_formatage vrg identificateur close_parenthesis pvg{
    if(rechercherType($5)==0){
        printf("Erreur semantique: %s non déclaré, ligne %d, colonne %d\n", $5, nb_lignes, col);
    }
}; 
Instruction: commentaire | Declaration | Affectation | Boucle | In_Function | Out_Function;
Bloc_Instructions: Instruction Bloc_Instructions | ;
Boucle: mc_For open_parenthesis Affectation Condition pvg Operation_Speciale close_parenthesis mc_begin Bloc_Instructions mc_end {
    printf("Boucle parcouru avec succès\n");
};
%%

int main(){
    yyparse();
    afficher();
    return 0;
}

int yywrap(){
    return 0;
}

int yyerror(char * msg){
    printf("Erreur syntaxique détectée, ligne %d, colonne %d\n", nb_lignes, col);
    return 1;
}
