from collections import deque
n = int(input())
arr = list(map(int, input().split()))
arr = sorted(arr, reverse=True)
ans = deque()
print(arr)
for i in range(0, len(arr), 2):
    ans.append(arr[i])
    ans.appendleft(arr[i + 1])
for i in ans:
    print(i, end = ' ')
    