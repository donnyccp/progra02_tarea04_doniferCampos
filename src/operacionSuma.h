#ifndef OPERACIONSUMA_H
#define OPERACIONSUMA_H

#include "operacion.h"
#include "proveedorFormato.h"
#include <string>
#include <sstream>

using namespace std;

class OperacionSuma : public Operacion {

    ProveedorFormato *proveedorFormato;
    std::istringstream ss2;

    public:
    OperacionSuma(ProveedorFormato *proveedorFormato);

    virtual string Ejecute(string valor);
    string calculoSuma(string datosASumar);

};

#endif