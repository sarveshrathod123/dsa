Practical No 1
Title: In second year computer engineering class, group A student’s play cricket, group B 
students play badminton and group C students play football.
Write a Python program using functions to compute following: -
a) List of students who play both cricket and badminton
b) List of students who play either cricket or badminton but not both
c) Number of students who play neither cricket nor badminton
d) Number of students who play cricket and football but not badminton.
(Note- While realizing the group, duplicate entries should be avoided, Do not use SET builtin functions)
uni=[1,2,3,4,5,6,7,8,9,10]
GA=[]
n=int(input("Enter no. stud who play cri:"))
for i in range(n):
 e=int(input("enter num:"))
 GA.append(e)
print("GA=",GA)
GB=[]
n=int(input("Enter no. stud who play bd:"))
for i in range(n):
 e=int(input("enter num:"))
 GB.append(e)
print("GB=",GB)
GC=[]
n=int(input("Enter no. stud who play fb:"))
for i in range(n):
 e=int(input("enter num:"))
 GC.append(e)
print("GC=",GC)
def both_C_B():
 c=[]
 for i in GA:
 if i in GB:
 c.append(i)
 print("both c-b:",c)
 
both_C_B()
def e_C_B():
 c=[]
 for i in GA:
 if i not in GB:
 c.append(i)
 
 for i in GB:
 if i not in GA:
 c.append(i)
 
 print("either C-B,",c)
 
e_C_B()



//==============================================================================================================






Practical No 2
Write a Python program that computes the net amount of a bank account based a transaction 
log from console input. The transaction log format is shown as following: D 100 W 200 
(Withdrawal is not allowed if balance is going negative. Write functions for withdraw and 
deposit) D means deposit while W means withdrawal.
Suppose the following input is supplied to the program:
D 300, D 300 , W 200, D 100 Then, the output should be: 500
class Bankacc:
def __init__(self):
self.balance=0
def deposit(self):
amt=int(input("Amount to be deposited:"))
self.balance+=amt
print("Amout deposited",amt)
def withdraw(self):
amt=int(input("Amount to be withdraw:"))
if(self.balance>=amt):
self.balance-=amt
print("Amout withdraw",amt)
else:
print("Insufficient fund")
def display(self):
print("Net Balance:",self.balance)
s=Bankacc()
while(True):
choice=int(input("Enter which operation you want to perform:\n1.Deposite 
\n2.Withdraw"))
if(choice==1):
s.deposit()
s.display()
elif(choice==2):
s.withdraw()
s.display()
else:
break




//=====================================================================================================





Practical No. 3
Write a python program to compute following operations on String:
a) To display word with the longest length
b) To determines the frequency of occurrence of particular character in the string
c) To check whether given string is palindrome or not 
d) To display index of first appearance of the substring 
e) To count the occurrences of each word in a given string
def Display_word_with_longest_length() :
 Str = input("Enter the main string : ") # Its assumed that string contain only characters and 
spaces (multile spaces are allowed)
 M_str = ""
 i = 0
 while( i < len(Str)) :
 word = ""
 while(Str[i] != ' ') :
 word += Str[i]
 i = i + 1
 if( i == len(Str)) :
 break
 if(i != len(Str)) :
 while(Str[i] == ' ') :
 i = i + 1
 if(len(M_str) < len(word)) :
 M_str = word
 print("\tWord with longest length is %s having lenght %d\n\n"%(M_str,len(M_str)))
def Determine_frequency_of_occurrence_of_particular_character_in_string() :
 Str = input("Enter the string : ")
 C = input("Enter the character : ")
 print("\tString : %s"%Str)
 print("\tCharacter : %s"%C)
 count = 0
 for i in range(len(Str)) :
 if(Str[i] == C) :
 count += 1
 print("\tFrequency of occurrence of character(%s) in string(%s) is %d\n\n"%(C,Str,count))
 
def Check_for_palindrome() :
 Str = input("Enter the string to be checked : ")
 b = 0
 e = len(Str) - 1
 while( b < e) :
 if(Str[b] != Str[e]) :
 break
 b += 1
 e -= 1
 if(b < e) :
 print("\t%s string is not an palindrome string\n\n"%Str)
 else :
 print("\t%s string is an palindrome string\n\n"%Str)
 
 
 
