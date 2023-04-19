//Freddy Viracocha
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
	int TAM; 
	int num; 
	int a; 
	cout << "Ingresa la dimension de la lista : \n";
	cin >> TAM;
	int lista[TAM];
	
	for (int i=0; i<TAM; i++){
		cout << "Ingrese el "<<i+1<<" elemento de la lista: ";
		cin >> lista[i];
	}
	cout<< endl; 
	cout << "Lista desordenada\n";
	for (int i=0; i<TAM; i++){ 
		cout << lista [i] << " ";
	}
	cout<<endl; 			
	cout<<"\nPrueba de escritorio\n"; 
	cout <<"i" << setw(5) << "num" << setw(3) << "a" << setw(23) <<"a>=0&&lista[a]>num"; 
	cout << setw(15) << "lista [a+1]" << setw(10) << "lista";
	cout << endl;
	for (int i=1; i<TAM; i++){
		if(a<0){ 
			cout << i << setw(4) << num << setw(4) << a << setw(9) << a << ">=0 \n";
		}
		num=lista [i];
		a=i-1;
		while (a>=0 && lista[a]>num){
			lista [a+1]= lista[a]; 
			cout<<setw(5)<<num<<setw(4)<<a<<setw(9)<<a<<">=0"<<setw(4) << "&&" << setw(3) << lista[a] << ">" << num;
			cout << setw(15) << lista[a+1] << setw(8);
			for (int j=0;j<TAM; j++){ 
				cout << lista[j] << " ";
			}
			cout << endl;
			a--;
		}
		lista [a+1]=num; 
		cout <<i<<setw(4)<<num<<setw(4)<<a<<setw(9)<<a<<">=0 "<<setw(3)<<"&&"<<setw(3)<<lista[a]<<">"<<num<<setw(23);
		for (int j=0;j<TAM; j++){ 
			cout << lista[j] << " ";
		}
		cout << endl;
	}
	cout<<endl; 
	cout << "Lista ordenada\n";
	for (int i=0; i<TAM; i++){ 
		cout << lista [i] << " ";
	} 
	return 0;
}

