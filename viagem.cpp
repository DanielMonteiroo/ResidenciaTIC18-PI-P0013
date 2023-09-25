#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Passageiro
{
    string cpf[5] = {"012.345.678-90","123.456.789.00","345.678.910-11","456.789.101-12","567.891.011-13"};
    string nome[5]= {"Daniel Mota","Rafaela Santos","Felipe Massa","Maria Joaquina","Jose Silva"};
    int idade[5] = {'47','56','24','29','33'};
 }passageiro;

struct Data
{
    int dia,mes,ano;
}data;


struct Poltrona
{
    int assento;
    string horario[5] = {"09h:00min","10h:30min","12h:00min","13h:30min","15h:00min"};
    int valor = 80;
}poltrona;


int main()
{
     int i =0;
     cout<<"Valor total arrecadado: "<<poltrona.valor[i];

    return 0;
}

