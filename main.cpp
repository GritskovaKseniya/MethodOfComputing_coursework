#include <iostream>
using namespace std;

#include "utils.cpp"

int main(){
    double k = 1.2*10e-4;
    double g = 9.8066; //ускорение свободного падения
    double v0 = 1000; //начальная скорость
    double z = 0; //значение проекции на у в момент времени 0
    double d = 0; //значение проекции на ч в момент времени 0

    double z_dot = derivative_function_z(v0 ,30.0);
    double d_dot = derivative_function_d(v0 ,30.0);
    
    double vy_dot = differential_equation_vy(z_dot,d_dot, g, k, z);
    double vx_dot = differential_equation_vx(z_dot,d_dot, g, k, z);
}