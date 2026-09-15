#ifndef PILHA_HPP
#define PILHA_HPP

using namespace std;

class Pilha {
private:
    int *vet;
    int max_tam;
    int topo;

public:
    Pilha();
    ~Pilha();

    void empilhar(int e);
    void desempilhar();
    int isVazio();
    void mostraElementoTopo();
    int getQuantidadeElementos();
};

#endif // PILHA_HPP
