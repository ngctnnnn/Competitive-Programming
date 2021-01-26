def solve(n):
    if n % 4 == 0:
        print("Alice")
    else:
        print("Bob")

t = int(input())
for _ in range(t):
    n = int(input())
    solve(n)
