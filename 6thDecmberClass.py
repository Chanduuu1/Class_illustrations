# differene between re.match and re.search
import re
s1 = "string"
s2 = "we are learing regular expression very usefull for string matching!"
s3 = "we are learing regular expression very usefull for string matching!"

print(re.search(s1, s2))
# true because search whole string me search karega esa nai ki 1st word wh nai hua toh false unlike match!

print(re.match(s1, s2))
# false because 1st word nai hai na 'string'

print(re.search(s1, s3))
# true! u know why!

print(re.match(s1, s3))
# this time it is true because pehle word hi hai!

###

# FIND AND REPLACE USING REPLACE() METHOD

S = "I want to study in vit because vit is a good institution. vit is the best"
print(S.replace("vit", "VIT, VELLORE",2)) #3RD ARGUMENT IS THE NUMBER OF OCCURANCES YOU WANT TO REPLACE INSTEAD OF REPLACING THE WORD IN THE ENTIRE FILE!