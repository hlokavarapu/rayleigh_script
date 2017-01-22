#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.1415926536
using namespace std;

//Realistic scenario at the moment

int main(int argc, char **argv) {
    //reference density
        double rho_0 = 2925;
        // gravity
        double g = 10;
        //thermal expansion coeff
        double alpha = 3e-5;
        //Temperatur difference across fluid
        double deltaTemp = 1.5e3;
        // Thickness of the fuild layer
        double D = 2e6;
        //viscosity
        double mu = 1e23;
        //Thermal conductivity
        double k = 4;
        //specific heat
        double c_p = 1333.333333333333;
        //Thermal diffusivity
        double kappa = k/(rho_0 * c_p);
//        kappa = 1.02564e-06;
        double rayleigh;

//        for(int i=0; i<4; i++) {
//          mu[i] = (alpha * rho_0 * g * deltaTemp * pow(D,3.0))/(rayleigh[i] * kappa);
//          mu[i] = (alpha * rho_0 * g * deltaTemp * pow(D,3.0))/(rayleigh[i] * kappa);
          rayleigh = (alpha * rho_0 * g * deltaTemp * pow(D,3.0))/(mu * kappa);
//          deltaTemp = (rayleigh*(mu * kappa))/(alpha * rho_0 * g * pow(D,3.0));
//          mu = deltaTemp*(alpha * rho_0 * g * pow(D,3.0))/(rayleigh*kappa);
          cout << "kappa=" << kappa << endl;
//          cout << "C_P=" << std::setprecision(16) << k/(kappa*rho_0) << endl;
//          cout << "C_P=" << (k - (kappa*rho_0))/kappa << endl;
          cout << "viscosity " << mu << "for rayleigh of " << rayleigh << endl;
          double delta_rho = 150;
          //Computation 1: B = 0.5
         double B;
          double beta = delta_rho / rho_0;
          // delta_rho = rho_0 ;
          B = (delta_rho / rho_0) / (alpha * deltaTemp);
//          cout <<  rho_0*alpha*deltaTemp << std::endl;
          cout << "delta_rho=" << delta_rho << "beta=" << beta << std::endl << "B=" << B << std::endl;
//        }

        return 0;

} 
