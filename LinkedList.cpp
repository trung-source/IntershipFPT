// A complete working C++ program to demonstrate
// all insertion methods on Linked List
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};


/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(Node** head, int new_data)
{
	/* 1. allocate node */
	Node* new_node = new Node();

	Node *last = *head; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. This new node is going to be
	the last node, so make next of
	it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty,
	then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
	{
		last = last->next;
	}

	/* 6. Change the next of last node */
	last->next = new_node;
	return;
}


void Find(Node* head, int data)
{	
	while(head->data != data){
		if (head->next == NULL){
			cout << "KHONG CO PHAN TU CAN TIM TRONG DANH SACH" << endl;
		}else{
			head = head->next;
		}
		
		
	}	
	cout << "PHAN TU: " << head << endl;
	cout << "Data: " << head->data << endl;
	

}

void Del(Node** head, int data)
{	Node* temp = new Node();
	Node* temp2 = new Node();
	temp = (*head);
	temp2 = (*head);
	while((temp->next)->data != data){
		if ((temp->next)->next == NULL){
			cout << "KHONG CO PHAN TU CAN TIM TRONG DANH SACH" << endl;
		}else{
			temp = temp->next;
		}
	}	
//	cout << "\nPHAN TU: " << (temp->next)<< endl;
//	cout << "Data: " << (temp->next)->data << endl;
	(*head) = temp;
	(*head)->next = (temp->next)->next;
	(*head)= temp2;
	

}

void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<<" "<<node->data; 
        node = node->next; 
    } 
} 

int main()
{
	/* Start with the empty list */
	Node* head = NULL;
	

	append(&head, 1);
	append(&head, 2);
	append(&head, 3);	
	append(&head, 4);
	append(&head, 5);
	append(&head, 6);
	append(&head, 7);
	append(&head, 8);
	append(&head, 9);

	
	cout<<"List vua tao: ";
	int data = 5;
	printList(head);
	
	cout << "\nTIM: " << data << endl;
	Find(head,data);
	cout << "\nXOA: " << data << endl;
	Del(&head,data);
	printList(head);
	
	
	return 0;
}



