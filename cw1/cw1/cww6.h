#include "librarys.h"

class BMW{public:
	string element1,element2;
	void silnik(){ cout << "444" << endl; }
	void poka(){ cout << "poka BMW" << endl; }
	BMW(){ cout << "BMW z³o¿one" << endl; }
	~BMW(){ cout << "BMW ma dzwona" << endl; }
};
class Audi{
public:
	void engin(){ cout << "Slinik wypadl" << endl; }
	void poka(){ cout << "poka Audi" << endl; }
	Audi(){ cout << "AUDI z³o¿one" << endl; }
	~Audi(){ cout << "AUDI zjad³a rdza" << endl; }
};
class Skladak :public BMW, public Audi
{
public:
	
	void naped(){ cout << "flinsttonowie" << endl; }
	void poka(){ cout << "poka skladaka #wigry wigry" << endl; }
	Skladak(){ cout << "skladak z³o¿one" << endl; }
	Skladak(int){ cout << "Sk³adakkkk z intem" << endl; }
	~Skladak(){ cout << "skladak sprzedanty" << endl; }
};


void cw61(){
	Skladak Wigry;
	Wigry.poka();
	Wigry.engin();
	Wigry.naped();
	Wigry.silnik();
	Wigry.~Skladak();
	cout << "WSKANIKI" << endl;
	BMW* e36 = new Skladak;
	e36->poka();
	e36->silnik();
	delete e36;


}
void cw62(){

}