def prime(x):
    if x == 2 or x == 3:
        return True
    elif x % 2 == 0 or x < 2:
        return False 
    else:
        for i in range(3, x, 2):
            if i*i > x:
                break
            if x % i == 0:
                return False 
        return True  
x, y = map(int, input().split())
for i in range(x, y + 1):
    if prime(i) is True:
        print(i)