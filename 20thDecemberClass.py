# factorial using recursion function
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)       #ye memory me kahi automatically save ho jaega if you think ki yeh intermediate values kaha save ho rahe hai?
print(factorial(5))

'''recursive function using student in a class and asking how many students are there- classical example'''
