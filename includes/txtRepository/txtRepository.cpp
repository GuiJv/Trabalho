#include <iostream>
#include <iostream>
#include <locale.h>
#include <vector>
#include <fstream>
#include "../dataStructure/dataStructure.cpp"
#include "../dataStructure/dataStructure.h"
#include <string>

using namespace std;

vector<string> readFile(string path){
	ifstream dataFile;
	vector<string> dataVectorTXT;
	string line;
	dataFile.open(path.c_str());
	while(getline(dataFile, line)){
		dataVectorTXT.push_back(line);
	}
	return dataVectorTXT;
}


vector<sale> salesStructure(){
	vector<string> dataVectorTXT;
	vector<sale> dataVector;
	sale Venda;
	int i;
	dataVectorTXT = readFile("data/saleData.txt");
	for(i=0;i< (dataVectorTXT.size()); i = i + 6){
		Venda.produto = dataVectorTXT[i];
		Venda.cliente = dataVectorTXT[i+1];
		Venda.valorVenda = dataVectorTXT[i+2];
		Venda.dataVenda = dataVectorTXT[i+3];
		Venda.dataRecebimento = dataVectorTXT[i+4];
		Venda.situacao = dataVectorTXT[i+5];
		dataVector.push_back(Venda);
	}
	return dataVector;
}


vector<product> productStructure(){
	vector<string> dataVectorTXT;
	vector<product> dataVector;
	product Produto;
	int i;
	dataVectorTXT = readFile("data/productData.txt");
	for(i = 0; i < (dataVectorTXT.size()); i = i +6){
		Produto.descricao = dataVectorTXT[i];
		Produto.modelo = dataVectorTXT[i+1];
		Produto.marca = dataVectorTXT[i+2];
		Produto.tamanho = dataVectorTXT[i+3];
		Produto.cor = dataVectorTXT[i+4];
		Produto.preco = dataVectorTXT[i+5];
		dataVector.push_back(Produto);
	}
	return dataVector;
	
	
}


void userRegisterText(){
	ofstream dataFile;
	string var;
	dataFile.open("data/userData.txt", std::ios_base::app);
	if(dataFile.is_open()){
		cout << "Success \n";
		cout << "Qual o nome da pessoa: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o cpf da pessoa: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o sexo da pessoa: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a data de nascimento da pessoa: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o time favorito da pessoa: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a seleï¿½ï¿½o favorita da pessoa: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Futebol:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Volei:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Basquete :(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Handbol:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Nataï¿½ï¿½o:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Ciclismo:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Atletismo:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Gosta de Musculaï¿½ï¿½o:(S/N) ";
		cin >> var;
		dataFile<< var << "\n";
		dataFile.close();
	}else{
		cout << "ERROR";
	}
	}
	
void productRegisterText(){
	ofstream dataFile;
	string var;
	dataFile.open("data/productData.txt", std::ios_base::app);
	if(dataFile.is_open()){
		cout << "Qual a descriï¿½ï¿½o do produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o modelo do produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a marca do produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o tamanho do produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a cor do produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o preï¿½o do produto: ";
		cin >> var;
		dataFile<< var << "\n";
		dataFile.close();
	}else{
		cout << "ERROR";
	}}
	
void productItemResgisterText(){
	ofstream dataFile;
	string var;
	dataFile.open("data/productItemData.txt", std::ios_base::app);
	if(dataFile.is_open()){
		cout << "Qual o produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a data da compra: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o valor da compra: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a situação: ";
		cin >> var;
		dataFile<< var << "\n";
		dataFile.close();
	}else{
		cout << "ERROR";
	}}

void salesRegisterText(){
	ofstream dataFile;
	string var;
	dataFile.open("data/saleData.txt", std::ios_base::app);
	if(dataFile.is_open()){
		cout << "Qual o produto: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Para qual Cliente: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual o valor da Venda: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a data da Venda: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a data de Recebimento: ";
		cin >> var;
		dataFile<< var << "\n";
		cout << "Qual a situação: ";
		cin >> var;
		dataFile<< var << "\n";
		dataFile.close();
	}else{
		cout << "ERROR";
	}}