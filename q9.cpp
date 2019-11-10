// Created by 赵文锴 on 2019/11/10.
#include <iostream>
using namespace std;

class gasoline
{
private:
    double unlead;
    double lead;
    //double total=17*unlead+16*lead;
    long int day;
public:
    gasoline(long int day, double unlead, double lead);
    double getUnlead() {return unlead;}
    double getLead() {return lead;}
    double getTotal() {return 17*unlead+16*lead;}
    void input(long int day1,double unlead1, double lead1) {
        day=day1;
        unlead=unlead1;
        lead=lead1;
    }
    void display();
};

gasoline::gasoline(long int day, double unlead, double lead) {
      this->day=day;
      this->unlead=unlead;
      this->lead=lead;
}
void gasoline::display() {

}

int main()
{

    double unlead,lead;
    long day;
    cout<<"Input date: ";
    cin>>day;
    cout<<"Input unlead amount: ";
    cin>>unlead;
    cout<<"Input lead amount: ";
    cin>>lead;
    gasoline gas1(day,unlead,lead);
    //gas1.input(day,unlead,lead);
    cout<<"Total price is: "<<gas1.getTotal()<<endl;

}
