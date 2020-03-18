#include <iostream>
#include "samochod.h"

using namespace std;

int main() {
	Samochody s[50];

	for (int i = 0; i < 4; i++) {
		s[i].nr_samochodu = i;
		s[i].wczytaj();
		s[i].wyswietlenie();
		s[i].menu();
	}

	return 0;
}