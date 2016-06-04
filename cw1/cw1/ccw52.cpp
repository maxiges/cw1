#include "ccw52.h"

woda::woda(){ cout << "Konstruktor wodnych stforów" << endl; }
woda::~woda(){ cout << "Destruktor wodnych stforów" << endl; }
void woda::wypisz(){ cout << "bub bulb" << endl; }
void woda::sound(){ cout << "kap kap" << endl; }

fish::fish(){ cout << "Konstruktor ryb" << endl; }
fish::~fish(){ cout << "Destruktor tyb" << endl; }
void fish::wypisz(){ cout << "ryba p³ywa" << endl; }
void fish::sound(){ cout << "***** dzieci i ryby g³osu nie maj¹ ****" << endl; }

frog::frog(){ cout << "Konstruktor ¿ab" << endl; }
frog::~frog(){ cout << "Destruktor ¿ab" << endl; }
void frog::wypisz(){ cout << "¿aba skacze" << endl; }
void frog::sound(){ cout << "kum kum "<< endl; }