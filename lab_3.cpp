#include <iostream>
using namespace std;

int main()


/*  {
	int a, b;
	cout << "Podaj wartosc dla liczby calkowitej a: ";
	cin >> a;
	cout << "Podaj wartosc dla liczby calkowitej b: ";
	cin >> b;
	if (a == b) {
		cout << "wartosc " << a << "jest rowna wartosci " << b << endl;
	}
	else if (a < b) {
		cout << "wartosc " << b << "jest wieksza od wartosci " << a << endl;
	}
	else {
		cout << "wartosc " << a << "jest wieksza od wartosci " << b << endl;
	}
	return 0;
}
*/
// zadanie 2
/*
   {
	int a, b;
	cout << "Podaj wartosc dla liczby calkowitej a: ";
	cin >> a;
	cout << "Podaj wartosc dla liczby calkowitej b: ";
	cin >> b;
	if (a == b) {
		cout << "wartosc " << a << "jest rowna wartosci " << b << endl;
	}
	else {
		if (a < b) {
			cout << "wartosc " << b << "jest wieksza od wartosci " << a << endl;
		}

		else {
			cout << "wartosc " << a << "jest wieksza od wartosci " << b << endl;
		}
	}
	return 0;
} */

// zadanie 3
/* {
	float r;
	cout << "Podaj wartosc wspolczynnika r: ";
	cin >> r;

	if (r >= 0.7 && r <= 1) {
		cout << "bardzo silna  korelacja dodatnia.";
	}
	else if (r >= 0.2) {
		cout << "slaba korelacja dodatnia.";
	}
	else if (r >= 0.3) {
		cout << "umiarkowana korelacja dodatnia.";
	}
	else if (r >= 0.5) {
		cout << "silna korelacja dodatnia.";
	}
	else {
		cout << "Brak korelacji.";
	}
	return 0;
} */
// zadanie 4
{
	float a, b;
	char znak;
	cout << "Podaj wartosc a: ";
	cin >> a;
	cout << "Podaj wartosc b: ";
	cin >> b;
	cout << "Okresl jaka operacje chcesz wykonac, wybierz z podanych: (+, -, *, /): ";
	cin >> znak;
	
	if (a == 0 || b == 0 && znak == '/') {
		cout << "Nie mozna dzielnic przez zero."; 
			return 1;
	}

	switch (znak) {
	case '+':
		cout << "Wynik dodawania " << a << " do " << b << " wynosi: " << a + b;
		break;
	case '-':
		cout << "Wynik odejmowania " << a <<" od " << b << " wynosi: " << a - b;
		break;
	case '*':
		cout << "Wynik mnożenia " << a << "*" << b << " wynosi: " << a * b;
		break;
	case '/':
		cout << "Wynik dzielenia " << a << " przez " << b << " wynosi: " << a / b;
		break;

	}

}