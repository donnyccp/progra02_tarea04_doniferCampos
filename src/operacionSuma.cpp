#include "operacionSuma.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

OperacionSuma::OperacionSuma(ProveedorFormato *proveedorFormato)
{
    this->proveedorFormato = proveedorFormato;
}

string OperacionSuma::Ejecute(string valoresASumar)
{

    string valor = calculoSuma(valoresASumar);

    return proveedorFormato->ObtenerFormato() + valor;
}

string OperacionSuma::calculoSuma(string datosASumar)
{

    string tipoOperacion = "";
    string operando1 = "";
    string esTipoSuma = "";
    string operando2 = "";

    std::istringstream ss2(datosASumar);
    ss2 >> tipoOperacion >> operando1 >> esTipoSuma >> operando2;
    int sumaResultado = stoi(operando1) + stoi(operando2);
    string resultado = "= " + to_string(sumaResultado);
    return resultado; 
}
