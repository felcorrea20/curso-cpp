#include "iostream"
#include "linguagem.hpp"

using namespace std;

void classeAmiga(linguagem l)
{
   std::cout << "Classe Amiga: " << l.nome << std::endl;
}

int main()
{
   linguagem l;
   l.setNome("C++");
   cout << l.getNome() << endl;
   classeAmiga(l);

   return 0;
}
