n=int(input(""))
p=list(map(int,input("").split(" ")))
q=list(map(int,input("").split(" ")))
r={0}
for i in range(1,len(p)):
    r.add(p[i])

for i in range(1,len(q)):
    r.add(q[i])

r.remove(0)
if len(r) >= n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!") 
   
