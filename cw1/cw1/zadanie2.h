#include "librarys.h"


struct Fon
{
	string Marka;
	string model;
	long long int numer;
	void Wyswietl();
	void wpisz();
	void ilove()
	{ 
		string marka;
		cout << "podaj marke: ";
		cin >> marka;
		for (int i = 0; i <
			10; i++){
		cout << "I<3" << marka<<endl;
		}
	}
};
