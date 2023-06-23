#include <iostream>
#include <locale.h>
#include <vector>

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
	string tamanho;
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

product productRegister(){
	product Produto;
	cout << "Qual a descrição do produto: ";
	cin >> Produto.descricao;
	cout << "Qual o modelo do produto: ";
	cin >> Produto.modelo;
	cout << "Qual a marca do produto: ";
	cin >> Produto.marca;
	cout << "Qual o tamanho do produto: ";
	cin >> Produto.tamanho;
	cout << "Qual a cor do produto: ";
	cin >> Produto.cor;
	cout << "Qual o preço do produto: ";
	cin >> Produto.preco;
	return Produto;
}

int productItemRegister(){
	cout << "Funcionou";
	return 0;
}

int sellsRegister(){
	cout << "Funcionou";
	return 0;
}

void productsList(vector<product> productsVector){
	cout << productsVector[0].marca;
}

int sellsList(){
	cout << "Funcionou";
	return 0;
}

int main(){
	int i;
	vector<product> productsVector;
	setlocale(LC_ALL,"Portuguese");
	cout << "Menu de opções" << endl;
	cout << "1 - Cadastro de Pessoas \n";
	cout << "2 - Cadastro de Produtos \n";
	cout << "3 - Cadastro de Itens de Produtos \n";
	cout << "4 - Cadastro de Venda \n";
	cout << "5 - Listagem de produtos \n";
	cout << "6 - Listagem das 10 últimas Vendas \n";
	cout << "7 - Sair";
	while (true){
		cout << "\nQual função você deseja acessar? ";
		cin >> i;
		switch(i)
		{
		case 1:
			userRegister();
			break;
		case 2:
			productsVector.push_back(productRegister());
			break;
		case 3:
			productItemRegister();
			break;
		case 4:
			sellsRegister();
			break;
		case 5:
			productsList(productsVector);
			break;
		case 6:
			sellsRegister();
			break;
		case 7:
			return 0;
		default:
			cout << "Opção Inválida";
			break;
		}
		;}
		return 0;
}