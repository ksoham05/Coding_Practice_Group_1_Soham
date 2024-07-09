#Reverse Array in python 
n = int(input("Give Length of Array: "))
print("Give Elements of array: ")
arr = []
for i in range(n):
    num = int(input())
    arr.append(num)

revarr = []
j=n-1
for i in range(n):
    num = arr[j]
    revarr.append(num)
    j-=1

print("The Reversed Array is:", revarr)
