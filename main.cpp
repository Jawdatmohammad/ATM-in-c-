#include <iostream>

using namespace std;
void showmenu(){
cout << "***************MENU***************" << endl;
cout << "1. Check balance "<< endl;
cout << "2. Deposit " << endl;
cout << "3. Withdraw " << endl;
cout << "4. Exit "<< endl;
cout << "**********************************" << endl;
}
int main()
{
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    do{
    showmenu();
    cout << "option: ";
    cin >> option;
    switch(option){
    case 1: cout << "Balance is: " << balance << " $" << endl; break;
    case 2: cout << "Deposit amount ";
    double depositAmount;
    cin >> depositAmount;
    balance += depositAmount;
    cout << "The new balance is: " << balance << endl;
    break;
    case 3: cout << "Withdraw Amount ";
    double withdrawAmount;
    cin >> withdrawAmount;
    if(withdrawAmount <= balance)
         balance -= withdrawAmount;
    else
    cout << "not valid" << endl;
    cout << "The new balance is: " << balance << endl;
       break;
    }
    }
    while(option!=4);
    return 0;
}
