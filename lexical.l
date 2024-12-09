%{
    #include <stdio.h>
    #include <string.h>
    int nb_lignes=1;
    int contains_two_successive_hyphens(char * str){
        int i;
        for(i=1;i<strlen(str);i++){
            if((str[i],'_')&&str[i-1]=='_') return 1;
        }
        return 0;
    }
%}

taille [+]?([1-9][0-9]*)
integer [+-]?([1-9][0-9]*|0)
float [+-]?([0-9]+.[0-9]+)
string \"(.|\n)*\"
commentaire ##(.|\n)*##
identificateur [a-zA-Z]([a-zA-Z]|[0-9]|_)*


%%
"program" {printf("Début de programme détectée\n");}
"Const" {printf("Déclaration Const détectée\n");}
"For" {printf("Déclaration Boucle détectée\n");}
"In" {printf("Fonction de lecture détectée\n");}
"Out" {printf("Fonction d'écriture détectée\n");}


{taille} {printf("L'entité 'taille' est détectée\n");}
{integer} {printf("L'entité 'integer' est détectée\n");}
{float} {printf("L'entité 'float' est détectée\n");}
{string} {printf("L'entité 'string' est détectée\n");}
{commentaire} {printf("Un commentaire a été détectée\n");}
{identificateur} {
    if(yyleng<=12){
        if(contains_two_successive_hyphens(yytext)){
            printf("/!\\ Erreur lexical 'identificateur_wrong', 'identificateur' ne doit pas contenir deux '_' successives, ligne %d\n", nb_lignes);
        }else{
            printf("L'entité 'identificateur' est détectée\n");
        }
    }else{
        printf("/!\\ Erreur lexical 'identificateur_trop_long', 'identificateur' ne doit pas dépasser 12 charactères, ligne %d\n", nb_lignes);
    }
}

":=" {printf("Affectation détectée\n");}
"=" {printf("Comparaison 'est égale à' détectée\n");}
"!=" {printf("Comparaison 'n'est pas égale à' détectée\n");}
"<" {printf("Comparaison 'moins que' détectée\n");}
"<=" {printf("Comparaison 'moins que ou égale' détectée\n");}
">" {printf("Comparaison 'plus que' détectée\n");}
">=" {printf("Comparaison 'plus que ou égale' détectée\n");}
"+" {printf("Addition détectée\n");}
"-" {printf("Soustraction détectée\n");}
"/" {printf("Division détectée\n");}
"*" {printf("Multiplication détectée\n");}
";" {printf("Fin instruction détectée\n");}
"{" {printf("Début bloc instruction détectée\n");}
"}" {printf("Fin bloc instruction détectée\n");}
"[" {printf("Ouverture crochet détectée\n");}
"]" {printf("Fermuture crochet détectée\n");}
"(" {printf("Ouverture parenthèse détectée\n");}
")" {printf("Fermuture parenthèse détectée\n");}
"," {printf("Virgule détectée\n");}

" "
[\t]
\n {nb_lignes++;}

. {printf("/!\\ Erreur lexical '%s', ligne %d\n", yytext, nb_lignes);}
%%


int main(){
    yylex();
    return 0;
}