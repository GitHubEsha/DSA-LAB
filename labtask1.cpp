#include<iostream>
using namespace std;
int stack[100];
int n=100;
int top=-1;
void push(int val){
	if(top>=n-1){
		cout<<"Stack overflow"<<endl;
	}
	else{
		top++;
		stack[top]=val;
	}
}
void pop(){
	if(top<=-1){  
		cout<<"Stack underflow"<<endl;
	}
	else{
		cout<<"The poped elements are:"<<endl<<stack[top]<<endl;
		top--;
	}
}
void display(){
	if(top>=0){
		cout<<"Stack elements are:"<<endl;
		for(int i=0;i<=top;i++){
			cout<<" "<<stack[i]<<endl;
		}
	}
	else{
		cout<<"Stack is underflow"<<endl;
	}
}
int main(){
	
    push(3);
	push(2);
   	push(4);
	display();
	pop();
	pop();
	pop();
	return 0;
}

