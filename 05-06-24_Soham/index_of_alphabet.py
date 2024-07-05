# Write a Python to find the index of a given Alphabet.
alpha = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
ch = input("Give the Alphabet whose index is to be found:(Give in Capital)")
for i in range(25):
    if (ch == alpha[i]):
        index = i+1
        

print("The given Alphabet occurs at index: ",index)