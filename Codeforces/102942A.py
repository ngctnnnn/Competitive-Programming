t = int(input())
for _ in range(t):
    n = int(input())
    st = input()
    cnt = 0
    for i in range(n):
        if st[i] == '0':
            cnt+=1
        else:
            cnt-=1
    x = cnt % 4
    if x == 0:
        print('E')
    elif x == 1:
        print('S')
    elif x == 2:
        print('W')
    else:
        print('N')
        