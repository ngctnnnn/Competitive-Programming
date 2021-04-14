s1 = input()
s2 = input()
tmp1, tmp2 = "", ""
i, j = len(s1) - 1, 0
maxx = 0
cnt = 0
while j < len(s2) and i >= 0:
    tmp1 += s1[i]
    tmp2 += s2[j]
    i -= 1
    j += 1
    cnt += 1
    if tmp1[::-1] == tmp2:
        maxx = max(maxx, cnt)    
# print(tmp1 + " " + tmp2)
print(len(s1) + len(s2) - maxx)