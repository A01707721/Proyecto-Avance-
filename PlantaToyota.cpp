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
    //Objeto de la clase Work que simula obrero_1
    Work Obrero_1;
    //Declaracion de atributos de nombre (John), horas trabajadas (40), tipo de puesto (1)
    Obrero_1.set_name("John");
    Obrero_1.set_hours(40);
    Obrero_1.set_job(1);
    //Objeto de la clase Work que simula obrero_2
    Work Obrero_2("Mike",67,2);
    //Objeto de la clase Produccion que simula la demanda de manufactura del vehiculo Prius
    //atributos de modelo (Prius), unidades actuales (20), unidades a producir (48), lapso de dias (15)
    Produccion Prius("Prius",20,48,15);
    std::cout << "Para la meta de produccion de: " << Prius.get_goal() << " " << Prius.get_modelo() << std::endl;
    std::cout << "Se cuenta con: " << Prius.get_inv() << " autos en inventario" << std::endl;
    std::cout << "En un lapso de: " << Prius.get_t() << " dias" << std::endl;
    std::cout << "La tasa de autos diarios a producir para cumplir la meta es: " << Prius.prod_rate() << std::endl;
    std::cout << std::endl;
    //Asignar un obrero_1 y obrero_2 a la produccion
    Prius.set_worker(Obrero_1);
    Prius.set_worker(Obrero_2);
    std::cout << Prius.status_worker();
    //Producir 20 unidades ,se agregan 8 horas de trabajo al obrero_1, se mantienen las horas del obrero_2
    Prius.produce(20,0,8);
    std::cout << Prius.status_worker();
    std::cout << "Se cuenta con: " << Prius.get_inv() << " " << Prius.get_modelo() << " en inventario" << std::endl;
    std::cout << std::endl;
    //Objeto de la clase Ganancias que simula la venta del vehiculo Corolla
    //atributos de nombre del modelo (corolla), unidades en venta (15), precio de venta (399000), precio de produccion (150000), unidades vendidas por dia(2)
    Ganancias Corolla("Corolla",15,250000,100000,2);
    std::cout << "Con un costo de: $ " << Corolla.get_cost_v() << " por " << Corolla.get_modelo() << std::endl;
    std::cout << "Y un costo de produccion de: $ " << Corolla.get_cost_p() <<  std::endl;
    std::cout << "Con: " << Corolla.get_tasa_ventas() << " ventas diarias" << std::endl;
    std::cout << printf("Se venderia las unidades de : %i autos en: %.4f dias, con una ganacia de: $%.4f",Corolla.get_inv(), Corolla.sold_out(), Corolla.profit()) << std::endl;

    return 0;
}