def display_index_of_first_appearance_of_the_substring() :
 M = input("Enter the main string : ")
 S = input("Enter the sub string to check : ")
 print("Main String : %s"%M)
 print("Substring String : %s"%S)
 L1 = len(M)
 L2 = len(S)
 if(L1 >= L2) :
 for i in range((L1 - L2 + 1)) :
 flag = 1
 for j in range(L2):
 if(M[i+j] != S[j]) :
 flag = 0
 break
 if(flag == 1) :
 print("Substring %s found at index %d\n\n"%(S,i))
 break;
 if(flag == 0) :
 print("Substring not found in the main string\n\n")
 else :
 print("Substring is greater than main string\n\n")
 
def Count__occurrences_of_each_word_in_given_string() :
 Str = input("Enter the main string : ") # Its assumed that string contain only characters and 
spaces (multile spaces are allowed) 
 i = 0
 Word_array = []
 Count = []
 while( i < len(Str)) :
 word = ""
 while(Str[i] != ' ') :
 word += Str[i]
 i = i + 1
 if( i == len(Str)) :
 break
 if(i != len(Str)) :
 while(Str[i] == ' ') :
 i = i + 1
 if(len(Word_array) == 0) :
 Word_array.append(word)
 Count.append(1)
 else :
 flag = 1
 for j in range(len(Word_array)) :
 if(Word_array[j] == word) :
 Count[j] += 1
 flag = 0
 break
 if (flag == 1) :
 Word_array.append(word)
 Count.append(1)
 for i in range(len(Word_array)) :
 print("\t%15s : %d "%(Word_array[i],Count[i]))
 
def main():
 while True :
 print ("\t\t **** STRING OPERATIONS ****")
 print ("\t\t1 : Display word with longest length")
 print ("\t\t2 : Determine the frequency of occurrence of particular character in the string")
 print ("\t\t3 : Check whether given string is palindrome or not ")
 print ("\t\t4 : Display index of first appearance of the substring")
 print ("\t\t5 : Count the occurrences of each word in a given string")
 print ("\t\t6 : Exit")
 ch = int(input("Enter your choice : "))
 if (ch == 6):
 print ("End of Program")
 quit()
 elif (ch == 1) :
 Display_word_with_longest_length()
 elif (ch == 2) :
 Determine_frequency_of_occurrence_of_particular_character_in_string()
 elif (ch == 3) :
 Check_for_palindrome()
 elif (ch == 4) :
 display_index_of_first_appearance_of_the_substring()
 elif (ch == 5) :
 Count__occurrences_of_each_word_in_given_string()
 else :
 print ("Wrong choice entered !! Try again")
