#include <iostream>
#include "pilha.hpp"

using namespace std;

Pilha::Pilha() 
{
    vet = new int[100];
    max_tam = 99;
    topo = -1;
}

Pilha::~Pilha()
{
    delete[] vet;
}

void Pilha::empilhar(int e) 
{
    if (topo == max_tam)
        cout << "Pilha cheia" << endl;
    else
        vet[++topo] = e;
}

void Pilha::desempilhar()
{
    if (isVazio())
        cout << "Pilha vazia" << endl;
    else 
        vet[topo--] = NULL;
}

int Pilha::isVazio()
{
    return (topo == -1);
}

void Pilha::mostraElementoTopo()
{
    if (isVazio()) 
        cout << "Pilha vazia" << endl;
    else
        cout << "Elemento topo: " << this->vet[this->topo] << endl;
}

int Pilha::getQuantidadeElementos()
{
    return (topo + 1);
}
