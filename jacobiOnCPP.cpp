#include <iostream>

using namespace std;

int jacobi(int, int);

int main()
{
    int a, n;

    cout << "Value of a = ";
    cin >> a;
    cout << "Value of n = ";
    cin >> n;

    cout << "\nThe Jacobi symbol = " << jacobi(a,n) << endl;

    return 0;
}

/* a, n >= 0 AND n is odd */
int jacobi(int a, int n) {
    int ans;

/*check the value of a AND n*/
    if (a == 0)
        ans = (n == 1) ? 1 : 0;
/* check the remains of a mod 8 IF a == 2 */
    else if (a == 2) {
        switch ( n % 8 ) {
            case 1:
            case 7:
                    ans = 1;
                    break;
            case 3:
            case 5:
                    ans = -1;
                    break;
        }
    }
/* IF a >= n */
    else if ( a >= n )
        ans = jacobi(a%n, n);
    else if ( a % 2 == 0 )
        ans = jacobi(2,n)*jacobi(a/2, n);
    else
        ans = ( a % 4 == 3 && n % 4 == 3 ) ? -jacobi(n,a) : jacobi(n,a);
    return ans;
}
