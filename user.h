#include <string>

using namespace std;

class User
{
    public:
        string username;
        int age;
        isValidUsername(string);
};

User::isValidUsername(string name)
{
    for (int i = 0; i < name.size(); i++)
    {
        int uChar = toupper(name[i]);
        if(uChar < 'A' || uChar > 'Z')
        {
            return false;
        }
    }
    return true;
}
