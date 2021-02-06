import math
n = int(input())

if n == 1:
    print(1)
elif n == 2:
    print(10)
else:
    dp = [0b0 for _ in range(n + 1)]
    dp[1], dp[2] = 0b1, 0b10
    for i in range(3, n + 1): 
	    dp[i] = ((dp[i-2]<<1) | (dp[i-1]<<1))
    print("{0:b}".format(dp[n]))
	