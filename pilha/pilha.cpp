#include <iostream>

using namespace std;

class Pilha {
private:
    int *vet;
    int max_tam;
    int topo;

public:
    Pilha() 
    {
        vet = new int[100];
        max_tam = 99;
        topo = -1;
    }

    ~Pilha()
    {
        delete[] vet;
    }

    void empilhar(int e) 
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

    int isVazio()
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

int main()
{
    Pilha p;

    for (int i = 0; i < 20; i++) {
        p.empilhar(i);

        if (i % 2 != 0)
            p.desempilhar();
    }

    p.mostraElementoTopo();
    cout << "Qtd.: " << p.getQuantidadeElementos() << endl;

    return 0;
}