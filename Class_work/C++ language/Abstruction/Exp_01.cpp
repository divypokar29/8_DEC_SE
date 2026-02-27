#include<iostream>
using namespace std;

class vehicle 
{
    public:
      virtual void wheels() = 0; // pure virtuale function or abstraction method 

};
class Car : public vehicle
{
    public: 
      void wheels()
      {
        cout<<"\n i have 4 wheels";
      }
};
class bike :public  vehicle
{
    public:
      void wheels()
      {
        cout<<"\n i have 2 wheels";
      }
};

main(){
    Car car = Car();
    bike Bike ;

    car.wheels();
    Bike.wheels();

}