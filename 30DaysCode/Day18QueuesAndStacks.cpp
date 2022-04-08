#include <iostream>
using namespace std;

#define MAX 100

class Stack{
    private:
        char arr[MAX];
        int top;

    public:
        Stack(): top(-1){
        }
        
        bool isEmpty(){
            return (top == -1);
        }
        
        bool isFull(){
            return (top == (MAX - 1));
        }

        void push(char a){
            if (isFull())
                throw invalid_argument ("Stack is full");
            
            arr[++top] = a;
        }

        char pop(){
            if (isEmpty())
                throw invalid_argument ("Stack is empty");
            
            return arr[top--];
        }

        char peek(){
            if (isEmpty())
                throw invalid_argument ("Stack is empty");
            
            return arr[top];
        }
};

class Queue{
    private:
        char arr[MAX];
        int front;
        int rear;

    public:
        Queue(): front(-1), rear(-1){
        }
        
        bool isEmpty(){
            return (rear == -1);
        }
        
        bool isFull(){
            return ( ((rear + 1) % MAX) == front);
        }

        void enQueue(char a){
            if (isFull())
                throw invalid_argument ("Queue is full");

            if(rear == -1)
                front = rear = 0;
            else
                rear  = (rear + 1) % MAX;                

            arr[rear] = a;
        }

        char deQueue(){
            if (isEmpty())
                throw invalid_argument ("Queue is empty");
            
            char a = arr[front];

            if(front == rear)
                front = rear = -1;
            else
                front = (front + 1) % MAX;

            return a;
        }

        char peek(){
            if (isEmpty())
                throw invalid_argument ("Queue is empty");
            
            return arr[front];
        }
};

class Solution {
    private:
        Stack s;
        Queue q;
    
    public:
        void pushCharacter(char a){
            s.push(a);
        }

        void enqueueCharacter(char a){
            q.enQueue(a);
        }

        char popCharacter(){
            return s.pop();
        }

        char dequeueCharacter(){
            return q.deQueue();
        }
};

int main() {
    Solution obj;

    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;    
    for (int i = 0; i < s.length(); i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome)
        cout << "The word, " << s << ", is a palindrome.";
    else
        cout << "The word, " << s << ", is not a palindrome.";
    
    return 0;
}
