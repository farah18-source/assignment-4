
#ifndef HASH_LL_h
#define HASH_LL_h
#include <iostream>
#include <string>

using namespace std;

struct node
{
    string key;
    string value;
    node* next;
};

class LinkedList
{
private:
    int n_elements;
    node* arr[10];
    int hash(string key);
    
public:
    LinkedList()
    {
        n_elements = 0;
        for (int i = 0; i < 10; i++)
            arr[i] = NULL;
    }
    
    int HashFunction_LL(string key)
    {
        int sum = 0;
        for (int i = 0; i < key.length(); i++)
            sum += key[i];
        return sum % 10;
    }
    
    void insert_LL(string ID, string Name)
    {
        node* n = new node;
        n->key = ID;
        n->value = Name;
        
        n->next = NULL;
        
        int index = HashFunction_LL(ID);
        
        if (arr[index] == NULL)
        {
            arr[index] = n;
            n_elements++;
        }
        else
        {
            node * temp = arr[index];
            while (temp->key != ID && temp->next != NULL)
                temp = temp->next;
            if (temp->key == ID)
                cout << "Employee exists." << endl;
            else
            {
                temp->next = n;
                n_elements++;
            }
        }
    }
    
    void remove_LL(string Name)
    {
        int index = HashFunction_LL(Name);
        if (arr[index] == NULL)
            cout << "Employee not found" << endl;
        else if (arr[index]->key == Name)
        {
            node* temp = arr[index];
            arr[index] = arr[index]->next;
            delete temp;
            n_elements--;
        }
        else
        {
            node* p1 = arr[index], *p2 = arr[index];
            while(p2 != NULL && p2->key != Name)
            {
                p1 = p2;
                p2 = p2->next;
            }
            if (p2 == NULL)
                cout << "Employee not found" << endl;
            else
            {
                p1->next = p2->next;
                delete p2;
                n_elements--;
            }
        }
    }
    
    void print_LL()
    {
        for(int i = 0; i < 10; i++)
        {
            if(arr[i] != NULL)
            {
                cout << i << ":  ";
                node* temp = arr[i];
                while (temp != NULL)
                {
                    cout << temp->key << ", " << temp->value <<  '\n\t';
                    temp = temp->next;
                }
                cout << endl;
            }
        }}
    
};



#endif /* HASH_LL_h */
