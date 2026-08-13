#include <string>

class linguagem{

   friend void classeAmiga(linguagem l);

private:
   std::string nome;

public:
   std::string getNome();
   void setNome(const std::string &nome);
};
