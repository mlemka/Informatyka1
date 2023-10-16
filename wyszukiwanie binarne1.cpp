#include <iostream> 
using namespace std;


int main(){



int l = 0;
int p = 15;
int sr = (l+p)/2;


cout << "Podaj liczbe ktora chcesz znalezc: ";
string text;
cin >> text;
int szukana=stoi(text);

int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

while (l <= p) {
   // cout << l << " " << p << endl;
    if (tab[sr] == szukana){
        cout << sr << endl;
        break;
    }
    if (tab[sr] > szukana){
        p= sr-1;
    }
    else {
        l= sr+1;
    }
	
    sr=(l+p)/2;
    
    }
    if (tab[sr] == szukana){
		cout << "Ta liczba wystepuje w zbiorze w komorce o indeksie" + sr;
	}else{
		cout << "Nie ma takiej liczby :(";
	}
	

    return -1;
}