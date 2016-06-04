#include "librarys.h"
#include <iostream>
class Car
{
public:
	long double aaaa;
	string Marka, Model;
private:
	double przebieg;
	int rok;
	long int VIN;
	int cena;
public:
	Car();
	Car(string marka, string model) :Marka(marka), Model(model){
		cout << "Wpisz przebieg :" ;
			cin >> aaaa; przebieg = aaaa;
			cout << "Wpisz rok :"; cin >> aaaa; rok =(int)aaaa;
			cout << "Wpisz vin :"; cin >> aaaa; VIN = (long int)aaaa;
			cout << "Podaj cene :"; cin >> aaaa; cena =(int)aaaa;
	}
	void wypisz(Car* samoch);
	void zmien(string model, string marka);
	void zmien(string model, char* marka);
	void hajs(){ cout << cena; }
	void zmien()
	{
		Marka = "fiat";
		Model = "multipla";
	}

	void wypisz(){
		cout << "Mamochód podany to :" << Marka << "  " << Model << endl;
		cout << "Rok:" << rok << "\nPrzebieg:" << przebieg << "\nCena:" << cena << endl;
	}

	
	int operator++();
	int operator-(Car);

	~Car(){ cout << "\nJestem destruktor samochód poszed³ na z³om" << endl; }

};






template < int ilosc >
class tablica
{
public:
	int zmienna[ilosc]; //zmiena tablica int z templajtm
	int zmienna_zilosc;
	void przypisz(int ile)
	{
		cin >> zmienna[ile];
	}
	void pokaz(int ile)
	{
		cout <<"Nowy tamplayt wynosi "<< zmienna[ile] << endl;
	}
	int wielkosc()
	{
		return ilosc;
	}
	void nadaj_ilosc()
	{
		zmienna_zilosc = ilosc;
	}
};

	
