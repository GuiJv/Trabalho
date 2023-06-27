#include <iostream>
#include <locale.h>
#include <vector>
#include <fstream>
#include "includes/txtRepository/txtRepository.cpp"
#include "includes/dataStructure/dataStructure.h"

using namespace std;


bool checkSN(char op){
	if (toupper(op) == 'S'){
		return true;
	}
	else{
		return false;
		}}


user userRegister(){
	user Pessoa;
	char op;
	cout << "Qual o nome da pessoa: ";
	cin >> Pessoa.nome;
	cout << "Qual o cpf da pessoa: ";
	cin >> Pessoa.cpf;
	cout << "Qual o sexo da pessoa: ";
	cin >> Pessoa.sexo;
	cout << "Qual a data de nascimento da pessoa: ";
	cin >> Pessoa.dataAniversario;
	cout << "Qual o time favorito da pessoa: ";
	cin >> Pessoa.timeFavorito;
	cout << "Qual a sele��o favorita da pessoa: ";
	cin >> Pessoa.selecaoFavorita;
	cout << "Gosta de Futebol:(S/N) ";
	cin >> op;
	Pessoa.gostaFutebol = checkSN(op);
	cout << "Gosta de Volei:(S/N) ";
	cin >> op;
	Pessoa.gostaVolei = (checkSN(op));
	cout << "Gosta de Basquete :(S/N) ";
	cin >> op;
	Pessoa.gostaBasquete = (checkSN(op));
	cout << "Gosta de Handbol:(S/N) ";
	cin >> op;
	Pessoa.gostaHandbol = (checkSN(op));
	cout << "Gosta de Nata��o:(S/N) ";
	cin >> op;
	Pessoa.gostaNatacao = (checkSN(op));
	cout << "Gosta de Ciclismo:(S/N) ";
	cin >> op;
	Pessoa.gostaCiclismo = (checkSN(op));
	cout << "Gosta de Atletismo:(S/N) ";
	cin >> op;
	Pessoa.gostaAtletismo = (checkSN(op));
	cout << "Gosta de Muscula��o:(S/N) ";
	cin >> op;
	Pessoa.gostaMusculacao = (checkSN(op));
	
	return Pessoa;
}

product productRegister(){
	product Produto;
	cout << "Qual a descri��o do produto: ";
	cin >> Produto.descricao;
	cout << "Qual o modelo do produto: ";
	cin >> Produto.modelo;
	cout << "Qual a marca do produto: ";
	cin >> Produto.marca;
	cout << "Qual o tamanho do produto: ";
	cin >> Produto.tamanho;
	cout << "Qual a cor do produto: ";
	cin >> Produto.cor;
	cout << "Qual o pre�o do produto: ";
	cin >> Produto.preco;
	return Produto;
}

productItem productItemRegister(){
	productItem Item;
	cout << "Qual o produto: ";
	cin >> Item.produto;
	cout << "Qual a data da compra: ";
	cin >> Item.dataCompra;
	cout << "Qual o valor da compra: ";
	cin >> Item.valorCompra;
	cout << "Qual a situa��o do produto: ";
	cin >> Item.situacao;
	return Item;
}

sale salesRegister(){
	sale Venda;
	cout << "Qual o produto: ";
	cin >> Venda.produto;
	cout << "Qual o cliente: ";
	cin >> Venda.cliente;
	cout << "Qual o valor da Venda: ";
	cin >> Venda.valorVenda;
	cout << "Qual a data da Venda: ";
	cin >> Venda.dataVenda;
	cout << "Qual a data de Recebimento: ";
	cin >> Venda.dataRecebimento;
	cout << "Qual a situa��o do produto: ";
	cin >> Venda.situacao;
	
	return Venda;
}

void productsList(vector<product> productsVector){
	for(int i = 0; i < productsVector.size(); i++){
		cout << "\n" << "Descri��o: " << productsVector[i].descricao << "\n";
		cout << "Modelo:    " << productsVector[i].modelo << "\n";
		cout << "Marca:     " << productsVector[i].marca << "\n";
		cout << "Tamanho:   " << productsVector[i].tamanho << "\n";
		cout << "Cor:       " << productsVector[i].cor << "\n" ;
		cout << "Pre�o:     " << productsVector[i].preco << "\n";
	
	}
}

void sellsList(vector<sale> salesVector){
	for(int i = 10; i > 0; i--){
		cout << "\n" << "Produto:             " << salesVector[i].produto << "\n";
		cout << "Cliente:             " << salesVector[i].cliente << "\n";
		cout << "Valor da Venda:      " << salesVector[i].valorVenda << "\n";
		cout << "Data da Venda:       " << salesVector[i].dataVenda << "\n";
		cout << "Data de Recebimento: " << salesVector[i].dataRecebimento << "\n";
		cout << "Situa��o:            " << salesVector[i].situacao << "\n";
	}
	cout << "\n";
}

int main(){
	int i;
	vector<product> productsVector;
	vector<user> usersVector;
	vector<sale> salesVector;
	vector<productItem> productItensVector;
 	setlocale(LC_ALL,"Portuguese");
	cout << "Menu de op��es" << endl;
	cout << "1 - Cadastro de Pessoas \n";
	cout << "2 - Cadastro de Produtos \n";
	cout << "3 - Cadastro de Itens de Produtos \n";
	cout << "4 - Cadastro de Venda \n";
	cout << "5 - Listagem de produtos \n";
	cout << "6 - Listagem das 10 �ltimas Vendas \n";
	cout << "7 - Sair";
	while (true){
		cout << "\nQual fun��o voc� deseja acessar? ";
		cin >> i;
		switch(i)
		{
		case 1:
			userRegisterText();
			break;
		case 2:
			productRegisterText();
			break;
		case 3:
			productItemResgisterText();
			break;
		case 4:
			salesRegisterText();
			break;
		case 5:
			productsList(productStructure());
			break;
		case 6:
			sellsList(salesStructure());
			break;
		case 7:
			return 0;
		default:
			cout << "Op��o Inv�lida";
			break;
		}
		;}
		return 0;
}