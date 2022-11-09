#include <iostream>
using namespace std;
class Stack
{
    private:
    // limit data insertion 
    // int stack[100];
    int *stack;
    int nextindex;
    int capacity;
public:
    Stack()
    {
        nextindex = 0;
        capacity=2;
        stack=new int[capacity];
    }
    int size(Stack s)
    {
        return s.nextindex;
    }
    // limit data insertion 
    // void push(int data){
    //     if(this->nextindex==100){
    //         cout<<"Stack is full "<<data<<" can't be pushed"<<endl;
    //         return;
    //     }
    //     this->stack[this->nextindex]=data;
    //     this->nextindex++;
    // }
    void push(int data){
        if(this->capacity != this->nextindex){
            this->stack[this->nextindex++]=data;
        }
        else{
            int *temp=this->stack;
            this->capacity*=2;
            this->stack=new int[capacity];
            for(int i=0;i<this->nextindex;i++){
                this->stack[i]=temp[i];
            }
            delete temp;
            this->stack[this->nextindex++]=data;
        }
    }
    int pop(){
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
    int top(){
        if(this->nextindex==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return this->stack[this->nextindex-1];
    }
};

int main()
{
    Stack s;
    // cout << s.size(s)<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    s.print();
    // cout << s.size(s)<<endl;
    // s.print();
    // s.push(101);
    // int ele=s.pop();
    // cout<<ele<<endl;
    // cout << s.size(s)<<endl;
    // s.print();
    // bool check=s.isempty();
    // cout<<check<<endl;
    // cout<<s.top()<<endl;
    // s.print();
}