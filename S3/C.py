import math
n = int(input())
m = int(input())
r = n
if (m < n):
    r = m + math.ceil((2*(n-m)+(1/4))**(1/2) - (1/2))
print(r)