#include <iostream> 
using namespace std;


int main(){



int l = 0;
int p = 7;
int sr = (l+p)/2;

string text;
cin >> text;
int szukana=stoi(text);

while (l <= p) {
    if (tab[sr] == szukana){
        cout << sr;
    }
    if (tab[sr] > szukana){
        p= sr-1;
    }
    else {
        l= sr+1;
    }

    
    }
    return -1;
}