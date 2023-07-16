// naive solution
time complexity -- O(n*n)

bool check(Node *node){
    if(node==NULL){
        return true;
    }
    lh=height(node->left)
    rh=height(node->right)
    if(abs(rh-lh)>1){
        return false
    }
    bool left=check(node->left)
    bool right=check(node->right)
    if(!left || !right){
        return false
    }
    return true
}

                                  optimized solution     time complexity == O(n)

bool balanced(Node *node)                                  {
    return dfs(node)!=-1;
}
 
int dfs(Node *node){
    if(node==NULL){
        return 0
    }
    int leftHeight=dfs(node->left)
    if(leftHeight==-1){
        return -1;
    }
    int rightHeight=dfs(node->right)
    if(rightHeight==-1){
        return -1;
    }
    if(abs(rightHeight-leftHeight)>1){
        return -1
    }
    return max(rightHeight,leftHeight)+1
}