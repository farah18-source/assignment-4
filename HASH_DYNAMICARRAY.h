
#ifndef HASH_DYNAMICARRAY_h
#define HASH_DYNAMICARRAY_h

#include <iostream>
#include <string>

using namespace std;

struct Node
{
    string key;
    string value;
    Node* next;
};


class HashTable
{
private:
       int capacity;
       Node* arr[10];
       int hash(string key);
       int collisionCount;
public:
     HashTable();
     //~ HashTable();
     int HashF(string key);
     void insert(string ID, string EmployeeName);
     void remove (string ID);
     void print();
     HashTable(int capacity);
     float calcCollision(int collisionCount);
    
};

    HashTable:: HashTable()
    {
        capacity = 0;
        collisionCount =0;
        for (int i = 0; i < 10; i++)
            arr[i] = NULL;
    }

    
    int HashTable:: HashF(string key)
    {
        int sum = 0;
        for (int i = 0; i < key.length(); i++)
            sum += key[i];
        return sum % 10;
    }
    
    void HashTable:: insert(string ID, string EmployeeName)
    {
        Node* n = new Node;
        n->key = ID;
        n->value = EmployeeName;
        n->next = NULL;
        
        int  index = HashF(ID);
        
        if (arr[index] == NULL)
        {
            arr[index] = n;
            capacity++;
        }
        else
        {
            
            Node * temp = arr[index];
            while (temp->key != ID && temp->next != NULL)
                temp = temp->next;
            if (temp->key == ID)
                cout << "name exists" << endl;
            else
            {
                temp->next = n;
                capacity++;
                collisionCount ++;
            }
        }}
    float HashTable::calcCollision(int coll)
   {
    
    coll=collisionCount;
    
    return (capacity/collisionCount)*100;
   }
    
    void HashTable:: remove (string ID)
    {
        int index = HashF(ID);
        if (arr[index] == NULL)
            cout << "not found" ;
        else
        {
            if (arr[index]->key == ID)
        {
            Node* temp = arr[index];
            arr[index] = arr[index]->next;
            delete temp;
            capacity--;
        }
        
            Node* x = arr[index];
            Node *y = arr[index];
            while(y != NULL && y->key != ID)
            {
                x = y;
                y = y->next;
            }
            if (y == NULL)
                cout << "Employee not found" << endl;
            else
            {
                x->next = y->next;
                delete y;
                capacity--;
            }
        }
    }
    
    void HashTable:: print()
    {
        for(int i = 0; i < 10; i++)
        {
            if(arr[i] != NULL)
            {
                cout << i << " : ";
                Node* temp = arr[i];
                while (temp != NULL)
                {
                    cout << temp->key << "," << temp->value  << '\n\t';
                    temp = temp->next;
                }
                cout << endl;
            }
        }
        
    }
    





#endif /* HASH_DYNAMICARRAY_h */

         
