#ifndef ENDERECO_H
#define ENDERECO_H
#include <cstdio>
#include <iostream>
using namespace std;

class Endereco
{
public:
    string rua,
           bairro,
           cidade,
           estado,
           CEP;
    int numero;

    void SetFromKeyboard()
    {
        cout<<"Nome da Rua: ";
        getline(cin, rua);fflush(stdin);
        cout<<"Numero: ";
        cin>>numero;fflush(stdin);
        cout<<"Nome do Bairro: ";
        getline(cin, bairro);fflush(stdin);
        cout<<"Nome do Cidade: ";
        getline(cin,cidade);fflush(stdin);
        cout<<"Nome do Estado: ";
        getline(cin, estado);fflush(stdin);
        cout<<"CEP: ";
        cin>>CEP;fflush(stdin);
    }
    void Print()
    {
        cout<<"Rua: "<<rua<<endl;
        cout<<"Numero: "<<numero<<endl;
        cout<<"Bairro: "<<bairro<<endl;
        cout<<"Cidade: "<<cidade<<" - "<<estado<<endl;
        cout<<"CEP: "<<CEP<<endl;
    }
};

#endif // ENDERECO_H