main()
Practical No 4
Write a Python program to compute following computation on matrix:
a) Addition of two matrices B) Subtraction of two matrices
c) Multiplication of two matrices d) Transpose of a matrix
print("Matrix A")
row1=int(input("Enter no. of rows"))
col1=int(input("Enter no. of cols"))
A=[[0 for j in range(col1)] for i in range(row1)]
for i in range(row1):
for j in range(col1):
A[i][j]=int(input())
print("Matrix A:",A)
print("Matrix B")
row2=int(input("Enter no. of rows"))
col2=int(input("Enter no. of cols"))
B=[[0 for j in range(col2)] for i in range(row2)]
for i in range(row2):
for j in range(col2):
B[i][j]=int(input())
print("Matrix B:",B)
def add():
if(row1==row2 and col1==col2):
C=[[0 for j in range(col2)] for i in range(row2)]
for i in range(row2):
for j in range(col2):
C[i][j]=A[i][j]+B[i][j]
print("Result of Addition",C) 
else:
print("Addition not Possible")
def sub():
if(row1==row2 and col1==col2):
C=[[0 for j in range(col2)] for i in range(row2)]
for i in range(row2):
for j in range(col2):
C[i][j]=A[i][j]-B[i][j]
print("Result of Subtraction:",C) 
else:
print("Subtraction not Possible")
def Transpose():
print("Enter matrix for Transpose:")
row=int(input("Enter no. of rows"))
col=int(input("Enter no. of cols"))
T=[[0 for j in range(col)] for i in range(row)]
for i in range(row):
for j in range(col):
T[i][j]=int(input())
print(T)
C=[[0 for j in range(col)] for i in range(row)]
for i in range(row):
for j in range(col):
C[i][j]=T[j][i]
print("Tranpose Matrix:",C) 
def mul():
if(col1==row2):
C=[[0 for j in range(col2)] for i in range(row2)]
for i in range(row1):
for j in range(col2):
C[i][j]=0
for k in range(col2):
C[i][j]+=A[i][k]*B[k][j]
print("Result of Multiplication:",C) 
else:
print("Multiplication not Possible")
while(True):
choice=int(input("Enter which operation you want to perform:\n1.Addition 
\n2.Subtraction\n3.Multiplication\n4.Transpose"))
if(choice==1):
add()
elif(choice==2):
sub()
elif(choice==3):
mul()
elif(choice==4):
Transpose()
else:
break





//=====================================================================================================







Practical no. 5 a
Write a Python program to store roll numbers of student in array who attended training 
program in random order. Write function for searching whether particular student attended 
training program or not, using Linear search and Sentinel search.
n=int(input("Enter no. of students attended Training Program:"))
print("Enter roll no.s in Random order")
l=[]
for i in range(n):
e=int(input())
l.append(e)
def linear(l,n):
key=int(input("Enter the roll no. to be search:"))
for i in range(0,n):
if(l[i]==key):
return i
return -1
def sentinel(l,n):
key=int(input("Enter the roll no. to be search:"))
last=l[n-1]
l[n-1]=key
while(l[i]!=key):
i+=1
l[n-1]=last
if (i<n-1 or l[n-1]==key):
return i
else:
return -1
while(True):
print("\n ")
print("Linear/Sentinel search")
print("1.Linear Search\n2.Sentinel Search")
choice=int(input("Enter choice:"))
if choice==1:
a=linear(l,n)
if(a==-1):
print("Element not Found ")
else:
print("Element Found at location:",a)
elif choice==2:
a=sentinel(l,n)
if(a==-1):
print("Element not Found ")
else:
print("Element Found at location:",a)
else:
print("Wrong Choice")
break






//=====================================================================================================





Practical no 5 b
Write a Python program to store roll numbers of student array who attended training program 
in sorted order. Write function for searching whether particular student attended training 
program or not, using Binary search and Fibonacci search
n=int(input("Enter no. of students attended Training Program:"))
print("Enter roll no.s in Sorted order")
l=[]
for i in range(n):
e=int(input())
l.append(e)
def Binary(l,n):
key=int(input("Enter the roll no. to be search:"))
low=0
high=n-1
mid=0
while(low<=high):
mid=((low+high)/2)
if(key==l[mid]):
return mid
elif(key<l[mid]):
high=mid-1
else:
low=mid+1
return -1
def Fibonacci(l,n):
key=int(input("Enter the roll no. to be search:"))
a=0
b=1
f=a+b
while(f<n):
a=b
b=f
f=a+b
print("\na\nb\nbf",a,b,f)
offset=-1
while(f>1):
i=min(offset+a,n-1)
print(i)
if(l[i]<key):
f=b
b=a
a=f-b
offset=i
elif(l[i]>key):
f=a
b=b-a
a=f-b
else:
return i
if(b and l[n-1] == key):
return n-1
return -1
while(True):
print("\n ")
print("Binary/Fibonacci search")
print("1.Binary Search\n2.Fibonacci Search")
choice=int(input("Enter choice:"))
if choice==1:
a=Binary(l,n)
if(a==-1):
print("Element not Found ")
else:
print("Element Found at location:",a)
elif choice==2:
a=Fibonacci(l,n)
if(a==-1):
print("Element not Found ")
else:
print("Element Found at location:",a)
else:
print("Wrong Choice")
break



//=====================================================================================================




Practical no 6
Write a Python program to store first year percentage of students in array. Write function for 
sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores.
n=int(input("Enter no. of students in class:"))
print("Enter pertange of students:")
l=[]
for i in range(n):
e=float(input())
l.append(e)
def bubble():
for i in range(n):
for j in range(n-i-1):
if(l[j]>l[j+1]):
temp=l[j]
l[j]=l[j+1]
l[j+1]=temp
print("Pass:",(i+1))
print(l)
print("Top 5 Scores:")
l1=l[n-1::-1]
for i in range(0,5):
print(l1[i]) 
def selection():
for i in range(n):
min=i
for j in range(i+1,n):
if(l[j]<l[min]):
min=j
temp=l[i]
l[i]=l[min]
l[min]=temp
print("Pass:",(i+1))
print(l)
while(True):
print("\n ")
print("Bubble/Selection sort")
print("1.Bubble Sort\n2.Selection Sort")
choice=int(input("Enter choice:"))
if choice==1:
bubble()
elif choice==2:
selection()
else:
print("Wrong Choice")
break
Practical no 7
Write a Python program to store first year percentage of students in array. Write function for 
sorting array of floating point numbers in ascending order using quick sort and display top 
five scores.
def q(l,low,high):
if(low<high):
p=partition(l,low,high)
q(l,low,p-1)
q(l,p+1,high)
def partition(l,low,high):
pivot=l[low]
i=low
j=high
while(i<j):
while(l[i]<pivot):
i+=1
while(l[j]>pivot):
j-=1
l[i],l[j]=l[j],l[i]
if(j>i):
pivot,l[j]=l[j],pivot
return j
n=int(input("Enter no of elements:"))
A=[int(input()) for i in range(n)]
print("Before sort:",A)
n=len(A)-1
q(A,0,n)
print("After sort:",A)





//=====================================================================================================






Practical no. 8
Department of Computer Engineering has student's club named 'Pinnacle Club'. Students of 
second, third and final year of department can be granted membership on request. Similarly 
one may cancel the membership of club. First node is reserved for president of club and last 
node is reserved for secretary of club. Write C++ program to maintain club member‘s 
information using singly linked list. Store student PRN and Name. Write functions to:
a) Add and delete the members as well as president or even secretary.
b) Compute total number of members of club
c) Display members
d) Two linked lists exists for two divisions. Concatenate two lists.
#include<iostream>
#include<string.h>
using namespace std;
struct node
{ int prn;
 char name[50];
 node *next;
};
class sll
{ node 
*s=NULL,*head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*
temp=NULL;
 int b,i,j,ct,prn1;
 char a[20];
 public:
 
