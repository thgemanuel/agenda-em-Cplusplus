#include <iostream>

#include "Pessoa.h"
using namespace std;

int main()
{
    Pessoa p;
    p.SetFromKeyboard();
    p.Print();
    return 0;
}
