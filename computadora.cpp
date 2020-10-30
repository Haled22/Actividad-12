#include "computadora.h"

Computadora::Computadora()
{
    
}

Computadora::Computadora(const string &sistemaOperativo,
                        const string &marca,
                        int ram, const string &procesador)
{
    this->sistemaOperativo = sistemaOperativo;
    this->marca = marca;
    this->ram =ram;
    this->procesador = procesador;
}

void Computadora::setSistemaOperativo(const string &c)
{
    sistemaOperativo = c;
}
string Computadora::getSistemaOperativo()
{
    return sistemaOperativo;
}
void Computadora::setMarca(const string &c)
{
    marca = c;
}
string Computadora::getMarca()
{
    return marca;
}
void Computadora::setRam(int c)
{
    ram = c;
}
int Computadora::getRam()
{
    return ram;
}
void Computadora::setProcesador(const string &c)
{
    procesador = c;
}
string Computadora::getProcesador()
{
    return procesador;
}