n = int(input())
a = list(map(int, input().split()))
a.append(1000000)
ans, cnt, i = -1, 0, 0
l, r = 0, 0
while i < n - 1:
    if a[i] == a[i + 1]:
        j = i
        cnt+=1
        
        while a[j] == a[j + 1] and j + 1 < n:
            j+=1
            cnt+=1

        
        if cnt > ans:
            l, r = i, j
            ans = cnt
        
        i = j + 1
        cnt = 0
    else:
        i+=1

print(str(l + 1) + ' ' + str(r + 1))