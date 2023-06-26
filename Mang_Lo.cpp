#include <bits/stdc++.h>
#include<cmath>
using namespace std;

// A linked list node
class Node
{
	public:
	double x;
	double y;
	Node *next;
};



void append(Node** head, double x,double y)
{
	Node* new_node = new Node();

	Node *last = *head; 


	new_node->x = x;
	new_node->y = y;


	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return;
	}


	while (last->next != NULL)
	{
		last = last->next;
	}


	last->next = new_node;
	return;
}


double abs(double a, double b){
	if(a-b>=0){
		return a-b;
	}
	else{
		return b-a;
	}
}

double bphuong(Node* head,Node* temp){
	double a = abs(head->x,temp->x);
	double b = abs(head->y,temp->y);
	double c = pow(a,2)+pow(b,2);
	return c;
}


void FindNearest(Node* head, double x,double y)
{	Node* temp = new Node();
	temp->x = x;
	temp->y = y;
	Node* temp2 = new Node();
	temp2 = head;
	bool check = true;

	
	while(head->next != NULL){
		if(bphuong(head,temp)<bphuong(temp,temp2)){
			
			temp2->x = head->x;
			temp2->y = head->y;
		}
			head = head->next;	
	}	
//	cout << "\n\nPHAN TU: " << temp2 << endl;
	cout << "\n\nLO TIM DUOC GAN NHAT: \t" << temp2->x << "\t " << temp2->y << endl;
	

}

void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
		cout <<"\t " << node->x << "\t " << node->y << endl;
        node = node->next; 
    } 
} 

int main()
{
	Node* head = NULL;
	int N = 0;
	cout << "So phan tu muon them: ";
	cin >> N;
	int i =0;
	double x = 0;
	double y = 0;
	while(i<N){
	cout << "NHAP LO THU " << i+1 << ": ";
	cin >> x >> y;
	while(x > 1000 || y> 1000 || x<0 || y<0 ){
		cout << "NHAP LAI LO THU " << i+1 << ": ";
		cin >> x >> y;
	}
	
	append(&head, x,y);
	i++;
	}

	
	cout<<"Lo vua tao: " << endl;
	printList(head);
	double x1 = 0;
	double y1 = 0;
	cout << " \n\n Nhap lo muon tim: ";
	cin >> x1 >> y1;
	while(x1 > 1000 || y1> 1000 || x1<0 || y1<0 ){
		cout << "Nhap lai lo muon tim ";
		cin >> x1 >> y1;
	}

	FindNearest(head,x1,y1);

	
	
	return 0;
}



