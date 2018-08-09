n = int(input())
l = list(map(int,input().split()))

mini = []
maxi = []

while len(l) > 0:
    if len(l) >= 1:
        mi = min(l)
        l.remove(mi)
        mini.append(mi)
    if len(l) >= 1:
        ma = max(l)
        l.remove(ma)
        maxi.append(ma)

l2 = []
mini = list(reversed(mini))
maxi = list(reversed(maxi))

for i in range(0,len(mini)):
    try:
        if len(mini) >= 1:
            mi = mini.pop(0)
            l2.append(mi)
        if len(maxi) >= 1:
            ma = maxi.pop(0)
            l2.append(ma)
    except:
        break
    
print(" ".join(str(x) for x in l2))