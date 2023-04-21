#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
void quicksort(double [],int, int);
void escribir(double [],int );
int dimension;
int main(){
    int nro;
    cout<<"ingrese la dimension del arreglo"<<endl<<endl;
    cin>>nro;
    double B[nro];
    dimension = nro;
    cout<<"ingrese elementos del arreglo"<<endl;
    for(int i=0;i<nro;i++){
        cout<<"B["<<i<<"]= ";
        cin>>B[i];
        
    }
    cout<<"i\t"<<"j\t"<<"pivote\t"<<"lista"<<endl;
    quicksort(B,0,nro-1); 
    escribir(B,nro);
    return 0;
}
void imprimirLista(double A[],int primero,int ultimo){
    for(int i=0;i<ultimo;i++){
        cout<<A[i]<<" ";
    }
}

//QUICKSORT 
void quicksort(double A[],int primero,int ultimo) //A valor declarado nuevo, primero valor declarado del primer numero, ultimo, valor del ultimo numero
{
    int central,i,j; //central valor de mitad; i; j posiciones
    double pivote; //primer numero para empezar a arreglar
    central=(primero+ultimo)/2; //central= la mitad del primer y ultimo numero ejem. 1 + 5 /2 = 3
    pivote=A[central]; //pivote= A[3]
    i=primero;//i=primero ---> i=1;
    j=ultimo;//j=ultimo ---> j=5;
    //Imprimir i,j,pivote y lista
    cout<<i<<"\t"<<j<<"\t"<<A[central]<<"\t";//Imprimr con variables modificandose en cada paso
    imprimirLista(A,primero,dimension);//funcion para imprimir el arreglo de datos ordenandose
    cout<<endl;
    do{
        while(A[i]<pivote){
			i++;
		}//mientras A[1] sea menor que A[3]; 1 ++
            
        while(A[j]>pivote){
			j--;
		}//mientras A[5]>A[3]; 5--
            
        if(i<=j){
            double temp; 
            temp=A[i];  //temp=A[1];
            A[i]=A[j]; /*intercambia A[i] con A[j] */ //-------> A[i]=A[5]
            A[j]=temp; //A[j] = temp ---> A[j] = A[1]
                
            i++;
            j--;
            cout<<i<<"\t"<<j<<"\t"<<A[central]<<"\t";//Imprimir i,j,pivote y lista
            imprimirLista(A,primero,dimension);//funcion para imprimir el arreglo de datos ordenandose
            cout<<endl;
            if(i>=j){
				cout<<endl;
			}
        }
	}while(i<=j); 
	
    if(primero<j){
		quicksort(A,primero,j); 
	}
    if(i<ultimo){
		quicksort(A,i,ultimo);
	}
}

void escribir(double A[], int n){
    cout<<endl<<"ARREGLO ORDENADO POR METODO DE QUICKSORT "<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<setw(5);
    }
    cout<<endl<<endl;
}
