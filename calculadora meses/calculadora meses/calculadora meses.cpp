#include <iostream>
#include<string>
using namespace std;
int main()
{
	int i, nu1, nu2, mult;
	cout << "introduce el nuemro del que quieres la tabla: ";
	cin >> nu1;
	cout << "asta que numero lo quieres multiplicar: ";
	cin >> nu2;
	for ( nu2 = 1; nu1 <= 10; nu1++) { mult = nu1 * nu2; cout << nu1 << " x " << nu2 << "=" << mult << endl; } return 0;
	return 0;
}