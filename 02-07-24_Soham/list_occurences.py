import random
# Write a Python Program to check the number of occurences of a given integer in a randomly generated list

list_num = []
list_num = [random.randint(0,500) for i in range(1000)]
count=0
num = int(input("Give the number whoose occurence is to be checked: "))
for i in range(100):
    if list_num[i] == num:
        count+=1
print("The list examined is: ",list_num)
print("The number of occurence of given number in list is: ",count)