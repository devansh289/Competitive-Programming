q = int(input())
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
def z(q,n,a,b):
  a.sort()
  b.sort()
  if q==1:
      s = 0
      for i in range(0,n):
          s += max(a[i],b[i])
      print(s)
  else:
      s = 0
      b = list(reversed(b))
      for i in range(0,n):
          
          s += max(a[i],b[i])
      print(s)


z(q,n,a,b)