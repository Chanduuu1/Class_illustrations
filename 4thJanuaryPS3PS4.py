import re
n = input()
m = input()
pattern = re.search(m,n)
if pattern == None:
    print("Not found")
else:
    print("Start index", pattern.start(),end = " to ")
    print(pattern.end())

n = input()
m = []
o = []
l = list(n.split())
for i in range(len(l)):
    pattern = '^[A-Z]'
    pattern2 = '^[0-9]'
    if re.search(pattern,l[i]):
        m.append(l[i])
    elif re.search(pattern2,l[i]):
        o.append(l[i])
    else:
        continue

print(m)
print(o)

l = list(input().split())
pattern = 'aeiou'
for i in range(len(l)):
    if l[i].startswith(pattern):
        print(l[i])
    else:
        continue

mainString = input()
subString = input()
patternn = re.search(subString,mainString)
print(patternn.start(),end = "to")
print(patternn.end())









Write a Python script to read an email id of a student of ABC University and validate, whether it is correct email id or not. Correct email id will have following properties according to the ABC University.

1.       Email Id should start with alphabet

2.       Email id should end with @abc.ac.in

3.       It can contain alphabets or digits with maximum 20 characters excluding @abc.ac.in

4.       One dot symbol can be allowed anywhere before @ symbol but not mandatory  and that dot symbol cannot be placed in beginning or end of email id before @abc.ac.in

 

Eg., abc.1234@abc.ac.in is Valid Email ID    but 1234.abc@abc.ac.in is Invalid Email ID

 

Input format:

Read an email id

 

Output format:

Display “Valid Email ID” or “Invalid Email ID”







import re
email_id = input()
if re.match("[A-Za-z]{3,20}[.]{0,1}[0-9]{1,20}[@][A-Za-z]{2,10}[.][a-z]{2,3}[.][a-z]{2,3}$",email_id):
    print("Valid Email ID")
else:
    print("Invalid Email ID")


engFail = int(input())
eF = []
for i in range(engFail):
    regNo = int(input())
    eF.append(regNo)
matFail = int(input())
mF = []
for i in range(matFail):
    regNo = int(input())
    mF.append(regNo)
csFail = int(input())
csF = []
for i in range(csFail):
    regNo = int(input())
    csF.append(regNo)

setE = set(eF)
setM = set(mF)
setCS = set(csF)
setFail = setE.intersection(setM,setCS)
listFail = list(setFail)
if len(listFail) != 0:
    
    for i in range(len(listFail)):
        print(listFail[i])
else:
    print("Nil")




numOfStude = int(input())
regNo = []
marks = []
for i in range(numOfStude):
    enterRegNo = input()
    regNo.append(enterRegNo)
    enterMarks = int(input())
    marks.append(enterMarks)
displayGradeOf = input()

if displayGradeOf in regNo:
    for i in range(numOfStude):
        if regNo[i] == displayGradeOf:
            n = marks[i]
            break

    if 96<=n<=100:
        print("A+")
    elif 91<=n<=95:
        print("A")
    elif 86<=n<=90:
        print("B+")
    elif 81<=n<=85:
        print("B")
    elif 76<=n<=80:
        print("C+")
    elif 71<=n<=75:
        print("C")
    elif 66<=n<=70:
        print("D+")
    elif 61<=n<=65:
        print("D")
    elif 50<=n<=60:
        print("E")
    elif n<50:
        print("F")
else:
    print("No Such Register Number")