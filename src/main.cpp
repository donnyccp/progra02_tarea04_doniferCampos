#ifndef UNIT_TEST

#include "procesadorInstrucciones.h"
#include "identificadorOperaciones.h"
#include "operacionHola.h"
#include "operacionSuma.h"

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

#include "proveedorFormato.h"
#include "proveedorFormatoDesdeStream.h"

using namespace std;

int main()
{
    string tipoOperacion = "";
    string lineaDeOperacion = "";
    string operando1 = "";
    string esTipoSuma = "";
    string operando2 = "";

    try
    {
        // Inicialización
        // Configuración de la inyección de dependencias
        map<string, Operacion *> operaciones{};

        std::ifstream ifsOperaciones("formato.ini", std::ifstream::in);

        if (!ifsOperaciones.is_open())
        {
            std::cerr << "Error leyendo archivo formato.ini" << std::endl;
            return -1;
        }

        while (std::getline(ifsOperaciones, lineaDeOperacion))
        {

            std::istringstream ss(lineaDeOperacion);
            ss >> tipoOperacion >> operando1 >> esTipoSuma >> operando2;
            

            if (tipoOperacion == "Hola" || tipoOperacion == "Hello")
            {

                istringstream ifs(lineaDeOperacion);
                ProveedorFormato *proveedorFormato = new ProveedorFormatoDesdeStream(&ifs);

                OperacionHola *operacionHola = new OperacionHola(proveedorFormato);
                operaciones.insert(std::pair<string, Operacion *>("hola", operacionHola));

                IdentificadorOperacionesBase *identificadorOperaciones = new IdentificadorOperaciones(operaciones);

                ProcesadorInstrucciones *procesador = new ProcesadorInstrucciones(identificadorOperaciones);
                string resultado = procesador->Procese("hola", "todos");

                cout << "Resultado: " << resultado << endl;
                ifs.clear();
            }
            else
            {
                istringstream ifs(lineaDeOperacion);
                ProveedorFormato *proveedorFormato = new ProveedorFormatoDesdeStream(&ifs);

                OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);
                operaciones.insert(std::pair<string, Operacion *>("Suma", operacionSuma));

                IdentificadorOperacionesBase *identificadorOperaciones = new IdentificadorOperaciones(operaciones);

                ProcesadorInstrucciones *procesador = new ProcesadorInstrucciones(identificadorOperaciones);
                string resultado = procesador->Procese(tipoOperacion, lineaDeOperacion);

                cout << "Resultado: " << resultado << endl;
                ifs.clear();
            }
        }

        // Cerrar archivo de entrada
        ifsOperaciones.close();
    }
    catch (char const *exception)
    {
        cerr << "Error: " << exception << endl;
    }

    return 0;
}

#endif