
#include "cww1.h"
#include "cww2.h"
#include "cww3.h"
#include "cww4.h"
#include "cww5.h"
#include "cww6.h"
#include "cww9.h"
#include "cw9.1.h"
#include "cw9.2.h"
#include "cw9,3.h"
#include "librarys.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "");//dodanie polskich znaków
	while(true){
		system("Color 0A");
		
		cout << "\b Wybierz opcje : \n [0]-exit \n [1]-CW1 \n [2]-CW2\n [3]-CW3 \n [4]-CW4\n [5]-CW5\n [6]-CW6\n \n[9]-CW9  \n[91]-CW9.1 \n[92]-CW9.2  " << endl;
		int switchx = 0, casey=0;
		cin >> switchx;
		switch (switchx){
		case 0: exit(0); break;
		case 1: system("cls"); system("Color 0B");//------------CW1  
			cout << "Wybierz opcje \n [0]-return \n [1]-Imiona (emun) \n [2]-Wskazniki (jak dzia³aj¹) \n [3]-Zamiana danych \n [4]-zamiana wskaŸników \n"
				<< " [5]-tablica wskaŸników  \n [6]-const " << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1:  cw11(); break;
			case 2:  cw12(); break;
			case 3:	 cw13(); break;
			case 4:  cw14(); break;
			case 5:  cw15(); break;
			case 6:  cw16(); break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}

			break;
		case 2:system("cls"); system("Color 0B");//-----------CW2
			cout << "Wybierz opcje \n [0]-return \n [1]-KONSTRUKTOR \n [2]-Struktura \n [3]- \n [4]- ??\n" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1:  cw21(); break;
			case 2:  cw22(); break;
			case 3:	 cw23(); break;
			case 4:  cw24(); break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}
			break;
		case 3:system("cls"); system("Color 0B");  //-------------cw3 
			cout << "Wybierz opcje \n [0]-return \n [1]-REZYSTORY I INNE KONDENSATORY \n [2]-REZYSTORY I INNE KONDENSATORY(konstruktory) \n [3]-Static elements(soœ nie dzia³a \n [4]-klasy wska¿niki\n" << endl;
			cout << " [5]-Twozenie obiektu wskaŸnikiem \n [6]-WskaŸnik THIS\n [7]-\n [8]-\n [9]-\n" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0: break;
			case 1:  cw31(); break;
			case 2:  cw32(); break;
			case 3:	 cw33(); break;
			case 4:  cw34(); break;
			case 5:  cw35(); break;
			case 6:  cw36(); break;
			case 7:  cw37(); break;

			default: cout << "Wybra³eœ zla opcje"; break;
			}

			break;
		case 4:system("cls"); system("Color 0B"); //----------CW4
			cout << "Wybierz opcje \n [0]-return \n [1]-CAR MAKE\n [2]-Template<>\n [3]-\n [4]-\n" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1:cw41();  break;
			case 2:cw42(); break;
			case 3:cw43(); break;
			case 4:  break;
			default: cout << "Wybra³eœ zla opcje"; break;
				system("pause");
			}
		case 5:system("cls"); system("Color 0B"); //----------CW5
			cout << "Wybierz opcje \n [0]-return \n [1]-DZiedziczenie\n [2]-Przes³anianie funkcji \n [3]-static and dynamic cast\n [4]-\n" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1:cw51();  break;
			case 2: cw52(); break;
			case 3: cw53(); break;
			case 4:  break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}
			break;
		


		case 6:system("cls"); system("Color 0B"); //----------CW6
			cout << "Wybierz opcje \n [0]-return \n [1]-DZIEDZICZENIE z wielu class\n [2]-\n [3]-\n [4]-\n" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1: cw61(); break;
			case 2:  cw62(); break;
			case 3:  break;
			case 4:  break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}
			break;


		case 9:system("cls"); system("Color 0B"); //----------CW6
			cout << "Wybierz opcje \n [0]-return \n [1]-vector\n [2]- vektor nr 2\n [3]-Vektor(string)  \n [4]- String\n [5]- String cd." << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1: cw91(); break;
			case 2:  cw92(); break;
			case 3:  cw93(); break;
			case 4:  cw94(); break;
			case 5:  cw95(); break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}
			break;
		case 91:system("cls"); system("Color 0B"); //----------CW6
			cout << "Wybierz opcje \n [0]-return \n [1]-lista nr1\n [2]- lista nr2\n [3]-\n [4]-\n" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1: cww91(); break;
			case 2:  cww92(); break;
			case 3:   break;
			case 4:  break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}
			break;
		case 92:system("cls"); system("Color 0B"); //----------CW6
			cout << "Wybierz opcje \n [0]-return \n [1]-set\n [2]-multiset\n [3]-map\n [4]-multimap\n [5]-multimap(string)" << endl;
			cin >> casey;
			system("cls"); system("Color 0F");//wyczyszczenie konsoli i zmiana jej koloru
			switch (casey){
			case 0:  break;
			case 1: cwww91(); break;
			case 2:  cwww92(); break;
			case 3:  cwww93(); break;
			case 4:  cwww94(); break;
			case 5:  cwww95(); break;
			default: cout << "Wybra³eœ zla opcje"; break;
			}
			break;




		default: cout << "Wybra³eœ zla opcje"; break;
		}

		
			system("pause");
			system("cls");
		}
	
	system("pause");
	return 0;
}