Acitividad C2-2
------------------------------------------------
**Pre-Requisitos**
==
Lo primero que debe de tener en claro que para ejecutar este codigo es necesario tener descargado la ID de C++ 5.0.1 en tu ordenador.
### Instalacion C++ :tw-1f4bf:
                                                Pasos a seguir
1. En tu navegardor de preferencia dirigirte a la pagina oficial de [Dev c++](https://sourceforge.net/projects/orwelldevcpp/ "Dev c++"),
1. Dar click en el boton descargar.
1. Esperar a que se descargue y buscar el objetivo en tu carpeta de descargas en tu ordenador.
1. Hacer click derecho encima de Dev c++, se desplegara una barra.
1. Ejecutas como administrador.
1. Seleccionar la ruta de instalacion del programa, de preferencia se te instalara en documentos, puedes dejarlo asi por defecto.
1. Aceptar terminos y condiciones.
1. Siguiente, Aceptar e instalar.
1. Esperar a que se instale.

> AUTORES :tw-2712:

Joel Alberto Ibarra Saavedra. :tw-1f527:
- Calcular la edad de una persona colocando la fecha actual y colocando la fecha de nacimiento, en formato (aa/mm/dd).
- Mostrar el resultado de la edad de la persona.

Jesus Gregorio Medina Vivas. :tw-1f527:
- Calcular el indice de masa corporar de una persona colocando su peso y colocando su estatura.
- Mostrar el resultado del indice de masa corporal.
- Comparar la respuesta, y verificar, si esta en estado normal u obeso.

Juan David Valdivieso Aguilar. :tw-1f527:
- Realizacion del menu princpial dentro de el archivo principal,cpp.
- Ingreso de los datos personales  y mostrar los datos ingresados.

### Nombre de los archivos usados
-------------------------------------------------
###### Principal.cpp
-------------------------------------------------
                                                     persona joel
La clase que se creo en el otro archivo de llama "persona" y por ende tenemos que hacer el llamado en el archivo principal junto con el objeto que en este caso es "joel".

                                                   joel.ingresar();
Se coloco el nombre del objeto "joel" junto con la funcion "ingresar" **OJO** estos deben estar concatenado con ayuda de un punto ".", esto realiza lo que es - Ingreso de los datos personales.

                                                  joel.mostrar();
Se coloco el nombre del objeto "joel" junto con la funcion "mostrar" **OJO** estos deben estar concatenado con ayuda de un punto ".", esto realiza lo que es 
- Mostrar los datos que ingrese cada usuario.

                                                     joel.ed()
Se coloco el nombre del objeto "joel" junto con la funcion "ed" **OJO** estos deben estar concatenado con ayuda de un punto ".", esto realiza lo que es 
- Calcular la edad de una persona colocando la fecha actual y colocando la fecha de nacimiento, en formato (aa/mm/dd).
- Mostrar el resultado de la edad de la persona.

                                                    joel.mc();
Se coloco el nombre del objeto "joel" junto con la funcion "mc" **OJO** estos deben estar concatenado con ayuda de un punto ".", esto realiza lo que es 
- Calcular el indice de masa corporar de una persona colocando su peso y colocando su estatura.
- Mostrar el resultado del indice de masa corporal.
- Comparar la respuesta, y verificar, si esta en estado normal u obeso.

######Class.h
                                             class perosna(joel)
Esta es la clases que se esta creando en el archivo de Class.h, tambien se crean las variables privadas y publicas las cuales se van a usar en todo el programa.
<a href="https://imgbb.com/"><img src="https://i.ibb.co/zZrtrDH/Captura.png" alt="Captura" border="0"></a>

                                         void (ingresar)(descripcion)
Dentro de esta funcion se encuentra todo el codigo que se realizo junto con los contribuyentes, este codigo sirve para ingresar los datos de la persona.
<a href="https://imgbb.com/"><img src="https://i.ibb.co/QMJq6QC/Captura1.png" alt="Captura1" border="0"></a>

                                        void (mostrar)(descripcion)
Dentro de esta funcion se encuentra todo el codigo que se realizo junto con los contribuyentes, este codigo sirve para mostrar los datos de la persona.
<a href="https://imgbb.com/"><img src="https://i.ibb.co/ZMqJdyW/Captura2.png" alt="Captura2" border="0"></a>

                                               void (ed)(descripcion)
Dentro de esta funcion se encuentra todo el codigo que se realizo junto con los contribuyentes, este codigo sirve para el calculo de la edad de la persona.
<a href="https://imgbb.com/"><img src="https://i.ibb.co/zVpxtVL/Captura3.png" alt="Captura3" border="0"></a>

                                                    void mc()
Dentro de esta funcion se encuentra todo el codigo que se realizo junto con los contribuyentes, este codigo sirve para el calculo del indice de la masa corporal de una persona.
<a href="https://ibb.co/1nyP8vz"><img src="https://i.ibb.co/MhwtM2B/Captura4.png" alt="Captura4" border="0"></a>
# Ejecución
Al ejecutar el programa se nos abrira el siguiente menu con varias opciones, dependiendo la opcion que desee va a colocar el numero cuando le pida que coloque el numero.
<a href="https://ibb.co/h22Ryg3"><img src="https://i.ibb.co/nQQsbwx/Captura5.png" alt="Captura5" border="0"></a>
Se escoge la primera opcion porque es donde se va a colocar los datos de la persona y estos datos quedaran guardados en varibles, y ellos nos ayudaran en las siguientes opciones a continuacion el codigo en ejecución.
<a href="https://ibb.co/YRmRnqb"><img src="https://i.ibb.co/yftfvbV/Captura6.png" alt="Captura6" border="0"></a>
Se escoge la segunda opcion para poder saber la edad de la persona colocando la fecha actual en formato (aa-mm-dd) y asi mismo con le fecha de su nacimiento en el mismo formato (aa-mm-dd), a continuacion el codigo en ejecucion.
<a href="https://ibb.co/7Y5WJF1"><img src="https://i.ibb.co/vwGPx8j/Captura7.png" alt="Captura7" border="0"></a>
Se le coloca la opcion 1 para que se repita el programa y se queden guardadas los valores de peso y altura y en el menu se escoge la opcion 3 por ejemplo, en la opcion uno nosotros colocamos que el peso igual a 90 y la altura es igual a 1.65 estos valores ya quedan guardadas en las variables correspondientes y al momento de escoger la opcion 3 ya nos rebota el valor directo del valor del indice de la masa corporal.
<a href="https://ibb.co/Trcx3ps"><img src="https://i.ibb.co/ZNdpDt0/Captura8.png" alt="Captura8" border="0"></a>

