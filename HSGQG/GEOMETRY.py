def solve(n):
    if n % 4 == 0:
        print("YES")
    else:
        print("NO")

t = int(input())
for _ in range(t):
    n = int(input())
    solve(n)
