/* 
* Proyecto Planta Toyota
* Adrian Marquez Nunez
* A01707721
* 29/11/2023
*/

//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <string>
//Para implementar objetos tipo Modelo, Produccion y Ganancias
#include "Modelo.h"
//Para implementar objetos tipo Work
#include "Work.h"

/**Proyecto clase programacion orientada a objetos, simula una planta de autos Toyota
*Capturando la produccion y venta de diferentes autos, asi como sus empleados
*/

//Menu inicial
void menu(){
    std::cout << "Que quieres consultar: " << std::endl;
    std::cout << "1. Produccion" << std::endl;
    std::cout << "2. Trabajadores" << std::endl;
    std::cout << "3. Ganancias" << std::endl;
    std::cout << "4. Salir" << std::endl;
}

//Menu 1 en caso de que se seleeccion la opcion 1 del menu inicial
void menu_1(){
    std::cout << "1. Produccion Prius" << std::endl;
    std::cout << "2. Produccion Corolla" << std::endl;
    std::cout << "3. Produccion Tacoma" << std::endl;
    std::cout << "4. Producir autos" << std::endl;
    std::cout << "5. Regresar" << std::endl;
}

//Menu 1_1 en caso de que se seleeccion la opcion 4 del menu 1
void menu_1_1(){
    std::cout << "1. Producir autos Prius" << std::endl;
    std::cout << "2. Producir autos Corolla" << std::endl;
    std::cout << "3. Producir autos Tacoma" << std::endl;
}

//Menu 2 en caso de que se seleeccion la opcion 2 del menu inicial
void menu_2(){
    std::cout << "1. Trabajdor_1" << std::endl;
    std::cout << "2. Trabajador_2" << std::endl;
    std::cout << "3. Trabajador_3" << std::endl; 
    std::cout << "4. Regresar" << std:: endl;   
}

//Menu 3 en caso de que se seleeccion la opcion 3 del menu inicial
void menu_3(){
    std::cout << "1. Ganancias Hilux" << std::endl;
    std::cout << "2. Ganancias Camry " << std::endl;
    std::cout << "3. Ganancias Avanza" << std::endl;
    std::cout << "4. Regresar" << std::endl;
}