 node *create();
 void insertp();
 void insertm();
 void inserte();
 void delm();
 void delp();
 void dels();
 void display();
 void count();
 void concat();
 
} ; 
node *sll::create()
{ node *p=new(struct node);
 cout<<"enter name of student ";
 cin>>a;
 strcpy(p->name,a);
 cout<<"\n enter prn no. of student \n";
 cin>>b;
 p->prn=b;
 p->next=NULL;
 return p;
 } 
 void sll::inserte()
 { 
 node *p=create();
 
 if(head==NULL)
 { head=p;
 }
 else
 { temp=head;
 while(temp->next!=NULL)
 { temp=temp->next; }
 temp->next=p;
 } 
 
 }
void sll::insertm()
 { 
 node *p=create();
 cout<<"Enter after which prn u want to insert";
cin>>prn1;
 if(head==NULL)
 { head=p;
 }
 else
 { temp=head;
 while(temp->prn!=prn1)
 { temp=temp->next; }
p->next=temp->next; 
temp->next=p;
 
 } 
 
 }
 void sll::insertp()
 { 
 node *p=create();
 
 if(head==NULL)
 { head=p;
 }
 else
 { temp=head;
 head=p;
 head->next=temp->next;
 
 } 
 
 }
 
 void sll::display()
 { if(head==NULL)
 { cout<<"linklist is empty";
 }
 else
 { 
 temp=head;
 cout<<" prn NAME \n";
while(temp!=NULL)
{ cout<<" \n\t"<<temp->prn<<" \t 
"<<temp->name;
 temp=temp->next;
 }
 //cout<<" "<<temp->prn<<" "<<temp-
>name;
 } 
 }
 void sll::delm()
 { int m,f=0; 
 cout<<"\n enter the prn no. of student whose data you want to 
delete";
 cin>>m;
 temp=head;
 while(temp->next!=NULL)
 { 
 if(temp->prn==m)
 { s->next=temp->next;
 delete(temp); f=1;
 }
 s=temp;
 temp=temp->next;
 } if(f==0)
 { cout<<"\n sorry memeber not deleted "; }
 }
 void sll::delp()
 { temp=head;
 head=head->next;
 delete(temp);
 }
 void sll::dels()
 { 
 temp=head;
 while(temp->next!=NULL)
 { s=temp;
 temp=temp->next;
 } s->next=NULL;
 delete(temp);
 
 }
 void sll::count()
 { temp=head; ct=0;
 while(temp!=NULL)
 { temp=temp->next; ct++; }
 
 cout<<" Count of members is:"<<ct;
 
 }
 
 void sll::concat()
 { int k,j;
 cout<<"enter no. of members in list1";
 cin>>k;
 head=NULL;
 for(i=0;i<k;i++)
 { insertm();
 head1=head;
 
 } head=NULL;
 cout<<"enter no. of members in list2";
 cin>>j;
 for(i=0;i<j;i++)
 { insertm();
 head2=head;
 
 } head=NULL;
 
 temp1=head1;
 while(temp1->next!=NULL)
{ 
temp1=temp1->next; 
}
 temp1->next=head2;
 
 temp2=head1; 
 cout<<" prn NAME \n";
 while(temp2->next!=NULL)
 { 
 cout<<"\n "<<temp2->prn<<" "<<temp2->name<<"\n";
 temp2=temp2->next;
 }
 cout<<"\n "<<temp2->prn<<" "<<temp2->name<<"\n";
 } 
 int main()
 { sll s;
 int i;
 
 char ch;
 do{
 cout<<"\n choice the options";
 cout<<"\n 1. To insert president ";
 cout<<"\n 2. To insert member ";
 cout<<"\n 3. To insert secretary ";
 cout<<"\n 4. To delete president ";
 cout<<"\n 5. To delete member ";
 cout<<"\n 6. To delete secretary ";
 cout<<"\n 7. To display data ";
 cout<<"\n 8. Count of members";
 cout<<"\n 9.To concatenate two strings ";
 cin>>i;
 switch(i)
 { case 1: s.insertp();
 break;
 case 2: s.insertm();
 break;
 case 3: s.inserte();
 break;
 case 4: s.delp();
 break;
 case 5: s.delm();
 break;
 case 6: s.dels();
 break;
 case 7: s.display(); 
 break;
 case 8: s.count();
 break; 
 
 case 9: s.concat();
 
 break; 
 default: cout<<"\n unknown choice";
 }
 cout<<"\n do you want to continue enter y/Y \n";
 cin>>ch;
 
 }while(ch=='y'||ch=='Y'); 
 
 return 0;
}


