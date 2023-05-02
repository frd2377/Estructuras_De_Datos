#include <iostream>
using namespace std;
int main(){
	int lista [] = {80,30,40,60,70,10,50,20};
	int inicio = 0;
	int final = (sizeof(lista)/sizeof(lista[0]))-1;
	int indiceMayor = 0;
	int indiceMenor = 0;
	int tmp = 0;
	
	while(inicio<final){
		indiceMayor = inicio;
		indiceMenor = final;
		for(int i = inicio; i < final+1; i++){
			if(lista[indiceMayor] < lista[i]){
				indiceMayor = i;
			}
		}
		tmp = lista[inicio];
		lista[inicio] = lista[indiceMayor];
		lista[indiceMayor] = tmp;
		
		//ver ordenamiento del mayor
		for(int i = 0; i < sizeof(lista)/sizeof(lista[0]);i++){
			cout<<lista[i]<<" ";
		}
		cout<<endl;
		
		for(int i = final; i > inicio-1; i--){
			if(lista[indiceMenor] > lista[i]){
				indiceMenor = i;
			}
		}	
		tmp = lista[final];
		lista[final] = lista[indiceMenor];
		lista[indiceMenor] = tmp;
		
		//ver ordenamiento del menor
		for(int i = 0; i < sizeof(lista)/sizeof(lista[0]);i++){
			cout<<lista[i]<<" ";
		}
		cout<<endl;
		
		inicio++;
		final--;
	}

	for(int i = 0; i < sizeof(lista)/sizeof(lista[0]);i++){
		cout<<lista[i]<<" ";
	}
	
	return 0;
}



























