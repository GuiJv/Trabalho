#include <string>
#ifndef USER_H
#define USER_H

struct user
{
	std::string nome;
	double cpf;
	std::string sexo;
	std::string dataAniversario;
	std::string endereco;
	std::string timeFavorito;
	std::string selecaoFavorita;
	bool gostaFutebol;
	bool gostaVolei;
	bool gostaBasquete;
	bool gostaHandbol;
	bool gostaNatacao;
	bool gostaCiclismo;
	bool gostaAtletismo;
	bool gostaMusculacao;
};

#endif

#ifndef PRODUCT_H
#define PRODUCT_H

struct product
{
	std::string descricao;
	std::string modelo;
	std::string marca;
	std::string tamanho;
	std::string cor;
	std::string preco;
};

#endif

#ifndef PRODUCTITEM_H
#define PRODUCTITEM_H

struct productItem
{
	std::string produto;
	std::string dataCompra;
	std::string valorCompra;
	std::string situacao;
};

#endif

#ifndef SALE_H
#define SALE_H

struct sale
{
	std::string produto;
	std::string cliente;
	std::string valorVenda;
	std::string dataVenda;
	std::string dataRecebimento;
	std::string situacao;
};

#endif