#include <iostream>
#include <string>
using namespace std;
int main()
{
	double a, b;
	int c;
	cout << "ingresa el primer valor: ";
	cin >> a;
	cout << "ingresa el segundo valor: ";
	cin >> b;
	cout << "que operacion desea realizar, 1(suma) 2(resta) 3(multiplicacion) 4(division) ";
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "el resultado es: " << a + b << endl;
		break;
	case 2:
		cout << "el resultado es: " << a - b << endl;
		break;
	case 3:
		cout << "el resultado es: " << a * b << endl;
			break;
	case 4:
		cout << "el resultado es: " << a / b << endl;
		break;
	default:
		cout << "opcion no reconocida" << endl;
		break;
	}
	return 0;
}