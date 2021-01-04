import math
n = int(input())
arr = list(map(int, input().split()))
x = 1000009

seive = [1 for _ in range(x + 1)]
seive[0], seive[1] = 0, 0

for i in range(2, int(math.sqrt(x) + 1)):
    if seive[i] == 1:
        for j in range(i*i, x + 1, i):
            seive[j] = 0

cnt = 0
for _ in range(n):
    if seive[arr[_]] == 1:
        cnt += 1

print(cnt, end = '')