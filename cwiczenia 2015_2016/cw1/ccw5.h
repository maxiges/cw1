#include "librarys.h"

class telefon
{
public:
	long int IMEI=0;
private:
	int display;
protected:
	string stan;
public:
	telefon();
	telefon(long int imei);

	void wypisz();
	~telefon(){ cout << "jestem destruktor " <<IMEI<< endl; };
	
};
class chiny :public telefon
{
public:
	string model;
	chiny() :model("Xaomi"){ cout << "KONSTRUKTOR CHIN" << endl; }
	void wypiszchin(){ cout << model <<"\t stan:"<<stan<< endl; }
	long int fix(){ return(IMEI = 68555569); }
	
	~chiny(){ cout << "jestem destruktor chin " << endl; }
	
};


class japonia :private telefon
{
public:
	
	string model = "samsung";
	japonia():model("samsung"){ cout << "KONSTRUKTOR japoni" << endl; }
	void wypiszj(){ cout << "model" << model << "\tdostep do private display nie otiera:)" << endl; }
	
	~japonia(){ cout << "destruktor Japoni" << endl; }
};



class korea :protected telefon
{
public:
	string model = "samsung";
	korea() :model("LG"){ cout << "KONSTRUKTOR KOREI" << endl; }
	void wypiszk(){ cout << "model" << model << "\tdostep do protected ok dzia³a stan:" <<stan<< endl; }

	~korea(){ cout << "destruktor Korei" << endl; }
};
