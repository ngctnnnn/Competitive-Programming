n = int(input())
cnt = 0
for _ in range(n):
    str = input()
    if str == 'Tetrahedron':
        cnt+=4
    elif str == 'Cube':
        cnt+=6
    elif str == 'Octahedron':
        cnt+=8
    elif str == 'Dodecahedron':
        cnt+=12
    else:
        cnt+=20
print(cnt)