#include <cmath>

using namespace std;

#define PI 3.14159265

double derivative_function_z(double v0 ,double alfa){ //производная z
    double z_dot = v0 * sin(alfa*PI / 180);
    return z_dot;
}

double derivative_function_d(double v0 ,double alfa){ //производная d
    double d_dot = v0 * cos(alfa*PI / 180);
    return d_dot;
}

double differential_equation_vx(double d_dot, double z_dot, double g, double k, double z){
    double vx, vy;
    vx = d_dot; vy = z_dot;

    double vx_dot = -sqrt(vy*vy + vx*vx)*(10e-5)*(exp(-k*z))* vx ;
    return vx_dot;
}

double differential_equation_vy(double d_dot, double z_dot, double g, double k, double z){
    double vx, vy;
    vx = d_dot; vy = z_dot;

    double vy_dot = -g -sqrt(vy*vy + vx*vx)*(10e-5)*(exp(-k*z))* vy;
    return vy_dot;
}

double Runge_Kutta_method(double y_prev, double y_dot, double h, double x_prev){ // y_dot вычисляем зарание (z_dot/d_dot) // h вычисляем заранее как x_i - x_(i-1)
    double y = y_prev +  h*y_dot;

}