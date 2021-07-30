#PROGRAM TO FIND THE GIVEN NUMBER IS A PALIDROME OR NOT;
n=int(input("Number: "))
num=n; i=10; s=0
while(num>0):
    r=num%10
    s=s*10+r
    num=num//10
print("Reversed number: ",s)
if(n==s):
    print("The given number is palidrome")
else:
    print("The given number is not palidrome")