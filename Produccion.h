//Adrian Marquez Nunez A01707721
//Proyecto clase Produccion
//_______________________

//Bibliotecas
#include <iostream>
class Produccion{
    //atributos de la clase: meta de vehiculos a producir(meta), vehiculos ya producidos(prod), lapso en dias para cumplir con la demanda(t)
    private:
        float meta;
        int prod;
        int t;

    public:
    //Constructor y metodos
        Produccion(float meta_autos, int producidos, int tiempo): meta(meta_autos), prod(producidos), t(tiempo){};
        //metodos get de los diferentes atributos
        float get_meta();
        int get_prod();
        int get_t();
        //metodo tasa_prod que realiza un calculo de la cantidad necesaria de vehiculos producidos en un dia para cumplir con la demanda
        float tasa_prod();
};

float Produccion::get_meta(){
    return meta;
}

int Produccion::get_prod(){
    return prod;
}

int Produccion::get_t(){
    return t;
}

float Produccion::tasa_prod(){
    float tasa=0.0;
    tasa=(meta-prod)/t;
    return tasa;
}
