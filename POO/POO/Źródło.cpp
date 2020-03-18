#include <iostream>
#include "samochod.h"

using namespace std;

int main() {
	Samochody s[50];

	for (int i = 0; i < 8; i++) {
		s[i].nr_samochodu = i;
		s[i].menu();
		s[i].wczytaj();
		s[i].wyswietlenie();
		s[i].wyswietlenie();
		s[i].wyjscie();
		s[i].usun();
		s[i].wprowadzanie();
	}

	return 0;
}