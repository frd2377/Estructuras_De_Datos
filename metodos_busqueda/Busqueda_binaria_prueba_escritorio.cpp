#include <iostream>
using namespace std;

int main(){
	int valorBuscado = 30;
	int Y,M,Z;
	int lista[] = {10,20,30,40,50,60,70,80};
	Y = 0;
	Z = (sizeof(lista)/sizeof(lista[0]))-1;
	M = (Y+Z)/2;
	cout<<"Busqueda binaria: \n"<<endl;
	cout<<"--Prueba de escritorio--"<<endl;
	cout<<"Y\tZ\tM\t"<<endl;
	cout<<Y<<"\t"<<Z<<"\t"<<Z<<"\t";
	for(int i= Y;i<Z;i++){
		cout<<lista[i]<<" ";
	}
	cout<<endl;
	while(M!=Y && M!=Z){
		if(lista[M] > valorBuscado){
			Z = M-1;
			M = (Y+Z)/2;
		}else if(lista[M] < valorBuscado){
			Y = M +1;
			M = (Y+Z)/2;	
		}
		cout<<Y<<"\t"<<Z<<"\t"<<M<<"\t";
		for(int i= Y;i<Z+1;i++){
			cout<<lista[i]<<" ";
		}
		cout<<endl;
		
	}
	cout<<"Resultado: "<<endl; 
	cout<<"Y\t"<<"M\t"<<"Z\t"<<endl;
	cout<<Y<<"\t"<<M<<"\t"<<Z<<"\t\n"<<endl;
	cout<<"lista[Y]:\t"<<"lista[M]:\t"<<"lista[Z]:\t"<<endl;
	cout<<lista[Y]<<"\t\t"<<lista[M]<<"\t\t"<<lista[Z]<<"\t"<<endl;
	return 0;
}


