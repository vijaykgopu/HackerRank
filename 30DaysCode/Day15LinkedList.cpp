#include <iostream>
using namespace std;    

class Node
{
    public:
        int data;
        Node *next;

        Node(int d): data(d), next(NULL){
        }
};

class Solution{
    public:
        Node* insert(Node *head, int data){
            Node *temp1 = new Node(data);

            if(!head)
                head = temp1;
            else{
                Node *temp2 = head;
                while(temp2->next)
                    temp2 = temp2->next;
                temp2->next = temp1;
            }
            
            return head;
        }

        void display(Node *head){
            while(head){
                cout << head->data <<" ";
                head = head->next;
            }
        }

        void deleteList(Node *head){
            Node *temp;

            while(head){
                temp = head;
                head = head->next;
                delete temp;
            }
        }
};

int main()
{
    Node* head;
    Solution mylist;

    int count;
    cin >> count;

    for(int i = 0; i < count; i++){
        int data;
        cin >> data;

        head = mylist.insert(head,data);
    }
    
    mylist.display(head);        
    mylist.deleteList(head);
    
    return 0;
}
