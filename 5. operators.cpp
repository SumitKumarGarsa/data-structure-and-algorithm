/*
C++ operators :
1. Arithmetic operator
2. Relational Operator
3. Logical Operator
4. Assignment Operator
5. Bitwise Operator
6. Misc Operator
*/

/*
Arithmetic Operator

+ Addition

num1 + num2

- Substraction

num1 - num2

* Multiplication

num1 * num2 

/ Division

num1 / num 2

% Modulus

5 % 2  =  1

++ Increment
 a = 3  
 a++ = 4
-- Decrement
a = 3
a-- = 2

*/

#include<iostream>
using namespace std;
int main(){

    int num1 = 6;
    int num2  = 3;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;

    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;

    return 0;

}

/*
Relational Operators

== Is equals to

expression 1 == expression 2 true / false

4 == 5 false
4 == 4 true
4 == '4'(integer) false

! Not Equals to

4 != 5  true
4 != 4 false

> Greater Than
< Less than
>= Greater than  equals to
<= Less tah equals to
*/

#include<iostream>
using namespace std;
int main(){
    int num1 = 6;
    int num2 = 3;

    cout<<(num1==num2)<<endl; //false
    cout<<(num1!=num2)<<endl; //true
    cout<<(num1<=num2)<<endl;
    cout<<(num1>=num2)<<endl;
    return 0;
}

/* Logical Operators
&& (Logical And)
expression1(true)  && expression2(true) then this entire expression is true
in other case the entire expression becomes false
|| (Logical OR)
expression1 (true) || expression 2 (true) then this entire expression is true 
in other case the entire expression is false
!(Logical Not)
used on a single expression
!expression1 = expression 2 true because !true = false ; !false = true
*/

#include<iostream>
using namespace std;
int main(){
/* here we use bool because we are dealing in true and false in this entire 
    expression */
    bool exp1 = true;
    bool exp2 = false;

    cout<<(exp1&&exp2)<<endl; //false
    cout<<(exp1||exp2)<<endl;//true
    cout<<(!exp1)<<endl; //false
    return 0;
}


#include<iostream>
using namespace std;
int main(){

    int num1 = 6;
    int num2  = 3;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;

    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;

    return 0;

}
/* Assignment  Operators
=   int p = 4; int q = p;
+=  a+= 1  a = a+1
-=   a-= 1  a = a-1
/= a\=1  a = a/1
%= a%=1 a =  a%1
*/


/* Bitwise Operators
~ 0 = 1 ~(0101) = 1010
~ 1 = 0
~ Bitwise Complement

<< Left Shift 0101 << 1   =  1010
if we left shift a number by 1 then it gets multiplied by 2 for example
0100 << 1 = 1000

>> Right Shift

0100 >> 0010

if we right shift a number then at that situation the number gets divided by  2

a << b  result  a x 2^b

a >> b  result  a/2^b

Bitwise OR |

1 | 1 = 1
1 | 0 = 1
0| 0 = 0

Bitwise AND &

 1010
&0110
OUTPUT = 0010

Bitwise exclusive OR ^

0 ^ 0 = 0
 
1^ 1 = 0


*/

#include<iostream>
using namespace std;
int main(){

    int num1 = 5;
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;

    int num2 = 8;
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;
    
    return 0;

}

/* Misc Operators
Size of Operator

int a = 4;
sizeof(a) = 4 bytes

Condition? Expression1:Expression2

for example 

int a;
4 == 5 ?  a= 4 , a = 5

Comma Operator

int y = 4,3,6

Dot and arrow operator

.(used in classs) => (use in pointers)

Casting operator

float b = 3.44
int(b) = 3

& Address Operator

&a print the address of a in the memory

*Pointer Operator

Used for pointing an object 
p = *a 

*/
code : => #include<iostream>
using namespace std;
int main(){

    int a=4;
    cout<<sizeof(a)<<endl;

    char name='a';
    cout<<sizeof (name)<<endl;

    bool flag;
    a==name? flag = true : flag =false;
    cout<<flag<<endl;

    cout<<(&a)<<endl;
    return 0;

}
