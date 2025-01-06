#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> numbers;
    double num;
    double sum = 0;
    double test = 0;

    while (cin >> num)
        numbers.push_back(num); // Add to the end of the vector

    for (int i=0; i<numbers.size(); i++)
        sum += numbers[i];

    if (!numbers.empty())
    {
        cout << "SUM: " << sum << endl;
        cout <<"NUMBER: " << numbers.size();
        cout << "MEAN: " << sum/numbers.size() << endl;
        sort(numbers.begin(), numbers.end());
        cout << "MEDIAN: " << numbers[numbers.size()/2] << endl;

        string strNumbers(numbers.begin(), numbers.end());
        cout << "VECTOR: " << strNumbers << endl;
    }
    
    else
    {
        cout << "VECTOR IS EMPTY!";
    }

}