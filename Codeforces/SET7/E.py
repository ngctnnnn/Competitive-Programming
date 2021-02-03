a, b, c = map(int, input().split())
arr = [0 for _ in range(a + b + c + 1)]
for i in range(1, a + 1):
    for j in range(1, b + 1):
        for t in range(1, c + 1):
            arr[i + j + t] += 1
maxx, pos = -1e99, 0
for i in range(1, a + b + c + 1):
    if maxx < arr[i]:
        maxx = arr[i]
        pos = i 
print(pos)