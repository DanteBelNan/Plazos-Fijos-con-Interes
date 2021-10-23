#include <iostream>
using namespace std;

int main() {
    double mes = 1;
    double meses;
    double interes;
    double plataxmes;
    double platatotal;
    double plataultmes = 0;
    double interesgan;
    cout<<"Ingrese el interes mensual"<<endl;
    cin>>interes;
    cout<<"Ingrese cuanta plata ingresara por mes"<<endl;
    cin>>plataxmes;
    cout<<"Ingrese cuantos meses desea calcular"<<endl;
    cin>>meses;
    while (mes<=meses){
         platatotal = plataultmes+plataxmes;
         platatotal = platatotal+platatotal*interes/100;
         plataultmes = platatotal;
         interesgan = plataultmes*interes/100;
        cout<<"En el mes "<<mes<<" tendre "<<platatotal<<" pesos"<<endl;
        cout<<"Ese mes, sacara un interes de "<<interesgan<<" pesos"<<endl;
        mes++;

    }
        return 0;
}
