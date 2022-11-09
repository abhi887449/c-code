#include<iostream>
using namespace std;
class complex{
    private:
    float a;
    float b;
    public:
    complex(float a = 0,float b = 0){
        this->a = a;
        this->b = b;
    }
    void printcomplex(){
        cout<<"Complex number is :"<<this->a<<" + "<<this->b<<"i"<<endl;
    }
    complex operator+(complex const &c1) const{
        complex c2;

        c2.a = this->a + c1.a;
        c2.b = this->b + c1.b;
        return c2;
    }
    complex operator*(complex const &c) const{
        complex c2;
        int temp = this->a;
        c2.a = this->a * c.a - this->b * c.b;
        c2.b = this->b*c.a + temp*c.b;
        return c2;
    }
    complex& operator++(){
        this->a  = this->a + 1;
        this->b  = this->b + 1;
        return *this;
    }
    complex operator++(int){
        complex newc(a,b);
        this->a  = this->a + 1;
        this->b  = this->b + 1;

        return newc;
    }
};

int main(){
    complex c1(2.5,3.6),c2(2,2);
    // complex c3;
    // c1.printcomplex();
    // c3.printcomplex();
    // complex c5 = c1+c2;
    // c1.printcomplex();
    // c2.printcomplex();
    // complex c4 = c1*c2;

    // c4.printcomplex();
    // cout<<"Addition is :";
    // c5.printcomplex();
    // cout<<endl;
    // ++c2;
    // c2.printcomplex();    
    // ++(++c2);
    // c2.printcomplex();    
    c2++;
    c2.printcomplex();    
    c2++;
    c2.printcomplex();    
    c2.printcomplex();      


}