#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int num1, num2;
	char operacao;

	std::cout << "Digite um N�mero: ";
	std::cin >> num1;
	std::cout << "\nDigite Outro N�mero: ";
	std::cin >> num2;
	std::cout << "\nQual tipo de Opera��o deseja: \n+ Adi��o \n- Subtra��o \n* Multiplica��o \n/ Divis�o ";
	std::cin >> operacao;

	switch (operacao)
	{
	case '+': 
		std::cout << "\na Soma do primeiro n�mero com o segundo n�mero � = " << num1 + num2;
		break;
	case '-':
		std::cout << "\na Subtra��o do primeiro n�mero com o segundo n�mero � = " << num1 - num2;
		break;
	case '*':
		std::cout << "\na Multiplica��o do primeiro n�mero com o segundo n�mero � = " << num1 * num2;
		break;
	case '/':
		std::cout << "\na Divis�o do primeiro n�mero com o segundo n�mero � = " << num1 / num2;
		break;
	default:
		std::cout << "\nVoc� digitou um caracter inv�lido!";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}