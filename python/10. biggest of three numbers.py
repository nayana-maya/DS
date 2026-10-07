print("Enter three number:")
n1=int(input())
n2=int(input())
n3=int(input())
if(n1>n2 and n1>n3):
    print(n1," is the biggest")
elif(n2>n3):
    print(n2,"is the greatest")
else:
    print(n3,"is the greatest")
