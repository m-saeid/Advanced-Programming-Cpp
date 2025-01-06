#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nintVec\n";
    vector<int> intVec1;
    vector<int> intVec2(20);
    vector<int> intVec3(20, 1);

    // intVec1[5] = 2; //FALSE
    // cout << intVec1[5] << endl; //FALSE
    intVec1.push_back(2);
    cout << intVec1[0] << endl;
    cout << intVec1[1] << endl; // Index 1 has not been filled yet...

    cout << "intVec2 before assigning values: ";
    for (int i=0; i<intVec2.size(); i++)
        cout << intVec2[i];
    
    for (int i=0; i<intVec2.size(); i++)
        intVec2[i] = i;    

    cout << "\nintVec2 after assigning values: ";
    for (int i=0; i<intVec2.size(); i++)
        cout << intVec2[i];

    cout << "\nintVec3: ";
    for (int i=0; i<intVec3.size(); i++)
        cout << intVec3[i];

    /////////////////////////////////////////////////////////

    cout << "\n\nstrVec'\n";

    // vector<string> strVec1;
    vector<string> strVec2(20);
    vector<string> strVec3(20, "test");

    // strVec1[5] = 2; //FALSE
    // cout << strVec1[5] << endl; //FALSE
    // strVec1.push_back('fillTest');
    // cout << strVec1[0] << endl;
    // cout << strVec1[1] << endl; // Index 1 has not been filled yet...

    strVec2[0] = "str0";
    strVec2[1] = "str1";
    strVec2[2] = "str2";
    for (int i=0; i<strVec2.size(); i++)
        cout << strVec2[i] << "-";

    cout << "\nstrVec3 before assigning values: ";
    for (int i=0; i<strVec3.size(); i++)
        cout << strVec3[i] << "-";
    
    for (int i=0; i<strVec3.size(); i++)
    {
        // auto iStr = std::to_string(i);
        std::string iStr = std::to_string(i);
        strVec3[i] = iStr;
    }


    cout << "\nstrVec3 after assigning values: ";
    for (int i=0; i<strVec3.size(); i++)
        cout << strVec3[i];



    /////////////////////////////////////////////////////

    vector<double> dubVec(1000, 1.2);
	// dubVec[1000] = 4.7;
}