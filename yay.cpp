#include <iostream> 
using namespace std;

int main(){

	string text;
	cin >> text;
	int a = stoi(text);
	cin >> text;
	int b=stoi(text);
	
	if (a>b) {
		cout << a-b;
	}
	else {
		cout << b-a;
	}
		
	
	
	
	
	
/*	if (a>b) {
	    cout<<"mytext " << a; // expected result: mytext 1
	}
*/

	




}