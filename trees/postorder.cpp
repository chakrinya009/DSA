void postorder(node){
    if(node){
        postorder(node->left);
        postorder(node->right)
        cout<<node->data;
    }
}