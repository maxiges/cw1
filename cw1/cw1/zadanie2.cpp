
#include "librarys.h"
#include "zadanie2.h"

string firma, modell;
long long int nr_fon;

void Fon::wpisz()
{
	Marka = "brak"; model = "brak"; numer = 0;//zeruje wrzystkie daane by potem wprowadzi� nowe i gdy pozostawimy pole puste podczas przypisywania to wy�wietli nam komunikat podczas wypisywania �e niewpisali�my danej
	cout << "Podaj firm�: "; cin >> firma;
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




