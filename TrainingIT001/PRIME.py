n = int(input())
arr = list(map(int, input().split()))
x = max(arr)
seive = [1 for _ in range(x + 1)]
seive[0], seive[1] = 0, 0
def prime(seive, n):
    for i in range(2, n + 1, 1):
        if i*i > n:
            break
        if seive[i] == 1:
            for j in range(i*i, n + 1, i):
                seive[j] = 0

prime(seive, x)
cnt = 0
for i in range(n):
    if seive[arr[i]] == 1:
        cnt+=1
print(cnt)
