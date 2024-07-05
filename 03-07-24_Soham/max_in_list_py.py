#Write a Python Program to Find the Maximum number from given a given list also give the index of the maximum number in list

n = int(input("Give the length of the list"))
print("Please enter the Elements of list: ")
nlist = []

for i in range(n):
    num = int(input())
    nlist.append(num)
max = nlist[0]
index = 0
for i in range(n):
    if nlist[i] > max:
        max = nlist[i]
        index = i

print("The Maximum number in given list is: ", max)
print("The index of the maximum number is: ", index)
