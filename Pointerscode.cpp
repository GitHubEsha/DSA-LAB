//Program 1: Basic point declaration and usage:
	
//#include <iostream>
//using namespace std;
//int main(){
//	int num;
//	int *ptr;
//	cout<<"Enter any number: ";
//	cin>>num;
//	ptr=&num;
//	cout<<"The value stored in pointer is: "<< *ptr <<endl;
//	cout<<"The address of the pointer is: "<< &ptr <<endl;
//	cout<<"The adress of the variable is: "<< &num <<endl;
//	return 0;
//}



//Program 2: Number swapping using pointers:
//	
//#include <iostream>
//using namespace std;
//int main() {
//	int num1= 20;
//	int num2= 40;
//	cout<<"Number before swapping: num1 = "<< num1<<", num2 = "<< num2<<endl;
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	int num = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = *ptr1;
//	cout<<"Numbers after swapping: num1 = "<< num1 <<", num2 = "<< num2<<endl;
//	return 0;
//}


//Program 3: Incrementing and decrementing array index:
//	
//#include <iostream>
//using namespace std;
//int main() {
//	int arr[6]={5,10,15,20,25,30};
//	cout<<"Elements of the array: "<<endl;
//	for(int i=0; i<6; i++){
//		cout<<" "<<arr[i]<<endl;
//	}
//	
//	int *ptr=arr;
//	cout<<"The pointer points towards: "<<*ptr<<endl;
//	ptr++;
//	cout<<"After incrementing: "<<*ptr<<endl;
//	ptr--;
//	cout<<"After decrementing:  "<<*ptr<<endl;
//	ptr+=5;
//	cout<<"Pointing towards specific value stored in index 5: "<<*ptr<<endl;
//	return 0;
//}


//Program 4: Printing array elements using pointer:
//	
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6]={5,10,15,20,25,30};
//	int *ptr= arr;
//	cout<<"Elements of array using pointer: "<<endl;
//	for(int i=0; i<6; i++){
//		cout<<" "<<*ptr<<endl;
//		ptr++;
//	}
//	cout<<endl;
//	return 0;
//}


//Program 5: Sum and average of array using pointer:

//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6];
//	cout<<"Enter 6 integars: ";
//	for(int i=0; i<6; i++){
//		cin>>arr[i];
//	}
//	double sum=0;
//	int *ptr = arr;
//	for(int i=0; i<6; i++){
//		sum+=*ptr;
//		ptr++;
//	}
//	double average= sum/6;
//	cout<<"Average is: "<< average<<endl;
//	cout<<"Sum is: " <<sum<<endl;
//	return 0;
//}


//Program 6: Finding maximum value in an array using pointer:

//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6];
//	cout<<"Enter 6 integars as array elements: ";
//	for( int i=0; i<6; i++){
//		cin>>arr[i];
//	}
//	int *ptr=arr;
//	int max = *ptr;
//	for(int i=0; i<6; i++){
//		if (*ptr>max){
//			max=*ptr;
//		}
//		ptr++;
//	}
//	cout<<"The maximum value is: "<<max<<endl;
//	return 0;
//	
//}


//Program 7: Minimum value in an array using pointer:

//#include<iostream>
//using namespace std;
//int main(){
//	int arr[6];
//	cout<<"Enter 6 integars as array elements: ";
//	for( int i=0; i<6; i++){
//		cin>>arr[i];
//	}
//	int *ptr=arr;
//	int min = *ptr;
//	for(int i=0; i<6; i++){
//		if (*ptr<min){
//			min=*ptr;
//		}
//		ptr++;
//	}
//	cout<<"The minimum value is: "<<min<<endl;
//	return 0;
//	
//}


//Program 8:Pointer to reverse a character string:

//#include<iostream>
//#include<cstring>
//using namespace std;
//int main(){
//	int maxlen=10;
//	char str[maxlen+1];
//	cout<<"Enter a string upto 10 charachters: ";
//	cin.get(str,maxlen+1);
//	int length= strlen(str);
//	char *start= str;
//	char *end= str+length-1;
//	while(start<end){
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//	cout<<"Reversed string is: "<<str<<endl;
//	return 0;
//}


//Program 9: Pointer to object:

