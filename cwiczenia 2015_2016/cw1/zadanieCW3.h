
#include"librarys.h"
//----------Rezystory kondensatory i inne opcja nr1/2
class zadanieCW3
{
	string Element, Typ;
	double Wartosc, inne;

public:
	void create(int x, string nazwa);
	void print(int x);

	zadanieCW3();

	zadanieCW3(string element, double wartosc, double tolerancja) :Element(element), Wartosc(wartosc), inne(tolerancja)//REZYSTOR I KONDENSATOR
	{}
	zadanieCW3(string element, string typ, double Beta) :Element(element), Typ(typ), inne(Beta){}		//tranzystor i stabilizator napiêcia
	zadanieCW3(string element, string typ){//wzmacniacz operatorowy
		Element = element;
		Typ = typ;
	}						

	virtual ~zadanieCW3();

	

};


	
	