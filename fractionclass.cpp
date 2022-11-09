#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class fraction{
    private:
    int numerator;
    int denominator;
    public:
    fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void printfraction(){
        cout<<"Fraction is :"<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void addfraction(fraction const &f2){
        int lcm = this->denominator * f2.denominator;
        int num = this->numerator * f2.denominator + this->denominator * f2.numerator;
        this->numerator = num;
        this->denominator = lcm;
        simplifyfraction();
    }
    void simplifyfraction(){
        int gcf = 1;
        int k = min(this->numerator,this->denominator);
        for(int i=1;i<k;i++){
            if((this->numerator%i == 0) && (this->denominator%i == 0)){
                gcf=i;
            }
        }
        this->numerator = this->numerator/gcf;
        this->denominator = this->denominator/gcf;
    }
};

int main(){
    fraction f1(3,2),f2(5,3);
    f1.printfraction();
    f2.printfraction();
    f1.addfraction(f2);
    f1.printfraction();
    fraction f(6,4),f3(0,1);
    f.addfraction(f3);
    f.printfraction();
}