//=====================================================================================================



Practical no. 9
The ticket booking system of Cinemax theater has to be implemented using C++ program. 
There are 10 rows and 7 seats in each row. Doubly circular linked list has to be maintained to 
keep track of free seats at rows. Assume some random booking to start with. Use array to 
store pointers (Head pointer) to each row. On demand
a) The list of available seats is to be displayed
b) The seats are to be booked
c) The booking can be cancelled.
#include <iostream>
#include<stdlib.h>
using namespace std;
class node
{ public:
node* next;
node* prev;
int seat;
string id;
int status;
};
class cinemax
{
public:
node* head,* tail ,* temp;
cinemax()
{
head=NULL;
}
void create_list();
void display();
void book();
void cancel();
void avail();
};
void cinemax::create_list()
{
int i=1;
temp=new node;
temp->seat=1;
temp->status=0;
temp->id="null";
tail=head=temp;
for(int i=2;i<=70;i++)
{
node *p;
p= new node;
p->seat=i;
p->status=0;
p->id="null";
tail->next=p;
p->prev=tail;
tail=p;
tail->next=head;
head->prev=tail;
}
}
void cinemax::display()
{
{ int r=1;
node* temp;
temp=head;
int count=0;
cout<<"\n-----------------------------------------------------------
-------------------------\n";
cout<<" Screen this way \n";
cout<<"-------------------------------------------------------------
-----------------------\n";
while(temp->next!=head)
{
if(temp->seat/10==0)
cout<<"S0"<<temp->seat<<" :";
else
cout<<"S"<<temp->seat<<" :";
if(temp->status==0)
cout<<"|___| ";
else
cout<<"|_B_| ";
count++;
if(count%7==0)
{
cout<<endl;
r++;
}
temp=temp->next;
}
cout<<"S"<<temp->seat<<" :";
if(temp->status==0)
cout<<"|___| ";
else
cout<<"|_B_| ";
}
}
void cinemax::book()
{ int x;
string y;
label:
cout<<"\n\n\nEnter seat number to be booked\n";
cin>>x;
cout<<"Enter your ID number\n";
cin>>y;
if(x<1||x>70)
{
cout<<"Enter correct seat number to book (1-70)\n";
goto label;
}
node *temp;
temp=new node;
temp=head;
while(temp->seat!=x)
{
temp=temp->next;
}
if(temp->status==1)
cout<<"Seat already booked!\n";
else{
temp->status=1;
temp->id=y;
cout<<"Seat "<<x<<" booked!\n";
}
}
void cinemax::cancel()
{
int x;
string y;
label1:
cout<<"Enter seat number to cancel booking\n";
cin>>x;
cout<<"Enter you ID\n";
cin>>y;
if(x<1||x>70)
{
cout<<"Enter correct seat number to cancel (1-70)\n";
goto label1;
}
node *temp;
temp=new node;
temp=head;
while(temp->seat!=x)
{
temp=temp->next;
}
if(temp->status==0)
{
cout<<"Seat not booked yet!!\n";
}
else
{
if(temp->id==y)
{
temp->status=0;
cout<<"Seat Cancelled!\n";
}
else
cout<<"Wrong User ID !!! Seat cannot be cancelled!!!\n";
}
}
void cinemax::avail()
{
int r=1;
node* temp;
temp=head;
int count=0;
cout<<"\n\n\n\n";
cout<<"\n-----------------------------------------------------------
-------------------------\n";
cout<<" Screen this way \n";
cout<<"-------------------------------------------------------------
-----------------------\n";
while(temp->next!=head)
{
if(temp->status==0)
{
if(temp->seat/10==0)
cout<<"S0"<<temp->seat<<" :";
else
cout<<"S"<<temp->seat<<" :";
if(temp->status==0)
cout<<"|___| ";
count++;
if(count%7==0)
{
cout<<endl;
}
}
temp=temp->next;
}
if(temp->status==0)
{
cout<<"S"<<temp->seat<<" :";
if(temp->status==0)
cout<<"|___| ";
}
}
int main()
{ cinemax obj;
obj.create_list();
int ch;
char c='y';
while(c=='y')
{ obj.display();
cout<<"\n*********************************************\n";
cout<<" CINEMAX MOVIE THEATRE\n";
cout<<"*********************************************\n";
cout<<"\nEnter Choice\n1.Current SeatStatus\n2.Book Seat 
\n3.Available Seat\n4.CancelSeat\n";
cin>>ch;
switch(ch)
{
case 1:obj.display();
break;
case 2: obj.book();
break;
case 3:obj.avail();
break;
case 4: obj.cancel();
break;
default: cout<<"Wrong choice input\n";
}
cout<<"\nDo you want to perform any other operation : (y/n)\n";
cin>>c;
}
return 0;
}




