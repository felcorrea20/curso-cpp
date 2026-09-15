#include <iostream>
#include <string.h>
#include "pilha.hpp"

using namespace std;

int main()
{
   Pilha<string> pilha1(4);
   pilha1.empilhar("Teste");
   pilha1.empilhar("Opa");
   pilha1.empilhar("Felipe");
   pilha1.mostraElementoTopo();
   cout << "Qtd.: " << pilha1.getQuantidadeElementos() << endl;

   Pilha<double> pilha2(3);
   pilha2.empilhar(2.3);
   pilha2.empilhar(4.76);
   pilha2.empilhar(5.5);
   pilha2.mostraElementoTopo();
   cout << "Qtd.: " << pilha2.getQuantidadeElementos() << endl;

   return 0;
}
