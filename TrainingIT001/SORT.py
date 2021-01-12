def printt(arr):
    for _ in arr:
        print(_, end = ' ')

n, k = map(int, input().split())
arr = list(map(int, input().split()))

if k & 1:
    arr = sorted(arr)
    printt(arr)
else:
    arr = sorted(arr, reverse = True)
    printt(arr)
