import numpy as np
n, m = map(int, input().split())
a = list(map(int, input().split()))[::-1]
c = list(map(int,input().split()))[::-1]
p1 = np.poly1d(a)
p2 = np.poly1d(c)
p3 = p2/p1
c = list(map(int, p3[0].c))
print(*map(int,reversed(p3[0].c)))
