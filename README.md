# crypIntro
An Introduction to Cryptography

Build based on algoritm below
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

dev
