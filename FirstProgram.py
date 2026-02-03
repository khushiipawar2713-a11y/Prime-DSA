#Variables and Data Types

'''name=("John")
print(name)'''

'''age=25
print(type(age))''' 

'''pi=float(3.14)
    print(pi)'''

#Conditionals

'''num=int(input("enter number: "))
a=num%2
if(a==0):
    print("EVEN")
else:
    print("ODD")'''

'''age=int(input("enter age: "))
if(age>=18):
    print("Eligible to vote")
else:
    print("Not eligible to vote")'''

'''str=input(("enter name: "))
a=str
if(a==0):
    print("string is empty")
else:
    print("string is not empty")'''

#Strings

'''str=input("enter name: ")
print(len(str))'''

'''str1="khushi"
str2="pawar"
str3=(str1+str2)
print(str3)'''

#lists

'''num=[1,2,3,4,5]
num.append(6)
print(num)
print(num[2])'''

#tuple

'''tup=(1,2,3,4,5)
print(tup)
print(tup[2])'''

#Dictionaries
'''things={
    "table":("a piece of furniture","list of facts and figures"),
    "cat":"a small animal"
}
print(things)'''

#Sets

'''subjects={"python","java","C++","python","javascript","java","python","java","C++","c"}
print(len(subjects))'''

#loops(while)

'''count = 100
while count >=1:
    print(count)
    count -= 1'''

'''i=int(input("enter number: "))
n=1
while n<=10:
    print(i*n)
    n+=1'''

'''fruits=["apple","mango","banana","grapes","orange","litchi","cherry","strawberry","kiwi","watermelon"]
i=0
while i<len(fruits):
    print(fruits[i])
    i+=1'''

'''nums=(1,4,9,16,25,36,49,64,81,100)

x=25

i=0

while i < len(nums):
    if(nums[i] == x):
         print("FOUND at idx",i)
    i+=1'''

    #for loop

'''num=[4,9,16,25,36,49,64,81,100,64]
for val in num:
    print(val)'''
#ERROR:search x in tuple using for loop

'''nums=(4,9,16,25,36,49,64,81,100,64)
x=64

idx=0

for el in nums:
 
 if(el==64):
        
  print("found at idx",idx)
idx+=1'''

'''for val in range(1,101):
    print(val)'''

#Print numbers from 100 to 1 using for & range()

'''for val in range(100,0,-1):
    print(val)'''

'''n = int(input("enter number: "))

for i in range(1,11):
    print(n * i)'''
    
    #Functions

'''veggies=["potato","cabbage","onion","cauliflower","ladyfinger"]

def print_len(list):
    print(len(list))

print_len(veggies)'''

'''flowers=["rose","lotus","lily","jasmine","daisy","marigold","sunflower","hibiscus"]

def print_len(list):
    print(len(list))
    
def print_list(list):
        for item in list:
           print(item,end=" ")
            
print_list(flowers)
print()'''

'''def calc_fact(n):
    fact=1
    for i in range(1,n+1):
     fact*=i
    print(fact)
    
calc_fact(5)'''

'''def converter (usd_val):
    inr_val=usd_val*83
    print(usd_val,"USD=",inr_val,"INR")

converter(5)'''

'''def cal_sum(n):
    if(n==0):
        return 0
    return cal_sum(n-1)+n

sum = cal_sum(5)
print(sum)'''

#print first n natural numbers using for loop
'''n=10
for val in range(1,n+1):
    print(val)'''
#OR
'''for val in range(1,11):
   print(val)'''

#ERROR:write a python function to calculate the factorial of a number using recursion.
'''def fact(n):
    if(n==0):
        return 1
    else:
        return n*fact(n-1)
    
    print(fact(5))'''

#ERROR:write a python function to check if a number is prime or not using a for loop.

'''def check_prime(n):
    if n<=1:
        return False
    for i in range(2,n):
        if n%i==0:
            return False
        return True'''

'''colours=["red","blue","green","orange","yellow","pink","black","white"]

def print_len(list):
    print(len(list))

print_len(colours)'''

# ERROR:calculate the sum of first n natural numbers using a while loop
'''def sum_of_natural_numbers(n):
    sum=0
    i=1
    while i<=n:
        sum+=i
        i+=1
        return sum'''


'''def multiplication(n):
    for i in range(1,11):
        print(n*i)
        i+=1

print(multiplication(15))'''

#NOT RUNNING
'''def check_even_odd(n):
    if n%2==0:
     return "EVEN"
    else:
        return "ODD"
    
    print(check_even_odd(10))'''

'''def calc_sum(n):
    if(n==0):
        return
    print(n)
    calc_sum (n-1)+n

    calc_sum(5)'''

#File I/O

#FILE CREATED

'''with open("practice.txt","w")as f:
    f.write("Hi everyone\n we are learning File I/O \n")
    f.write("using Java.\n I like programming in Java.")'''

'''f=open("practice.txt","r")
data=f.read()
print(data)
print(type(data))
f.close()'''

'''with open("practice.txt","r")as f:
 data=f.read()

new_data=data.replace("Java","Python")
print(new_data)'''

'''word="learning"
with open("practice.txt","r") as f:
    data=f.read()
if word in data:
    print("FOUND")
else:
    print("NOT FOUND")'''

#NOT RUNNING,ERROR
'''def check_for_line():
    word = "learning"
    data = True
    line_no = 1
    with open("practice.txt","r")as f:
     while data:  
      data = f.readline()
     if word in data:
        print(line_no)
        return
        line_no += 1

    return-1
print(check_for_line())'''

#ERROR
'''count=0
with open("practice.txt","r")as f:
    data=f.readline()
    
nums=data.split(",")
for val in nums:
    if(int(val)%2==0):
        count+=1
print(count)'''

#practice questions
#1
'''list=[46,67,40,55,98,63,14,73]
print(list[::2])'''

#2
"""def is_palindrome(n):
    return n==n[::-1]

print(is_palindrome("madam"))"""

#3
'''d1 ={"name":"khushi","surname":"pawar"}
d2 ={"age":20,"Branch":"CST"}
d1.update(d2)
print(d1)'''

"""def check_prime(n):
    if n<2:
        print(n,"is not prime")
    for i in range(2,n):
        if(n%i==0):
            print(n,"is not prime")
            break
        else:
            (n,"is prime")
print(check_prime(7))"""

#not running in correct way
'''def count_str(n):
    count=0
    for count in n:
        count+=1
    return count
    print(count_str("string"))'''

# Write a program to calculate the area and perimeter of a rectangle.
'''a= int (input("enter first:"))
b= int (input("enter second:"))
print("area:",a*b)
print("perimeter:",2*(a+b))'''



    















    
    










