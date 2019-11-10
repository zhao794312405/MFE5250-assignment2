//
// Created by 赵文锴 on 2019/11/10.
//

#ifndef ASSIGN2_Q10_H
#define ASSIGN2_Q10_H

#endif //ASSIGN2_Q10_H
#include <iostream>
using namespace std;
class complex
{
public:
    explicit complex(double re=0, double im=0)
            : re(re), im(im) {}
    complex(const complex &c)
             = default;
    friend ostream &operator<<( ostream &output,const complex &c );
    friend istream &operator>>( ostream &output,const complex &c );
    complex operator+(const complex &c);
    complex operator-(const complex &c);
    complex operator*(const complex &c);
    friend complex operator*(const complex &c);
    complex operator~();
    double real() {return re;}
    double imag() {return im;}
    double re;
    double im;
};

complex complex::operator+(const complex &c) {
    complex co;
    co.re=this->re + c.re;
    co.im=this->im + c.im;
    return co;
}

complex complex::operator-(const complex &c) {
    complex co;
    co.re=this->re - c.re;
    co.im=this->im - c.im;
    return co;
}

complex complex::operator*(const complex &c) {
    complex co;
    co.re=this->re * c.re-this->im * c.im;
    co.im=this->re * c.im+this->im * c.re;
    return co;
}
complex operator* (double x,const complex &c) {
    complex co;
    co.re=c.re * x;
    co.im=c.im * x;
    return co;
}

complex complex::operator~() {
    complex co;
    co.re=this->re;
    co.im=-this->im;
    return co;
}

ostream &operator<<(ostream &output,const complex &c)
{
    output << c.re << " + " << c.im<<" i"<<endl;
    return output;
}

istream &operator>>(istream &input,complex &c)
{
    input>>c.re>>c.im;
    return input;
}