/**Este proyecto simula una planta de manufactura de vehiculos Toyota, 
*con clases que permiten proyectar la manufactura y venta de autos, asi como la asignacion y paga de trabajadores
*/
int main(){
    //Variables bool para que se siga proyectando el menu
    bool cont_0=true, cont_1=true, cont_2=true, cont_3=true;
    //Variable int para elegir que accion del menu realizar
    int sel_0=0, sel_1=0, sel_1_1=0, sel_2=0, sel_3=0;
    //Se crean 3 objetos de la clase Produccion
    Produccion Prius("Prius",40,65,15);
    Produccion Corolla("Corolla",67,70,2);
    Produccion Tacoma("Tacoma",15,20,5);
    //Se crean 3 objetos de la clase Work
    Work W1("John",45,1);
    Work W2("Mike",57,2);
    Work W3("Chris",32,3);
    //Se asignan los objetos tipo Work a los objetos Produccion
    Prius.set_worker(W1);
    Corolla.set_worker(W2);
    Tacoma.set_worker(W3);
    //Se crean 3 objetos de la clase Ganancias
    Ganancias Hilux("Hilux",14,500000,250000,2);
    Ganancias Camry("Camry",7,400000,200000,3);
    Ganancias Avanza("Avanza",12,300000,175000,5);
    //Ciclo para que se siga corriendo el sistema mientras no se elija la opcion 4. Salir
    while(cont_0==true){
        cont_0=true;
        cont_1=true;
        cont_2=true;
        cont_3=true;
        //Impresion menu inicial
        menu();
        //Seleccionar opcion
        std::cout << "Selecciona: ";
        std::cin >> sel_0;
        std::cout << std::endl;
        //Condicional si se elige la opcion 1. Produccion
        if(sel_0==1){
            //Ciclo para que se siga corriendo el sistema mientras no se elija la opcion 5. Regresar
            while(cont_1==true){
                //Impresion menu 1
                menu_1();
                //Seleccionar opcion
                std::cout << "Selecciona: ";
                std::cin >> sel_1;
                std::cout << std::endl;
                //Condicional si se elige la sub-opcion 1. Produccion prius
                if(sel_1==1){
                    /**Imprime le meta de produccion junto con el modelo e inventario de autos,
                    *asi como el tiempo y la tasa de produccion necesaria, finalmente los datos del trabajador (Objeto Prius)
                    */ 
                    std::cout << "Para la meta de produccion de: " << Prius.get_goal() << " " << Prius.get_modelo() << std::endl;
                    std::cout << "Se cuenta con: " << Prius.get_inv() << " autos en inventario" << std::endl;
                    std::cout << "En un lapso de: " << Prius.get_t() << " dias" << std::endl;
                    std::cout << "La tasa de autos diarios a producir para cumplir la meta es: " << Prius.prod_rate() << std::endl;
                    std::cout << Prius.status_worker() << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 2. Produccion Corolla
                if(sel_1==2){
                    /**Imprime le meta de produccion junto con el modelo e inventario de autos,
                    *asi como el tiempo y la tasa de produccion necesaria, finalmente los datos del trabajador (Objeto Corolla)
                    */ 
                    std::cout << "Para la meta de produccion de: " << Corolla.get_goal() << " " << Corolla.get_modelo() << std::endl;
                    std::cout << "Se cuenta con: " << Corolla.get_inv() << " autos en inventario" << std::endl;
                    std::cout << "En un lapso de: " << Corolla.get_t() << " dias" << std::endl;
                    std::cout << "La tasa de autos diarios a producir para cumplir la meta es: " << Corolla.prod_rate() << std::endl;
                    std::cout << Corolla.status_worker() << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 3. Produccion Tacoma
                if(sel_1==3){
                    /**Imprime le meta de produccion junto con el modelo e inventario de autos,
                    *asi como el tiempo y la tasa de produccion necesaria, finalmente los datos del trabajador (Objeto Tacoma)
                    */ 
                    std::cout << "Para la meta de produccion de: " << Tacoma.get_goal() << " " << Tacoma.get_modelo() << std::endl;
                    std::cout << "Se cuenta con: " << Tacoma.get_inv() << " autos en inventario" << std::endl;
                    std::cout << "En un lapso de: " << Tacoma.get_t() << " dias" << std::endl;
                    std::cout << "La tasa de autos diarios a producir para cumplir la meta es: " << Tacoma.prod_rate() << std::endl;
                    std::cout << Tacoma.status_worker() << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 4. Producir autos
                if(sel_1==4){
                    //Impresion menu 1_1
                    menu_1_1();
                    //Seleccionar opcion
                    std::cout << "Selecciona: ";
                    std::cin >> sel_1_1;
                    std::cout << std::endl;
                    //Variables int para la produccion
                    int prod,wh;
                    //Asignar un numero de autos crear
                    std::cout << "Ingresa el numero de unidades a crear: " << std::endl;
                    std::cin >> prod;
                    //Asignar un numero de horas que el empleado trabajo
                    std::cout << "Ingresa las horas que le tomo al trabajador la produccion: " << std::endl;
                    std::cin >> wh;
                    //Condicional si se elige la sub-sub-opcion 1. Producir autos Prius
                    if(sel_1_1==1){
                        //Aumenta el inventario y las horas trabajadas en base a los valores recibidos
                        Prius.produce(prod,wh);
                        //Imprime el nuevo inventario de autos y el nuevo numero de horas trabajadas
                        std::cout << "Se cuenta con: " << Prius.get_inv() << " autos en inventario" << std::endl;
                        std::cout << Prius.status_worker() << std::endl;
                    }
                    //Condicional si se elige la sub-sub-opcion 2. Producir autos Corolla
                    if(sel_1_1==2){
                        //Aumenta el inventario y las horas trabajadas en base a los valores recibidos
                        Prius.produce(prod,wh);
                        //Imprime el nuevo inventario de autos y el nuevo numero de horas trabajadas
                        std::cout << "Se cuenta con: " << Corolla.get_inv() << " autos en inventario" << std::endl;
                        std::cout << Corolla.status_worker() << std::endl;
                    }
                    //Condicional si se elige la sub-sub-opcion 3. Producir autos Tacoma
                    if(sel_1_1==3){
                        //Aumenta el inventario y las horas trabajadas en base a los valores recibidos
                        Tacoma.produce(prod,wh);
                        //Imprime el nuevo inventario de autos y el nuevo numero de horas trabajadas
                        std::cout << "Se cuenta con: " << Tacoma.get_inv() << " autos en inventario" << std::endl;
                        std::cout << Tacoma.status_worker() << std::endl;
                    }
                }
                //Condicional que rompe el ciclo y regresa al menu inicial
                if(sel_1==5){
                    cont_1=false;
                }
            }   
        }
        //Condicional si se elige la opcion 2. Trabajadores
        if(sel_0==2){
            //Ciclo para que se siga corriendo el sistema mientras no se elija la opcion 4. Regresar
            while(cont_2==true){
                //Impresion menu 2
                menu_2();
                //Seleccionar opcion
                std::cout << "Selecciona: ";
                std::cin >> sel_2; 
                std::cout << std::endl;
                //Condicional si se elige la sub-opcion 1. Trabajador_1
                if(sel_2==1){
                    //Imprime los datos del trabajador
                    std::cout << W1.to_string() << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 2. Trabajador_2
                if(sel_2==2){
                    //Imprime los datos del trabajador
                    std::cout << W2.to_string() << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 3. Trabajador_3
                if(sel_2==3){
                    //Imprime los datos del trabajador
                    std::cout << W3.to_string() << std::endl;
                    std::cout << std::endl;
                }
                //Condicional que rompe el ciclo y regresa al menu inicial
                if(sel_2==4){
                    cont_2=false;
                }
            }
        }
        //Condicional si se elige la opcion 3. Ganancias
        if(sel_0==3){
            //Ciclo para que se siga corriendo el sistema mientras no se elija la opcion 4. Regresar
            while(cont_3==true){
                //Impresion menu 3
                menu_3();
                //Seleccionar opcion
                std::cout << "Selecciona: ";
                std::cin >> sel_3;
                std::cout << std::endl;
                //Condicional si se elige la sub-opcion 1. Ganancias Hilux
                if(sel_3==1){
                    /**Imprime el precio de venta, el modelo de auto, el costo de produccion, la tasa de ventas diarias,
                    *y finalmente cuanto tardaria en venderse el inventario total y las ganancias de ello (Objeto Hilux)
                    */
                    std::cout << "Con un costo de: $ " << Hilux.get_cost_v() << " por " << Hilux.get_modelo() << std::endl;
                    std::cout << "Y un costo de produccion de: $ " << Hilux.get_cost_p() <<  std::endl;
                    std::cout << "Con: " << Hilux.get_tasa_ventas() << " ventas diarias" << std::endl;
                    std::cout << printf("Se venderia las unidades de : %i autos en: %.4f dias, con una ganacia de: $%.4f",Hilux.get_inv(), Hilux.sold_out(), Hilux.profit()) << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 2. Ganancias Camry
                if(sel_3==2){
                    /**Imprime el precio de venta, el modelo de auto, el costo de produccion, la tasa de ventas diarias,
                    *y finalmente cuanto tardaria en venderse el inventario total y las ganancias de ello (Objeto Camry)
                    */
                    std::cout << "Con un costo de: $ " << Camry.get_cost_v() << " por " << Camry.get_modelo() << std::endl;
                    std::cout << "Y un costo de produccion de: $ " << Camry.get_cost_p() <<  std::endl;
                    std::cout << "Con: " << Camry.get_tasa_ventas() << " ventas diarias" << std::endl;
                    std::cout << printf("Se venderia las unidades de : %i autos en: %.4f dias, con una ganacia de: $%.4f",Camry.get_inv(), Camry.sold_out(), Camry.profit()) << std::endl;
                    std::cout << std::endl;
                }
                //Condicional si se elige la sub-opcion 3. Ganancias Avanza
                if(sel_3==3){
                    /**Imprime el precio de venta, el modelo de auto, el costo de produccion, la tasa de ventas diarias,
                    *y finalmente cuanto tardaria en venderse el inventario total y las ganancias de ello (Objeto Avanza)
                    */
                    std::cout << "Con un costo de: $ " << Avanza.get_cost_v() << " por " << Avanza.get_modelo() << std::endl;
                    std::cout << "Y un costo de produccion de: $ " << Avanza.get_cost_p() <<  std::endl;
                    std::cout << "Con: " << Avanza.get_tasa_ventas() << " ventas diarias" << std::endl;
                    std::cout << printf("Se venderia las unidades de : %i autos en: %.4f dias, con una ganacia de: $%.4f",Avanza.get_inv(), Avanza.sold_out(), Avanza.profit()) << std::endl;
                    std::cout << std::endl;   
                }
                //Condicional que rompe el ciclo y regresa al menu inicial
                if(sel_3==4){
                    cont_3=false;
                }
            }
        }
        //Condicional que rompe el ciclo y acaba el programa
        if(sel_0==4){
            cont_0=false;
        }
    }
    return 0;
}
