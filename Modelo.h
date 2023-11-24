//Adrian Marquez Nunez A01707721
//Proyecto clase padre Modelo y clases hijas produccion y ganancia
//_______________________
#ifndef Modelo_H
#define Modelo_H
//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <string>
#include "Work.h"

class Modelo{
    //atributos de la clase padre: nombre del tipo de vehiculo (nombre_modelo), inventario de vehiculos (inv)
    private:
    std::string nombre_modelo;
    public:
    int inv;
    //Constructor y metodos
    Modelo():nombre_modelo(""),inv(0){};
    Modelo(std::string n, int i):nombre_modelo(n), inv(i){};
    //metodos get de los diferentes atributos
    std::string get_modelo();
    int get_inv();
    //metodos set de los diferentes atributos
    void set_modelo(std::string);
    void set_inv(int);
};

std::string Modelo::get_modelo(){
    return nombre_modelo;
}

int Modelo::get_inv(){
    return inv;
}

void Modelo::set_modelo(std::string n){
    nombre_modelo=n;
}

void Modelo::set_inv(int i){
    inv=i;
}

class Produccion: public Modelo{
    //atributos de la clase: meta de vehiculos a producir(meta), lapso en dias para cumplir con la demanda(t), trabajador (worker)
    private:
        float goal;
        int t;
        Work worker[100];
    public:
        int num_worker;
    //Constructor y metodos
        Produccion():Modelo(),goal(0),t(0), num_worker(0){};
        Produccion(std::string n, int i,float goal_cars, int time): Modelo(n,i), goal(goal_cars), t(time), num_worker(0){};
        //metodos get de los diferentes atributos
        float get_goal();
        int get_t();
        Work get_worker(int);
        //metodos set de los diferentes atributos
        void set_goal(float);
        void set_t(int);
        void set_worker(Work);
        //metodo tasa_prod que realiza un calculo de la cantidad necesaria de vehiculos producidos en un dia para cumplir con la demanda
        float prod_rate();
        //metodo que produce vehiculos aumentando el invenatario y las horas de trabajo de los obreros
        void produce(int,int,int);
        std::string status_worker();
};

float Produccion::get_goal(){
    return goal;
}

int Produccion::get_t(){
    return t;
}

Work Produccion::get_worker(int num){
    return worker[num];
}

void Produccion::set_goal(float goal_cars){
    goal=goal_cars;
}

void Produccion::set_t(int time){
    t=time;
}

void Produccion::set_worker(Work w){
    worker[num_worker]=w;
    num_worker++;
}

float Produccion::prod_rate(){
    float rate=0.0;
    rate=(goal-inv)/t;
    return rate;
}

void Produccion::produce(int prod,int num,int wh){
    inv=inv+prod;
    worker[num].working(wh);
}

std::string Produccion::status_worker(){
    std::stringstream aux;
    aux << "Produccion " << get_modelo() << std::endl;
    for(int i=0;i<num_worker;i++){
        aux << worker[i].to_string() << std::endl;
    }
    return aux.str();
}

class Ganancias: public Modelo{
    private:
    //atributos de la clase: costo de venta $(cost_v), costo de produccion(cost_p), ventas diarias(tasa_ventas)
        float cost_v;
        float cost_p;
        float tasa_ventas;
    public:
    //Constructor y metodos
        Ganancias():Modelo(),cost_v(0),cost_p(0),tasa_ventas(0){};
        Ganancias(std::string n, int i,float costov, float costop, float ventas): Modelo(n,i),cost_v(costov), cost_p(costop), tasa_ventas(ventas){};
        //metodos get de los diferentes atributos
        float get_cost_v();
        float get_cost_p();
        float get_tasa_ventas();
        //metodos set de los diferentes atributos
        void set_cost_v(float);
        void set_cost_p(float);
        void set_tasa_ventas(float);
        //metodo profit que realiza un calculo de las ganancias en base a las unidades vendidad
        float profit();
        //metodo que calcula en cuantos dias se venderian las unidades del inventario
        float sold_out();
};

float Ganancias::get_cost_v(){
    return cost_v;
}

float Ganancias::get_cost_p(){
    return cost_p;
}


float Ganancias::get_tasa_ventas(){
    return tasa_ventas;
}

void Ganancias::set_cost_v(float costov){
    cost_v=costov;
}

void Ganancias::set_cost_p(float costop){
    cost_p=costop;
}

void Ganancias::set_tasa_ventas(float ventas){
    tasa_ventas=ventas;
}

float Ganancias::profit(){
    float prof=inv*(cost_v-cost_p);
    return prof;
}

float Ganancias::sold_out(){
    float t=inv/tasa_ventas;
    return t;
}
#endif
