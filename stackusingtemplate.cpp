#include <iostream>
using namespace std;
template<typename T>
class Stack
{
    private:
    // limit data insertion 
    // T stack[100];
    T *stack;
    int nextindex;
    int capacity;
public:
    Stack()
    {
        nextindex = 0;
        capacity=2;
        stack=new T[capacity];
    }
    T size(Stack s)
    {
        return s.nextindex;
    }
    // limit data insertion 
    // void push(T data){
    //     if(this->nextindex==100){
    //         cout<<"Stack is full "<<data<<" can't be pushed"<<endl;
    //         return;
    //     }
    //     this->stack[this->nextindex]=data;
    //     this->nextindex++;
    // }
    void push(T data){
        if(this->capacity != this->nextindex){
            this->stack[this->nextindex++]=data;
        }
        else{
            T *temp=this->stack;
            this->capacity*=2;
            this->stack=new T[capacity];
            for(int i=0;i<this->nextindex;i++){
                this->stack[i]=temp[i];
            }
            delete temp;
            this->stack[this->nextindex++]=data;
        }
    }
    T pop(){
        if(this->nextindex==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        this->nextindex--;
        return this->stack[this->nextindex];
    }
    void print(){
        for(int i=0;i<this->nextindex;i++){
            cout<<this->stack[i]<<" ";
        }
        cout<<endl;
    }
    bool isempty(){
        return this->nextindex==0;
    }
    T top(){
        if(this->nextindex==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return this->stack[this->nextindex-1];
    }
};

int main()
{
    Stack<float> s;
    // cout << s.size(s)<<endl;
    s.push(10.1);
    s.push(20.2);
    s.push(30.00);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    s.print();
    // cout << s.size(s)<<endl;
    // s.prT();
    // s.push(101);
    // T ele=s.pop();
    // cout<<ele<<endl;
    // cout << s.size(s)<<endl;
    // s.prT();
    // bool check=s.isempty();
    // cout<<check<<endl;
    // cout<<s.top()<<endl;
    // s.prT();
}