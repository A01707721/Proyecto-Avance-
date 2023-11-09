//Adrian Marquez Nunez A01707721
//Proyecto main
//_______________________

//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <string>
#include "Produccion.h"
#include "Ganancias.h"
#include "Work.h"

//Este proyecto simula una planta de manufactura de vehiculos Toyota, con clases que permiten proyectar la manufactura y venta de autos, y la paga de trabajadores
int main(){
    //Objeto de la clase Produccion que simula la demanda de manufactura del vehiculo Prius
    //atributos de unidades a producir (256), unidades actuales (48), lapso de dias (20)
    Produccion Prius(256,48,20);
    std::cout << "Para la meta de produccion de: " << Prius.get_meta() << " autos" << std::endl;
    std::cout << "Se cuenta con: " << Prius.get_prod() << " autos en invenatrio" << std::endl;
    std::cout << "En un lapso de: " << Prius.get_t() << " dias" << std::endl;
    std::cout << "La tasa de autos diarios a producir para cumplir la meta es: " << Prius.tasa_prod() << std::endl;

    //Objeto de la clase Ganancias que simula la venta del vehiculo Corolla
    //atributos de precio de venta (399000), precio de produccion (150000), unidades en inventario (6), unidades vendidad por dia(1)
    Ganancias Corolla(399000,150000,6,1);
    std::cout << "Con un costo de: $ " << Corolla.get_cost_v() << std::endl;
    std::cout << "Y un costo de produccion de: $ " << Corolla.get_cost_p() <<  std::endl;
    std::cout << "Con: " << Corolla.get_tasa_ventas() << " ventas dias" << std::endl;
    std::cout << printf("Se venderia el inventario de: %i autos en: %i dias, con una ganacia de: $%4f",Corolla.get_inv(), Corolla.sold_out(), Corolla.profit(6)) << std::endl;

    //Objeto de la clase Work que simula un obrero
    Work Obrero_1;
    //Declaracion de atributos de nombre (John), horas trabajadas (40), tipo de puesto (1)
    Obrero_1.set_name("John");
    Obrero_1.set_hours(40);
    Obrero_1.set_job(1);
    std::cout << "Paga " << Obrero_1.get_name() << " $" << Obrero_1.pay() << std::endl;
    
    return 0;
}