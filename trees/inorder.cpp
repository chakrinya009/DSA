void inorder(node){
    if(node){
        inorder(node->left);
        cout<<node->data;
        inorder(node->right);
    }
}

time complexity --> O(n)
space complexity --> O(n)