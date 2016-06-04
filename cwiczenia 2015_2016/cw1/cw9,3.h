#include "librarys.h"
#include<map>


typedef map<int, char> mapa_rosnaca;
typedef map<int, char, less<char>> mapa_malejaca;

template<typename T> void Drukuj2(T obiekt)
{
	T::iterator iter;
	cout << "Obiekt map zawiera " << obiekt.size() << " parklucz - wartosc\n";
	if (obiekt.size() != 0)
	{
		for (iter = obiekt.begin();
			iter != obiekt.end();
			iter++)
		{
			cout << "Klucz: " << iter->first << "\tWartosc :" << iter->second;
			cout << endl;
		}
	}
	else
		cout << "Pusty obiekt\n";
}


void cwww93(){
	mapa_rosnaca map1;

	// 1. value_type
	for (char k = 'c'; k<'t'; k++)
	{
		map1.insert(mapa_rosnaca::value_type(int(k), k));
	}

	for (char k = 'c'; k<'t'; k++)
		// 2. make_pair
		map1.insert(make_pair(int(k), k));
	// 3. Bezposrednie wstawienie obiektu pary
	map1.insert(pair<int, char>(104, char(104)));
	//4. Skladnia podobna do tablicy
	map1[105] = char(105);
	map1[106] = char(105);
	Drukuj2(map1);
	map1[105] = char(106);
	Drukuj2(map1);

	mapa_rosnaca::iterator iter = map1.begin();
	cout << "pocz¹tek to :" << iter->first << "o wartoœci" << iter->second << endl;

	iter = map1.find('h');
	if (iter != map1.end())
	{
		cout << "Znaleziono dan¹" << iter->first << "---" << iter->second << endl;
	}

}


typedef multimap<int, char> mmap_r;
typedef multimap<int, char, less<char>> mmap_m;

void cwww94(){
	mmap_r mmap1;
	for (int i=0; i < 10; i++)
		mmap1.insert(make_pair(i, char(i + 100)));
	Drukuj2(mmap1);
	cout << "dodanie takiego samego elementu" << endl;
	mmap1.insert(pair<int, char>(2, char(102)));
	mmap1.insert(pair<int, char>(2, char(102)));
	Drukuj2(mmap1);

	mmap_r::iterator iter = mmap1.find(2); 
	if (iter != mmap1.end())
	{
		cout << "Znaleziona liczba ma wartoœæ" << iter->first << " :: " << iter->second << endl;
		cout << "Usuwanie znalezionej wartoœci iteratora  " << endl;
		mmap1.erase(iter);
		Drukuj2(mmap1);
		cout << "Usuwanie znalezionej wartoœci klucza =2  " << endl;
		mmap1.erase(2);
		Drukuj2(mmap1);
	}
	else cout << "nie znaleziono elementu" << endl;


	mmap1.insert(pair<int, char>(4, char(104)));
	mmap1.insert(pair<int, char>(4, char(104)));
	iter = mmap1.find(4);
	cout << iter->first << " :: " << iter->second << endl;
	Drukuj2(mmap1);
	cout << "Usuwanie poprzez zawartoœæ klucza" << endl;
	
	mmap1.erase(iter->first);
	Drukuj2(mmap1);


}