#include<bits/stdc++.h>
using namespace std;


//Function Overloading
class A
{
    public:
        void func(){ cout<<"No parameter is passed\n";}
        void func(int x){ cout<<"Integer parameter is passed\n";}
        void func(double x){ cout<<"Double parameter is passed\n";}
};

//operator overloading
class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex (int real=0, int imag=0)
        {
            this-> real = real;
            this-> imag = imag;
        }//Parameterized Constructor
        Complex operator + (Complex const &a)
        {
            Complex res;
            res.real = real + a.real;
            res.imag = imag + a.imag;
            return res;
        }
        void display() { cout<<real <<" + "<<imag<<"i\n";}
};

//Runtime polymorphism
class Base
{
    public:
    virtual void print(){cout<<"THis is base class print function\n";}//dynamically binding during runtime
    void display(){cout<<"This is base class display function\n";}
};

class Derived : public Base{
    public:
    void print(){cout<<"THis is derived class print function\n";}
    void display(){cout<<"This is derived class display function\n";}
};



int main()
{
    //Function Overloading
    A x;
    x.func();
    x.func(3);
    x.func(3.2);

    //Operator Overloading
    Complex a(3,4),b(5,-7);
    Complex c = a + b;
    c.display();

    //Runtime Polymorphism
    Base *p;
    Derived temp;
    p=&temp; //stores the address of Derived class but do not access the derived methods until we define virtual in its own method it looks for the same methods in the assigned objects
    p->print();
    p->display();
    return 0;
}