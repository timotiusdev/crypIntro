import sys

def millerRabin(n,a):
    
    """
    It is a primality test based on the two properties of prime numbers. 
    We can also say it is a compositeness test.
    """

    x = 0
    
    if temp < 1:
        print "your input is not valid"
        sys.exit()
    elif temp > n-1:
        print "your input is not valid"
        sys.exit()
    else:
        a = temp
    
    n1 = n -1
    while n1%2 == 0:
        x +=1
        n1 = n1/2
    print "\nvalue of n = {0}".format(n)
    print "value of a = {0}".format(a)
    print "value of k = {0}".format(x)
    print "value of q = {0}".format(n1)

    o1=(a**n1)%n
    o2=a**((2**1)*n1) % n

    if o1 == 1:
        print "\n{0} maybe prime".format(n)
        return
    elif o1 != 1:    
        for i in range (0,x):
            if a**((2**i)*n1) % n == (n-1):
                print "\n{0} maybe prime".format(n)
                break
        else:
            print "\n{0} is composite".format(n)

print "input integer number to test (n) : "
n = input()
"""
ensure n is an iteger, 
"""
try:
    n = int(n)
except ValueError:
    pass 

print "input random integer (a) : "
temp = input()
"""
ensure a is an iteger
"""
try:
    temp = int(temp)
except ValueError:
    pass 

result = millerRabin (n,temp)
print result