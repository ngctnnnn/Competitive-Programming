n = int(input())
arr = list(map(int, input().split()))
cnt = 0
for i in range(n):
    if arr[i] & 1:
        cnt+=arr[i]
print(cnt)