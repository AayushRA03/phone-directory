#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string PhoneNumber;
};

struct Node
{
    Contact contact;
    Node *next;
};

class PhoneDirectory
{
private:
    Node *top;

public:
    PhoneDirectory() : top(nullptr) {}

    void push(Contact newcontact)
    {
        Node *newNode = new Node();
        newNode->contact = newcontact;
        newNode->next = top;
        top = newNode;
        cout<<"            \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
        cout <<"              CONTACT ADDED SUCCEFFULLY!!! " << endl;
        cout<<"            \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout<<"--------------------------------------------------------"<<endl;
            cout <<"          No contacts found to delete" << endl;
            cout<<"--------------------------------------------------------"<<endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"name:"<<temp->contact.name<<endl;
        cout<<"phone number:"<<temp->contact.PhoneNumber<<endl;
        delete temp;
        cout <<"           Contact removed successfully                " << endl;
        cout<<"--------------------------------------------------------"<<endl;
    }

    void peek()
    {
        if (top != nullptr)
        {
            cout<<" |_________________________________________________|"<<endl;
            cout <<"|Name   :"<< top->contact.name<<"                 |"<< endl;
            cout <<"|Contact:"<< top->contact.PhoneNumber<<"          |"<< endl;
            cout<<" |_________________________________________________|"<<endl;
        }
        else
        {
            cout<<"________________________________________"<<endl;
            cout<<"|         No contacts found            |"<< endl;
            cout<<"|______________________________________|"<<endl;
        }
    }

    void display()
    {
        if (top == nullptr)
        {
            cout<<"|--------------------------------------|"<<endl;
            cout<<"|        No contacts to display        |" << endl;
            cout<<"|--------------------------------------|"<<endl;
            return;
        }

        Node *now = top;
        while (now != nullptr)
        {
            cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"Name        :"<<now->contact.name<< endl;
            cout<<"Phone Number:"<<now->contact.PhoneNumber<< endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
            now = now->next;
        }
    }
  void search()
    {
        string str;
        cout << "Enter the name to search: ";
        cin >> str;

        Node *temp = top;
        bool found = false;

        while (temp != nullptr)
        {
            if (temp->contact.name == str)
            {
                found = true;
                cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
                cout << "User found" << endl;
                cout << "Name: " << temp->contact.name << endl;
                cout << "Phone Number: " << temp->contact.PhoneNumber << endl;
                cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
                break;
            }
            temp = temp->next;
        }

        if (!found)
        {
            cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout << "User not found" << endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
        }
    }


        void dispose(Contact newcontact)
    {
        while(top!=NULL)
        {
            Node *temp = top;
            delete (temp);
            temp=temp->next;
        }
    }
};
int main()
{
    PhoneDirectory p1;
    char opt;

        do{
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|    Choose the operation to be performed          |" << endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<< "     ************OPERATION***************" << endl;
            cout<<"##############################################"<<endl;
            cout<<"##      a. Add a contact                    ##" << endl;
            cout<<"##      b. Remove recent added contact      ## " << endl;
            cout<<"##      c. Show recent added contact        ##" << endl;
            cout<<"##      d. Show all contacts                ##" << endl;
            cout<<"##      f. search Number                    ##"<<endl;
            cout<<"##      e. Exit                             ##" << endl;
            cout<<"##############################################"<<endl;
            cout<<endl;
            cout<< "Enter your choice: ";
            cin >> opt;
            
            switch (opt)
            {
            case 'a':
            {
                Contact Newcontacts;
                cout<<endl;
                cout<<"=============================================="<<endl;
                cout<<"                 Enter The Contact Name:      "<<endl;
                cout<<"              "; cin>>Newcontacts.name;
                cout<<"=============================================="<<endl;
                cout<<endl;
                cout<<"==================================================="<<endl;
                cout<<"              "; cout<<"Enter The Number:"<<endl;
                cout<<"              "; cin>>Newcontacts.PhoneNumber;
                cout<<"==================================================="<<endl;
                p1.push(Newcontacts);
                break;
            }
            case 'b':
            {
                p1.pop();
                break;
            }
            case 'c':
            {
                p1.peek();
                break;
            }
            case 'd':
            {
                p1.display();
                break;
            }
            case 'e':
            {
                cout<<"__________________"<<endl;
                cout<<"|  Exit performed |" << endl;
                cout<<"|_________________|"<<endl;
                break;
            }
            case 'f':
            {
                p1.search();
                break;
            }
            default:
            {
                cout << "Invalid choice. Choose again." << endl;
                break;
            }
            }
    } while (opt != 5);
    return 0;
}