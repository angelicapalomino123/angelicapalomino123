#include <iostream>
using namespace std;

int main(){
    char ubicacion,entradas,precio;
    cout<<"ELIJA UNA UBICACION(G:SI ES GENERAL;P:SI ES PREFERENCIAL;PL:SI ES PLATEA;V:SI ES VIP) ";
    cin>>ubicacion;

    switch(ubicacion){
        case 'V':
        case 'v':
        cout <<"USTED HA ELEGIDO LA UBICACION VIP INCLUYE CAGEOSA ,CERVEZA O AGUA"<<endl;
        cout<<"SELECCIONE OPCION DE UBICACION: ";
        cin>>entradas;

        switch(entradas){
            case '1':
            cout<<"USTED A ELEGIDO LA UBICACION GENERAL";
            break;

            case '2':
            cout<<"USTED A ELEGIDO LA UBICACION PREFERENCIAL";
            break;

            case '3':
            cout<<"USTED A ELEGIDO LA UBICACION PLATEA";
            break;

            case '4':
            cout<<"USTED A ELEGIDO LA UBICACION VIP";
            break;
            default:
            cout<<"OPCION INVALIDA";

            switch(precio){
                case '1':
                cout<<"$50.00";
                break;

                case '2':
                cout<<"$80.00";
                break;

                case '3':
                cout<<"$120.OO";
                break;

                case '4':
                cout<<"$160.00 E INCLUYE GASEOSA,CERVEZA O AGUA";
                break;

                default:
                cout<<"OPCION INVALIDA";
            }
            break;

           
        }

    }

}

        
    



