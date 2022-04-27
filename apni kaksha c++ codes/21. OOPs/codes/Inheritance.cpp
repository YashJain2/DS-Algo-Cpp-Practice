#include<iostream>
using namespace std;


// //Single Level inheritance
// class A
// {
//     public:
//         void funcA(){cout<<"Class A function\n";}
// };

// //Makes the public and protected member of class A public in Class B
// class B : public A
// {
//     public:
//         void funcB(){cout<<"Class B function\n";}
// };

// //makes the public and protected members of the class A private members in class C
// //So only member function can access it 
// class C : private A
// {
//     public:
//         void getFuncA(){funcA();}
//         void funcC(){cout<<"Class C function\n";}
// };


// // Multi-Level Inheritance
// class A
// {
//     public:
//         void funcA(){cout<<"Class A function\n";}
// };
// //class B can access public members of A
// class B : public A
// {
//     public:
//         void funcB(){cout<<"Class B function\n";}
// };
// //class C can access public members of B
// class C : public B
// {
//     public:
//         void funcC(){cout<<"Class C function\n";}
// };


//Mutiple Inheritance 
class A
{
    public:
        void funcA(){cout<<"Class A function\n";}
};

class B
{
    public:
        void funcB(){cout<<"Class B function\n";}
};
//Class C inherits both the public members of A and B
class C : public A,public B
{
    public:
        void funcC(){cout<<"Class C function\n";}
};


int main()
{
    // //Single Inheritance
    // B b;
    // b.funcA();
    // C c;
    // // c.funcA();//invalid call
    // c.getFuncA();

    //Multi-level INheritance
    // C c;
    // c.funcA();
    // c.funcB();
    // c.funcC();

    //Multiple Inheritance
    C c;
    c.funcA();
    c.funcB();
    c.funcC();

    //Hybrid Inheritance 
    //Such type of inheritance where it is multi-level as well as multiple inheritance occured
    
    //Heirarchial Inheritamce 
    //Where It form a Binary Tree Structure where classes inherits parents and childs are further inherited and so on each level

    return 0;
}