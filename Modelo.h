/* 
* Proyecto Planta Toyota
* Adrian Marquez Nunez
* A01707721
* 29/11/2023
*/
#ifndef Modelo_H
#define Modelo_H
//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <string>
//Para implementar objetos tipo Work
#include "Work.h"

/**Clase padre Modelo que contiene los metodos y atributos basicos sobre los vehiculos y tiene 2 clases hijas:
*Produccion y Ganancias que manejan el inventarrio y la venta de diferentes modelos de autos
*/

//Declaracion de la clase padre Modelo
class Modelo{
    //atributos de la clase padre: nombre del tipo de vehiculo (nombre_modelo), inventario de vehiculos (inv)
    private:
    std::string nombre_modelo;
    public:
    int inv;
    /**Constructor default
    *@param
    *@return objeto Modelo
    */
    Modelo():nombre_modelo(""),inv(0){};
    /**Constructor donde se reciben las variables para los diferentes atributos
    *@param string n: nombre del modelo de auto, int i: cantidad de autos en inventario
    *@return objeto Modelo
    */
    Modelo(std::string n, int i):nombre_modelo(n), inv(i){};
    //metodos get de los diferentes atributos
    std::string get_modelo();
    int get_inv();
    //metodos set de los diferentes atributos
    void set_modelo(std::string);
    void set_inv(int);
};

/**Getter nombre del modelo
*@param 
*@return string: nombre 
*/
std::string Modelo::get_modelo(){
    return nombre_modelo;
}

/**Getter inventario de autos
*@param 
*@return int: inventario 
*/
int Modelo::get_inv(){
    return inv;
}

/**Setter nombre del modelo
*@param string:nombre
*@return 
*/
void Modelo::set_modelo(std::string n){
    nombre_modelo=n;
}

/**Setter invenatrio de autos
*@param int:inventario
*@return 
*/
void Modelo::set_inv(int i){
    inv=i;
}

//Declaracion de la clase hija Produccion que hereda de Modelo
class Produccion: public Modelo{
    /**atributos de la clase: meta de vehiculos a producir(meta), 
    *lapso en dias para cumplir con la demanda(t), arreglo trabajadores (worker[])
    */
    private:
        float goal;
        int t;
        Work worker[100];
    public:
        int num_worker;
        /**Constructor default
        *@param 
        *@return objeto Produccion
        */
        Produccion():Modelo(),goal(0),t(0), num_worker(0){};
        /**Constructor donde se reciben las variables para los diferentes atributos
        *@param string n: nombre del modelo de auto, int i: cantidad de autos en inventario, float goal_cars: meta autos a producir, 
        *int time: tiempo para producir
        *@return objeto Modelo
        */
        Produccion(std::string n, int i,float goal_cars, int time): Modelo(n,i), goal(goal_cars), t(time), num_worker(0){};
        //metodos get de los diferentes atributos
        float get_goal();
        int get_t();
        Work get_worker(int);
        //metodos set de los diferentes atributos
        void set_goal(float);
        void set_t(int);
        void set_worker(Work &);
        /**metodo tasa_prod que realiza un calculo de la cantidad necesaria de vehiculos producidos en un dia
        *para cumplir con la demanda
        */
        float prod_rate();
        //metodo que produce vehiculos aumentando el invenatario y las horas de trabajo de los obreros
        void produce(int,int);
        //metod para convertir imprimir los datos de los trabajadores 
        std::string status_worker();
};

/**Getter meta de autos a prodcuir
*@param 
*@return float:meta
*/
float Produccion::get_goal(){
    return goal;
}

/**Getter tiempo para producir
*@param 
*@return int:tiempo
*/
int Produccion::get_t(){
    return t;
}

/**Getter trabajador de la produccion
*@param numero de posicion del trabajador en el arreglo
*@return objeto Work:trabajador
*/
Work Produccion::get_worker(int num){
    return worker[num];
}

/**Setter meta de autos a producir
*@param float:meta
*@return 
*/
void Produccion::set_goal(float goal_cars){
    goal=goal_cars;
}