//#include<iostream>
//#include<cstring>
//using namespace std;
//class Rectangle{
//	public:
//	int width;
//	int height;
//};
// int main(){
// 	Rectangle rect;
// 	rect.width=5;
// 	rect.height=10;
// 	Rectangle *ptr =&rect;
// 	cout<<"Length: "<<ptr->height<<endl;
// 	cout<<"Width:"<<ptr->width<<endl;
// 	return 0;
// }


//Program 10: pointer to object and sum with pointer:

//#include<iostream>
//#include<cstring>
//using namespace std;
//class Rectangle{
//	public:
//	int width;
//	int height;
//};
// int main(){
// 	Rectangle rect;
// 	cout<<"Enter the with: "<<endl;
// 	cin>>rect.width;
// 	cout<<"Enter the height: "<<endl;
// 	cin>>rect.height;
// 	Rectangle *ptr= &rect;
// 	int *Widthpointer= &(ptr->width);
// 	int *Heightpointer=&(ptr->height);
// 	int sum= *Widthpointer+*Heightpointer;
// 	cout<<"Width: "<<rect.width<<endl;
// 	cout<<"Height: "<<rect.height<<endl;
// 	cout<<"Sum: "<< sum<<endl;
// 	return 0;
// }


//Program 11:Pointer to Structure for Employee Information:

//#include<iostream>
//#include<cstring>
//using namespace std;
//struct Employee{
//	string name;
//	int salary;
//};	
//int main(){
//	int numEmployee = 3;
//	Employee employee[numEmployee];
//	for(int i=0; i<numEmployee; i++){
//		cout<<"Enter Employee name for: "<<i+1<<endl;
//		cin>>employee[i].name;
//		cout<<"Enter Employee salary for: "<<i+1<<endl;
//		cin>>employee[i].salary;
//	}
//	for(int i=0; i<numEmployee; i++){
//		Employee *emptr=&employee[i];
//		cout<<"Employee "<<i+1<<" information"<<endl;
//		cout<<"Name: "<<emptr->name<<endl;
//		cout<<"Salary: "<<emptr->salary<<endl;
//	}
//	return 0;
//}


//Program 12: Array manipulation using pointers:

//#include<iostream>
//using namespace std;
//int main(){
//	int numbers[] ={1, 2, 3, 4, 5};
//	int *ptr=numbers;
//	for(int i=0;i<6;i++){
//		cout<< "Element " <<i<<": " <<*ptr <<endl;
//		ptr++;
//	}
//	ptr = numbers + 2;
//    *ptr = 10;
//    ptr = numbers;
//    for (int i = 0; i < 5; i++){
//        cout<< "Element " <<i<< ": "<<*ptr<<endl;
//        ptr++;
//    }
//    return 0;
//}


//Program 13:Counting Vowels:

//#include<iostream>
//using namespace std;
//bool isVowel(char ch) {
//    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
//            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
//}	
//int countVowels(const char* str) {
//    int count =0;
//    while (*str){
//        if (isVowel(*str)) {
//            count++;
//        }
//        str++; 
//    }
//	return count;
//}
//int main() {
//    const char *text = "Hello, World!";
//    int vowelCount = countVowels(text);
//    cout <<"The number of vowels in the text is: "<<vowelCount <<endl;
//    return 0;
//}


//Program 14:Finding Factorial:

//#include<iostream>
//using namespace std;
//int main() {
//    int number;
//    cout<<"Enter positive integer: ";
//    cin>>number;
//    if (number < 0) {
//       cout<< "Factorial not defined for negative numbers." <<endl;
//    } else {
//        int factorial = 1;
//        int *factorialPtr = &factorial;
//		 for (int i = 1; i <= number; i++) {
//            *factorialPtr *= i;
//        }
//		cout<< "Factorial of " <<number << " is: " <<*factorialPtr<<endl;
//    }
//    return 0;
//}


//Program 15:Person Introduction:

//#include <iostream>
//using namespace std; 
//class Person{
//public:
//    string name;
//    int age;
//    Person(string n, int a) :name(n), age(a) {}
//    void introduce(){
//        cout<< "Hi, my name is " <<name<< " and I am " <<age<< " years old." <<endl;
//    }
//};
//int main(){
//    Person person("Rabia", 20);
//    Person *personPtr = &person;
//    personPtr->introduce();
//    return 0;
//}

