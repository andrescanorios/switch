#include <iostream>
#include <string>
using namespace std;
int main()
{
	int opcion=0;
	do
	{
		cout << "digite 1 para mostrar un mensaje"<<endl;
		cout << "digite 2 para mostrar algo mas"<<endl;
		cout << "digite 0 para salir" << endl;
		cin >> opcion;
	} while (opcion!=0);
	return 0;
}