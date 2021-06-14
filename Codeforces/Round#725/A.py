def solve(n, arr):
    i, j = 0, n - 1    
    min_val = min(arr)
    max_val = max(arr)
    min_pos, max_pos = -1, -1
    for i in range(len(arr)):
        if min_val == arr[i]:
            min_pos = i
        if max_val == arr[i]:
            max_pos = i
    left_side_min, left_side_max, right_side_min, right_side_max = False, False, False, False
    if min_pos <= n//2:
        left_side_min = True
    if max_pos <= n>>1:
        left_side_max = True
    if min_pos >= n>>1:
        right_side_min = True
    if max_pos >= n>>1:
        right_side_max = True
    min_pos = min(min_pos - 0 + 1, n - min_pos)
    max_pos = min(max_pos - 0 + 1, n - max_pos) 
    if left_side_min and left_side_max:
        return max_pos
    if right_side_max and right_side_min:
        return min_pos
    return min_pos + max_pos       

def main(t):    
    while t > 0:
        t -= 1
        print(solve(int(input()), list(map(int, input().split()))))

if __name__=="__main__":
    main(int(input()))
