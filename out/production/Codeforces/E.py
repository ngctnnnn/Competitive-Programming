n = int(input())
arr = list(map(int, input().split()))
ans, mod = 0, 1e7
for i in range(0, n - 1):
    for j in range(i + 1, n):
        ans += arr[i] ^ arr[j]
print(round(ans % mod))