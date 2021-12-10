# SOME BUILT IN FUNCTINONS WE OFTEN USE!


''''''
# funvtion with argument and without return statement
name = "helloji"
print(len(name))
# funvtion without argument and with return statement
name[0].isalpha()
# and so onnn... such built in function we always use which is in built! So if we need something extra function we can create on our own using the 4 prototypes!


''''''
#returning more than 1 value special feature of python.
def swap(a,b):
    return b,a
a,b = swap(5,10)
print(a,b)


''''''
#function with default value:
def add(a,b=10):
    return a+b
print(add(10,20))
# iska ans 10+10 because b ko default rakha hai!10. also default value function ka 1st value nai rakh sakte so accordingly manage
print(add(10))


''''''
#keyword argument naya feature!
def add(a,b,c=10):
    return a+b+c
print(b=20,c=90,a=5) #esa random bhi de sakte hai if keywords mention ho!


''''''
# function with liat argument
def name(a,b,c):
    print(a,b,c)
name("hello",2021,[1,2,3,4,5])

''''''
#local variable and global variable
# def ke andar agar tune variable ko initialise kiya ho toh uska scope maatre def ke andar hi rahega
# jab tu userdefined function ko call karega toh uss function me variable ka jo value hoga uske corresponding hi value return hoga
# and in case tune same varible name se kuch aur cheese ko globally initialise kiya ho (outside any user defined function) toh jab bhi tu uss varibale ko /n
# call karega toh humesh global wala hi aaega! function wala only finction ko call karte waqt


''''''
# Recursive Function
def factorial(n):
    if n == 0:
        return 1
    else:
        return n*factorial(n-1) 
print(factorial(5))