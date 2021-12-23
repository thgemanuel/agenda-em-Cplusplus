#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"

class Pessoa
{
public:
    string nome, telefone;
    Endereco endereco;

    void SetFromKeyboard()
    {
        cout<<"Nome: ";
        getline(cin,nome);fflush(stdin);
        cout<<"Telefone: ";
        getline(cin,telefone);fflush(stdin);
        endereco.SetFromKeyboard();
    }
    void Print()
    {
        cout<<"Nome: "<<nome<<endl;
        cout<<"Tel.: "<<telefone<<endl;
        endereco.Print();
    }
};

#endif // PESSOA_H
