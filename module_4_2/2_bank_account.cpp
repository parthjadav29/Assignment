#include <iostream>
using namespace std;
class bank
{
private:
    string name;
    string typs_account;
    long long number;
    double balance;

public:
    void assign_value()
    {
        cout << "\n Enter name of depositor: ";
        getline(cin, name);
        cout << "\n Enter typs of account: ";
        getline(cin, typs_account);
        cout << "\n Enter account number: ";
        cin >> number;
        cout << "\n Enter balance ammount in account: ";
        cin >> balance;
    }
    void diposite()
    {
        double ammount;
        cout << "\n Enter ammount you want to deposites: ";
        cin >> ammount;
        balance += ammount;
        cout << "\n Available balance: " << balance;
    }
    void withdraw()
    {
        double ammount;
        cout << "\n Enter ammount you want to withdraw: ";
        cin >> ammount;
        balance -= ammount;
        cout << "\n Available balance: " << balance;
    }
    void display()
    {
        cout << "\n Name of depositor: " << name;
        cout << "\n Typs of account: " << typs_account;
        cout << "\n Account number: " << number;
        cout << "\n Balance ammount in account: " << balance;
    }
};

int main()
{
    int choice;
    bank obj;
    obj.assign_value();
    cout << "\n___";
    cout << "\n Press 1: diposite";
    cout << "\n Press 2: withdraw";
    cout << "\n Press 3: display";
    cout << "\n Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        obj.diposite();
        break;

    case 2:
        obj.withdraw();
        break;

    case 3:
        obj.display();
        break;

    default:
        cout << "\n Invalid choice please chack";
        break;
    }
}