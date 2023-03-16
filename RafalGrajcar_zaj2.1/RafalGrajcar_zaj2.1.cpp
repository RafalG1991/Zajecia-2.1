#include <iostream>
#include "klasa.h"

using namespace std;

int main()
{
    
    Klasa klasa;

    Klasa klasa2(klasa);

    Klasa klasa3 = klasa;

    Klasa klasa4;
    klasa4 = klasa;

    Klasa* klasa5 = new Klasa;

    cout << &klasa<<endl;
    cout << &klasa2<<endl;
    cout << &klasa3<<endl;
    cout << &klasa4<<endl;
    cout << &klasa5<<endl;

    return 0;
}