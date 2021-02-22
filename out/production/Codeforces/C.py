def fib(dp, n):
    dp[1] = 1
    dp[2] = 1
    for i in range(3, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]

n = int(input())
dp = [0 for _ in range(n + 2)]
fib(dp, n)
print(str(dp[n - 2]) + ' ' + str(dp[n - 1]))
