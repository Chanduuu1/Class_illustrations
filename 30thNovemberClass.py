# Checking wheter given roll number is a correct roll number.
'''
import re
regno = input("Enter your registration number here: ")
if re.match("[0-9]{2}[A-Za-z]{3}[0-9]{4}$", regno ):
    print("Valid registration number!")
else:
    print("invalid regostration number! ")'''


# Checking valid aadhar card
'''import re
aadhar = input("Enter aadhar card number: ")
if re.match("[2-9][0-9]{11}" , aadhar):
    print("Valid!")
else:
    print("invalid!")'''


# Valid PAN number or not
'''import re
string = input("enter ur Pan number:")
if re.match("[A-Z]{5}[0-9]{4}[A-Z]$",string):
    print("Valid!")
else:
    print("invalid!")'''


# Validating if proper email id or not!
import re
email_id = input()
if re.match("[A-Za-z]{3,20}[@][A-Za-z]{2,10}[.][a-z]{2,3}$",email_id):
    print("Valid")
else:
    print("invalid")    


    