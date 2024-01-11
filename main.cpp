#include <iostream>
#include "person.h"

using namespace std;

int main(){
    //class stuff here?




    //main loop here
    bool finish = false;
    while (!finish){
        cout << "--------------------------------------" << endl;
        cout << "Select options:" << endl;
        cout << "1. Add a new Member" << endl;
        cout << "2. Issue a book to a member" << endl;
        cout << "3. Return a book" << endl;
        cout << "4. See the books a member is currently borrowing" << endl;
        cout << "0. Log out" << endl;
        cout << "Enter: ";
        int option;
        cin >> option;

        switch (option){
            case 0:  //exit while loop
                finish = true;
                break;

            case 1:  //add member
                cout << "This is a default message" << endl;
                break;
            
            case 2:  //issue book
                cout << "This is a default message" << endl;
                break;

            case 3:  //return book
                cout << "This is a default message" << endl;
                break;

            case 4:  //see member borrowing books
                cout << "This is a default message" << endl;
                break;
        
            default:
                cout << "Invalid input." << endl;
                
        }
    }

    cout << "End of program." << endl;

    return 0;
}