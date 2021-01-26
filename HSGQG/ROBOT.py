n = int(input())
if n == 0:
    print(1)
elif n > 0:
    if n < 10:
        print(n + 1)
    else:
        print(n % 10 + 1)
else:
    if n > -10:
        print(n + 11)
    else:
        print((n % 10) * -1 + 11)