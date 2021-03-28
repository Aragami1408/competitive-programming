d=input("")
s=input("")
kb="qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"

if d=="R":
    for c in s:
        print(kb[kb.index(c)-1],end="")
else:
    for c in s:
        print(kb[kb.index(c)+1],end="")