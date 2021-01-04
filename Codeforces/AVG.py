def binary_search(arr, l, r, x):
    if r > l:
        mid = int((l + r)/2)
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binary_search(arr, l, mid - 1, x)
        else:
            return binary_search(arr, mid + 1, r, x)
    else:
        return -1

def ans(arr, n):
    cnt = 0
    for i in range(n- 1):
        for j in range(i + 1, n):
            k = binary_search(arr, 0, n, int((arr[i] + arr[j]) / 2))
            if k != -1 and i < k and k < j:
                cnt += 1
    return cnt

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    arr = list(map(int, input().split()))
    print(ans(arr, n))