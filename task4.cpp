#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* next;
};
void 
insertAtBeginning(Node*
* head, int data) {
 Node* newNode = new 
Node;
 newNode->data = data;
 newNode->next = 
*head;
 *head = newNode;
}
void printList(Node* 
head) {
 Node* current = head;
 while (current != NULL) 
{
 cout << current->data << " ";
 current = current->next;
 }
 cout << endl;
}
int main() {
 
cout<<"traversing array elements and printing"<<endl;
 char arr[5] = 
{'a','b','c','d','e'};
 for (int i = 0; i < 5; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 cout<<"printing pointer value"<<endl;
 int x = 5;
 int* ptr = &x;
 *ptr = 10;
 cout << x << endl;
 cout<<"inserted elements"<<endl;
 Node* head = NULL;
 
insertAtBeginning(&head, 
5);
 
insertAtBeginning(&head, 
4);
 
insertAtBeginning(&head, 
3);
 
insertAtBeginning(&head, 
2);
 
insertAtBeginning(&head, 
1);
 printList(head);
 return 0;
}