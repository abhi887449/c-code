template <typename T>
class Pair{
    private:
    T x;
    T y;
    public:
    Pair(){
       x=0;
       y=0; 
    }
    void setx(int x){
        this->x=x;
    }
    void sety(int y){
        this->y=y;
    }
    int getx(){
        return this->x;
    }
    int gety(){
        return this->y;
    }
    
};
#include<iostream>
using namespace std;
int main(){
    Pair<int> p;
    cout<<p.getx()<<" "<<p.gety()<<endl;
    p.setx(5);
    p.sety(10);
    cout<<p.getx()<<" "<<p.gety()<<endl;

    return 0;
}
