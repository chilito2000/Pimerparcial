#include <iostream>
using namespace std;

int main() {

    int tabla = 0;
    int multiplicador = 0;
    int numero;
    int dia;

    do {
        cout << "INGRESE UN NUMERO: ";
        cin >> numero;

    } while ((numero < 1) || (numero > 10));

    for (int i = 1; i <= 10; i++) {
        cout << numero << " * " << i << " = " << numero * i << endl;
    }


    for (tabla = 5; tabla <= 9; tabla += 1) {
        cout << "Tabla del " << tabla << ":" << endl;


        for (multiplicador = 1; multiplicador <= 10; multiplicador++) {
            cout << tabla << " x " << multiplicador << " = " << tabla * multiplicador << endl;
        }

        cout << endl;
    }

    switch (dia) {
        case 1:
            cout << "Lunes Dia de Trabajo" ;break;
        case 2:
            cout<< "Martes Dia de Trabajo" ;break;
        case 3:
            cout<<"Miercoles Dia de Trabajo" ; break;
        case 4:
            cout<<"Jueves Dia de Trabajo" ; break;
        case 5:
            cout<<"Viernes Dia de Trabajo" ; break;
        case 6:
            cout<<"Sabado No se Trabaja" ; break;
        case 7:
            cout<<"Domingo No se Trabaja" ; break;


    }
    return 0;


}
