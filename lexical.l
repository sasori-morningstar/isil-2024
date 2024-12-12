%{
    #include <stdio.h>
    #include <string.h>
    #include "syntaxique.tab.h"
    #include "ts.h"
    int nb_lignes=1;
    int col=1;
    extern YYSTYPE yylval;

%}

lettre [a-zA-Z]
chiffre [0-9]
taille [+]?([1-9]{chiffre}*)
integer [+-]?([1-9]{chiffre}*|0)
float [+-]?({chiffre}+.{chiffre}+)
signe_formatage \"%d\"|\"%f\"|\"%s\"
String \"[^\n\"]*\"
commentaire ##(.|\n)*##
identificateur {lettre}({lettre}|{chiffre}|_({lettre}|{chiffre}))*


%%
"program" {
    col+=yyleng;
    return mc_program;
}
"Const" {
    col+=yyleng;
    return mc_Const;
}
"For" {
    col+=yyleng;
    return mc_For;
}
"Begin" {
    col+=yyleng;
    return mc_begin;
}
"End" {
    col+=yyleng;
    return mc_end;
}
"In" {
    col+=yyleng;
    return mc_In;
}
"Out" {
    col+=yyleng;
    return mc_Out;
}
"integer" {
    col+=yyleng;
    yylval.str=strdup(yytext);
    return mc_integer;
}
"float" {
    col+=yyleng;
    yylval.str=strdup(yytext);
    return mc_float;
}
"String" {
    col+=yyleng;
    yylval.str=strdup(yytext);
    return mc_String;
}


{taille} {
    col+=yyleng;
    yylval.entier=atoi(yytext);
    return taille;    
}
{integer} {
    col+=yyleng;
    yylval.entier=atoi(yytext);
    return integer;
}
{float} {
    col+=yyleng;
    yylval.numvrg=atof(yytext);
    return FLOAT_TOK;
}
{signe_formatage} {
    col+=yyleng;
    yylval.str=strdup(yytext);
    return signe_formatage;
}
{String} {
    col+=yyleng;
    yylval.str=strdup(yytext);
    return String;
}
{commentaire} {
    col+=yyleng;
    return commentaire;
}
{identificateur} {
    if(yyleng<=12){
        col+=yyleng;
        yylval.str=strdup(yytext);
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
    return aff;
}
"=" {
    col+=yyleng;
    return equals;
}
"!=" {
    col+=yyleng;
    return doesnt_equal;
}
"<" {
    col+=yyleng;
    return less;
}
"<=" {
    col+=yyleng;
    return less_or_equals;
}
">" {
    col+=yyleng;
    return greater;
}
">=" {
    col+=yyleng;
    return greater_or_equals;
}
"+" {
    col+=yyleng;
    return add;
}
"-" {
    col+=yyleng;
    return substract;
}
"/" {
    col+=yyleng;
    return divide;
}
"*" {
    col+=yyleng;
    return multiply;}
";" {
    col+=yyleng;
    return pvg;
}
"{" {
    col+=yyleng;
    return open_bracket;
}
"}" {
    col+=yyleng;
    return close_bracket;
}
"[" {
    col+=yyleng;
    return open_bracket_square;    
}
"]" {
    col+=yyleng;
    return close_bracket_square;
}
"(" {
    col+=yyleng;
    return open_parenthesis;
}
")" {
    col+=yyleng;
    return close_parenthesis;
}
"," {
    col+=yyleng;
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

