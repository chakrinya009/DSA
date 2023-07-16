// max depth

space complexity = O(n)
time complexity = O(n)

int maxDepth(Node *node){
    if(node==NULL){
        return 0;
    }
    int lh=maxDepth(node->left);
    int rh=maxDepth(node->right)
    return 1+max(lh,rh);
}