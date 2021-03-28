t=int(input(""))
for i in range(0,t):
    a,b=tuple(map(int,input("").split(" ")))
    d=abs(a-b)
    
    print((int(d/10))if(d%10==0)else(int((d+9)/10)))