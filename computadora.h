#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora{
private: 
    string sistemaOperativo;
    string marca;
    int ram;
    string procesador;
public:
    Computadora();
    Computadora(const string &sistemaOperativo,
                const string &marca,
                int ram,
                const string &procesador
                );
    void setSistemaOperativo(const string &c);
    string getSistemaOperativo();
    void setMarca(const string &c);
    string getMarca();
    void setRam(int c);
    int getRam();
    void setProcesador(const string &c);
    string getProcesador();

    bool operator==(const Computadora& c){
        return sistemaOperativo == c.sistemaOperativo;
    }
    bool operator==(const Computadora& c) const{
        return sistemaOperativo == c.sistemaOperativo;
    }


    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(19)<< c.sistemaOperativo;
        out << setw(18)<<c.marca;
        out << setw(18)<<c.ram;
        out << setw(18)<<c.procesador;
        out << endl;

        return out;
    } 
    
    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout<<"Sistema Operativo: ";
        getline(cin, c.sistemaOperativo);
        cout<<"Marca: ";
        getline(cin, c.marca);
        cout<<"Procesador: ";
        getline(cin, c.procesador);
        cout<<"Ram: ";
        cin>>c.ram;
        

        return in;
    }


};


#endif