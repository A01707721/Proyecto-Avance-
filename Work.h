//Adrian Marquez Nunez A01707721
//Proyecto clase Work
//_______________________
#ifndef Work_H
#define Work_H
//Bibliotecas
#include <iostream>
#include <string>
#include <sstream>

class Work{
    private:
    //atributos de la clase: nombre del trabajador(name), puesto del trabajador(job), horas trabajadas(hours)
        std::string name;
        int job;
    public:
        int hours;
    //Constructor y metodos
        Work(): name(""), hours(0), job(0){};
        Work(std::string n,int h, int j):name(n), hours(h), job(j){};
        //metodos set de los diferentes atributos
        void set_name(std::string);
        void set_hours(float);
        void set_job(int);
        //metodo que calcula la paga del trabajador en base a su puesto y las horas trabajadas
        float pay();
        //metodos get de los diferentes atributos
        std::string get_name();
        float get_hours();
        int get_job();
        //metodo para aumentar el numero de horas trabajadas
        void working(int);
        std::string to_string();
};

void Work::set_name(std::string n){
    name=n;
}

void Work::set_hours(float h){
    hours=h;
}

void Work::set_job(int j){
    job=j;
}

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

std::string Work::get_name(){
    return name;
}

float Work::get_hours(){
    return hours;
}

int Work::get_job(){
    return job;
}

void Work::working(int wh){
    hours=hours+wh;
}

std::string Work::to_string(){
    std::stringstream aux;
    aux << " " << name << " horas: " << hours;
    return aux.str();
}
#endif
