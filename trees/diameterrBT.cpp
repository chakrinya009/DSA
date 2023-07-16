 longest path between the nodes
 path doesnt need pass via root

 O(n*n)

 void diameter(Node *node){
   if(node==NULL){
    return 0
   }
   lh=height(node->left)
   rh=height(node->right)
   maxi=max(maxi,lh+rh)
   diameter(node->left)
   diameter(node->right)
 }

             optimized     O(n)

void diameter(Node *node,maxi){
    if(node==NULL){
        return 0
    }
    lh=diameter(node->left,maxi)
    rh=diameter(node->right,maxi)
    maxi=max(maxi,lh+rh)
    return 1+max(lh,rh)
}