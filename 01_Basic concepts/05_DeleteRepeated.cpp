#include <iostream>
#include <string>

using namespace std;

int main()
{
    string previous = "";
    string current;

    while (cin >> current)
    {
        if (previous == current)
        {
            cout << "This word is similar to the previous word: " << current << '\n';
        }
        previous = current;
    }
}