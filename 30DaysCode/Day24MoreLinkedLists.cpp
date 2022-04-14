#include <iostream>
using namespace std;    

class Node {
    public:
        int data;
        Node *next;

        Node(int d): data (d), next (NULL) {
        }
};

class LinkedList {
    public:
        Node * insert(Node *head, int data) {
            if(!head)
                head = new Node(data);  
            else{
                Node *temp = head;
                while(temp->next)
                    temp = temp->next;
                
                temp->next = new Node(data);
            }
            
            return head;
        }

        void removeDuplicates(Node *head){
            while(head->next){
                if(head->data == head->next->data){
                    Node *temp = head->next;
                    head->next = temp->next;
                    
                    temp->next = NULL;
                    delete temp;
                }else
                    head = head->next;
            }
        }

        void display (Node *head) {
            while(head){
                cout << head->data << " ";
                head = head->next;
            }
       }
};
            
int main(){
    Node *head = NULL;
    LinkedList ll;

    int T;
    cin >> T;

    while(T--){
        int data;
        cin >> data;
        
        head = ll.insert(head, data);
    }

    ll.removeDuplicates(head);
    ll.display(head);
    
    return 0;
}
