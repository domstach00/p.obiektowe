#include <iostream>
#include <fstream> /*na plikach*/
#include <string> 
#include "samochod.h"

using namespace std;

void Samochody::menu() {
	using std::cout;
	using std::endl;
	cout << "[1] - Wyjdz z programu" << endl;
	cout << "[2] - Pokaz menu programu" << endl;       /* otwarcie pliku w trybie do wpisywanie */
	cout << "[3] - Cala lista samochodow" << endl;
	cout << "[4] - Dodaj nowy samochod" << endl;
	cout << "[5] - Usun samochodod" << endl;
	cout << "[6] - Zapisz liste" << endl;
}

void Samochody::wyswietlenie() {
	cout << endl << marka << endl;
	cout << model << endl;
	cout << rocznik << endl;
	cout << pojemnosc << endl;
	cout << przebieg << endl;
	cout << skrz_bieg << endl;
}

void Samochody::wyjscie()
{
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

void Samochody::wczytaj() {
	fstream plik;                  // fstream typ zmniennej/
	plik.open("samochody.txt", ios::in);

	if (plik.good() == false) {
		cout << "Niepoprawnie otwarty plik!" << endl;
		exit(0);
	}

	int nr_linii = (nr_samochodu) * 6 + 1;
	int aktualny_nr = 1;
	string linia;

	while (getline(plik, linia)) {
		if (aktualny_nr == nr_linii) marka = linia;
		if (aktualny_nr == nr_linii + 1) model = linia;
		if (aktualny_nr == nr_linii + 2) rocznik = linia;
		if (aktualny_nr == nr_linii + 3) pojemnosc = linia;
		if (aktualny_nr == nr_linii + 4) przebieg = linia;
		if (aktualny_nr == nr_linii + 5) skrz_bieg = linia;
		aktualny_nr++;
	}
	plik.close();
}

void Samochody::wprowadzanie() {
	fstream plik;
	plik.open("samochody.txt", ios::in);
	if (number < maks)
	{
		std::cout << "Wg: Marka Model Rocznik Moc Przebieg Skrzynia biegow" << endl;
		std::cout << "Podaj dane:";
		std::cin >> tab[number];
		number++;
	}
	else
		std::cerr << "Nie mozna dodac - pelna lista samochodow" << endl;
}

void Samochody::usun() {
}

void Samochody::zapis() {
	{
		fstream plik;                  // fstream typ zmniennej/
		plik.open("samochody.txt");

		if (plik.good() == false) {
			cout << "Zle otwarty plik" << endl;
			exit(0);
		else
		{
			plik << n;
			for (int i = 0; i < n; ++i)
			{
				plik << tab[i].get_marka() << " ";
				plik << tab[i].get_model() << " ";
				plik << tab[i].get_rocznik() << " ";
				plik << tab[i].get_pojemnosc() << " ";
				plik << tab[i].get_przebieg() << " ";
				plik << tab[i].get_skrz_bieg() << endl;
			}
		}

		}
		plik.close();
	}
