n = int(input())
while n > 0:
    n-=1
    x, y = map(int, input().split())
    if x < y:
        print('<')
    if x > y:
        print('>')
    if x == y:
        print('=')                