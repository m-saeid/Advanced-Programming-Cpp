#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is " << name << '\n';
    cout << "the length of your name is " << name.length() << endl;
    cout << "the first letter of your name is '" << name[0] << "' and the last one is '" << name[name.length()-1] << "'" << endl;

    if (name.find('a') != string::npos)
    {
        cout << " 'a' index is " << name.find('a') << endl;
    }
    else if (name.find('b') != string::npos)
    {
        cout << "There is no 'a' in your name and 'b' index is " << name.find('a') << endl;
    }
    else
    {
        cout << "There isn't any 'a' or 'b' in your name" << endl;
    }

    if (name.find('c') == string::npos)
    {
        cout << "There isn't letter 'c' in your name";
    }

}
