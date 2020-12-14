n, m, k = list(map(int, input().split()))

a = list(map(int, input().split()))

a = sorted(a)

def binary_search(arr, l, r, x, k):
	if r >= l:

		mid = (l + r)//2

		if ((arr[mid] == x) or (arr[mid] - k <= x < arr[mid]) or (arr[mid] < x <= arr[mid] + k)):
			return True


		if (arr[mid] > x): 
			return binary_search(arr, l, mid - 1, x, k)
		
		return binary_search(arr, mid + 1, r, x, k) 

	return False

cnt = 0

while m > 0:
	m -= 1
	b = int(input())
	if binary_search(a, 0, n - 1, b, k) == True:
		cnt += 1
	else:
		cnt += 

print(cnt)
