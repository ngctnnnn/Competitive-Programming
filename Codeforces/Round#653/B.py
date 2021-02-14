t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    cnt = -1
    if n < 6:
        if n % 3 != 0:
            return cnt
        return cnt + 3

    