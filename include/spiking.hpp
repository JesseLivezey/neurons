// spiking.hpp

class Spiking
{
  double U,V,intA,intB,intC,intD;
public:
  Spiking(double, double, double, double);
  double getU();
  double getV();
  void update(double,double);
};
