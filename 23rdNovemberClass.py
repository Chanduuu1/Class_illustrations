lab_reading={}
for i in range(0,5):
    test_name = input()
    min = float(input())
    max = float(input())
    lab_reading [test_name] = (min,max)
print(lab_reading)
chk_Test = input()
obs_Value = float(inpu())
range_test = lab_reading[chk_Test]
min = range_test[0]
max = range_test[1]
if min<obs_Value<max:
    print("normal :) ")
else:
    print("abnormal :( ")      