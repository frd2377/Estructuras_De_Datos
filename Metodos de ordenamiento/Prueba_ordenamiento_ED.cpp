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
		for (int i = inicio; i < final+1; i++){
			indiceMayor = i;
			for(int j = inicio; j < final+1; j++){
				if(lista[indiceMayor] < lista[j]){
					indiceMayor = j;
				}
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
			indiceMenor = i;
			for(int j = final; j > inicio-1; j--){
				if(lista[indiceMenor] > lista[j]){
					indiceMenor = j;
				}
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



























