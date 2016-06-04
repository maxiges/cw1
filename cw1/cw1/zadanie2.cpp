
#include "librarys.h"
#include "zadanie2.h"

string firma, modell;
long long int nr_fon;

void Fon::wpisz()
{
	Marka = "brak"; model = "brak"; numer = 0;//zeruje wrzystkie daane by potem wprowadziæ nowe i gdy pozostawimy pole puste podczas przypisywania to wyœwietli nam komunikat podczas wypisywania ¿e niewpisaliœmy danej
	cout << "Podaj firmê: "; cin >> firma;
	cout << "Podaj model : "; cin >> modell;
	cout << "Podaj IMEI modelu : "; cin >> nr_fon;
	Marka = firma;
	model = modell;
	numer = nr_fon;


}
void Fon::Wyswietl()
{
	cout << "nazwa firmy:" << Marka << "\n Nazwa modelu: " << model << "\n Numer IMEI :" <<numer<< endl;
}




