#include "tree.cpp"
#include <queue>
void print_tree(Tree<int> *t)
{
    if (t == NULL)
    {
        return;
    }
    cout << t->root << ":";
    for (int i = 0; i < t->child.size(); i++)
    {
        cout << t->child[i]->root << " ";
    }
    cout << endl;
    for (int i = 0; i < t->child.size(); i++)
    {
        print_tree(t->child[i]);
    }
}
// normal input taking

/*Tree<int>* create_tree(){
    int data;
    cout<<"Enter data:";
    cin>>data;
    Tree<int>* r = new Tree<int>(data);
    int c;
    cout<<"Enter number of childrens of "<<data<<":";
    cin>>c;
    for(int i=0;i<c;i++){

        Tree<int>* c1 = create_tree();
        r->child.push_back(c1);
    }
    return r;
}*/

// level wise input taking
/*Tree<int>* create_tree(){
    int rootdata;
    cout<<"Enter data:";
    cin>>rootdata;
    Tree<int>* r = new Tree<int>(rootdata);
    queue<Tree<int>*> pendingchilds;
    pendingchilds.push(r);
    while(pendingchilds.size() != 0){
        Tree<int>* front = pendingchilds.front();
        pendingchilds.pop();
        int frontchilds;
        cout<<"Enter number of childs of "<<front->root<<":";
        cin>>frontchilds;
        for(int i=0;i<frontchilds;i++){
            int childdata;
            cout<<"Enter "<<i+1<<"th child of "<<front->root<<":";
            cin>>childdata;
            Tree<int>* child = new Tree<int>(childdata);
            front->child.push_back(child);
            pendingchilds.push(child);
        }
    }
    return r;
}*/
Tree<int> *create_tree_own()
{
    int rootdata;
    cout << "Enter Root data:";
    cin >> rootdata;
    Tree<int> *rootnode = new Tree<int>(rootdata);
    queue<Tree<int> *> pendingchilds;
    pendingchilds.push(rootnode);
    while (pendingchilds.size() != 0)
    {
        Tree<int> *front = pendingchilds.front();
        pendingchilds.pop();
        int childs;
        cout<<"Enter number of childs of "<<front->root<<":";
        cin>>childs;
        for(int i=0;i<childs;i++){
            int temp;
            cout<<"Enter the value of "<<i+1<<"th chlid of "<<front->root<<":";
            cin>>temp;
            Tree<int> *childnode = new Tree<int>(temp);
            front->child.push_back(childnode);
            pendingchilds.push(childnode);
        }

    }
    return rootnode;
}
int count_node_of_tree(Tree<int>* rootnode){
    if(rootnode == NULL){
        return 0;
    }
    int len=1;
    for(int i=0;i<rootnode->child.size();i++){
        len += count_node_of_tree(rootnode->child[i]);
    }
    return len;
    
}
int sum_of_all_nodes(Tree<int>* rootnode){
    if(rootnode==NULL){
        return 0;
    }
    int sum=rootnode->root;
    for(int i=0;i<rootnode->child.size();i++){
        sum+=sum_of_all_nodes(rootnode->child[i]);
    }
    return sum;
}
int greatest_node_in_tree(Tree<int>* rootnode){
    int greater = rootnode->root;
    for(int i=0;i<rootnode->child.size();i++){
        if(greater<rootnode->child[i]->root){
            greater=rootnode->child[i]->root;
        }
    }
    for(int i=0;i<rootnode->child.size();i++){
    int greater1 = greatest_node_in_tree(rootnode->child[i]);
    if(greater<greater1){
        greater=greater1;
    }
    }
    return greater;
}
int height_of_tree(Tree<int>* rootnode){
    if(rootnode==NULL){
        return 0;
    }
    int height=1;
    int temp=0;
    for(int i=0;i<rootnode->child.size();i++){
        int h1=height_of_tree(rootnode->child[i]);
        if(h1>temp){
            temp=h1;
        }
    }
    return height+temp;
}
void print_at_levelk(Tree<int>* rootnode,int k){
    if(k==0){
        cout<<rootnode->root<<" ";
        return;
    }
    for(int i=0;i<rootnode->child.size();i++){
        print_at_levelk(rootnode->child[i],k-1);
    }
}
void preorder(Tree<int>* rootnode){
    if(rootnode==NULL){
        return;
    }
    cout<<rootnode->root<<" ";
    for(int i=0;i<rootnode->child.size();i++){
        preorder(rootnode->child[i]);
    }
}
//to do
void postorder(Tree<int>* rootnode){
    if(rootnode==NULL){
        return;
    }
    
    for(int i=0;i<rootnode->child.size();i++){
        
        preorder(rootnode->child[i]);
        
    }
    cout<<rootnode->root<<" ";
    

}
int count_leaf_node(Tree<int>* rootnode){
    int leafnode=0;
    if(rootnode->child.size() == 0){
        return 1;
    }
    for(int i=0;i<rootnode->child.size();i++){
    leafnode += count_leaf_node(rootnode->child[i]);
    }
    return leafnode;
}
bool contain_x(Tree<int>* rootnode,int x){
    bool present=false;
    if(rootnode->root == x){
        return true;
    }
    for(int i=0;i<rootnode->child.size();i++){
        present = contain_x(rootnode->child[i],x);
        if(present == true){
            break;
        }
    }
    return present;
}
int main()
{
    // Tree<int>* t1 = new Tree<int>(5);
    // Tree<int>* t2 = new Tree<int>(4);
    // Tree<int>* t3 = new Tree<int>(6);
    // t1->child.push_back(t2);
    // t1->child.push_back(t3);
    Tree<int> *t4 = create_tree_own();
    print_tree(t4);
    // bool present = contain_x(t4,15);
    // cout<<present;
    // int leaf = count_leaf_node(t4);
    // cout<<leaf;
    postorder(t4);
    // print_at_levelk(t4,1);
    // cout<<endl;
    // int h = height_of_tree(t4);
    // cout<<h;
    // int gre = greatest_node_in_tree(t4);
    // cout<<gre;
    // int sum = sum_of_all_nodes(t4);
    // cout<<sum;
    // int length = count_node_of_tree(t4);
    // cout<<length<<endl;
    delete t4;
    return 0;
}
// 1 3 2 3 4 2 5 6 1 7 1 8 0 1 9 0 0 1 10 0