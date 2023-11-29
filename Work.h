//Adrian Marquez Nunez A01707721
//Proyecto clase Work
//_______________________
//Clase Work que maneja datos de los trabajadores con su nombre, puesto, horas trabajadas y da la capacidad de trabajar y calcular su paga
#ifndef Work_H
#define Work_H
//Bibliotecas
#include <iostream>
#include <string>
#include <sstream>
//Declaracion de la clase Work
class Work{
    //atributos de la clase: nombre del trabajador(name), puesto del trabajador(job), horas trabajadas(hours)
    private:
        std::string name;
        int job;
    public:
        int hours;
        /**Constructor default 
        *@param
        *@return objeto Work
        */
        Work(): name(""), hours(0), job(0){};
        /**Constructor donde se reciben las variables para los diferentes atributos
        *@param string n: el nombre del empleado, int h: horas trabajadas, int j: puesto de trabajo 
        *@return objeto Work
        */
        Work(std::string n,int h, int j):name(n), hours(h), job(j){};
        //metodos set de los diferentes atributos
        void set_name(std::string);
        void set_hours(int);
        void set_job(int);
        //metodo que calcula la paga del trabajador en base a su puesto y las horas trabajadas
        float pay();
        //metodos get de los diferentes atributos
        std::string get_name();
        int get_hours();
        int get_job();
        //metodo para aumentar el numero de horas trabajadas
        void working(int);
        //metodo para convertir los datos del objeto en una cadena de texto
        std::string to_string();
};

/**Setter nombre del empleado
*@param string:nombre
*@return
*/
void Work::set_name(std::string n){
    name=n;
}

/**Setter horas trabajadas
*@param int:horas
*@return
*/
void Work::set_hours(int h){
    hours=h;
}

/**Setter puesto del empleado
*@param int:puesto
*@return
*/
void Work::set_job(int j){
    job=j;
}

/**Metodo pay calcula la paga del empleado multiplicando las horas trabajadas por un numero dependiente del puesto del empleado
*@param
*return float: paga del empleado
*/
float Work::pay(){
   float money=0.0;
   if(job==1){
    money=200*hours;
   }
   if(job==2){
    money=250*hours;
   }
   if(job==3){
    money=300*hours;
   }
   return money;
}

/**Getter nombre del empleado
*@param 
*@return string:nombre
*/
std::string Work::get_name(){
    return name;
}

/**Getter horas trabajadas
*@param 
*@return int:horas
*/
int Work::get_hours(){
    return hours;
}

/**Getter puesto del empleado
*@param 
*@return int:puesto
*/
int Work::get_job(){
    return job;
}

/**Metodo que incrementa las horas trabajadas
*@param int:horas extras
*@return
*/
void Work::working(int wh){
    hours=hours+wh;
}

/**Almacena los datos del objeto Work en una cadena de texto
*@param 
*@return string:datos del empleado
*/
std::string Work::to_string(){
    std::stringstream aux;
    aux << " " << name << " horas: " << hours;
    return aux.str();
}
#endif//Work_H
