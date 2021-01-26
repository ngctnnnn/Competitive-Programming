def giaithua(dp, n):
    dp[1] = 1
    dp[2] = 2
    for i in range(3, n + 1):
        dp[i] = i*dp[i - 1]

def chinhhop(dp, k, n):
    return dp[n] / (dp[k] *dp[n - k])

def solve(n, k, arr):
    for i in range(n):
        

dp = [1 for _ in range(2005)]

giaithua(dp, 2004)

#print(chinhhop(dp, k - 1, n + k - 1))
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    solve(n, k, arr)
    print(arr)
