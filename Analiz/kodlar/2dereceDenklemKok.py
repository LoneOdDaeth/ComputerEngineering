from math import *

def func(a, b, c):
    if a != 0:
        D = (b*b) - (4*a*c)
        if D > 0:
            temp = 2*a
            x1 = (-b + sqrt(D))/temp
            x2 = (-b - sqrt(D))/temp
            return x1, x2
        elif D == 0:
            return -b/(2*a)
        else:
            return "gerçek kök yoktur."
    
    else:
        if b != 0:
            return -c / b
        else:
            if c == 0:
                return "tüm gerçel sayilar."
            else:
                return "gerçek kök yoktur."

print(func(1,3,1))
