#include "librarys.h"


class Rezystor
{
public:
	int wartosc;
	string producent;
	double tolerancja;
	Rezystor(string Producent, int Wartosc, double Tolerancja) :producent(Producent), wartosc(Wartosc), tolerancja(Tolerancja)
	{
	}
	void print();
	~Rezystor();//destruktor

};

class whateat
{
	string When, What;
public:
	void GetWhen(whateat* kiedy);
	void GetWhat(whateat* co);
	whateat(int a1, int a2);
	~whateat(){}
};
class zobaczmy{
public:
	static float ww1;
	//static int ww1=1; to nie dzia³a trzeba deklarowaæ poza klas¹
	zobaczmy();//reszta w plikach cpp
	void whoareyou();
	static void mniej()
	{
		ww1=0;
		cout << ww1 << "<-Zniê znieni³o z " << ww1++ << endl;
	}
	
};
