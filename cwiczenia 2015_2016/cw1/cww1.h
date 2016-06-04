
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void cw11(){

	cout << "opcja cw1 odpalona "<<endl;
	enum osoba{
		Kamil=10,
		Ola,
		Micha³,
		Olaf,
	};
	string osobaim[5] = { "Kamil", "Ola", "Micha³", "Olaf" };

	osoba id[4] = { Kamil, Ola, Micha³, Olaf, };
	
	
	for (int i = 0; i < 4; i++)
	{
		cout << "id : " << id[i] << " osoba : "; cout << osobaim[i]; cout << endl;
	}
	


}
//--------------------------
void cw12(){
	cout << "Loading.."; 
	Sleep(200);
	for (int i = 0; i < 10; i++){
		cout << ".";
		Sleep(200);
	}
	cout << endl;
	double licz = 12.12;
	double *liczba =&licz;
	cout << licz << "\t cout =  licz " << endl;
	cout << &licz << "\t cout =  &licz " << endl;
	cout << &liczba << "\t cout =  &liczba " << endl;
	cout << *liczba << "\t cout =  *liczba " << endl;
	cout << liczba << "\t cout =  liczba " << endl;
}
//---------------------------
void cw13(){
	cout << "";
	int intt[3] = { 5, 10, 15 };
	float floatt[3] = { 5.5, 10.10, 15.15 };
	string stringg = "NAPIS";
	int a = static_cast<int>(floatt[1] + floatt[2]);
	cout << "float+float na int = " << a << endl;
	float b = static_cast<float>(stringg[1] + intt[1]);
	cout << "string+int na float = " << b << endl;
	double inttd = intt[1];
	double * napis = &inttd;
	double inttd2 = intt[2];
	double * napiss = &inttd2;
	float wskaz = static_cast<float>(inttd + inttd2);
	cout << "*napis na float = " << b ;
	char wskaznap = static_cast<char>(inttd + inttd2);
	cout << " " << wskaznap << endl;
//float wskaz = dynamic_cast<float>(napiss+ napis);
//-------ciekawostka wypisuje znaki asci jakieœ tam 
	char ciekawe = 'a';
	for (int i = 0; i < 20; i++)
	{
		
		cout << ciekawe << "  " << ciekawe + 10;
		ciekawe += 20;
		Sleep(100);
	}



}
//------------------------------
void cw14(){
	cout << "opcja odpalona nr4 \n ";
	double dcw1=12.5,dcw2=13.33;	//dodanie zmiennych
	double *dcw11=&dcw1,*dcw12=&dcw2;	//dodanie wska¿ników ze zmiennymi
	cout << "wskaŸniki :\n" << "*dcw11 :" << *dcw11 << " \t dcw11:" << dcw11 << endl;
	int*icw11 = reinterpret_cast<int*>(dcw11);
	int*icw12 = reinterpret_cast<int*>(dcw12);
	int wynik = *icw11 + *icw12;
	cout << "wynik zamiany double* na int* nr. komórek :\n\n" << "int:" << icw11 << "\tdouble" << dcw11<<endl;
	cout << "wynik dodania wartoœci wska¿ników intów: " << wynik <<endl<<endl;
	
}
//-------------------
void cw15(){
	double liczby[4] = { 1, 3, 4, 5.5 };
	double *dcw11[4] = { &liczby[0], &liczby[1], &liczby[2], &liczby[3] };
	for (int i = 0; i < 4; i++){
		cout << " liczba" << "[" << i << "] :" << *dcw11[i] << "\n Nr adresu = " << dcw11[i] << endl;
	}


}
//-------------------
void cw16(){
	int icw1 = 1, icw2 = 5;
	const int cicw1 = 5;
	int * const  cwcw1 = &icw1;
	const int *ciwcw1;
	const int *const *cwicw1;
	cout << " icw1=int =" << icw1 << " cicw1=const int = "<<cicw1 <<endl;
	for (short int i = 0; i < 10; i++){
		cout << "*cwcw1=" << *cwcw1 << endl;
		*cwcw1=*cwcw1+1;	//dodaje +1 do cwcw1
		++*cwcw1;	//dodaje +1 do cwcw1
	}
	cout << "\n icw1=:" << icw1 << endl;
	ciwcw1 = &icw1;
	cout << "\n ciwcw1=&icw1 : " << ciwcw1 << "\t*ciwcw1:" << *ciwcw1 << "\n";
	ciwcw1 = &icw2;
	cout << " ciwcw1=&icw2 : " << ciwcw1 << "\t*ciwcw1:" << *ciwcw1 << "\n";
	cout<<"Nie da siê *ciwcw1=5 bo int jest const\n";



	



}


