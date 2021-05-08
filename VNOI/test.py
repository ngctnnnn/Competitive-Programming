n = int(input())

while n > 0:
	n -= 1
	cnt = 0
	x, y = map(int, input().split())

	for i in range(x, y + 1, 1):
                if i % 12 == 0 or i % 30 == 0 or i % 60 == 0:
                        cnt += 1

	print(cnt)
