#theory of functions using def

''' funtiom with argument without return line '''

def add(a,b):
    print(a+b)
add(3,4)    
#print is a function you call. Calling print will immediately make your program write out text for you to see. Use print when you want to show a value to a human.
#return is a keyword. When a return statement is reached, Python will stop the execution of the current function, sending a value out to where the function was called. Use return when you want to send a value from one point in your code to another.


'''area of circle using fnctions using different protoype:-'''


# prototype 1: function without argument and without return type
def area_circle1():
    r = float(input("enter the radius"))
    print(area_circle1())
area_circle1()

# prototype 2: function without argument and with return type
def area_circle2():
    r = float(input("Enter the radius"))
    return (22/7)*r*r
print(area_circle2())

# prototype 3: function with argument and without return type
def area_circle3(r):
    print((22/7)*r*r)
area_circle3(5) 

# prototype 4: function with argument and with return type
def area_circle4(r):
    return(22/7)*r*r
print(area_circle4(5))    







'''Last last me started recusrion function theory! view recoding once again! lot of theory covered!'''
