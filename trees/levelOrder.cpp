// 1
// 23
// 4567

// display in this way    space complexity ==O(n)  time complexity == O(n)

vector<vector<int>> levelorder(Node *node){
    vector<vector<int>> ans;
    if(root==null){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size()         // taking size

        vector<int> level;             // for each level
        
        for(int i=0;i<size;++i){
            Node *node=q.pop()
            
            if(node->left){
                q.push(node->left)
            }
            
            if(node->right){
                q.push(node->right)
            }
           
           level.push_back(node->data)

        }
        ans.push_back(level)
    }
    return ans;
}