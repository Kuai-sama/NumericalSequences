/*
    Creator : Kuaï
	Create : 26/11/2021
	Last update : 29/11/2021
	Github : Kuai-sama

   This program asks to the user to enter an integer N and calculates U(N)
   defined by : n*U(n-1) + (n+1)*U(n-2) + n knowing that U(0) and U(1) are respectively equal to 3 and 2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "========== U(n)= n*U(n-1) + (n+1)*U(n-2) + n ==========" << endl;
    cout << "Enter an index value 'n' greater than or equal to 0" << endl;
    unsigned int n;
    cin >> n;
    unsigned long int uPreced2 = 2, uPreced1 = 3; //U(0) = 3; U(1) = 2;
    cout << "U(0) = " << uPreced1 << endl;
    cout << "U(1) = " << uPreced2 << endl;

    for (unsigned int i = 2; i <= n; ++i)
    {
        unsigned long int current = ((i*uPreced2) + (i+1)*uPreced1) +i; //u(n) = (n*u(n-1) + (n+1*Un(-2)) + n

        uPreced1 = uPreced2; //U(n-1) = U(n-2)
        uPreced2 = current; //U(n-2) = U(n)

        cout << "U(" << i << ") = " << current << endl;
    }

    return 0;
}
