#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cctype>
#include <string.h>
using namespace std;
int main () {
    char nombre [30];
    char apellido [30];
    int eleccion;
    int apagador;
    int valor1,valor2;
    int datitos[3][4]= {
        {1,2,3,4,},
        {5,6,7,8},
        {9,10,11,12}
    };
    vector<float> datos(9);
     cout << "bienvenido a nuestro sistema" <<endl;
    cout << "por favor ingrese su nombre" <<endl;
    cin.getline(nombre, 40);
    cin.getline(apellido, 40 );
    cin.ignore();
    strcat(nombre, apellido);
    do
    {
        cout << "muy bien " << nombre << " elige una opcion de que hacer" <<endl;
        do {
        cout << "elige 1 si quieres usar la calculadora, elige 2 si quieres promediar datos, elige 3 si quieres visualizar ciertos datos" <<endl;
        cin >> eleccion;
        if ((eleccion <1) ^ (eleccion > 3))
        {
            cout << "opcion invalida intente de nuevo por favor" <<endl;
        }
        } while ((eleccion <1) ^ (eleccion > 3));
        switch (eleccion)
        {
        case 1:
            cout << "por favor introduzca los valores que quiere utilizar" <<endl;
            cout << "por favor introduzca el valor 1" <<endl;
            cin >> valor1;
            cout << "por favor introduzca el valor 2" <<endl;
            cin >> valor2;
            cout << "elija la operacion 1 si + 2 si - 3 si * 4 si /" <<endl;
            int eleccion2;
            cin >>eleccion2;
            int resultado;
            switch (eleccion2)
            {
            case 1:
                resultado = valor1 + valor2;
                cout << "el resultado de la operacion es " << resultado <<endl;
                break;
            case 2:
                resultado = valor1 - valor2;
                cout << "el resultado de la operacion es " << resultado <<endl;
                break;
            case 3:
                resultado = valor1 * valor2;
                cout << "el resultado de la operacion es " << resultado <<endl;
                break;
            case 4:
                resultado = valor1 / valor2;
                cout << "el resultado de la operacion es " << resultado <<endl;
                break;
            default:
                break;
            }
            break;
        case 2:
            int suma;
            cout << "por favor elija datos a promediar" <<endl;
            for (int i = 0; i < 9; i++)
            {
                cout << "por favor ingrese el dato " << i+1 <<endl;
                cin >> datos[i];
                suma += datos[i];
            }
            int promedio;
            promedio += suma/9 ;
            cout << "el promedio es igual a " << promedio <<endl;
            break;
        case 3:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; i < 4; i++)
                {
                    cout << datitos[i][j] <<endl;
                }
            }
            
            break;
        default:
            break;
        }
        cout << "quieres volver a usar el programa? presiona 1 para si y 0 para no" <<endl;
        cin >> apagador;
        if (apagador == 0)
        {
            break;
        }
    } while (apagador == 1);
    
    
}