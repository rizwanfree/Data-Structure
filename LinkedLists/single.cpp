#include <iostream>

using namespace std;


struct Node     
{
    int data;
    Node* link;
};

class LinkedList
{
private:
    Node *start, *cur, *temp;
public:
    LinkedList(){
        start = nullptr;
    }

    void insert(int newNumber)
    {
        if (start == nullptr)
        {
            start = new Node;
            start->data = newNumber;
            start->link = nullptr;
        }
        else
        {
            cur = start;
            
            while (cur->link != nullptr)
            {
                cur=cur->link;
            }

            // Creating new node and adding data to it
            temp = new Node;
            temp->data = newNumber;
            temp->link = nullptr;
            cur->link = temp;            
        }
    }   

    // Display
    void display()
    {
        cout << "Data in Linked List" <<endl;
        cur = start;
        while (cur->link != nullptr)
        {
            cout << cur->data << endl;
            cout << "Memory Address: " << cur->link << endl;
            cur = cur->link;
        }

        cout << cur->data << endl;       
    }
};


int main()
{
    LinkedList obj;
    int val,p;

    for (int i = 0; i < 6; i++)
    {
        obj.insert(i);
    }
    obj.display();    
}
