#include <iostream>

using namespace std;

int a();

struct Car;

int model();

int main()
{
    cout << conveyor() << endl;
    return 0;
}
struct Car
{
    double weight;
    double speed;
    void give_values (double weight, double speed)
    {
        this->weight = weight;
        this->speed = speed;
    }
    void prt()
    {
        cout << this->weight << " " << this->speed << endl;
    }

};
int model()
{
    Car bmv;
    bmv.give_values(10.5555 ,25 );
    bmv.prt();
}
int conveyor(int quantity)
{
    for(int i=0; i < quantity; ++i)
    {
        .give_values());
        .prt();
    }
}
