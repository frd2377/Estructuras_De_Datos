#include <iostream>
using namespace std;


int main(){
	int lista [] = {50,20,40,80,30};
	int TAM = sizeof(lista)/sizeof(lista[0]);
	int num,a;
	
	for(int i = 1;i<TAM;i++){
		num = lista[i];
		a = i - 1;
		while(a >= 0 && lista[a] > num){
			lista[a+1] = lista[a];
			a--;
		}
		lista[a+1] = num;
	}
	
	for(int i = 0;i<TAM;i++){
		cout<<lista[i]<<" ";
	}
	
	
	
	return 0;
}