#include "zadanieCW3.h"


zadanieCW3::zadanieCW3()
{
}


zadanieCW3::~zadanieCW3()
{
}
/*zadanieCW3(string element, double wartosc, double tolerancja) :Element(element), Wartosc(wartosc), inne(tolerancja)//REZYSTOR I KONDENSATOR
{}
zadanieCW3(string element, string typ, double Beta) :Element(element), Typ(typ), inne(Beta){}		//tranzystor i stabilizator napiêcia
zadanieCW3(string element, string typ){//wzmacniacz operatorowy*/
void zadanieCW3::create(int x, string nazwa)
{
	string typs;
	double wart1, wart2;
	
	if (x == 1)
	{
		cout << "podaj rezystancje :";cin >> wart1;
		cout << "Podaj tolerancje : ";cin >> wart2;
		Element = nazwa;
		Wartosc = wart1;
		inne = wart2;
	}
	else if (x == 2)
	{
		cout << "podaj rezystancje :"; cin >> wart1;
		cout << "Podaj tolerancje : "; cin >> wart2;
		Element = nazwa;
		Wartosc = wart1;
		inne = wart2;
	}
	else if (x == 3)
	{
		Element = nazwa;
		cout << "Podaj typ :"; cin >> typs;
		Typ = typs;
		cout << "Podaj wartoœæ bety :";
		cin >> wart1;
		inne = wart1;
	}
	else if (x == 4)
	{
		Element = nazwa;
		cout << "Podaj typ :"; cin >> typs;
		Typ = typs;
	}
	else if (x == 5)
	{
		Element = nazwa;
		cout << "Podaj typ :"; cin >> typs;
		Typ = typs;
		cout << "Podaj napiêcie wyjœciowe:";
		cin >> wart1;
		inne = wart1;

	}
	


}
void zadanieCW3::print(int x)
{
	if (x == 1){ cout << "Element:" << Element << "\n Rezystancja :" << Wartosc << "[Ohm]\n Tolerancja: +- " << inne << "%"<<endl; }
	else if (x == 2){ cout << "Element:" << Element << "\nPojemnoœæ:" << Wartosc << "[F]\n Tolerancja: +- " << inne << "%" << endl; }
	else if (x == 3){ cout << "Element:" << Element << "\nTyp:" << Typ << "\nWartoœæ Bety " << inne << endl; }
	else if (x == 4){ cout << "Element:" << Element << "\nTyp:" << Typ; }
	else if (x == 5){ cout << "Element:" << Element << "\nTyp:" << Typ << "\nWartoœæ napiêcia wyjœciowego " << inne << "[V]" << endl; }
	else{}
}