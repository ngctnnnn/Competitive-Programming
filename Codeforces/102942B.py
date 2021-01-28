t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    odd, even = 0, 0
    for i in range(n):
        if arr[i] % 2 == 1:
            odd+=1
        else:
            even+=1
    if even == n:
        print(-1)
    else:
        print(even)