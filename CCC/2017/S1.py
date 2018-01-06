g = int(input())
sw = list(map(int,input().split()))
se = list(map(int,input().split()))

e = []
s1 = 0
s2 = 0
for i in range(0,(g)):
  for x in range(0,1):
    s1 = s1 + sw[i]
    s2 = s2 + se[i]

  if s1 == s2:
    e.append(i+1)
  
if len(e) == 0:
  print(0)
else:
  print(max(e))