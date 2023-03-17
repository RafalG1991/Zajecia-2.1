#include "klasa.h"

Klasa::Klasa() {
	cout << "Konstruktor"<<endl;
}

Klasa::Klasa(int liczba) {
	this->wsk = new int(liczba);
}

void wyswietl() {
	cout << "Funkcja zaprzyjazniona" << endl;
}