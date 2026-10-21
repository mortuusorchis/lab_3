#include <iostream>
#include <string>
#include <cmath>
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
/* {
	float a, b;
	char znak;
	cout << "Podaj wartosc a: ";
	cin >> a;
	cout << "Podaj wartosc b: ";
	cin >> b;
	cout << "Okresl jaka operacje chcesz wykonac, wybierz z podanych: (+, -, *, /): ";
	cin >> znak;
	
	if (b == 0 && znak == '/') {
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
	default:
		cout << "Nieznany znak operacji!" << endl;


	}

} */

// zadanie 5 
/*{
	for (int i = 0; ; i++) {
		cout << i;
	}
	return 0;
}
*/
/*{
	while (1) {
		cout << "I feel like I know her, but sometimes, my arms bend back";
		}
}*/

/*{
	bool zmienna_logiczna = true;

	if (zmienna_logiczna == true)
		cout << "PRAWDA" << endl;
	else
		cout << "FALSZ" << endl;
	return 0;
}*/

// zadanie 6

/*{
	string slowo;
	float a, b;
	char znak;

	while (true) {
		cout << "Podaj wartosc a: ";
		cin >> a;
		cout << "Podaj wartosc b: ";
		cin >> b;
		cout << "Okresl jaka operacje chcesz wykonac, wybierz z podanych: (+, -, *, /): ";
		cin >> znak;

		if (znak == '/' && b == 0) {
			cout << "Blad! Nie mozna dzielic przez zero." << endl;
			return 1;
		}

		switch (znak) {
		case '+':
			cout << "Wynik dodawania " << a << " do " << b << " wynosi: " << a + b << endl;
			break;
		case '-':
			cout << "Wynik odejmowania " << a << " od " << b << " wynosi: " << a - b << endl;
			break;
		case '*':
			cout << "Wynik mnozenia " << a << "*" << b << " wynosi: " << a * b << endl;
			break;
		case '/':
			cout << "Wynik dzielenia " << a << " przez " << b << " wynosi: " << a / b << endl;
			break;
		default:
			cout << "Nieznany znak operacji!" << endl;
			break;
		}

		cout << "\nCzy chcesz zakonczyc dzialanie programu? (TAK/NIE): ";
		cin >> slowo;

		if (slowo == "TAK" || slowo == "tak") {
			cout << "To juz koniec. " << endl;
			return 0;
		}
	} // ta klamra zamyka funkcje while
	return 0;
	}*/

// Zadanie 7.
/* { 
	int i; 
	for (i = 0; ; i = i + 1) { // Rozpoczęcie pętli od zera i zwiększanie i o jeden.

		if (i % 2 == 0) { // Sprawdzenie, czy liczba jest parzysta.

			if (i == 200) { // Sprawdzenie, czy osiągnięto liczbę 200.
				cout << " To juz koniec. " << endl; // Wyświetlenie komunikatu końcowego.
				return 0; // Zakończenie programu.
			} // Koniec sprawdzania liczby 200.
			
			continue; // Pominięcie liczby parzystej i przejście do kolejnego obrotu pętli.
		} // Koniec sprawdzania parzystości.

		cout << i << " "; // Wyświetlenie liczby nieparzystej.
	} 
	return 0; 
}  */

//zadanie 8 
{
	int n;
	cout << "Podaj wartosc naturalnej, dodaniej liczby n: ";
	cin >> n;

	bool znaleziono_dzielnik = false;  // Zmienna pomocnicza, która zapamięta, czy znaleźliśmy dzielnik
	
	for (int i = 2; i <= sqrt(n); i++) { // Pętla sprawdza potencjalne dzielniki od 2 do pierwiastka z n
		if (n % i == 0) {  // Jeśli n dzieli się przez i bez reszty
			cout << "Liczba " << n << " ma co najmniej jeden dzielnik w przedziale [2, sqrt(n)].\n";
			cout << "Pierwszym znalezionym dzielnikiem jest " << i;
			znaleziono_dzielnik = true;
			break;
		}
	}
			if (!znaleziono_dzielnik) {
				cout << "Liczba " << n << " nie posiada dzielnika w przedziale [2, sqrt(n)]." << endl;
			}

			return 0;
	}
	