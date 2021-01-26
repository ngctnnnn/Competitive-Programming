def giaithua(dp, n):
    dp[1] = 1
    dp[2] = 2
    for i in range(3, n + 1):
        dp[i] = i*dp[i - 1]

def chinhhop(dp, k, n):
    return dp[n] / (dp[k] *dp[n - k])

k = int(input())
n = int(input())        
dp = [1 for _ in range(n + k + 2)]

giaithua(dp, n + k + 1)

print(chinhhop(dp, 2, 6))
#print(chinhhop(dp, k - 1, n + k - 1))