#include <iostream>

using namespace std;

class Samochody {
public:
	string marka;
	string model;
	string rocznik;
	string pojemnosc;
	string przebieg;
	string skrz_bieg;
	int nr_samochodu; // zmienna pomocnicza potrzebna do wyswietlenia pliku w konsoli

	void wczytaj();                     // wczytywanie z pliku
	void zapis();                       // zapisywanie do pliku
	void wprowadzanie();                // pozwala wprowadzic nowy samochod do katalogu
	void wyswietlenie(); /* wyswietla liste samochodow */
	void menu();	                 //menu
	void wyjscie();                  //wychodzi z programu
	void usun();                    //usuwa auta
};