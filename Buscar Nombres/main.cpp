#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    string nombre[10];
    string busqueda;
    int i;
    bool bandera = false;
    for(int i=0; i<10; i++)  {
        cout<<"Ingrese Nombre "<<(i+1)<<endl;
        getline (cin, nombre[i]);
    }
    system ("pause");
    system("cls");
    cout<<"Ingrese nombre a buscar"<<endl;
    getline (cin,busqueda);
    for (int i=0; i<10; i++){
    if (nombre[i] == busqueda){
        cout<<"encontrado"<<endl;
        bandera = true;
    }
    }
    if (bandera == false){
    cout<<"no encontrado"<<endl;}
    return 0;
}
