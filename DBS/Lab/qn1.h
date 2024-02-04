#include <iostream>
#include <cmath>
using namespace std;

class ComplexNum 
{
   float real;
   float img;

public:
    ComplexNum()
    {
    real=0,img=0;
    }
    ComplexNum(float real,float img)
    {
        this->real=real;
        this->img=img;
    }
    friend ostream& operator <<(ostream &os,ComplexNum c)
    {
        os<<c.real<<" +i"<<c.img;
        return os;
    }

   ComplexNum operator+(ComplexNum c1)
    {
        ComplexNum sum;
        sum.real=this->real + c1.real;
        sum.img=this->img + c1.img;
        return sum;
    }

    ComplexNum operator-(ComplexNum c2) 
    {
        ComplexNum comp;
        comp.real = this->real - c2.real;
        comp.img = this->img - c2.img;
        return comp;
    }
    friend ComplexNum operator*(ComplexNum c3,ComplexNum c4) 
    {
        ComplexNum product;
        product.real=(c3.real*c4.real)-(c3.img*c4.img);
        product.img=(c3.real*c4.img)+(c3.img*c4.real);
        return product;
    }
};