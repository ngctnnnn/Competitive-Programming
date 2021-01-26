t = int(input())
init, cnt = 2, 1
dp = []
while cnt <= 51:
    i = 2**cnt 
    dp.append(i)
    cnt+=1

for _ in range(t):
    n = int(input())
    if n not in dp:
        print("YES")
    else:
        print("NO")
