#include "librarys.h"
#include "zadanieCW3.h"
#include "zadCW3v1.h"


void cw31(){



	cout << "opcja odpalona\n";
	
	zadanieCW3 ELEMENT1;
	int nr_ele, dana = 0;
	
	string nazwa[5] = { "rezystor", "kondensator", "tranzystor", "wzmacniacz", "stabilizator" };
	cout << "\n" << "Rezystor-1\nKondensatr-2\nTranzystor-3\nWzmacniacz operatorowy-4\nStabilizator napi�cia-5\n";
	cout << "Podaj jaki element chcesz doda�: "; cin >> nr_ele;
	if (nr_ele > 0 && nr_ele < 6){

		ELEMENT1.create(nr_ele, nazwa[nr_ele]);
		cout << "-------------------\n";
		ELEMENT1.print(nr_ele);

	}
	else cout<<"\nPODA�E� Z�� LICZB�\n";

	
}
void cw32(){
	cout << "opcja odpalona\n";
	int nr_ele, dana = 0;
	string nazwa[5] = { "rezystor", "kondensator", "tranzystor", "wzmacniacz", "stabilizator" };
	cout << "\n" << "Rezystor-1\nKondensatr-2\nTranzystor-3\nWzmacniacz operatorowy-4\nStabilizator napi�cia-5\n";
	cout << "Podaj jaki element chcesz doda�: "; cin >> nr_ele;
	if (nr_ele > 0 && nr_ele < 6){
		string typs;
		double wart1, wart2;

		if (nr_ele == 1)
		{
			cout << "podaj rezystancje :"; cin >> wart1;
			cout << "Podaj tolerancje : "; cin >> wart2;
			zadanieCW3 Element2(nazwa[nr_ele], wart1, wart2);
			Element2.print(nr_ele);
		}
		else if (nr_ele == 2)
		{
			cout << "podaj rezystancje :"; cin >> wart1;
			cout << "Podaj tolerancje : "; cin >> wart2;
			zadanieCW3 Element2(nazwa[nr_ele], wart1, wart2);
			Element2.print(nr_ele);
		}
		else if (nr_ele == 3)
		{
			cout << "Podaj typ :"; cin >> typs;
			cout << "Podaj warto�� bety :";cin >> wart1;
			zadanieCW3 Element2(nazwa[nr_ele],typs, wart1);
			Element2.print(nr_ele);
		}
		else if (nr_ele == 4)
		{
			cout << "Podaj typ :"; cin >> typs;
			zadanieCW3 Element2(nazwa[nr_ele], typs);
			Element2.print(nr_ele);
		}
		else if (nr_ele == 5)
		{
			cout << "Podaj typ :"; cin >> typs;
			cout << "Podaj napi�cie wyj�ciowe:";cin >> wart1;
			zadanieCW3 Element2(nazwa[nr_ele], typs,wart1);
			Element2.print(nr_ele);

		}

	}
	else cout << "\nPODA�E� Z�� LICZB�\n";

}
void cw33(){

	
	
	zobaczmy cos;
	cout << cos.ww1 <<"<-Warto�� startowa po 1-ym konstruktorze  \n Tworzenie nowego elementu z konstruktorem zwi�kszaj�cym o +1 warto��"<< endl;
	zobaczmy cos2;
	cout << cos2.ww1 <<"<- cos2"<< endl;
	cout << cos.ww1 <<"<-cos1"<< endl;
	cos2.whoareyou();
	cos2.mniej();
	cos.mniej();
	cout << cos2.ww1 << "<- cos2" << endl;
	cout << cos.ww1 << "<-cos1" << endl;

}
void cw34(){
	cout << "opcja odpalona\n";
	Rezystor rezystor1("ATM", 1000, 0.5);
	rezystor1.print();
	cout << sizeof(rezystor1)<<"   -ile zajmuje obiekt \n"<<sizeof(rezystor1.producent)<<"  -ile zajmuje nazwa \n";
	Rezystor* rezystor2;
	rezystor2 = &rezystor1;
	cout << rezystor2 << "--NR komurki z wska�nikiem do obiektu" << endl;
	cout << rezystor2->producent << "--poprzez wska�nik rezystor2->producent " << endl;
	rezystor2->tolerancja += 0.1;//wwzrost tolerancji przez wska�nik
	cout << "wzrost tolerancji przez wska�nik rezystor2->tolerancja += 0.1;" << endl;
	rezystor2->print();

}
void cw35()
{
	Rezystor rezystor1("TNT", 2000, 1);
	Rezystor* Rezystorr = new Rezystor("TNT", 2000, 1);//tworzenie wska�nikowego obiektu 
	

	Rezystor* nowy = new Rezystor("lol2", 50, 40);
	//w tym przypadku nie mo�na podac bez danych obiektu Rezystor* Rezystorr = new Rezystor; musimy wywo�a� konstruktor 
	cout << sizeof(rezystor1) << "   (bez*) VS (z*)   " << sizeof(Rezystorr) << endl;
	cout << "nazwa 1 +T   :" << Rezystorr->producent + "T" <<endl;
	
	rezystor1.print();
	delete Rezystorr;//mog� to zrobi� na ko�cu gdy nie b�d� ju� wyko�ystywa� tego obiektu 

	

}
void cw36()
{

	//string nazwa[3]{ "�niadanie", "obiad", "kolacja" };		//nazwy odno�nie tworzenia konstruktora 
	//string what[3]{"pizza", "Pat Tei", "Zapiekanka po nelso�sku"};  //nazwy odno�nie tworzenia konstruktora 
	whateat* rano = new whateat(0, 0);
	whateat* noc = new whateat(2, 1);
	
	cout << "Rodzaj posi�ku: "; rano->GetWhen(rano);
	cout << "Co zjem :"; rano->GetWhat(rano); cout << endl;
	cout << "-----------------------" << endl;
	cout << "Rodzaj posi�ku: "; noc->GetWhen(noc); 
	cout << " Co zjem :"; noc->GetWhat(noc); cout << endl;
	cout << "---------ZE ZMIAN� WSKA�NI�W-------------" << endl;
	cout << "Rodzaj posi�ku: "; rano->GetWhen(noc); 
	cout << "Co zjem :"; rano->GetWhat(noc); cout << endl;
	cout << "-----------------------" << endl;
	cout << "Rodzaj posi�ku: "; noc->GetWhen(rano); 
	cout << "Co zjem :"; noc->GetWhat(rano); cout << endl;
	
}
void cw37()
{



}