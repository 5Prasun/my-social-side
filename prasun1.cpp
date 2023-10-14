#include<iostream>
using namespace std;
const int size=100;
class stack{
    private:
    int top;
    int arr[size];

    public:
    //constructor
    stack(){
        top==-1;
    }

    bool isempty(){
        return (top==-1);
    }

    bool isfull(){
        return (top==size-1);
    }

    void push(int value){
        if(isfull()){
            cout<<"Stack is full"<<endl;

        }
        else{
            top++;
            arr[top]=value;
        }
    }

    void pop(){
        if(isempty()){
            cout<<"Stack is empty"<<endl;

        }
        else{
            cout<<"The pop element is"<<arr[top]<<endl;
        }
    }


    int peek(){
        if(!isempty()){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    void display(){
        if(isempty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            for(int i=0;i<getsize();i++){
                cout<<arr[i]<<endl;
            }
        }
    }


    int getsize(){
        return top+1;
    }
};


int main(){
    stack s;
    s.push(5);
    s.isempty();
    s.pop();
    s.isfull();
    s.push(7);
    s.push(8);
    s.push(9);
    s.getsize();
    s.display();

}
