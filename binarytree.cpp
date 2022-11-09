template <typename T>
class Binarytree
{
public:
    T root;
    Binarytree<T>* left;
    Binarytree<T>* right;

    Binarytree(int data){
        this->root=data;
        this->left=NULL;
        this->right=NULL;
    }
    ~Binarytree(){
        delete left;
        delete right;
    }
};
