#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> a;
    a.insertar_inicio("H");
    a.insertar_inicio("A");
    a.insertar_final("L");
    a.insertar_final("E");
    for(size_t i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    a.insertar("H",2);
    for(size_t i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
    a.eliminar_inicio();
    a.eliminar_final();
    a.eliminar(1);
    cout<<endl;
    for(size_t i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }


    return 0;
}