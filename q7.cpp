// Created by 赵文锴 on 2019/11/9.
#include <iostream>
#include <cmath>

using namespace std;

class area
{
private:
    double side;
public:
    double triArea() {return 1.732/4*pow(side,2);}
    double squArea() {return pow(side,2);}
    double cirArea() {return 3.14175*pow(side/2,2);}
    void input(double side1) {side=side1;}
};




int main()
{
    area r;
    double side=0.0;
    cout<<"Input: ";
    cin>>side;
    r.input(side);
    cout<<"Output: the area of equilateral triangle is "<<r.triArea()<<", the area of square is "<<r.squArea()<<", the area of circle is "<<r.cirArea()<<endl;
    return 0;
}
