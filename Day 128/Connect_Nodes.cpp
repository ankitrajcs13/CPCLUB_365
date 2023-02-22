class Solution{
    public:
    void connect(Node *root)
    {
        // initialise queue
        queue<Node*> q;
        // push root into it
        q.push(root);
        while(!q.empty()){
            int s= q.size();
            Node* prev = NULL;
            for(int i = 1; i<=s; i++){
                Node* tmp = q.front();
                q.pop();
                tmp->nextRight = prev;
                if(tmp->right)
                    q.push(tmp->right);
                if(tmp->left)
                    q.push(tmp->left);
                prev = tmp;
            }
        }
    }    
};