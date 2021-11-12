
# progra02_tarea03_doniferCampos
Programación 02- Tarea 3_Parte2-Donifer Campos Parra <br />
Programado en Windows10- Visual Studio Code 1.62.1 <br />
mkdir obj <br />
g++ -std=c++17 -stdlib=libc++ -g ./src/*.cpp -o ./obj/tarea1 <br /> 


Segunda aplicación lee de un archivo binario personas.dat y
satisface los siguientes requerimientos<br />
&nbsp;&nbsp;- Debe de poder leer la persona en cualquier posición dentro del archivo sin recorrer secuencialmente el archivo.<br />
&nbsp;&nbsp;&nbsp;&nbsp;- Debe de poder manejar las siguientes excepciones:<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Excepción de que el archivo no se pudo abrir<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Excepción de que la persona solicitada no es válida<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Se puede revisar si el ID es 0 después de leer<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Excepción si no se pudo leer una persona<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Si el archivo tiene 15 personas y se pidió la persona 20, por
ejemplo.<br />