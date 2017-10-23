#include <iostream>

using namespace std;

int factorial(int num1);

int main(){
	int num1;
	cout<<"Inserta un numero para sacar su factorial: ";
	cin>>num1;
	cout<<"El factorial de "<<num1<<" es "<<factorial(num1)<<endl;
	system("PAUSE>nul");
}

int factorial(int num1){
	int acum=1;
	for (int i=1; i<=num1; i++){
		acum=acum*i;
	}
	return acum;
}
