//spiking.cpp
#include "spiking.hpp"

Spiking::Spiking(double a, double b, double c, double d)
{
  intA = a;
  intB = b;
  intC = c;
  intD = d;
  U = 0.;
  V = 2*intC;
}
double Spiking::getU()
{
  return U;
}
double Spiking::getV()
{
  return V;
}
void Spiking::update(double I, double delT)
{
  double delV, delU;
  delV = delT*(.04*V*V+5.*V+140.-U+I);
  delU = delT*intA*(intB*V-U);
  U += delU;
  V += delV;
  if(V > 30.){
    V = intC;
    U += intD;
  }
}
