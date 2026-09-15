#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159;

class Forma
{
public:
    virtual double calculaArea()
    {
        return 0;
    }
};

class Retangulo : public Forma
{
public:
    double base, altura;

    Retangulo(const double &base, const double &altura)
    {
        this->base = base;
        this->altura = altura;
    }

    virtual double calculaArea()
    {
        return this->base * this->altura;
    }
};

class Circulo : public Forma
{
public:
    double raio;

    Circulo(const double &raio)
    {
        this->raio = raio;
    }

    virtual double calculaArea()
    {
        return PI * pow(this->raio, 2);
    }
};

void imprimirArea(Forma *f)
{
    cout << "Area: " << f->calculaArea() << endl;
}

int main() 
{
    Forma f;
    Retangulo r(2, 4);
    Circulo c(1);

    imprimirArea(&f);
    imprimirArea(&r);
    imprimirArea(&c);

    return 0;
}