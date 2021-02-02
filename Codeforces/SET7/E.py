import math
a, b, c = map(int, input().split())
ans = (a + 1)/2 + (b + 1)/2 + (c + 1)/2
print(max(math.floor((a + 1)/2) + math.floor((b + 1)/2) + math.floor((c + 1)/2), math.floor(ans)))