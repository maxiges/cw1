#include "librarys.h"
#include "CW4.h"

void cw41(){
	cout << "Creator mazdy:\n";
	Car autko("Mazda","RX8");
	cout << "Creator MUSTANGA:\n";
	Car* mustang = new Car("Ford", "Mustang");
	cout << "\n-------------------------------\n";
	autko.wypisz(mustang);
	mustang->zmien();
	mustang->wypisz();
	cout << "\n-------------------------------\n";
	mustang->zmien("Sk³adak", "Rower");
	mustang->wypisz();
	cout << autko - autko << endl;
	cout << "inkrementacja"; autko.hajs();  cout << "PO podwy¿cze"<<autko++<<endl;



	delete mustang;
	autko.~Car();
	system("pause");

}
void cw42(){
	tablica < 11 > nowa; //ustalamy
	nowa.nadaj_ilosc();
	int a = 0;
	cout << "Nasza tablica to: " << nowa.wielkosc() << " elementow." << endl << endl;
	while (a < nowa.zmienna_zilosc) //w³aœnie tu
	{
		nowa.przypisz(a);
		nowa.pokaz(a);
		cout <<"a="<< a << endl;
		a++;
	}
	for (int i = 0; i < 12; i++)
		cout << nowa.zmienna[i] << endl;
	cout << "Operacja ukoñczona - " << a << endl;
	system("pause");
}
void cw43(){} 


