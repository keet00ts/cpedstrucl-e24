#include <cstdlib>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *newpointer;
}*top,*top1,*temp;
 
int reverse();
void push(int data);
void pop();
void display();
void createList();
 
int ctr = 0;
 
int main()
{
    int num, choice, elem;
 
    cout<<"[1] Push" << endl;
    cout<<"[2] Pop" << endl;
    cout<<"[3] Reverse (Temporarily Unavailable)" << endl;
    cout<<"[4] Display" << endl;
    cout<<"[5] Exit" << endl;
 
    createList();
 
    while (1)
    {
        cout <<"\nEnter choice : ";
        cin >> choice;
 
        switch (choice)
        {
        case 1:
            cout<<"Enter data : ";
            cin >> num;
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                cout<< "Stack is empty";
            else
            {
                elem = reverse();
                cout<<"\n Top element : " << elem;
            }
            break;
        case 4:
           	display();
            break;
        case 5:
            cout << "Exiting...";
			exit(0);
            break;
        default :
            cout << " Your choice is out of range!  ";
            break;
        }
    }
}
 
void createList()
{
    top = NULL;
}
 
void push(int data)
{
    if (top == NULL)
    {
        top = new node;
        top->newpointer = NULL;
        top->data = data;
    }
    else
    {
        temp =new node;
        temp->newpointer = top;
        temp->data = data;
        top = temp;
    }
    ctr++;
}

void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        cout << "Stack is empty";
        return;
    }
 
    while (top1 != NULL)
    {
      cout << top1->data << "->";
        top1 = top1->newpointer;
    }
 }

void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Stack is empty");
        return;
    }
    else
        top1 = top1->newpointer;
    cout << "\n Popped value : " << top->data;
    free(top);
    top = top1;
    ctr--;
}

int reverse()
{
 //function is empty
}
