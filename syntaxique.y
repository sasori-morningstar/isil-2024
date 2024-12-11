%{
    #include <stdio.h>
    extern int nb_lignes;
    extern int col;
    int yyerror(char * msg);
%}
%start Program
%token mc_begin mc_end String pvg aff identificateur mc_program mc_Const mc_For mc_In mc_Out mc_integer mc_float mc_String taille FLOAT_TOK integer commentaire equals doesnt_equal less less_or_equals greater greater_or_equals add substract divide multiply open_bracket close_bracket open_bracket_square close_bracket_square open_parenthesis close_parenthesis vrg err signe_formatage
%left add substract
%left multiply divide
%nonassoc equals less less_or_equals greater greater_or_equals doesnt_equal
%%
Program: mc_program identificateur open_bracket Bloc_Instructions close_bracket{
    printf("Programme terminé..\n");
    YYACCEPT;
};
Donnee_Assignable: identificateur | Element_Tableau;
Donnee: String | taille | integer | FLOAT_TOK | Donnee_Assignable;
Expression: Expression add Expression
          | Expression substract Expression
          | Expression multiply Expression
          | Expression divide Expression
          | Donnee;
Type_Donnee: mc_String | mc_float | mc_integer;
Element_Tableau: identificateur open_bracket_square taille close_bracket_square;
Groupe_Identificateurs: identificateur | identificateur vrg Groupe_Identificateurs;
Declaration_Variable_Simple: Type_Donnee Groupe_Identificateurs pvg {
    printf("Déclaration variable simple réussi\n");
}
Declaration_Constant: Type_Donnee mc_Const identificateur pvg {
    printf("Déclaration constant réussi\n");
}
Declaration_Tableau: Type_Donnee Element_Tableau pvg {
    printf("Déclaration tableau réussi\n");
}
Affectation_Variable_Simple: identificateur aff Expression pvg {
    printf("Affectation variable simple réussi\n");
};
Affectation_Element_Tableau: Element_Tableau aff Expression pvg {
    printf("Affectation élement du tableau réussi\n");
};
Incrementation: Donnee_Assignable add add;
Decrementation: Donnee_Assignable substract substract;
Operation_Speciale: Incrementation | Decrementation;
Comparaison: doesnt_equal | equals | less | less_or_equals | greater | greater_or_equals;
Condition: Expression Comparaison Expression;
Declaration: Declaration_Variable_Simple | Declaration_Tableau;
Affectation: Affectation_Variable_Simple | Declaration_Constant | Affectation_Element_Tableau | Operation_Speciale pvg;
Out_Function: mc_Out open_parenthesis String vrg Expression close_parenthesis pvg{
    printf("Function Out executé avec succès\n");
}; 
In_Function: mc_In open_parenthesis signe_formatage vrg Donnee_Assignable close_parenthesis pvg{
    printf("Function Out executé avec succès\n");
}; 
Instruction: commentaire | Declaration | Affectation | Boucle | In_Function | Out_Function;
Bloc_Instructions: Instruction Bloc_Instructions | ;
Boucle: mc_For open_parenthesis Affectation Condition pvg Operation_Speciale close_parenthesis mc_begin Bloc_Instructions mc_end {
    printf("Boucle parcouru avec succès\n");
};
%%

int main(){
    yyparse();
    return 0;
}

int yywrap(){
    return 0;
}

int yyerror(char * msg){
    printf("Erreur syntaxique détectée, ligne %d, colonne %d\n", nb_lignes, col);
    return 1;
}
