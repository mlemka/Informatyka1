#include <iostream> 
using namespace std;

int power(){
int a=1; // podstawa
int n=1; // potega
int w=1; // wynik

cin >> a;
cin >> n;


while (n>0){
    if (n%2==1){
        w=w*a;
        
    }
    a=a*a;
    n= n/2;
}
return w;
}

int main(){

	cout << power() << endl;

	return 0;
}