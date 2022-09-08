void fun(BinaryTreeNode<int> *root,int count)
{
    if(root==NULL){
        return;
    }
    root->data=count;
    fun(root->left,count+1);
    fun(root->right,count+1);
    
}
BinaryTreeNode<int> *changeToDepthTree(BinaryTreeNode<int> *root)
{
    // Write your code here
    fun(root,0);
    return root;
}