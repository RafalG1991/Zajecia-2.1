#include <iostream>
#include "klasa.h"

using namespace std;

int main()
{
    cout << "Adres w pamieci dla funkcji zaprzyjaznionej: " << &wyswietl << endl;
    // adres w pamieci funkcji zaprzyjaznionej, istnieje bez obiektu

    cout << "Utworzenie oryginalnego obiektu" << endl;
    Klasa klasa;

    // funkcja zaprzyjaźniona nie jest metodą klasy
    //klasa.wyswietl()
    // - element klasa nie ma składowej 'wyświetl'
    

    cout << "Kopiowanie oryginalnego obiektu #1" << endl;
    Klasa klasa2(klasa);

    cout << "Kopiowanie oryginalnego obiektu #2" << endl;
    Klasa klasa3 = klasa;

    cout << "Utworzenie obiektu nr 4" << endl;
    Klasa klasa4;
    cout << "Kopiowanie do obiektu nr 4" << endl;
    klasa4 = klasa;

    cout << "Utworzenie obiektu nr 5" << endl;
    Klasa* klasa5 = new Klasa;
    cout << "Kopiowanie do obiektu nr 5" << endl;
    klasa5 = &klasa;

    cout << &klasa<<endl;
    cout << &klasa2<<endl;
    cout << &klasa3<<endl;
    cout << &klasa4<<endl;
    cout << &klasa5<<endl;

    //problem z domyślnym konstruktorem kopiującym gdy klasa zawiera pole będące wskaźnikiem
    Klasa klasa6(7);
    Klasa klasa7(klasa6);
    cout << "Wartosc pod *wsk w obiekcie klasa6: " << *(klasa6.wsk) << endl;
    cout << "Wartosc pod *wsk w obiekcie klasa7: " << *(klasa7.wsk) << endl;
    *(klasa7.wsk) = 99;
    cout << "Wartosc pod *wsk w obiekcie klasa6: " << *(klasa6.wsk) << endl;
    cout << "Wartosc pod *wsk w obiekcie klasa7: " << *(klasa7.wsk) << endl;
    //została skopiowana wartosc wskaznika - oba wskazniki wskazuja w to samo miejsce w pamieci - zmiana w jednym obiekcie powoduje zmiane w drugim
    
    return 0;
}

/*
1. NIE - funkcja zaprzyjaźniona nie jest metodą klasy, nie ma określonego wskaźnika this, ma jedynie dostęp do składowych niepublicznych klasy
2. NIE - gdy go nie utworzymy, konstruktor kopiujący jest generowany niejawnie i domyślnie powoduje kopiowanie wszystich składowych obiektu po kolei, może spowodować działania niepożądane - patrz wyżej
3. NIE - dla tworzonego obiektu, będącego kopią innego obiektu, nie jest uruchamiany konstruktor
*/