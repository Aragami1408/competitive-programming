a=set(input(""))
if '{'in a:a.remove('{')
if '}' in a:a.remove('}')
if ' ' in a:a.remove(' ')
if ',' in a:a.remove(',')
print(len(a))
