#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
class LinkedList{
struct Node {
int x;
Node *next;
};
public:
LinkedList(){
head = NULL;
}
void addValue(int val){
    Node *n = new Node();   
    n->x = val;             
    n->next = head;         

    head = n;              
}

int popValue(){
    Node *n = head;
    int ret = n->x;

    head = head->next;
    delete n;
    return ret;
}
private:
Node *head;
};
void mainMenu();
int main()
{
int choice, num, flag;
LinkedList list;
do
{
mainMenu();
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter a number: ";
cin>>num;
list.addValue(num);
cout<<"Value Added!"<<endl; flag = 1; break; case 2: if(flag>0){
list.popValue();
cout<<"Value deleted!"<<endl;
flag--;
}
else
{
cout<<"Add a value first!"<<endl;
}
break;
case 3:exit(1);
break;
}
}while(choice != 3);
return 0;
}
void mainMenu(){
cout<<"[1] Insert into linked list"<<endl;
cout<<"[2] Pop"<<endl;
cout<<"[3] EXIT"<<endl;
cout<<"Your choice: ";
}
