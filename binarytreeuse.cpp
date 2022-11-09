#include<iostream>
#include<queue>
#include "binarytree.cpp"
using namespace std;
void printbtree(Binarytree<int>* root){
    if(root == NULL){
        return;
    }
    // cout<<root->root<<":"<<root->left->root<<" "<<root->right->root<<endl;
    cout<<root->root<<":";
    if(root->left != NULL){
        cout<<"L-"<<root->left->root<<" ";
    }
    if(root->right != NULL){
        cout<<"R-"<<root->right->root;
    }
    cout<<endl;
    printbtree(root->left);
    printbtree(root->right);
}
Binarytree<int>* takeinput(){
    int data;
    cout<<"Enter root data:";
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Binarytree<int>* rootnode = new Binarytree<int>(data);
    queue<Binarytree<int>*> pendingchilds;
    pendingchilds.push(rootnode);
    while(pendingchilds.size() != 0){
        Binarytree<int>* front = pendingchilds.front();
        pendingchilds.pop();
        int c1,c2;
        cout<<"Enter data of 1st child of"<<front->root<<":";
        cin>>c1;
        if(c1 != -1){
        Binarytree<int>* child1 = new Binarytree<int>(c1);
        front->left=child1;
        pendingchilds.push(child1);
        }
        cout<<"Enter data of 2st child of"<<front->root<<":";
        cin>>c2;
        if(c1 != -1){
        Binarytree<int>* child2 = new Binarytree<int>(c2);
        front->right=child2;
        pendingchilds.push(child2);
        }

    }
    return rootnode;
}
void preorder(Binarytree<int>* rootnode){
    if(rootnode == NULL){
        return;
    }
    cout<<rootnode->root<<" ";
    preorder(rootnode->left);
    preorder(rootnode->right);

}
void postorder(Binarytree<int>* rootnode){
    if(rootnode == NULL){
        return;
    }
    
    postorder(rootnode->left);
    postorder(rootnode->right);
    cout<<rootnode->root<<" ";


}
void inorder(Binarytree<int>* rootnode){
    if(rootnode == NULL){
        return;
    }
    
    inorder(rootnode->left);
    cout<<rootnode->root<<" ";
    inorder(rootnode->right);


}

int main(){
    Binarytree<int>* rootnode = takeinput();
    printbtree(rootnode);
    inorder(rootnode);
    // postorder(rootnode);
    // preorder(rootnode);

    return 0;
}