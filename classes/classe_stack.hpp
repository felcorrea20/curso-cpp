#pragma once

#include <string>

namespace pilha {

class stack {
public:
	std::string ultimo_erro;

	stack();
	~stack();
	bool falhou();
	void adiciona(const std::string &erro);
	void reseta();
};

} /*pilha*/
