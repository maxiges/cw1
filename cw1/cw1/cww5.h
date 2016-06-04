#include "librarys.h"
#include "ccw5.h"
#include "ccw52.h"
void cw51(){
	chiny tel1;
	
	tel1.wypisz();
	tel1.wypiszchin();
	cout << "imei teraz to " << tel1.fix() << endl;
	japonia tel2;
	//nie mamy dostêpu do funkcji prywatnej bo dzieziczê pryywatne funkcje
	tel2.wypiszj();
	
	korea tel3;
	tel3.wypiszk();
	tel1.~chiny(); tel2.~japonia(); tel3.~korea();
	cout << "-----------------wskaŸniki--------------" << endl;
	telefon* teln1 = new chiny;
	teln1->wypisz();//nie ma nic z chin
	chiny* teln2 = new chiny;
	teln2->wypiszchin(); teln2->wypisz();//a tu mamu wrzystko z chin :)*/
}
void cw52(){
	woda wisla;
	frog kumak;
	fish sum;
	cout << "----------------KUMAK----------------" << endl;
	kumak.wypisz();
	kumak.sound();
	cout << "----------------wisla----------------" << endl;
	wisla.wypisz();
	wisla.sound();
	cout << "----------------sum----------------" << endl;
	sum.wypisz();
	sum.sound();
	cout << "----------------wska¿nikami----------------" << endl;
	fish* karp = new fish;
	woda* ness = new fish;
	frog*Amolops = new frog;
	woda*Pterorana = new frog;
	cout << "--------------Karp--------------" << endl;
	karp->sound();
	karp->wypisz();
	cout << "--------------Ness--------------" << endl;
	ness->sound();
	ness->wypisz();
	cout << "---------Amalops---------------------" << endl;
	Amolops->sound();
	Amolops->wypisz();
	cout << "---------Pteroeana---------------------" << endl;
	Pterorana->sound();
	Pterorana->wypisz();




}
void cw53(){

	Samochod* Garaz[2];
	Samochod* ptr;
	Garaz[0] = new Samochod;
	Garaz[1] = new V8;

	for (int i = 0; i < 2; i++)
	{
		cout << "\nPojazd numer " << i <<
			"\nUzycie dynamic_cast\n\n";
		//sprawdzenie wskaŸnika do klasy bazowej
		V8 *ptr = dynamic_cast<V8*> (Garaz[i]);
		if (ptr != NULL)
		{
			ptr->Jazda();
			ptr->nitro();
		}
		else
		{
			ptr->Jazda();
			cout << "ma tylko silnik 1.4 !...\n";
		}

		cout << "\nPojazd numer " << i << "\nUzycie static_cast\n\n";
		//sprawdzenie wskaŸnika do klasy bazowej
		V8 *ptr1 = static_cast<V8*> (Garaz[i]);
		if (ptr1 != NULL)
		{
			ptr1->Jazda();
			ptr1->nitro();
		}
		else
		{
			ptr1->Jazda();
			cout << "Mam tylko 1.4 !...\n";
		}
		delete Garaz[i];
	}
}
void cw54(){}