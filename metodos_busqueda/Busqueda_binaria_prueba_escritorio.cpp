#include <iostream>
using namespace std;

int main(){
	int valorBuscado = 30;
	int Y,M,Z;
	int lista[] = {10,20,30,40,50,60,70,80,90,100,110};
	Y = 0;
	Z = (sizeof(lista)/sizeof(lista[0]))-1;
	cout<<"Lista: [ ";
	for(int i= Y;i<Z+1;i++){
		cout<<lista[i]<<" ";
	}
	cout<<" ]\n";
	cout<<"Y = "<<Y<<" Z = "<<Z<<endl;
	cout<<"Y\tM\tZ\t"<<endl;
	
	while(M!=Y && M!=Z){
		M = (Y+Z)/2;
		
		if(lista[M] > valorBuscado){
			Z = M-1;	
		}else if(lista[M] < valorBuscado){
			Y = M +1;	
		}
		else if(lista[M] == valorBuscado){
			Z=M;
			Y=M;
			cout<<"\t\t\t"<<lista[M]<<endl;
		}
		cout<<Y<<"\t"<<M<<"\t"<<Z<<"\t";
		for(int i= Y;i<M+1;i++){
			cout<<lista[i]<<" ";
		}
		cout<<endl;	
	}
	return 0;
}



