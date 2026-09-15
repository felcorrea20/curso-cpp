#ifndef PILHA_HPP
#define PILHA_HPP

#include <iostream>

using namespace std;

template <class Type>
class Pilha {
private:
    Type *vet;
    int max_tam;
    int topo;

public:
    Pilha(const int &tam) 
    {
        vet = new Type[tam];
        max_tam = tam - 1;
        topo = -1;
    }

    ~Pilha()
    {
        delete[] vet;
    }

    void empilhar(Type e) 
    {
        if (topo == max_tam)
            cout << "Pilha cheia" << endl;
        else
            vet[++topo] = e;
    }

    void desempilhar()
    {
        if (isVazio())
            cout << "Pilha vazia" << endl;
        else 
            vet[topo--] = NULL;
    }

    bool isVazio()
    {
        return (topo == -1);
    }

    void mostraElementoTopo()
    {
        if (isVazio()) 
            cout << "Pilha vazia" << endl;
        else
            cout << "Elemento topo: " << this->vet[this->topo] << endl;
    }

    int getQuantidadeElementos()
    {
        return (topo + 1);
    }

};

#endif // PILHA_HPP
