//  Trabajo con varibles y sus tipos:

/*
    Definición:

        Una variable es un espacio reservado en la memoría del ordenador, con un nombre simbólico
        ( identificativo ) que almacena un dato según el tipo de dato específico y con un valor
        el cuál puede variar puede cambiar durante la ejecuación.

    Tipos de variables:

        Números decimales: double y float -> double para números decimales muy grandes,
                                            pero dejando float para los casos habituales.

        Números enteros: int -> si queremos que sean solo los naturales añadimos 'unsigned' delante.

        Carácteres o letras: char

        Condiciones lógicas( true / fasle ): bool

        Cadenas de texto: string

    Declaracion e inicialización de una variable:

        - Sintaxis: 'Tipo' 'Nombre' = 'valor';

        - Solo declaración: 'Tipo' 'Nombre';

        - Modificar el valor: 'Nombre' = 'valor';

*/

#include <iostream>
using namespace std;

int main()
{
    //  Variable de tipo decimal:
    float numDecimal = 10.5;

    //  Variable de tipo entero:
    int numEntero = -5;

    //  Variable de tipo número entero positivo( usando el 'unsigned' deltante del int ):
    unsigned int numEnteroPositivo = 5;

    //  Variable de tipo carácter:
    char caracter = 'l';

    //  Variblae de cadena de texto:
    string nombre = "Xavi";

    //  Variable de tipo booleana o condicion lógica:
    bool condicion = true;

    return 0;
}