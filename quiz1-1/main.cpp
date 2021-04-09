#include <iostream>

using namespace std;

int main()
{
    unsigned short int numero=0, copia=0;//0 a 65535
    int suma=0 , contador=0 , pot1 = 0 , pot2 = 0;
    cout << "Este programa hace la suma de los digitos"<<endl;
    cout << "de un numero entero positivo menor que 65535 proporcionado por el usuario elevados a si mismos"<<endl;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    copia=numero;
    for(int cifra=5;cifra>=1;cifra--){
        if (cifra==5){
            contador=0;
            while(copia-10000>0){
                copia = (copia-10000);
                contador++;
            }
            pot1=contador;
            pot2=pot1;
            while(contador>1){
                pot1=pot1*pot2;
                contador--;
            }
        }
        else if(cifra==4){
            contador=0;
            while(copia-1000>0){
                copia = (copia-1000);
                contador++;
            }
            pot1=contador;
            pot2=pot1;
            while(contador>1){
                pot1=pot1*pot2;
                contador--;
            }
        }
        else if(cifra==3){
            contador=0;
            while(copia-100>0){
                copia = (copia-100);
                contador++;
            }
            pot1=contador;
            pot2=pot1;
            while(contador>1){
                pot1=pot1*pot2;
                contador--;
            }
        }
        else if(cifra==2){
            contador=0;
            while(copia-10>0){
                copia = (copia-10);
                contador++;
            }
            pot1=contador;
            pot2=pot1;
            while(contador>1){
                pot1=pot1*pot2;
                contador--;
            }
        }
        else if(cifra==1){
            contador=0;
            while(copia-1>=0){
                copia = (copia-1);
                contador++;
            }
            pot1=contador;
            pot2=pot1;
            while(contador>1){
                pot1=pot1*pot2;
                contador--;
            }
        }
        suma = suma + pot1;
    }
    cout << "La suma de cada uno de los digitos elevados a si mismos del numero "<<numero <<" es "<<suma<<endl;
    return 0;
}
