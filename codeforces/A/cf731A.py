s=input("")
lex="abcdefghijklmnopqrstuvwxyz"
pivot='a'
count=0
for c in s:
    count += min(abs(lex.index(pivot)-lex.index(c)),len(lex)-abs(lex.index(pivot)-lex.index(c)))
    pivot=c
print(count)
