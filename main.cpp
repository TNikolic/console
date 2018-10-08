#include <iostream>

#include "conf.h"
#include "user.h"

using namespace std;

int main()
{
    /* Initializing classes  */
    User user;

    /* Age check */
    int age;
    cout << "Please enter your age";
    cin >> age;

    if(age < MIN_AGE || age > MAX_AGE) {
        cout << "Age must be above " << MIN_AGE << " or bellow " << MAX_AGE;
        return 0;
    }


    /* Name Check */
    string name;
    cout << "Please enter your name (can contain only letters a-z)";
    cin >> name;

    if(user.isValidUsername(name)) {
        cout << "Welcome user. Please type /help to see the entire list of our commands!";
    } else {
        cout << "Username can only contain letters A-Z";
    }

    return 0;
}
