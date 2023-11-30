# Proyecto-A01707721-TC1033
Este proyecto es para la clase de Programación Orientada a Objetos
## Planta Toyota Contexto
Este proyecto simula una planta de manufactura automotriz de la marca Toyota, y como planta de manufactura se incluyen clases y funciones para establecer metas de producción de modelos específicos
así como los números necesarios para cumplir dichas metas, además de proyectar ganancias en base a las unidades vendidas de dichos modelos de vehículo, y finalmente la paga de los diferentes trabajadores
en base a su jerarquía y horas trabajadas en la planta.
## Funcionalidad
El código imprime el menú
Que quieres consultar: 
1. Producción
2. Trabajadores
3. Ganancias
4. Salir
A partir de ahí el usuario puede seleccionar su opción ya abrirse camino a través de varios sub-menús,
si se elige producción es posible que el usuario aumente el inventario de autos y las horas de los trabajadores
## Consideraciones
Programa hecho en C++ standard, con una interfaz del usuario en el idioma español
- Compilar en terminal con g++ PlantaToyota.cpp Modelo.h Work.h
- Windows a.exe
- Linux ./a.out
## Correcciones
Version github 1.0: Se creó el repositorio en Github con los archivos PlantaToyota.cpp siendo este el main,
y los archivos Produccion.h, Ganacias.h y Work.h que representaban las 3 clases del programa.
**Subcompetencias Implementa SICT0303A:** Cada una de las respectivas clases se creó con sus respectivos métodos y atributos  
así como sus constructores, setters y getters para sus atributos privados (**Modelo.h Produccion lineas 71-194, Modelo.h Ganancias líneas 196-295, Work.h Work líneas 12-127**)
todo esto llamado desde el main (**PlantaToyota.cpp main lineas 59-274**). 
**Subcompetencias Estándares SICT0401A y Tecnologías SEG0702A:** Se creó el Readme y los diferentes archivos en un repositorio de github.

Version github 2.0: No se modificó el código, pero si se implementó un png conteniendo el diagrama de clases tipo UML
**Subcompetencias Toma de decisiones SICT0302A:** El UML cuenta con todas los atributos y métodos de clases actuales, así como métodos, atributos y clases que se implementarán en futuros avances.
El UML resuelve el problema de repetición de atributos y métodos a través de clases. Además de incluir herencia y agregación entre clases.

Versión github 3.0: Se implementó lo realizado en el UML en el código, se creó la clase padre Modelo, que hereda a las clases Producción y Ganancias.
Se colocaron las 3 clases en un archivo que sustituyó a Produccion.h por Modelo.h y se borró del repositorio Ganancias.h.
Se implementó en la clase producción un atributo de tipo Work para representar la agregación.
**Subcompetencias Implementa SICT0303A:** Se siguió la herencia y agregación previamente agregada en el diagrama de clases (**Modelo.h Produccion lineas 71-194, Modelo.h Ganancias linea 197**)
La herencia evita la repetición de atributos y métodos a través de las clases Producción y Ganancias (**Modelo.h Modelo líneas 14-69**)
Las clases tienen una relación orgánica y lógica entre ellas.

Version github 4.0: Se modificó completamente el main para permitir interacción con el usuario (**PlantaToyota.cpp main lineas 16-274**).
Además de agregar comentarios para explicar los métodos, finalmente se actualizó el UML y Readme, para que estuvieran actualizados a la versión final del código.
**Subcompetencias Toma de decisiones SICT0302A:** Se actualizó el UML para que incluyera todos los métodos y atributos de cada clase.
**Subcompetencias Estándares SICT0401A:** Se agregaron los comentarios en el formato solicitado.
**Tecnologías SEG0702A:** Cada versión del código fue escrita sobre la versión anterior para generar un historial de versiones.
