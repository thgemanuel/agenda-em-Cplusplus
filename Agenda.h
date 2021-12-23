#ifndef AGENDA_H
#define AGENDA_H
#include "Pessoa.h"

#define TAM_MAX 100
class Agenda
{
private:
    Pessoa pessoas[TAM_MAX];
    int quant; /// posicao de insercao e quantidade atual
public:
    Agenda(){ quant = 0; }
    void Inserir(Pessoa p);
    void Remover(string nome);
    int Localizar(string nome);
    void Print();
};


#endif // AGENDA_H
