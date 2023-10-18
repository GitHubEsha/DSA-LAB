//#include<iostream>
//using namespace std;
//int stack[100];
//int n=100;
//int top=-1;
//void push(int val){
//	if(top>=n-1){
//		cout<<"Stack overflow"<<endl;
//	}
//	else{
//		top++;
//		stack[top]=val;
//	}
//}
//void pop(){
//	if(top<=-1){  
//		cout<<"Stack underflow"<<endl;
//	}
//	else{
//		cout<<"The poped elements are:"<<endl<<stack[top]<<endl;
//		top--;
//	}
//}
//void display(){
//	if(top>=0){
//		cout<<"Stack elements are:"<<endl;
//		for(int i=0;i<=top;i++){
//			cout<<" "<<stack[i]<<endl;
//		}
//	}
//	else{
//		cout<<"Stack is underflow"<<endl;
//	}
//}
//int main(){
//	
//    push(3);
//	push(2);
//   	push(4);
//	display();
//	pop();
//	pop();
//	pop();
//	return 0;
//}

//Check balanced equation using stack
//
//#include <iostream>
//#include <stack>
//#include <string>
//
//bool isBalanced(const std::string &equation) {
//    std::stack<char> stack;
//    
//    for (char c : equation) {
//        if (c == '(' || c == '[' || c == '{') {
//            stack.push(c);
//        } else if (c == ')' || c == ']' || c == '}') {
//            if (stack.empty()) {
//                return false; 
//            }
//            char top = stack.top();
//            stack.pop();
//            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
//                return false; 
//            }
//        }
//    }
//    
//    return stack.empty(); 
//}
//
//int main() {
//    std::string equation;
//    std::cout << "Enter an equation: ";
//    std::cin >> equation;
//
//    if (isBalanced(equation)) {
//        std::cout << "The equation is balanced." << std::endl;
//    } else {
//        std::cout << "The equation is not balanced." << std::endl;
//    }
//
//    return 0;
//}

//Reverse of a string using stack
//
//
//#include <iostream>
//#include <string>
//
//void reverseString(char str[], int length) {
//    for (int i = 0; i < length / 2; i++) {
//        char temp = str[i];
//        str[i] = str[length - i - 1];
//        str[length - i - 1] = temp;
//    }
//}
//
//int main() {
//    string input;
//    cout << "Enter a string: ";
//    cin >> input;
//
//    int length = input.length();
//    char* str = &input[0]; 
//
//    reverseString(str, length);
//
//    cout << "Reversed string: " << str <<endl;
//
//    return 0;
//}

//Implement Stack using linked list
//
//#include <iostream>
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//
//class Stack {
//private:
//    Node* top;
//
//public:
//    Stack() : top(nullptr) {}
//    bool isEmpty() {
//        return top == nullptr;
//    }
//    void push(int value) {
//        Node* newNode = new Node(value);
//        if (top == nullptr) {
//            top = newNode;
//        } else {
//            newNode->next = top;
//            top = newNode;
//        }
//        std::cout << value << " pushed onto the stack." << std::endl;
//    }
//    void pop() {
//        if (isEmpty()) {
//            std::cout << "Stack is empty. Cannot pop." << std::endl;
//            return;
//        }
//        Node* temp = top;
//        top = top->next;
//        std::cout << temp->data << " popped from the stack." << std::endl;
//        delete temp;
//    }
//    int peek() {
//        if (isEmpty()) {
//            std::cout << "Stack is empty." << std::endl;
//            return -1; 
//        }
//        return top->data;
//    }
//};
//
//int main() {
//    Stack stack;
//
//    stack.push(1);
//    stack.push(2);
//    stack.push(3);
//
//    std::cout << "Top element: " << stack.peek() << std::endl;
//
//    stack.pop();
//    stack.pop();
//    stack.pop();
//
//    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;
//
//    return 0;
//}

