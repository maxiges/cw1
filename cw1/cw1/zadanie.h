#include "librarys.h"

class Pies
{
	string Rasa, Imie;
	int Wiek;
public:
	Pies(string rasa = "Nowy gatunek", string imie = "bez rasy", int wiek = 0) //konstruktor
	{
		Imie = imie;
		Rasa = rasa;
		Wiek = wiek;
	}
	void wypisz();


};