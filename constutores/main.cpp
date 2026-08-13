#include <iostream>
#include <string>
using namespace std;

class Pessoa {
   private:
      string nome;
      int idade;
      int *parentes;

   public:
      Pessoa()
      {
         this->nome = "default";
         this->idade = 0;
         this->parentes = new int[100];
         cout << "Construtor vazio   - " << this->nome << endl;
      }

      Pessoa(const string &nome, const int &idade)
      {
         this->nome = nome;
         this->idade = idade;
         this->parentes = new int[100];
         cout << "Construtor - " << this->nome << endl;
      }

      // construtor de copia
      Pessoa(const Pessoa &p)
      {
         this->nome = "Copia de " + p.nome;
         this->idade = p.idade;
         this->parentes = p.parentes;
         cout << "Construtor de copia - " << this->nome << endl;
      }

      ~Pessoa()
      {
         cout << "Destrututor - " << nome << endl;
         delete[] parentes;
         parentes = NULL;
      }

      string getNome() { return nome; };
      void setNome(const string &nome) { this->nome = nome; };

      int getIdade() { return idade; };
      void setIdade(const int &idade) { this->idade = idade; };
};

int main()
{

   Pessoa p("Felipe", 21);
   Pessoa pessoas[3] = { {"Primeiro", 1}, {"Teste", 15}, {"Joao", 17} };
   Pessoa vazio;
   Pessoa copia(p);

}
