#include <iostream>
#include <locale.h>

using namespace std;

struct person
{
	string nome;
	int cpf;
	string sexo;
	string dataAniversario;
	string endereco;
	string timeFavorito;
	string selecaoFavorita;
	bool gostaFutebol;
	bool gostaVolei;
	bool gostaBasquete;
	bool gostaHandbol;
	bool gostaNatacao;
	bool gostaCiclismo;
	bool gostaAtletismo;
	bool gostaMusculacao;
};

struct product
{
	string descricao;
	string modelo;
	string marca;
	string tamanha;
	string cor;
	float preco;
};

struct itenProduct
{
	string product;
	string dataCompra;
	float valorCompra;
	string situacao;
};

struct sell
{
	string product;
};


int userRegister(){
	cout << "Funcionou";
	return 0;
}

int productRegister(){
	cout << "Funcionou";
	return 0;
}

int productItemRegister(){
	cout << "Funcionou";
	return 0;
}

int sellsRegister(){
	cout << "Funcionou";
	return 0;
}

int productsList(){
	cout << "Funcionou";
	return 0;
}

int sellsList(){
	cout << "Funcionou";
	return 0;
}

int main(){
	int i;
	setlocale(LC_ALL,"Portuguese");
	cout << "Menu de op��es" << endl;
	cout << "1 - Cadastro de Pessoas \n";
	cout << "2 - Cadastro de Produtos \n";
	cout << "3 - Cadastro de Itens de Produtos \n";
	cout << "4 - Cadastro de Venda \n";
	cout << "5 - Listagem de produtos \n";
	cout << "6 - Listagem das 10 �ltimas Vendas \n";
	while (true){
		cout << "\nQual fun��o voc� deseja acessar? ";
		cin >> i;
		switch(i)
		{
		case 1:
			userRegister();
			break;
		case 2:
			productRegister();
			break;
		case 3:
			productItemRegister();
			break;
		case 4:
			sellsRegister();
			break;
		case 5:
			productsList();
			break;
		case 6:
			sellsRegister();
			break;
		default:
			cout << "Op��o Inv�lida";
			break;
		}
		;}
		return 0;
}