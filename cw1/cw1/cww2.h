#include <iostream>
#include "zadanie.h"
#include "zadanie2.h"
using namespace std;
void cw21(){
	cout << "opcja odpalona \n";
	Pies nr1("Maniek", "Owczarek", 15);
	nr1.wypisz();
	Pies nr2("KOT", "Mila", 3);
	nr2.wypisz();
	Pies nr3("Olaf");
	nr3.wypisz();
	Pies nr4; //gdy chcemy mieæ pusty konstruktor z danymi standardowo ustawionymi w konstruktorze 
	nr4.wypisz();
}
void cw22(){
	cout << "opcja odpalona\n";

	Fon fon[3];

	fon[0].wpisz();
	cout << "-----------------------\n";
	fon[1].wpisz();
	cout << "-----------------------\n";
	fon[0].Wyswietl();
	fon[1].Wyswietl();
	cout << "-----------------------\n";
	cout << "# I <3SAMSUNG\n";
	fon[0].Marka = "samsung";
	fon[1].Marka = "samsung";
	fon[0].Wyswietl();
	fon[1].Wyswietl();
	system("pause");
	system("cls");
	fon[0].ilove();
	cout << "orginalnie :" << fon[0].Marka << endl;
	system("cls");



}

void cw23(){
	cout << "opcja odpalona-brak opcji";


}
void cw24(){
	cout << "opcja odpalona -brak opcji";


}