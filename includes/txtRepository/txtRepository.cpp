#include <iostream>
#include <iostream>
#include <locale.h>
#include <vector>
#include <fstream>


using namespace std;

void userRegisterText(){
	ofstream dataFile;
	string var;
	dataFile.open("../../data/userData.txt", std::ios_base::app);
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
	dataFile.open("../../data/productData.txt", std::ios_base::app);
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
	dataFile.open("../../data/productItemData.txt", std::ios_base::app);
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
	dataFile.open("../../data/saleData.txt", std::ios_base::app);
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