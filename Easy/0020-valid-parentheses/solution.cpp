// Problem: Valid Parentheses
// Difficulty: Easy
// Link: https://leetcode.com/problems/valid-parentheses/

#define size 10000
class staack{
    private:
    int a[size];
    int top;
    public:
    staack(){
        top=-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
    void push(char x){
        if(isFull()){
            return;
        }
        a[++top]=x;
    }
    char pop(){
        if(isEmpty()){
            return -1;
        }
        return a[top--];
    }
    char peek(){
        if(isEmpty()){
            return -1;
        }
        return a[top];
    }
    bool isMatching(char c1,char c2){
        return (c1=='('&&c2==')')||(c1=='['&&c2==']')||(c1=='{'&&c2=='}');
    }
    bool isOpening(char c){
        return (c=='(')||(c=='{')||(c=='[');
    }
    bool isClosing(char c){
        return (c==')')||(c=='}')||(c==']');
    }
    bool validate(string s){
        for(char ch:s){
            if(isOpening(ch)){
                push(ch);
            }
            else{
                if(isEmpty()||!isMatching(pop(),ch)) return false;
            }

        }
        return isEmpty();
    }
};
class Solution {
public:
    bool isValid(string s) {
        staack mystack;
        return mystack.validate(s);
    }
};