/**Setter tiempo para producir
*@param int:tiempo
*@return 
*/
void Produccion::set_t(int time){
    t=time;
}

/**Setter trabajador de la produccion
*@param objeto Work:trabajador
*@return 
*/
void Produccion::set_worker(Work &w){
    worker[num_worker]=w;
    num_worker++;
}

/**Metodo que resta a la meta el inventario actual y lo divide entre el tiempo 
*para obtener una tasa diaria de produccion para cumplir la meta
*@param
*@return float:tasa de produccion diaria
*/
float Produccion::prod_rate(){
    float rate=0.0;
    rate=(goal-inv)/t;
    return rate;
}

/**Metodo que recibe un numero para aumenta el invenatrio de autos
*y recibe otro numero para incrementar las horas de trabajo de los empleados
*@param int:autos a producir, int:horas de trabajo
*@return
*/
void Produccion::produce(int prod,int wh){
    inv=inv+prod;
    for(int i=0;i<num_worker;i++){
        worker[i].working(wh);
    }
}

/**Almacena los datos del objeto Produccion y los datos del objeto Work en una cadena de texto
*@param 
*@return string: datos de la produccion y el/los empleado/s
*/
std::string Produccion::status_worker(){
    std::stringstream aux;
    aux << "Produccion " << get_modelo() << " trabajador/es" << std::endl;
    for(int i=0;i<num_worker;i++){
        aux << worker[i].to_string() << std::endl;
    }
    return aux.str();
}

//Declaracion de la clase hija Ganancias que hereda de Modelo
class Ganancias: public Modelo{
    //atributos de la clase: costo de venta $(cost_v), costo de produccion(cost_p), ventas diarias(tasa_ventas)
    private:
        float cost_v;
        float cost_p;
        float tasa_ventas;
    public:
        /**Constructor default
        *@param 
        *@return objeto Ganancias
        */
        Ganancias():Modelo(),cost_v(0),cost_p(0),tasa_ventas(0){};
        /**Constructor donde se reciben las variables para los diferentes atributos
        *@param string n: nombre del modelo de auto, int i: cantidad de autos en inventario, float costov: precio de venta del auto,
        *float costop: costo de produccion del auto, float tasa_ventas: numero de autos vendidos por dia
        *@return objeto Modelo
        */
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

/**Getter precio de venta del auto
*@param 
*@return float:precio venta
*/
float Ganancias::get_cost_v(){
    return cost_v;
}

/**Getter costo de produccion del auto
*@param 
*@return float:costo produccion
*/
float Ganancias::get_cost_p(){
    return cost_p;
}

/**Getter autos vendidos por dia
*@param 
*@return float:tasa de ventas diarias
*/
float Ganancias::get_tasa_ventas(){
    return tasa_ventas;
}

/**Setter precio de venta del auto
*@param float:precio venta
*@return 
*/
void Ganancias::set_cost_v(float costov){
    cost_v=costov;
}

/**Setter costo de produccion del auto
*@param float:costo produccion
*@return 
*/
void Ganancias::set_cost_p(float costop){
    cost_p=costop;
}

/**Setter autos vendidos por dia
*@param float:tasa de ventas diarias
*@return 
*/
void Ganancias::set_tasa_ventas(float ventas){
    tasa_ventas=ventas;
}

/**Metodo que calcula la ganancia en base a la diferencia entre precio de venta y costo de produccion
*y lo multiplica por la cantidad de autos en inventario
*@param
*@return float:ganancias de la venta total
*/
float Ganancias::profit(){
    float prof=inv*(cost_v-cost_p);
    return prof;
}

/**Metodo que calcula en cuanto tiempo se venderia el inventario completo 
*en base a una tasa de ventas dirias
*@param
*@return float:tiempo para que se venda el inventario
*/
float Ganancias::sold_out(){
    float t=inv/tasa_ventas;
    return t;
}
#endif//Modelo_H
