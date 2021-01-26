t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        print("YES")
    elif a == b and a % 3 == 0:
        print("YES")
    elif (a + b) % 3 == 0:
        if a < b and 2*a >= b:
            print("YES")
        elif a > b and 2 * b >= a:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
