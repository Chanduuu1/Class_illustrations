'''ABC Company want to call the candidates for interview with a condition of Name of the applicant should not contain any vowels as well as size of the name should be minimum five characters. Write a Python script to read all names and display the count of candidates meeting their requirement.

 

Input Format:

Read total number of names

Read first name

Read second name

..

Read last name

 

Output Format:

Count of names meets the company condition'''
# Solution

mainList = []
l = []
m = []
c = 0
n = int(input())
for i in range(0,n):
    name = input()
    l.append(name)
    mainList.append(l)
    l = []
    name = ""

for j in range(0,n):
    if len(mainList[j][0]) >= 5:
        b = mainList[j][0]
        for i in b:
            if i == "a" or i == "e" or i == "i" or i == "o" or i == "u" or i == "A" or i == "E" or i == "I" or i == "O" or i == "U":
                c = 1
                break
            else:
                continue
        if c != 1:
            m.append(mainList[j][0])
        elif c == 1:
            c = 0
    else:
        continue
print(len(m))    

'''
Write a python script to read two matrix say A and B with 3X3  size using nested list. Calculate the sum of the two matrixes and finally calculate and display the sum of diagonal elements of the resulted matrix.

Eg. Diagonal elements of the following matrix is 1,5,9

[[ 1,  2,  3 ],

 [ 4,  5,  6 ],

 [ 7,  8,  9 ]]

Input format:

Nine Elements of first matrix

Nine elements of second matrix

 

Output format:

Sum of diagonal elements of resulted matrix (sum of first and second matrix)'''

# Solution

sum = 0
A = []
a = []
for j in range(0,3):
    for i in range(0,3):
        ele1 = int(input())
        a.append(ele1)
    A.append(a)
    a = []
print(A)
B = []
b = []
for j in range(0,3):
    for i in range(0,3):
        ele2 = int(input())
        b.append(ele2)
    B.append(b)
    b = []
print(B)
S = []
s = []
for i in range(0,3):
    for j in range(0,3):
        ele3 = A[i][j] + B[i][j]
        s.append(ele3)
    S.append(s)
    s = []
print(S) 
for i in range(0,3):
    for j in range(0,3):
        if i == j:
            sum += S[i][j]
        else:
            continue
print(sum)