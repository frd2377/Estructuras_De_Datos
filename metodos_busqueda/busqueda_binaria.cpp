#include <iostream>
using namespace std;

int main(){
	int valorBuscado = 30;
	int Y,M,Z;
	int lista[] = {10,20,30,40,50,60,70,80};
	Y = 0;
	Z = (sizeof(lista)/sizeof(lista[0]))-1;
	M = (Y+Z)/2;
	cout<<"Y\tZ\tM\t"<<endl;
	cout<<Y<<"\t"<<Z<<"\t"<<Z<<endl;
	for(int i= Y;i<M;i++){
		cout<<lista[i]<<endl;
	}
	cout<<endl;
	while(M!=Y && M!=Z){
		if(lista[M] > valorBuscado){
			Z = M-1;
			M = (Y+Z)/2;
			cout<<Y<<"\t"<<Z<<"\t"<<Z<<"\t";
			for(int i= Y;i<M;i++){
				cout<<lista[i];
			}
			cout<<endl;
		}else if(lista[M] < valorBuscado){
			Y = M +1;
			M = (Y+Z)/2;
			cout<<Y<<"\t"<<Z<<"\t"<<Z<<endl;
			for(int i= Y;i<M;i++){
				cout<<lista[i];
			}
			cout<<endl;
		}
	}
	
	return 0;
}























