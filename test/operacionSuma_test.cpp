#include <gtest/gtest.h>
#include <string>
#include "./../src/operacionSuma.h"
#include "proveedorFormatoPrueba.h"

using namespace std;

namespace {
    TEST(OperacionSuma_Test, Test_Formato_Aplicado) {

        ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Suma 2 + 69");
        OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);

        string actual = operacionSuma->Ejecute("Suma 2 + 69");
        string esperado = "Suma 2 + 69= 71";

        EXPECT_EQ(esperado, actual);
    }
}