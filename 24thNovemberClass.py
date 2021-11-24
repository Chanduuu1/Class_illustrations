# set ke concepts
n=int(input("number of students in class: "))
F1 = []
F2 = []
F3 = []
F4 = []
F1 = input("Failure in computer science!: ").split()
F2 = input("Failure in physics!: ").split()
F3 = input("Failure in chemistry!: ").split()
F4 = input("Failure in mathematics!: ").split()
sa = set(F1)
sb = set(F2)
sc = set(F3)
sd = set(F4)
S = sa|sb|sc|sd
print(len(S))
passPercentage = ((n-len(S))/n)*100
print("the pass percentage of the class is: ", passPercentage)