def solve(n):
    if n < 2020:
        return False
    for i in range(1, 10**4):
        if (n - i * 2020) % 2021 == 0 and n - i * 2020 >= 0:
            return True
    for i in range(1, 10**4):
        if (n - i * 2021) % 2020 == 0 and n - i * 2021 >= 0:
            return True
    return False

t = int(input())
for _ in range(t):
    n = int(input())
    if solve(n) == True:
        print("YES")
    else:
        print("NO")
    