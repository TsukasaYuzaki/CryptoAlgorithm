import math

def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)


class NotOddException(Exception):
    def __init__(self, x):
        print(str(x) + " is not odd")


class NotPositiveException(Exception):
    def __init__(self, x):
        print(str(x) + " is not > 0")



class JacobiSymbol:
    """Calculates the JacobiSymbol (a|b)

    Keyword arguments:
    a -- integer
    b -- positive odd integer
    """

    def __init__(self, a, b):
        if b < 0:
            raise NotPositiveException(b)
        self.a = a
        self.b = b
        if (b % 2) == 0:
            raise NotOddException(b)
        self.a = a
        self.b = b
        if gcd(self.a, self.b) != 1:
            self.notCoPrime = True
        else:
            self.notCoPrime = False

    @staticmethod
    def __supplementary2__(x):
        if x % 8 == 1 or x % 8 == 7:
            return 1
        else:
            return -1

    @staticmethod
    def __supplementary1__(x, y):
        if x % 4 == 1 or y % 4 == 1:
            return 1
        else:
            return -1

    def calculate(self):
        if self.notCoPrime:
            return 0
        elif self.a == 1:
            return 1
        elif self.a == 2:
            return self.__supplementary2__(self.b)
        elif self.a % 2 == 0:
            return JacobiSymbol(self.a // 2, self.b).calculate() * JacobiSymbol(2, self.b).calculate()
        else:
            return JacobiSymbol(self.b % self.a, self.a).calculate() * self.__supplementary1__(self.a, self.b)



# Usage
b= int(input("Nhap vao mau: "))
for i in range(0, b):
    print("(" + str(i), "|", str(b) + ")=" + str(JacobiSymbol(i, b).calculate()))

''' will output
(0 | 21)=0
(1 | 21)=1
(2 | 21)=-1
(3 | 21)=0
(4 | 21)=1
(5 | 21)=1
(6 | 21)=0
(7 | 21)=0
(8 | 21)=-1
(9 | 21)=0
(10 | 21)=-1
(11 | 21)=-1
(12 | 21)=0
(13 | 21)=-1
(14 | 21)=0
(15 | 21)=0
(16 | 21)=1
(17 | 21)=1
(18 | 21)=0
(19 | 21)=-1
(20 | 21)=1
'''