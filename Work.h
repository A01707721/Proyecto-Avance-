//Adrian Marquez Nunez A01707721
//Proyecto clase Work
//_______________________

//Bibliotecas
#include <iostream>
#include <string>

class Work{
    private:
    //atributos de la clase: nombre del trabajador(name), horas trabajadas(hours), puesto del trabajador(job)
        std::string name;
        int hours;
        int job;
    public:
    //Constructor y metodos
        Work(): name(""), hours(0), job(0){};
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
};

void Work::set_name(std::string nombre){
    name=nombre;
}

void Work::set_hours(float horas){
    hours=horas;
}

void Work::set_job(int puesto){
    job=puesto;
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