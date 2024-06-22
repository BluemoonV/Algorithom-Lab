#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = { 30, 10, 20, 50, 40 };

    int mini = *min_element(myList.begin(), myList.end());

    cout << "The minimum element in the list is : " << mini<< endl;

    return 0;
}
