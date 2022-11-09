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
    void addcomplex(complex const &c1){
        this->a = this->a + c1.a;
        this->b = this->b + c1.b;
    }
    void multiplycomplex(complex const &c){
        int temp = this->a;
        this->a = this->a * c.a - this->b * c.b;
        this->b = this->b*c.a + temp*c.b;
    }
};

int main(){
    complex c1(2.5,3.6),c2(2,2);
    complex c3;
    c1.printcomplex();
    c3.printcomplex();
    // c1.addcomplex(c2);
    c1.printcomplex();
    c2.printcomplex();
    c1.multiplycomplex(c2);
    c1.printcomplex();
}