void preorder(node){
    if(node){
        cout<<node->data;
        preorder(node->left);
        preorder(node->right);
    }
}



time complexity --> O(n)
space complexity --> O(n)