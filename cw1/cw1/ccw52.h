#include "librarys.h"

class woda
{

public:
	woda();
	void wypisz();
	virtual void sound();
	~woda();
};

class fish:public woda
{
public:
	fish();
	void wypisz();
	void sound();
	~fish();
};
class frog :public woda
{
public:
	frog();
	virtual void wypisz();
	virtual void sound();
	~frog();

};



class Samochod
{
public:
	Samochod()
	{
		cout << "Konstruktor samochodu...\n";
	}
	void Jazda()
	{
		cout << "max 160 wiêcej nie da rady !!\n";
	}
	virtual ~Samochod()
	{
		cout << "z³om\n";
	}
};
class V8 : public Samochod
{
public:
	V8()
	{
		cout << "Konstruktor V8...\n";
	}
	void nitro()
	{
		cout << "2s do 100km/h \n";
	}
	
		virtual ~V8()
	{
			cout << "Dzwonnn\n";
		}
};