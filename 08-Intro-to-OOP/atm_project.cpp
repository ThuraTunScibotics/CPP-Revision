#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

/* Mini Project - ATM
    -> Check Balance
    -> Cash withdraw
    -> User Details
    -> Update Mobile No.
*/

class atm                               // class atm
{
private:                                // private number variables
    long int account_No;                
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:                                 // public member functions
    // setData function is setting the Data into the private mumber variable
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
    {
        account_No = account_No_a;      // assigning the formal arguments to the private member variable's
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_No_a;
    }

    // getAccountNo function return the user's account number
    long int getAccountNo()
    {
        return account_No;
    }

    // getName function return the user's name
    string getName()
    {
        return name;
    }

    // getPIN function return the user's account-PIN
    int getPIN()
    {
        return PIN;
    }

    // getBalance function return the user's balance
    double getBalance()
    {
        return balance;
    }

    // getMobileNo function return the user's mobile no
    string getMobileNo()
    {
        return mobile_No;
    }

    void cashWithDraw(int ammount_a)
    {
        if (ammount_a > 0 && ammount_a < balance)
        {
            balance -= ammount_a;
            cout << endl << "Please collect your cash!";
            cout << endl << "Available Balance is: " << balance;
            _getch();
        }
        
        else
        {
            cout << endl << "Invalid Input or Insufficient Balance";
            _getch();               // getch is to hold the screen (until the user press any key)
        }
    }


    void setMobileNumber(string currnt_mobNo, string new_mobNo)
    {
       if (currnt_mobNo == mobile_No)         // check the old number
       {
           mobile_No = new_mobNo;           // Update the new number 

           cout << endl << "Successfully Updated Mobile noumber.";
           _getch();                         // getch is to hold the screen (until user press any key)
       }

       else
       {
           cout << endl << "Incorrect Number!";
           _getch();
       }
    }

};


int main()
{
    int choice = 0, enterPIN;           // enterPIN and enterAccountNo. ---> user authentication
    long int enterAccountNo;

    system("cls");          // This function is to clear the screen when move from one option to another.

    // created User (Object)
    atm user1;
    // Set user details (into object)  (setting default data)
    user1.setData(1234567, "TRTun", 1111, 45000.90, "09987654321");


    do
    {
        system("cls");          // This function is to clear the screen when move from one screen to another

        cout << endl << "***Welcome to ATM***" << endl;

        cout << endl << "Enter Your Account No: ";       // asking user to enter account no
        cin >> enterAccountNo;

        cout << endl << "Enter PIN: ";            // asking user to enter PIN;
        cin >> enterPIN;


        // check whether input information math user's detal or not
        if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
        {
            do
            {
                int ammount = 0;
                string currentMobileNo, newMobileNo;

                system("cls");          
                // user Interface
                cout << endl << "***Welcome to ATM***" << endl;
                cout << endl << "Select Options: ";
                cout << endl << "1. Check Balance";
                cout << endl << "2. Check Withdraw";
                cout << endl << "3. Show User Details";
                cout << endl << "4. Update Mobile no.";
                cout << endl << "5. Exit" << endl;
                cin >> choice;                          // taking user choice

                switch (choice)                         // switch condition
                {
                case 1:
                    cout << endl << "Your Balance is: " << user1.getBalance();
                    _getch();                   // getch func is to hold the screen until user press any key
                    break;

                case 2:
                    cout << endl << "Enter the ammount: ";
                    cin >> ammount;
                    user1.cashWithDraw(ammount);                // calling the cashWithdraw function
                    break;

                case 3:
                    cout << endl << "***User Information***";
                    cout << endl << "Account Number -> "<< user1.getAccountNo();
                    cout << endl << "Name -> " << user1.getName();
                    cout << endl << "Balance -> "  << user1.getBalance();
                    cout << endl << "Mobile No -> " << user1.getMobileNo();
                    _getch();
                    break;

                case 4:
                    cout << endl << "Enter the current mobile number: ";
                    cin >> currentMobileNo;

                    cout << endl << "Enter the new mobile number: ";
                    cin >> newMobileNo;

                    user1.setMobileNumber(currentMobileNo, newMobileNo);

                    break;

                case 5:
                    exit(0);                // exit application

                default:                    // handle invalid user input
                    cout << endl << "You enter valid data!!!";      

                }

            } while (1);            // MENU section // Thi loop will run while 1(true)
        }

        else
        {
            cout << endl << "User Details are Invalid!!!";
            _getch();
        }

    }while(1);      // LOGIN section

    return 0;

}