/*
    Creator : Kuaï
	Create : 26/11/2021
	Last update : 29/11/2021
	Github : Kuai-sama

   This program asks to the user to enter an integer N and calculates U(N)
   defined by : U(n-1) + U(n-2) knowing that U(0) and U(1) are equal to 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "========== Fibannocci sequence ==========" << endl;
    unsigned int n;
    cout << "Enter an index value 'n' greater than or equal to 0" << endl;
    cin >> n;
    unsigned int prev2 = 1, prev1 = 1; //prev2 = U(n+2); prev1 = U(n+1);

    for (unsigned char i = 0; i < 2; i++) //First two terms of the sequence
        cout << "U(" << static_cast <unsigned>(i) << ") =" << prev1 << endl; //Display the number representation of char
    
    for (unsigned int i = 2; i <= n; i++)
    {
        unsigned int current = prev1 + prev2; //U(n) = U(n-1) +U(n-2)
        prev2 = prev1; //U(n-2) = U(n-1)
        prev1 = current; //U(n-1) = U(n)

        cout << "U(" << i << ") = " << current << endl;
    }

    return 0;
}
