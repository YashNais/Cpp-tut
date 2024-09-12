#include <iostream>

using namespace std;

int main()
{
    string Name = "Yash Has a boot";
    Name[1] = 'e';
    cout << Name.find("boot", 2);
    cout << Name;

}