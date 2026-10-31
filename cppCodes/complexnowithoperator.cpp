#include<iostream>
using namespace std;
class complex {
    private:
    float real;
    float imag;

    public:
    //Default constructor
    complex() {
        real=0;
        imag=0;
    }

    //Parameterized constructor
    complex(float r, float i) {
        real=r;
        imag=i;
    }

    //Destructor
    ~complex() {}

    //Display function
    void display() {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    complex operator + (complex c) {
        return complex(real+c.real, imag+c.imag);
    }

    complex operator - (complex c) {
        return complex(real-c.real, imag-c.imag);
    }

    complex operator * (complex c) {
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return complex(r,i);
    }
};

int main() {
    complex c1(4,5), c2(2,3);

    cout<<"\nFirst complex number:";
    c1.display();
    cout<<"Second complex number:";
    c2.display();

    complex sum=c1+c2;
    cout<<"\nsum:";
    sum.display();

    complex diff=c1-c2;
    cout<<"difference:";
    diff.display();

    complex prod=c1*c2;
    cout<<"product:";
    prod.display();

    return 0;

}

/*
PS D:\pranita najan 217> cd "d:\pranita najan 217\" ; if ($?) { g++ complexnowithoperator.cpp -o complexnowithoperator } ; if ($?) { .\complexnowithoperator }

First complex number:4+5i
Second complex number:2+3i

sum:6+8i
difference:2+2i
product:-7+22i

*/