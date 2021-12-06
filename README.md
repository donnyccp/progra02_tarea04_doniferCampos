
# progra02_tarea03_doniferCampos
Programación 02- Tarea 4-Donifer Campos Parra <br />
Programado en Windows10- Visual Studio Code 1.62.1 <br />
mkdir obj <br />
g++ -std=c++17 -stdlib=libc++ -g ./src/*.cpp -o ./obj/tarea4 <br /> 



Se implementa una nueva operación que permita recibir de id de método "suma" y el valor represente una suma de enteros. La operación deberá recibir un string "a + b" donde a y b son enteros (ojo el espacio entre a, el + y la b) y devolver en un string el entero con el resultado.<br />
Adicionalmente, se implementa un método "hello" para que responda "Hello valor" sin implementar una operación nueva. El formato de mensaje del método "hello" debe ser  connfigurable por el usuario sin tener que recompilar el código.<br />

Para que este programa se ejecute eficazmente es necesario que siga los siguientes requerimientos especiales:<br />
&nbsp;&nbsp;&nbsp;1- Escriba correctamente el nombre del archibo .ini a leer.<br />
&nbsp;&nbsp;&nbsp;2- Debe indicar al pricipio de cada linea que tipo de operacion se va a ejecutar seguido de un espacio, ejemplo "Suma 1 + 3".<br />
&nbsp;&nbsp;&nbsp;3- Debe dejar espacios entre cada elemento de las oraciones, ejemplo "Suma 1 + 3".<br />    
&nbsp;&nbsp;&nbsp;4- Linea que no contegan las operacioens "Hola", "Hello" o "Suma" se reconeceran como excepción del tipo "Operación no existe"<br />  
&nbsp;&nbsp;&nbsp;5- La ubicación del archivo .ini debe ser correcta asi como el nombre de este<br />

 En este programa se agegua una nueva clase, OperacionSuma, a las clases ya existentes en el programa. La clase operacionSuma, recibe procesa los datos de forma que realiza una suma con dos operandos aportador por el usuario final <br />
 Para comprobar el correcto funcionamiento del programa y sus metodos este programa cuenta con pruebas unitarias que se ejecutan usando GoogleTests, tome las previsiones necasarias para ejecuatar las pruebas, mas informacion en https://google.github.io/googletest/.<br />

Al final de la ejecución se imprime en la terminal los datos procesados de los tipos de operacion. <br />