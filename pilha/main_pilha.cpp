#include <iostream>
#include "pilha.hpp"

using namespace std;

int main()
{
   Pilha p;

   for (int i = 0; i < 40; i++) {
      p.empilhar(i);

      if (i % 2 != 0)
         p.desempilhar();
   }

   p.mostraElementoTopo();
   cout << "Qtd.: " << p.getQuantidadeElementos() << endl;

   return 0;
}
