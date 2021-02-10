n = int(input())
a, b, mid, end = "I hate", "I love", "that", "it"

cnt = 0
while cnt < n:
    if cnt % 2 == 0:
        print(a, end = ' ')
    else:
        print(b, end = ' ')
    cnt += 1
    if cnt < n:
        print(mid, end = ' ')

print(end)


