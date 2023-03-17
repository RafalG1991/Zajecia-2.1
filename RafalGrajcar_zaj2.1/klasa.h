#pragma once
#include <iostream>

using namespace std;

class Klasa {
public:
	int* wsk;
	Klasa();
	Klasa(int liczba);
	friend void wyswietl();
};

void wyswietl();