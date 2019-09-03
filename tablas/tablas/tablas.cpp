#include <iostream>
#include <string>
using namespace std;

int main()
{
	int resultado, num, multiplicacion;
	int i;
	cout << "tablas de multiplicar" << endl ;
	cout << "ingresa la tabla de multiplicar que quiere: ";
	cin >> num;
	cout << "asta que numero quiere que se multiplique:";
	cin >> multiplicacion;
	for ( i = 0; i < multiplicacion; i++)
	{
		resultado = num * (i + 1);
		cout << num << " * " << i + 1 << " = " << resultado << endl;
	}
	return 0;
}