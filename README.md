
# progra02_tarea03_doniferCampos
Programación 02- Tarea 3_Parte2-Donifer Campos Parra <br />
Programado en Windows10- Visual Studio Code 1.62.1 <br />
mkdir obj <br />
g++ -std=c++17 -stdlib=libc++ -g ./src/*.cpp -o ./obj/tarea3 <br /> 


Segunda aplicación lee de un archivo binario personas.dat y
satisface los siguientes requerimientos<br />
&nbsp;&nbsp;- Debe de poder leer la persona en cualquier posición dentro del archivo sin recorrer secuencialmente el archivo.<br />
&nbsp;&nbsp;El usuario final indica  la posicion de la persona a buscar dentro del archivo binario
&nbsp;&nbsp;&nbsp;&nbsp;- Debe de poder manejar las siguientes excepciones:<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Excepción de que el archivo no se pudo abrir<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Excepción de que la persona solicitada no es válida<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;;&nbsp;&nbsp;&nbsp;- Se puede revisar si el ID es 0 después de leer<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Excepción si no se pudo leer una persona<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;;&nbsp;&nbsp;&nbsp;- Si el archivo tiene 15 personas y se pidió la persona 20, por
ejemplo.<br />

Para que este programa se ejecute eficazmente es necesario que siga los siguientes requerimientos especiales:<br />
&nbsp;&nbsp;&nbsp;1- Escriba correctamente el nombre del archibo binario a leer.<br />
&nbsp;&nbsp;&nbsp;2- Debe indicar la posicion de la persona a buscar en el archivo binario. El ID de la persona dentro del archivo no puede ser un valor igual o menor a cero, esto se considera invalido.<br />
&nbsp;&nbsp;&nbsp;3- La ubicación del archivo binario debe ser correcta asi como el nombre de este<br />

 Este programa cuenta con 3 clases. La clase principal main gestiona la instancia a la clase lectorDeBinario. La clase lectorDeBinario gestiona la lectura de un archivo binario con el nombre de "personas.dat" que contiene los datos de id, nombre, apellido y correo de cada persona (libro), para ello realiza una instancia a la clase libro. La clase libro gestiona los datos de las personas en un arreglo de caracteres denominado libro. <br />
 Para comprobar el correcto funcionamiento del programa y sus metodos este programa cuenta con pruebas unitarias que se ejecutan usando GoogleTets, tome las previsiones necasarias para ejecuatar las pruebas, mas informacion en https://google.github.io/googletest/.<br />

Al final de la ejecución se informa en la terminal los datos de la persona encontrada. <br />