#include "ccw52.h"

woda::woda(){ cout << "Konstruktor wodnych stfor�w" << endl; }
woda::~woda(){ cout << "Destruktor wodnych stfor�w" << endl; }
void woda::wypisz(){ cout << "bub bulb" << endl; }
void woda::sound(){ cout << "kap kap" << endl; }

fish::fish(){ cout << "Konstruktor ryb" << endl; }
fish::~fish(){ cout << "Destruktor tyb" << endl; }
void fish::wypisz(){ cout << "ryba p�ywa" << endl; }
void fish::sound(){ cout << "***** dzieci i ryby g�osu nie maj� ****" << endl; }

frog::frog(){ cout << "Konstruktor �ab" << endl; }
frog::~frog(){ cout << "Destruktor �ab" << endl; }
void frog::wypisz(){ cout << "�aba skacze" << endl; }
void frog::sound(){ cout << "kum kum "<< endl; }