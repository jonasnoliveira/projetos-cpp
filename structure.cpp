#include <iostream>

using namespace std;

struct
{
    int myNum;
    string myString;
} myStructure;

int main()
{
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;
}