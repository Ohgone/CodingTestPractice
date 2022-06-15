import math

def is_prime(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n % i == 0:
            return False
    else:
        return True

repeat = int(input())

for _ in range(repeat):
    n = int(input())
    tempa = n // 2
    tempb = tempa
    while True:
        if is_prime(tempa) and is_prime(tempb):
            print(tempa, tempb)
            break
        tempa -= 1
        tempb += 1        

