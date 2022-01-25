# Today's topic :- File Handling

fh = open("IntroToFileHandling.txt","r")
print(fh.read())
fh.close()


f1 = open("txt1.txt",'r')
s = f1.read()
f1.close()
f2 = open('txt2.txt',"w")
f2.write(s)
f2.close()

fh = open("IntroToFileHandling.txt","r")
print(fh.read())
print(fh.read(5))
print(fh.readline())
print(fh.readlines())
