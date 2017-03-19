# crypIntro
An Introduction to Cryptography

JacobionCPP build based on algoritm below
```
IF a <= 1 THEN return a
  ELSE IF a is odd  then if a congruence n congruence 3 (mod 4)
    THEN return -Jacobi (n mod a, a)
    ELSE return Jacobi (n mod a, a)
   
  ELSE IF  n mod 8 = 3 OR n mod 8 = 5
    THEN return -Jacobi (a/2, n)
    ELSE return Jacobi (a/2, n)
    
Jacobi values represent the membership of odd prime number, as define below
   +1 if a is member of p quadratic residue
   -1 if a is member of p non-quadratic residue
    0 if a is dividable by the odd prime number
```   

millerRubin.py build based on algoritm below
```
millerRubin (n)
1. Find integers k, q, with k > 0, q odd, so that (n–1)== 2 k q
2. Select a random integer a, 1 < a < n–1
3. if a q mod n == 1 then return (" maybe prime ");
4. for j = 0 to k – 1 do j
5. if (a 2 q mod n == n-1) then return(" maybe prime ")
6. return (" composite ")
```
