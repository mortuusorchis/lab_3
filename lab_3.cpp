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
		cout << "I feel like I know her, but sometimes, my arms bend back.";
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
	/*{
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
		}*/

	// zadanie 9
	/*{
		int a;
		cout << "Podaj temperature w stopniach celsjusza: \n";
		cin >> a;

		if (a <= 0) {
			cout << "Mroz \n";
		}
		else if (a >= 0 && a < 10) {
			cout << "Zimno \n";
		}
		else if (a >= 10 && a < 20) {
			cout << "Umiarkowanie \n";
		}
		else if (a >= 20 && a < 30) {
			cout << "Cieplo \n";
		}
		else {
			cout << "Upal \n";
		}
		return 0;
	}*/

	// zadanie 10
	/*{
		int a, b, c;
		cout << "Podaj wartosc calkowita a: ";
		cin >> a;
		cout << "Podaj wartosc calkowita b: ";
		cin >> b;
		cout << "Podaj wartosc calkowita c: ";
		cin >> c;

		if (a == b && b == c) {
			cout << "Wszystkie podane liczby sa rowne: " << a << " = " << b << " = " << c << endl;
		}
		else if ((a == b && a > c) || (a == c && a > b)) {
			cout << "Najwieksza wartosc przyjmuja dwie liczby i jest nia: " << a << endl;
		}
		else if (b == c && b > a) {
			cout << "Najwieksza wartosc przyjmuja dwie liczby i jest nia: " << b << endl;
		}
		else if (a > b && a > c) {
			cout << "Najwieksza wartosc to: " << a << endl;
		}
		else if (b > a && b > c) {
			cout << "Najwieksza wartosc to: " << b << endl;
		}
		else {
			cout << "Najwieksza wartosc to: " << c << endl;
		}
		return 0;
	}*/

	// zadanie 11
	/*{
		int a;
		cout << "Podaj rok: ";
		cin >> a;

		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
			cout << "Podany rok jest przestepny. ";

		}
		else {
			cout << "Podany rok nie jest przestepny. ";
		}

		return 0;
	} // dlaczego mam błąd kompilacji, jeżeli program działa poprawnie? */

	// zadanie 12

	/*{
	int opcja;
		cout << "Wybierz opcje z menu: \n";
		cout << "1 - Start \n2 - Ustawienia \n3 - Pomoc \n4 - Koniec\n ";
		cout << "Podaj numer opcji: ";
		cin >> opcja;
	switch (opcja) {
	case 1:
		cout << "Start \n";
		break;
	case 2:
		cout << "Ustawienia \n";
		break;
	case 3:
		cout << "Pomoc \n";
		break;
	case 4:
		cout << "Koniec \n";
		break;
	default:
		cout << "Nieprawidlowy wybor! Wybierz liczbe od 1 do 4. \n";
	}
	return 0;
	}*/

	// zadanie 13
	/*{
		int opcja;
		cout << "Podaj jaka otrzymales ocene: \n";
		cin >> opcja;
		switch (opcja) {
		case 1:
			cout << "niedostateczny\n";
			break;
		case 2:
			cout << "dopuszczajacy\n";
			break;
		case 3:
			cout << "Dostateczny \n";
			break;
		case 4:
			cout << "Dobry \n";
			break;
		case 5:
			cout << "Bardzo dobry \n";
			break;
		default:
			cout << "Nieprawidlowy wybor! Wybierz liczbe od 1 do 5. \n";
		}
		return 0;
	}*/

	// zadanie 14
	/*{
		int i, suma=0;

		for ( i = 1; i <= 100; i++) {
			if (i % 3 == 0) {
				continue;
			}
		suma = suma + i;
		}
		cout << "Suma liczb od 1 do 100 niepodzielnych przez 3 wynosi: " << suma << endl;
		return 0;
  }*/

  // zadanie 15
  /*{
	  int i;
	  for (int i = 1; ; i++) {
		  if (i > 50 && i % 7 == 0){
			  cout << "Pierwsza liczba wieksza od 50 i podzielna przez 7 to: " << i << endl;
			  break;
		  }
	  }
	  return 0;
}*/
// lub z while
/*  {
	  int i = 1;
	  while (true) {
		  if (i > 50 && i % 7 == 0) {
			  cout << "Pierwsza liczba wieksza od 50 i podzielna przez 7 to: " << i << endl;
			  break;
		  }
		  i++;
	  }
	 return 0;
  } */

  // zadanie 16 --> tabliczka mnożenia
  {
	 
	  for (int a = 1; a <= 10 ;a++) {
		  for (int b = 1; b <= 10; b++) {
			 int iloczyn = a * b;
			 cout << a << " * " << b << " = " << iloczyn << "\t"  << endl;
		  }
		  continue;
	  }
	  return 0;
}
  // zadanie 17