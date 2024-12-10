%{
    #include <stdio.h>
    #include <string.h>
    #include "syntaxique.tab.h"
    int nb_lignes=1;
    int col=1;
%}

taille [+]?([1-9][0-9]*)
integer [+-]?([1-9][0-9]*|0)
float [+-]?([0-9]+.[0-9]+)
String \"[^\n\"]*\"
commentaire ##(.|\n)*##
identificateur [a-zA-Z]([a-zA-Z0-9]|_[a-zA-Z0-9])*


%%
"program" {
    col+=yyleng;
    printf("Début de programme détectée\n");
    return mc_program;
}
"Const" {
    col+=yyleng;
    printf("Déclaration Const détectée\n");
    return mc_Const;
}
"For" {
    col+=yyleng;
    printf("Déclaration Boucle détectée\n");
    return mc_For;
}
"Begin" {
    col+=yyleng;
    printf("Début boucle détectée\n");
    return mc_begin;
}
"End" {
    col+=yyleng;
    printf("Fin boucle détectée\n");
    return mc_end;
}
"In" {
    col+=yyleng;
    printf("Fonction de lecture détectée\n");
    return mc_In;
}
"Out" {
    col+=yyleng;
    printf("Fonction d'écriture détectée\n");
    return mc_Out;
}
"integer" {
    col+=yyleng;
    printf("Type de donnée 'integer' détecté\n");
    return mc_integer;
}
"float" {
    col+=yyleng;
    printf("Type de donnée 'float' détecté\n");
    return mc_float;
}
"String" {
    col+=yyleng;
    printf("Type de donnée 'String' détecté\n");
    return mc_String;
}


{taille} {
    col+=yyleng;
    printf("L'entité 'taille' est détectée\n");
    return taille;    
}
{integer} {
    col+=yyleng;
    printf("L'entité 'integer' est détectée\n");
    return integer;
}
{float} {
    col+=yyleng;
    printf("L'entité 'float' est détectée\n");
    return FLOAT_TOK;
}
{String} {
    col+=yyleng;
    printf("L'entité 'String' est détectée\n");
    return String;
}
{commentaire} {
    col+=yyleng;
    printf("Un commentaire a été détectée\n");
    return commentaire;
}
{identificateur} {
    if(yyleng<=12){
        col+=yyleng;
        printf("L'entité 'identificateur' est détectée\n");
        return identificateur;
    }else{
        printf("/!\\ Erreur lexical 'identificateur_trop_long', 'identificateur' ne doit pas dépasser 12 charactères, ligne %d\n", nb_lignes);
    }
}
\"[^\n\"]* { 
    printf("/!\\ Erreur lexical: String non terminé, ligne %d\n", nb_lignes); 
}


":=" {
    col+=yyleng;
    printf("Affectation détectée\n");
    return aff;
}
"=" {
    col+=yyleng;
    printf("Comparaison 'est égale à' détectée\n");
    return equals;
}
"!=" {
    col+=yyleng;
    printf("Comparaison 'n'est pas égale à' détectée\n");
    return doesnt_equal;
}
"<" {
    col+=yyleng;
    printf("Comparaison 'moins que' détectée\n");
    return less;
}
"<=" {
    col+=yyleng;
    printf("Comparaison 'moins que ou égale' détectée\n");
    return less_or_equals;
}
">" {
    col+=yyleng;
    printf("Comparaison 'plus que' détectée\n");
    return greater;
}
">=" {
    col+=yyleng;
    printf("Comparaison 'plus que ou égale' détectée\n");
    return greater_or_equals;
}
"+" {
    col+=yyleng;
    printf("Addition détectée\n");
    return add;
}
"-" {
    col+=yyleng;
    printf("Soustraction détectée\n");
    return substract;
}
"/" {
    col+=yyleng;
    printf("Division détectée\n");
    return devise;
}
"*" {
    col+=yyleng;
    printf("Multiplication détectée\n");
    return multiply;}
";" {
    col+=yyleng;
    printf("Fin instruction détectée\n");
    return pvg;
}
"{" {
    col+=yyleng;
    printf("Début bloc instruction détectée\n");
    return open_bracket;
}
"}" {
    col+=yyleng;
    printf("Fin bloc instruction détectée\n");
    return close_bracket;
}
"[" {
    col+=yyleng;
    printf("Ouverture crochet détectée\n");
    return open_bracket_square;    
}
"]" {
    col+=yyleng;
    printf("Fermuture crochet détectée\n");
    return close_bracket_square;
}
"(" {
    col+=yyleng;
    printf("Ouverture parenthèse détectée\n");
    return open_parenthesis;
}
")" {
    col+=yyleng;
    printf("Fermuture parenthèse détectée\n");
    return close_parenthesis;
}
"," {
    col+=yyleng;
    printf("Virgule détectée\n");
    return vrg;
}

" " {
    col+=1;
}
[\t] {
    col+=1;
}
\n {
    nb_lignes++;
    col=1;
}

. {
    printf("/!\\ Erreur lexical '%s', ligne %d, colonne %d\n", yytext, nb_lignes, col);
    return err;
}
%%

