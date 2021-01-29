n = int(input())
arr = list(map(int, input().split()))
arr = sorted(arr)
for i in range(n):
    if arr[i] != i + 1:
        print(i + 1)
        exit()
print(-1)
