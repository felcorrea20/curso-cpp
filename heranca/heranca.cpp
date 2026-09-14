#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
protected:
    string nome;
    int patas; 

public:
    Animal(const string &nome, const int &patas)
    {
        this->nome = nome;
        this->patas = patas;
    }
    
    ~Animal()
    {   
    }
    
    const string getNome()
    {
        return this->nome;
    }

    const int getPatas()
    {
        return this->patas;
    }
};

class Cachorro : public Animal
{
protected:
    int idade;

public:
    Cachorro(const string &nome) : Animal(nome, 4)
    {
        this->idade = 0;
    }
    
    const int getIdade()
    {
        return this->idade; 
    }
    
    void setIdade(const int &idade)
    {
        this->idade = idade; 
    }
};

int main() 
{

    Cachorro thor("Thor"); 
    cout << "Idade: " << thor.getIdade() << endl;
    cout << "Nome: " << thor.getNome() << endl;
    cout << "Qtd. patas: " << thor.getPatas() << endl;

    return 0;
}