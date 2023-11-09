//Adrian Marquez Nunez A01707721
//Proyecto clase Ganancias
//_______________________

//Bibliotecas
#include <iostream>

class Ganancias{
    private:
    //atributos de la clase: costo de venta $(cost_v), costo de produccion(cost_p), autos en inventario(inv), ventas diarias(tasa_ventas)
        float cost_v;
        float cost_p;
        int inv;
        float tasa_ventas;
    public:
    //Constructor y metodos
        Ganancias(float costov, float costop, int inventario, float ventas): cost_v(costov), cost_p(costop), inv(inventario), tasa_ventas(ventas){};
        //metodos get de los diferentes atributos
        float get_cost_v();
        float get_cost_p();
        int get_inv();
        float get_tasa_ventas();
        float get_meta();
        //metodo profit que realiza un calculo de las ganancias en base a las unidades vendidad
        float profit(int);
        //metodo que calcula en cuantos dias se venderian las unidades del inventario
        int sold_out();
};

float Ganancias::get_cost_v(){
    return cost_v;
}

float Ganancias::get_cost_p(){
    return cost_p;
}

int Ganancias::get_inv(){
    return inv;
}

float Ganancias:: get_tasa_ventas(){
    return tasa_ventas;
}

float Ganancias::profit(int unidades){
    float gan=unidades*(cost_v-cost_p);
    return gan;
}

int Ganancias::sold_out(){
    int t=inv/tasa_ventas;
    return t;
}