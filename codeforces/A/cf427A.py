n=int(input(""))
e=list(map(int,input("").split(" ")))
h=0
u=0
for i in e:
    if i > -1:
        h+=i
    else:
        h-=1
        if(h==-1):
            u+=1
            h=0
print(u)
