a, b = map(int, input().split())
mod = 10**4

def power(a, b):
    if b == 0:
        return 1
    if b == 1:
        return a 
    res = power(a, b//2)
    if b % 2 == 0:
        return res * res
    else:
        return res * res * a

print(power(a, b))