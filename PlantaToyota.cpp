//Adrian Marquez Nunez A01707721
//Proyecto main
//_______________________
//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <string>
#include "Modelo.h"
#include "Work.h"

//Este proyecto simula una planta de manufactura de vehiculos Toyota, con clases que permiten proyectar la manufactura y venta de autos, y la paga de trabajadores
int main(){
    //Objeto de la clase Work que simula un obrero
    Work Obrero_1;
    //Declaracion de atributos de nombre (John), horas trabajadas (40), tipo de puesto (1)
    Obrero_1.set_name("John");
    Obrero_1.set_hours(40);
    Obrero_1.set_job(1);
    std::cout << "Paga " << Obrero_1.get_name() << " $" << Obrero_1.pay() << " despues de " << Obrero_1.get_hours() << " horas" << std::endl;
    //Objeto de la clase Produccion que simula la demanda de manufactura del vehiculo Prius
    //atributos de modelo (Prius), unidades a producir (48), unidades actuales (20), lapso de dias (15)
    Produccion Prius("Prius",20,48,15);
    std::cout << "Para la meta de produccion de: " << Prius.get_meta() << " " << Prius.get_modelo() << std::endl;
    std::cout << "Se cuenta con: " << Prius.get_inv() << " autos en invenatrio" << std::endl;
    std::cout << "En un lapso de: " << Prius.get_t() << " dias" << std::endl;
    std::cout << "La tasa de autos diarios a producir para cumplir la meta es: " << Prius.tasa_prod() << std::endl;
    //Asignar un obrero a la produccion
    Prius.set_worker(Obrero_1);
    //Producir 20 unidades y se agregan 8 horas de trabajo al obrero
    Prius.producir(20,8);
    std::cout << "Se cuenta con: " << Prius.get_inv() << " autos en invenatrio" << std::endl;
    std::cout << "Paga " << Prius.get_worker().get_name() << " $" << Prius.get_worker().pay() << " despues de " << Prius.get_worker().get_hours() << " horas" << std::endl;
    //Objeto de la clase Ganancias que simula la venta del vehiculo Corolla
    //atributos de nombre del modelo (corolla), unidades en inventario (6), precio de venta (399000), precio de produccion (150000), unidades vendidad por dia(1)
    Ganancias Corolla("Corolla",6,250000,100000,2);
    std::cout << "Con un costo de: $ " << Corolla.get_cost_v() << " por " << Corolla.get_modelo() << std::endl;
    std::cout << "Y un costo de produccion de: $ " << Corolla.get_cost_p() <<  std::endl;
    std::cout << "Con: " << Corolla.get_tasa_ventas() << " ventas dias" << std::endl;
    std::cout << printf("Se venderia el inventario de: %i autos en: %i dias, con una ganacia de: $%4f",Corolla.get_inv(), Corolla.sold_out(), Corolla.profit(6)) << std::endl;

    return 0;
}
