#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main()
{

    Arreglo<Computadora> computadoras;
    Computadora c01("Windows", "HP", 12, "Intel");
    Computadora c02("Lunix", "Dell", 14, "Intel");
    Computadora c03("IOS", "Apple", 16, "Intel");
    Computadora c04("Windows", "HP", 12, "Intel");
    Computadora c05("Lunix", "Dell", 14, "Intel");
    computadoras << c01 << c02 << c03 << c04 << c05;
    Computadora *ptr = computadoras.buscar(c01);
    if(ptr!=nullptr)
    {
        cout <<endl<<*ptr<<endl;
    }else
    {
        cout<<"No existe"<<endl;
    }
    Computadora c06("Michael", "Jackson", 12,"Inter");
    ptr = computadoras.buscar(c06); 
    if(ptr!=nullptr)
    {
        cout <<*ptr<<endl;
    }else
    {
        cout<<"No existe"<<endl;
    }
    Computadora c07("Windows", "HP", 12, "Intel");
    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c07);
    cout<<endl;
    if(ptrs.size()>0){
        for(size_t i =0; i<ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p <<endl;
        }
    }else
    {
        cout<< "No existen coincidencias!"<<endl;
    }
    
    return 0;
}