//=====================================================================================================




Practical no. 10
A palindrome is a string of character that‘s the same forward and backward. Typically, 
punctuation, capitalization, and spaces are ignored. For example, “Poor Dan is in a droop” is 
a palindrome, as can be seen by examining the characters “poor danisina droop” and 
observing that they are the same forward and backward. One way to check for a palindrome 
is to reverse the characters in the string and then compare with them the original-in a 
palindrome, the sequence will be identical. Write C++ program with functionsa) To print original string followed by reversed string using stack
b) To check whether given string is palindrome or not
#include<iostream>
#include<string.h>
#define max 50
using namespace std;
class STACK
{
private:
char a[max];
int top;
public:
STACK()
{
top=-1;
}
void push(char);
void reverse();
void convert(char[]);
void palindrome();
};
void STACK::push(char c)
{
top++;
a[top] = c;
a[top+1]='\0';
cout<<endl<<c<<" is pushed on stack ...";
}
void STACK::reverse()
{
char str[max];
cout<<"\n\nReverse string is : ";
for(int i=top,j=0; i>=0; i--,j++)
{
cout<<a[i];
str[j]=a[i];
}
cout<<endl;
}
void STACK::convert(char str[])
{
int j,k,len = strlen(str);
for(j=0, k=0; j<len; j++)
{
if( ( (int)str[j] >= 97 && (int)str[j] <=122 ) || ( 
(int)str[j] >= 65 && (int)str[j] <=90 ))
{
if( (int)str[j] <=90 )
{
str[k] = (char)( (int)str[j] + 32 );
}else
{
str[k] = str[j];
}
k++;
}
}
str[k]='\0';
cout<<endl<<"Converted String : "<<str<<"\n";
}
void STACK::palindrome()
{
char str[max];
int i,j;
for(i=top,j=0; i>=0; i--,j++)
{
str[j]=a[i];
}
str[j]='\0';
if(strcmp(str,a) == 0)
cout<<"\n\nString is palindrome...";
else
cout<<"\n\nString is not palindrome...";
}
int main()
{
STACK stack;
char str[max];
int i=0;
cout<<"\nEnter string to be reversed and check is it 
palindrome or not : \n\n";
cin.getline(str , 50);
stack.convert(str);
while(str[i] != '\0')
{
stack.push(str[i]);
i++;
}
stack.palindrome();
stack.reverse();
}



//=========================================================================================================




