#include<iostream>
using namespace std;

class Base
{
    public:
     int i;
     int j;

     void fun()                       //Defination
     {
        cout<<"inside Base fun\n";
     }
     void gun()                        //defination
     {
        cout<<"inside Base gun\n";
     }

     virtual void sun()               //defination
     {
        cout<<"inside Base sun\n";
     }

     virtual void bun()              //Defination
     {
        cout<<"inside Base bun\n";
     }
};

class Derived : public Base
{
    public:
      int x;

      void gun()  // Redefination
     {
        cout<<"inside Derived gun\n";
     }
     void sun()          ///// Overriding
     {
        cout<<"inside Derived sun\n";
     }
     void run()                    //defination
     {
        cout<<"inside Derived run\n";
     }
     void mun()                     //defination
     {
        cout<<"inside Derived mun\n";
     }

     
};

int main()
{
    Base * bp1 =new Base();
    Derived * dp1 = new Derived();
    Base * bp2 = new Derived();
    //Derived * dp2 = new Base();///// ERROR

    cout<<sizeof(Base);
    cout<<sizeof(Derived);


    bp2->fun();

    bp2->gun();

    bp2->sun();

   /// bp2->run(); //ERROR

    /// bp2->mun();  //ERROR

    bp2->bun();

    return 0;
}