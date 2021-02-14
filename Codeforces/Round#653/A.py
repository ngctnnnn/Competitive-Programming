import math
t = int(input())
while t > 0:
    t-=1
    x, y, n = map(int, input().split())
    print(math.floor((n - y)/x) * x + y)