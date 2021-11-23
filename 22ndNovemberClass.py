n=int(input("enter the number of terms: "))
l=[]
l=input("put elements in list here: ").split()
for i in range(0,n):
    if (l[i])!='+' or (l[i])!='-' or (l[i])!='*' or (l[i])!='/' :
        continue
    elif (l[i]=='+'):
        a = int(l[i-2]) + int(l[i-1])
        del l[i-2]
        del l[i-1]
        del l[i]
        l.insert(i-1,a)
    elif (l[i]=='-'):
        a = int(l[i-2]) - int(l[i-1])
        del l[i-2]
        del l[i-1]
        del l[i]
        l.insert(i-1,a)
    elif (l[i]=='+'):
        a = int(l[i-2]) * int(l[i-1])
        del l[i-2]
        del l[i-1]
        del l[i]
        l.insert(i-1,a)
    elif (l[i]=='+'):
        a = int(l[i-2])  int(l[i-1])
        del l[i-2]
        del l[i-1]
        del l[i]
        l.insert(i-1,a)