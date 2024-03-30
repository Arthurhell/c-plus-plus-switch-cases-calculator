#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int num1, num2;
	char operacao;

	std::cout << "Digite um Número: ";
	std::cin >> num1;
	std::cout << "\nDigite Outro Número: ";
	std::cin >> num2;
	std::cout << "\nQual tipo de Operação deseja: \n+ Adição \n- Subtração \n* Multiplicação \n/ Divisão ";
	std::cin >> operacao;

	switch (operacao)
	{
	case '+': 
		std::cout << "\na Soma do primeiro número com o segundo número é = " << num1 + num2;
		break;
	case '-':
		std::cout << "\na Subtração do primeiro número com o segundo número é = " << num1 - num2;
		break;
	case '*':
		std::cout << "\na Multiplicação do primeiro número com o segundo número é = " << num1 * num2;
		break;
	case '/':
		std::cout << "\na Divisão do primeiro número com o segundo número é = " << num1 / num2;
		break;
	default:
		std::cout << "\nVocê digitou um caracter inválido!";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}