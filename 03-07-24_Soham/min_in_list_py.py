#Write a Python Program to Find the Minimum number from given a given list also give the index of the minimum number in list

n = int(input("Give the length of the list"))
print("Please enter the Elements of list: ")
nlist = []

for i in range(n):
    num = int(input())
    nlist.append(num)
min = nlist[0]
index = 0
for i in range(n):
    if nlist[i] < min:
        min = nlist[i]
        index = i

print("The Minimum number in given list is: ", min)
print("The index of the minimum number is: ", index)