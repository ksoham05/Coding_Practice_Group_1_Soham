
# Find the Probability of event and its complementary event given the number of occurence of a event and the total sample space, Based on probaility give the user a feedback.
event_num = int(input("Give the no of Favourable outcomes: "))
total_num = int(input("Give no of all possible outcomes: "))
prob = event_num / total_num
comp = 1 - prob

print("The probability of event is: ",prob)
print("The probability of compementary event is: ",comp)

if (prob >= 0.6):
    print("High chances of event taking place!!")
elif(0.4 <= prob < 0.6):
    print("Moderate chances of event taking place")
elif(prob <0.4):
    print("Low Chances !!")
elif(prob == 1):
    print("The event will occur definately !!!")
elif(prob == 0):
    print("The event will not occur at any cost !!!")