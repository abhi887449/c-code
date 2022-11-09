#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Tree{
    public:
    T root;
    vector<Tree<T>*> child;
    Tree(int root){
        this->root=root;
    } 
    ~Tree(){
        for(int i=0;i<child.size();i++){
            delete child[i];
        }
    }
     
};