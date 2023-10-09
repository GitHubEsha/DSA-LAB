////ACTIVITY 1:
//
//#include <iostream>
//using namespace std;
//struct Node {
// int data;
// Node* next;
//};
//void displayLinkedList(Node* head) {
// cout << "The linked list is: ";
// Node* ptr = head;
// while (ptr != NULL) {
// cout << ptr->data << " ";
// ptr = ptr->next;
// }
// cout << endl << "****head address: " << head << endl;
// cout << "--------------------------" << endl;
// cout << "head content: " << head<< endl;
// cout << "--------------------------" << endl;
// cout << "***ptr address:*** @" << &head << endl;
// cout << "--------------------------" << endl;
// cout << "ptr content: " << head << endl;
// cout << "----------------------" << endl;
// ptr = head;
// while (ptr != NULL) {
// cout << "ptr->data: " << ptr->data << endl;
// cout << "----------------------" << endl;
// cout << "ptr: " << ptr << endl;
// cout << "ptr->next: " << ptr->next << endl;
// ptr = ptr->next;
// }
//}
//int main() {
// Node* head = new Node();
// Node* second = new Node();
// Node* third = new Node();
// Node* fourth = new Node();
// head->data = 1;
// head->next = second;
// second->data = 2;
// second->next = third;
// third->data = 20;
// third->next = fourth;
// fourth->data = 30;
// fourth->next = NULL;
// displayLinkedList(head);
// return 0;
//
//}
//
//
//
//
////ACTIVITY 2:
//
//#include <iostream>
//
//// Define a simple Node structure for the linked list
//struct Node {
//    int data;
//    Node* next;
//    Node(int val) : data(val), next(NULL) {}
//
//};
//
//// Class for the linked list operations
//class LinkedList {
//private:
//    Node* head; // Pointer to the head of the list
//    bool isCircular;
//
//public:
//    LinkedList(bool circular = false) : head(NULL), isCircular(circular) {}
//
//    // Function to insert a node at the beginning of the list
//    void insertAtBeginning(int value) {
//        Node* newNode = new Node(value);
//        if (isCircular) {
//            if (head == NULL) {
//                newNode->next = newNode;
//            } else {
//                Node* lastNode = head;
//                while (lastNode->next != head) {
//                    lastNode = lastNode->next;
//                }
//                lastNode->next = newNode;
//                newNode->next = head;
//            }
//            head = newNode;
//        } else {
//            newNode->next = head;
//            head = newNode;
//        }
//        std::cout << "Inserted successfully at the beginning." << std::endl;
//    }
//
//    // Function to display the linked list
//    void display() {
//        Node* current = head;
//        std::cout << "The items present in the list are: ";
//        if (current == NULL) {
//            std::cout << "Empty";
//        } else {
//            if (isCircular) {
//                do {
//                    std::cout << current->data << " ";
//                    current = current->next;
//                } while (current != head);
//            } else {
//                while (current != NULL) {
//                    std::cout << current->data << " ";
//                    current = current->next;
//                }
//            }
//        }
//        std::cout << std::endl;
//    }
//
//    // Function to delete the entire linked list
//    void deleteList() {
//        Node* current = head;
//        while (current != NULL) {
//            Node* next = current->next;
//            delete current;
//            current = next;
//        }
//        head = NULL;
//        std::cout << "List deleted." << std::endl;
//    }
//
//    ~LinkedList() {
//        deleteList();
//    }
//};
//
//int main() {
//    int choice;
//    bool isCircular = false;
//    LinkedList list(isCircular);
//    do {
//        std::cout << "Operations on List.." << std::endl;
//        std::cout << "1. Insertion" << std::endl;
//        std::cout << "2. Display" << std::endl;
//        std::cout << "3. Exit" << std::endl;
//        std::cout << "Enter your choice: ";
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1:
//            int insertValue;
//            std::cout << "Enter the value to insert: ";
//            std::cin >> insertValue;
//            list.insertAtBeginning(insertValue);
//            break;
//        case 2:
//            list.display();
//            break;
//        case 3:
//            std::cout << "Exiting the program..." << std::endl;
//            // Clean up the linked list memory
//            list.deleteList();
//            exit(0);
//        default:
//            std::cout << "Invalid choice!" << std::endl;
//            break;
//        }
//
//        std::cout << "Press any key to continue...";
//        std::cin.ignore();
//        std::cin.get();
//    } while (choice != 3);
//
//    return 0;
//}

