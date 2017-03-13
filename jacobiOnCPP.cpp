#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

long jacobi(long a, long n) {
    if(a <= 1)
	return a;
    else if (a%2 == 1){
	if((a%4 == 3) && (n%4 == 3))
	    return (-1 * jacobi (n%a,a));
	else
	    return jacobi (n%a,a);
    }
    else{
	if((n%8 == 3) || (a%8 == 5))
	    return (-1 * jacobi (a/2, n));
	else
	    return jacobi (a/2, n);
    }
}

long findResidue(long a, long n){
    for(long x=0; x<((n/2)+2); x++){
        if(((int)pow(x,2)%n)==a)
            return x;
    }
}

int main()
{
    long a, n, result ;

    cout << "Value of a = ";
    cin >> a;
    cout << "Value of n = ";
    cin >> n;
    result = jacobi(a,n);    

    if (n <= 0)
	cout << "\nn must be greater than 0" << endl;

    /* negative a handler */
    if (a <= 0 || n > 0){
	a = a%n + n;
	cout << "\nThe Jacobian symbol of Jacobi("<< a <<", "<< n <<") is " << result << endl;

    		if (jacobi (a,n) == 1){
			cout <<"X which fulfilled X^2 congruent with "<< a <<" (mod " << n <<") is " << findResidue(a, n) << endl;}
    }
    return 0;
}
