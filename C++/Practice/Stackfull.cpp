#include <iostream>
using namespace std;
int stack[100], n=100, top=-1 ;

void push(int val) {
if(top>=n-1)
cout<<"IS FULL"<<endl;
else {
top++;
stack[top]=val;
}
}
void pop() {
if(top<=-1)
cout<<"IS EMPTY"<<endl;
else {
cout<<"POP ELEMENT IS: "<< stack[top] <<endl;
top--;
}
}
void peek() {
if(top<=-1)
cout<<"STACK UNDERFLOW \n"<<endl;
else {
cout<<"TOP ELEMENT IS: "<< stack[top] <<endl;
}
}

int main() {
int ch, val;
cout<<"1) PUSH"<<endl;
cout<<"2) POP"<<endl;
cout<<"3) PEEK"<<endl;
cout<<"4) EXIT"<<endl;
do {
cout<<"ENTER YOUR CHOICE: ";
cin>>ch;
switch(ch) {
case 1: {
cout<<"ENTER VALUE FOR PUSH: ";
cin>>val;
push(val);
cout<<"VALUE IS ADDED \n"<<endl;
break;
}
case 2: {
pop();
cout<<"\n";
break;
}
case 3: {
peek();
               cout<<"\n";
break;
}
case 4:{
    exit(0);
    break;
}
default: {
cout<<"YOUR CHOICE IS NOT VALID"<<endl;
}
}
}while(ch!=5);
return 0;
}
