#include <iostream>
#include <string>
using namespace std;

class Pessoa {
   private:
      string nome;
      int idade;

   public:
      Pessoa(const string &nome, const int &idade);

      string getNome() { return nome; };
      void setNome(const string &nome) { this->nome = nome; };

      int getIdade() { return idade; };
      void setIdade(const int &idade) { this->idade = idade; };
};

int main()
{

   Pessoa p("Felipe", 21);

   cout << p.getNome() << " - " << p.getIdade() << endl;

}
