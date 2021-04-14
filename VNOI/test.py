a, b, c, d = map(int , input().split())
e = (a + b) + (c + d) + (a + (c + d) + (b))
print(e)
