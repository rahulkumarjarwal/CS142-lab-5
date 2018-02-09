#include<iostream>
using namespace std;
struct node{//creating a structure for node containing int type data and pointer named next
int data;
node *next;
};
class bubblesort{//creating a class containg functions to insert,sort and display elements of an array and linkedlist
public:
node *head,*tail;
int A[200];
int n;
bubblesort(){//constructor to assign values to head and tail as NULL
head=NULL;
tail=NULL;
}
void insert_array(){//function to insert elements in an array
cout<<"Enter the size of array"<<endl;
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter "<<i+1<<"th term"<<endl;
cin>>A[i];
}}
void display_array(){//function to display elements in an array
for(int i=0;i<n;i++){
cout<<A[i]<<"	";
}}
void sort_array(){//function to sort elements in an array
for(int i=0;i<(n-1);i++){
for(int j=0;j<(n-i-1);j++){
if(A[j]>A[j+1]){
int k;
k=A[j];
A[j]=A[j+1];
A[j+1]=k;
}}}}
void insert_ll(){//function to insert elements in a linked list
  int num;
cout<<"\n Enter the number of element you want to insert : ";
cin>>num;
cout<<" Enter your data : "<<endl;
for (int i=0; i<num; i++){
double data;
cout<<" data "<<i+1<<" : ";
cin>>data;
node *temp = new node; 
temp->data = data;  
if (head == NULL)  { 
head=temp;  
tail=temp; 
temp->next = NULL; 
}
else    
{
tail->next = temp;
temp->next = NULL;
tail=temp;
}}}
void display_ll(){//function to display elements in a linked list
node *pos; 
pos=head;  
while (pos != NULL)
{
cout<<pos->data<<" -> ";  
pos=pos->next;
}
cout<<"NULL \n";
}
void sort_ll(){//function to sort elements in a linkedlist
node *pos;
pos = head;
while (pos->next != NULL)
{
node *post;
post = head;
while (post->next != NULL)
{
if (post->data > (post->next)->data)
{
double temp;
temp = post->data;
post->data = (post->next)->data;
(post->next)->data = temp;
}
post = post->next;
}
pos = pos->next;
}}
};
int main(){
bubblesort a;//creating an element in class bubblesort
a.insert_array();//function calling
a.display_array();
a.sort_array();
a.display_array();
a.insert_ll();
a.display_ll();
a.sort_ll();
a.display_ll();
}