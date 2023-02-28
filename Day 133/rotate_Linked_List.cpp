class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // reach to last position
        Node* last = head;
        while(last->next)
            last = last->next;
        while(k >0){
            Node* tmp = head;
            head = head->next;
            last->next = tmp;
            last = tmp;
            tmp->next = NULL;
            k--;
        }
        return head;
        
    }
};