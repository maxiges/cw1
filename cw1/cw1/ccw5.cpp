#include "ccw5.h"
void telefon::wypisz()
{
	cout << "IMEI TO :" << IMEI << "\nWielkoœæ ekranu:" << display << "\nStan to:" << stan << endl;
}
telefon::telefon() :display(5), stan("Urzuwany"){ cout << "konstruktor telefonu" << endl; IMEI += 500; }
telefon::telefon(long int imei) : IMEI(imei), display(5), stan("Urzuwany"){ cout << "konstruktor telefonu" << endl; }