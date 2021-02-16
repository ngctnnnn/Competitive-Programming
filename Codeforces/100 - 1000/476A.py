n, m = map(int, input().split())
if m > n:
    print(-1)
else:
    cnt = 0
    while n > 0:
        n-=2
        cnt+=1
    cnt, temp = cnt + 1, cnt + 1
    while cnt % m != 0 and cnt <= 2 * temp:
        cnt+=1
    print(cnt)