Practical no: 11
In any language program mostly syntax error occurs due to unbalancing delimiter such as 
(),{},[]. Write C++ program using stack to check whether given expression is well 
parenthesized or not.
#include<iostream>
#include<string.h>
using namespace std;
class braces
{ char st[20];
 int top;
 public:
 void push(char a);
 void pop();
 void input();
 
};
void braces::push(char a)
{ top++; st[top]=a; }
void braces::pop()
{ top--; }
void braces::input()
{ char ch[20]; int x=1,i=0;
 top=-1;
 cout<<"\nenter the expression";
 cin>>ch;
 while(i<strlen(ch))
 { 
 
 if((ch[i]=='{')||(ch[i]=='[')||(ch[i]=='('))
 { push(ch[i]); }
 
 if(ch[i]=='}')
 { if(st[top]=='{')
 pop();
 else
 { 
 cout<<"\n matching opening brace '{' is not found"; 
 
 
 }
 
 }
 if(ch[i]==']')
 { if(st[top]=='[')
 pop();
 else
 { 
 cout<<"\n matching brace '[' is not found";
 
 }
 }
 if(ch[i]==')')
 { if(st[top]=='(')
 pop();
 else
 { 
 cout<<"\n matching opening brace '(' is not found";
 
 } 
 }
 i++;
 }
 if(top==-1)
 { x=5; 
 cout<<"\nstack is empty";
 cout<<"\n EXPRESSION IS WELL PARENTHESIZED";
 
 }
 else
 { while(top!=-1)
 {
 if(st[top]=='[')
 { pop(); cout<<"\n matching closing brace ']' is not 
found"; }
 if(st[top]=='{')
 { pop(); cout<<"\n matching closing brace '}' is not 
found"; }
 if(st[top]=='(')
 { pop(); cout<<"\n matching closing brace ')' is not 
found"; }
 }
 
 cout<<"\n EXPRESSION IS NOT WELL PARENTHESIZED";
 }
 
 
 
}
 int main()
 { braces c;
 c.input();
 
 } 




 //===================================================================================================



Practical no 12
Title: Queues are frequently used in computer programming, and a typical example is the 
creation of a job queue by an operating system. If the operating system does not use 
priorities, then the jobs are processed in the order they enter the system. Write C++ program 
for simulating job queue. Write functions to add job and delete job from queue.
#include <iostream>
#define MAX 10
using namespace std;
struct queue
{ int data[MAX];
int front,rear;
};
class Queue
{ struct queue q;
 public:
 Queue(){q.front=q.rear=-1;}
 int isempty();
 int isfull();
 void enqueue(int);
 int delqueue();
 void display();
};
int Queue::isempty()
{
return(q.front==q.rear)?1:0;
}
int Queue::isfull()
{ return(q.rear==MAX-1)?1:0;}
void Queue::enqueue(int x)
{q.data[++q.rear]=x;}
int Queue::delqueue()
{return q.data[++q.front];}
void Queue::display()
{ int i;
 cout<<"\n";
 for(i=q.front+1;i<=q.rear;i++)
 cout<<q.data[i]<<" ";
}
int main()
{ Queue obj;
int ch,x;
do{ cout<<"\n 1.Insert Job\n 2.Delete Job\n 3.Display\n 
4.Exit\n Enter your choice : ";
 cin>>ch;
switch(ch)
{ case 1: if (!obj.isfull())
 { cout<<"\n Enter data : \n";
cin>>x;
obj.enqueue(x);
cout<<endl;
 }
 else
 cout<< "Queue is overflow!!!\n\n";
 break;
 case 2: if(!obj.isempty())
 cout<<"\n Deleted Element = 
"<<obj.delqueue()<<endl;
 else
{ cout<<"\n Queue is underflow!!!\n\n"; }
 cout<<"\nRemaining Jobs : \n";
 obj.display();
 break;
 case 3: if (!obj.isempty())
 { cout<<"\n Queue contains : \n";
 obj.display();
 }
 else
 cout<<"\n Queue is empty!!!\n\n";
 break;
 case 4: cout<<"\n Exiting Program.....";
 }
 }while(ch!=4);
return 0;
}




//============================================================================================================
Practical no. 13
Title: A double-ended queue (deque) is a linear list in which 
additions and deletions may be made at either end. Obtain a data
representation mapping a deque into a one-dimensional array. Write 
C++ program to simulate deque with functions to add 
and delete elements from either end of the deque. 
#include<iostream>
#include<stdio.h>
#define MAX 10
using namespace std;
struct que
{
 int arr[MAX];
 int front,rear;
};
void init(struct que *q)
{
 q->front=-1;
 q->rear=-1;
}
void print(struct que q)
{
 int i;
 i=q.front;
 while(i!=q.rear)
 {
 cout<<"\t"<<q.arr[i];
 i=(i+1)%MAX;
 }
 cout<<"\t"<<q.arr[q.rear];
}
int isempty(struct que q)
{
 return q.rear==-1?1:0;
}
int isfull(struct que q)
{
 return (q.rear+1)%MAX==q.front?1:0;
}
void addf(struct que *q,int data)
{
 if(isempty(*q))
 {
 q->front=q->rear=0;
 q->arr[q->front]=data;
 }
 else
 {
 q->front=(q->front-1+MAX)%MAX;
 q->arr[q->front]=data;
 }
}
void addr(struct que *q,int data)
{
 if(isempty(*q))
 {
 q->front=q->rear=0;
 q->arr[q->rear]=data;
 }
 else
 {
 q->rear=(q->rear+1)%MAX;
 q->arr[q->rear]=data;
 }
}
int delf(struct que *q)
{
 int data1;
 data1=q->arr[q->front];
 if(q->front==q->rear)
 init(q);
 else
 q->front=(q->front+1)%MAX;
 return data1;
}
int delr(struct que *q)
{
 int data1;
 data1=q->arr[q->rear];
 if(q->front==q->rear)
 init(q);
 else
 q->rear=(q->rear-1+MAX)%MAX;
 return data1;
}
int main()
{
 struct que q;
 int data,ch;
 init(&q);
 while(ch!=6)
 {
 cout<<"\t\n1.Insert front"
 "\t\n2.Insert rear"
 "\t\n3.Delete front"
 "\t\n4.Delete rear"
 "\t\n5.Print"
 "\t\n6.Exit";
 cout<<"\nEnter your choice : ";
 cin>>ch;
 switch(ch)
 {
 case 1:
 cout<<"\nEnter data to insert front : ";
 cin>>data;
 addf(&q,data);
 break;
 case 2:
 cout<<"\nEnter the data to insert rear : ";
 cin>>data;
 addr(&q,data);
 break;
 case 3:
 if(isempty(q))
 cout<<"\nDequeue is empty!!!";
 else
 {
 data=delf(&q);
 cout<<"\nDeleted data is : "<<data;
 }
 break;
 case 4:
 if(isempty(q))
 cout<<"\nDequeue is empty!!!";
 else
 {
 data=delr(&q);
 cout<<"\nDeleted data is : "<<data;
 }
 break;
 case 5:
 if(isempty(q))
 cout<<"\nDequeue is empty!!!";
 else
{
 cout<<"\nDequeue elements are : ";
print(q);
 }
 break;
 }
 }
 return 0;
}








//========================================================================================================





Practical no. 14



Title: Pizza parlor accepting maximum M orders. 
Orders are served in first come first served basis. Order once 
placed can not be cancelled. 
Write C++ program to simulate the system using circular queue using 
array.
#include<iostream>
#include<cstdlib>
using namespace std;
class pizza
{
int front,rear,q[5];
public:
pizza()
{
front=-1;
rear=-1;
}
int isfull()
{
if((front==0&&rear==4)||front==rear+1)
{
return 1;
}
else
{
return 0;
}
}
int isempty()
{
if(front==-1&&rear==-1)
{
return 1;
}
else
{
return 0;
}
}
void add()
{
if(isfull()==0)
{
cout<<"\n Enter the Pizza ID: ";
if(front==-1&&rear==-1)
{
front=0;
rear=0;
cin>>q[rear];
}
else
{
rear=(rear+1)%5;
cin>>q[rear];
}
char c;
cout<<" Do you want to add another order ? ";
cin>>c;
if(c=='y'||c=='Y')
add();
}
else
{
cout<<"\n Orders are full ";
}
}
void serve()
{
if(isempty()==0)
{
if(front==rear)
{
cout<<"\n Order served is : "<<q[front];
front=-1;
rear=-1;
}
else
{
cout<<"\n Order served is : "<<q[front];
front=(front+1)%5;
}
}
else
{
cout<<"\n Orders are empty ";
}
}
void display()
{
if(isempty()==0)
{
for(int
i=front;i!=rear;i=(i+1)%5)
{
cout<<q[i]<<"
<- ";
}
cout<<q[rear];
}
else
{
cout<<"\n Orders are empty";
}
}
void check()
{
int ch;
cout<<"\n\n * * * * PIZZA PARLOUR * * * * \n\n";
cout<<"\n 1. Add a Pizza \n 2. Display the Orders \n 3. Serve a 
pizza \n 4. Exit \n Enter your choice : ";
cin>>ch;
switch(ch)
{
case 1:
add();
break;
case 2:
display();
break;
case 3:
serve();
break;
case 4:
exit(0);
default:
cout<<"Invalid choice ";
check();
}
char ch1;
cout<<"\n Do you want to continue? ";
cin>>ch1;
if(ch1=='y'||ch1=='Y')
check();
}
};
int main()
{
pizza p1;
p1.check();
return 0;
}
