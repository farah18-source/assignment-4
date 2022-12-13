
#ifndef employ_h
#define employ_h
#include <iostream>
#include <string>
#include "HASH_LL.h"
#include "HASH_DYNAMICARRAY.h"


using namespace std;


class Employee
{
private:
    string name;
    string  age;
    string  salary;
    string  experience;
    

public:
    Employee(string name, string age, string salary, string experience)
    {
        this->name = name;
        this->age = age;
        this-> salary = salary;
        this->experience = experience;
        
    }
    
    Employee()
    {
        name = " ";
        age = " ";
        salary = " ";
        experience = " ";
    }
    
    void setName(string n)
    {
        name = n;
    }
    
    string getName()
    {
        return name;
    }
    
    void setAge(string a)
    {
        age = a;
    }
    
    string getAge()
    {
        return age;
    }
    
    
    void setExperience(string exp)
    {
        experience = exp;
    }
    
    string getExperience()
    {
        return experience;
    }
    void setSalary(string s)
    {
        salary = s;
    }
    
    string getSalary()
    {
        return salary;
        
    }
    
    
    string display()
    {
        cout << name << '\t' << age << '\t' << salary << '\t' << experience << endl;
        return name;
        return salary;
        return experience;
        return age;
    }
    
    
};
int main()
{
    
    Employee e;
    
   
    
    cout << "Name" <<"\t"  << "   Age"<< "  Salary"<<"  Experience" << endl;
    

    
    e.setName(" Mina    ");
    e.setAge("30 ");
    e.setSalary("10000");
    e.setExperience("4");
    e.display();
    
    e.setName(" Fawzy    ");
    e.setAge("45");
    e.setSalary("5000");
    e.setExperience("8");
    e.display();
    
    e.setName(" Yara     ");
    e.setAge("19");
    e.setSalary("2000");
    e.setExperience("0");
    e.display();
    
    e.setName(" Mariam   ");
    e.setAge("32");
    e.setSalary("8000");
    e.setExperience("2");
    e.display();
    
    e.setName(" Ayman    ");
    e.setAge("33");
    e.setSalary("4000");
    e.setExperience("8");
    e.display();
    
    e.setName(" Roshdy   ");
    e.setAge("28");
    e.setSalary("9000");
    e.setExperience("3");
    e.display();
    
    e.setName(" Aya      ");
    e.setAge("26");
    e.setSalary("6000");
    e.setExperience("3");
    e.display();
    
    e.setName(" Abdullah");
    e.setAge("29");
    e.setSalary("7000");
    e.setExperience("4");
    e.display();
    
    e.setName(" Fatma    ");
    e.setAge("21");
    e.setSalary("3000");
    e.setExperience("1");
    e.display();
    
    cout << endl << endl;
    
    HashTable h;
    
    cout << "Chaining: \n" << endl;
    
    h.insert("1111", "Mina");
    h.insert("2222", "Fawzy");
    h.insert("3333", "Yara");
    h.insert("4444", "Mariam");
    h.insert("5555", "Ayman");
    h.insert("6666", "Roshdy");
    h.insert("7777", "Aya");
    h.insert("8888", "Abdullah");
    h.insert("9999", "Fatma");
   

    h.print();
    
 
    
    cout << endl;
    
    
    
    return 0;
}



#endif /* employ_h */
