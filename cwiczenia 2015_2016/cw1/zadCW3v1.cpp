#include "zadCW3v1.h"
#include "librarys.h"
#include <ctime>


void Rezystor::print()
{
	cout << "Producent:" << producent << endl;
	cout << "Wartoœæ:" << wartosc << endl;
	cout << "Tolerancja:" << tolerancja << endl;
}
Rezystor::~Rezystor(){
	cout << "Jestem destruktor usuwam i niszscze " << endl;
}
//-----------OPCJA 6 THIS-----------------------
string nazwa[3]{ "œniadanie", "obiad", "kolacja" };
string co[3]{"pizza", "Pat tei", "Zapiekanka po nelsoñsku"};
whateat::whateat(int a1, int a2)
{
	What = co[a2];
	When = nazwa[a1];

}
void whateat::GetWhat( whateat* co)
{
	cout << this->What << "\t <-cout prze this" << endl;
	cout << co->What << "\t\t <-cout bez this a przez wskaŸnik" << endl;

	
}
void whateat::GetWhen(whateat*kiedy){
	cout << this->When << "\t <-cout prze this" << endl;
	cout << kiedy->When << "\t\t <-cout bez this a przez wskaŸnik " << endl;

}

//------------OPCJA 4 STATIC-----------------
float zobaczmy::ww1 = 1;
zobaczmy::zobaczmy()
{
	ww1 += 1;
}
void zobaczmy::whoareyou()
{
	int liczba = (rand() % 2) + 1;
	if (liczba == 1)
		cout << "JESTEM YETI\n";
	else 
		cout << "JESTEM Zombie\n";

}