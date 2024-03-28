//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    
    void sort(Node **head)
    {
         function<Node*(Node*)> reverse = [&](Node* ptr)
         {
                  Node* prev = NULL;
                Node* curr = ptr;
                Node* curr_next = NULL;
                
                while(curr!=NULL)
                {
                    curr_next = curr->next;
                    curr->next = prev;
                    
                    prev = curr;
                    curr=curr_next;
                }
                return prev;
         };
         if((*head)==NULL || (*head)->next==NULL)
         {
             return;
         }
         Node* ptr1 = (*head);
         Node* ptr2 =(*head)->next;
         Node* head1 = ptr1;
         Node* head2 = ptr2;
         
         while(ptr1 && ptr2)
         {
             ptr1->next = ptr2->next;
             ptr1=ptr2->next;
             
             if(!ptr1) break;
             
                 ptr2->next = ptr1->next;
                 ptr2=ptr1->next;
             
         }
         ptr1 = head1;
         while(ptr1->next!=NULL)
         {
             ptr1=ptr1->next;
         }
         head2 =reverse(head2);
         ptr1->next = head2;
         *head = head1;
         
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends