/*
    Creator : Kuaï
	Create : 26/11/2021
	Last update : 29/11/2021
	Github : Kuai-sama

    This program asks to the user to enter an integer N and calculates u(N)
    defined by U(n)= (3*U(n-1)) + 4
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "========== U(n)= (3*U(n-1)) + 4 ==========" << endl;
    cout << "Enter an index value 'n' greater than or equal to 0" << endl;
    int n;
    cin >> n;
    unsigned int u = 3; //U(0) = 3
    cout << "u(0) = "<< u << endl;
    for (unsigned int i = 1; i <= n; i++)
    {
        u = (3*u) + 4; // U(n) = 3*(U(n-1) + 4)
        cout << "u(" << i << ") = "<< u << endl;
    }
    return 0;
}
