//Including Header Files
#include<stdio.h>//Includes Standard Input Output
#include<stdlib.h>//Includes Standard Library
#include "MyHeader.h"//Including custom header file
//We can use "" for header files in same directory as source file
#include<math.h>
#include<string.h>
#define MYNAME "Faisal"//Defining a Constant that cant change

//Prototyping a function
void printsomething();
void convertToDollars(float euro);
int calculateBonus(int yearsWorked);
void passbyvalue(int i);
void passbyreference(int *i);

int global; //Global Variable

void main() //Function
{
    //OneLineComment
    /*Block Comment*/
    
    printf("\tTAB");//Tab
    printf("\nNEWLINE\n");//Newline
    int a =6;
    //Conversion Characters follow order
    printf("%s and %s\n", "First String", "Second String");//%s is placeholder for String
    printf("%d\n", 1); //%d is placeholder for Integers, no decimal
    printf("%f\n", 4.668572); //%f is placeholder for Floats 6 decimal places
    printf("%c\n",'c');//%c placeholder for character
    printf("%p\n", a);//%p placeholder for pointer
    printf("%.2f\n", 4.6534363); // .n between % and f will show only 'n' no. of digits

    //VARIABLES
    /*Rules: 
    No Spaces in between,
    cannot start with _ or number,
    no weird symbols,
    dont name it something familiar like main*/

    int var; //Declaration
    var = 2020-2002; //Initialisation
    printf("%d\n", var); //Printing a variable

    //String Terminator
    //\O is a string terminator and thats why there is always an extra byte
    printf("String\0\n");//7 bytes taken by this character array(list of chars)

    //ARRAYS
    char name[7] = "Faisal";//String or Character Array, String Terminator takes 1 byte not in nos.
    printf("%s\n", name); //Printing Array

    name[3]='z';//Replaces s in Faisal, Array starts from 0
    printf("%s\n", name);

    //Copying Strings
    strcpy(name, "MFS");//Copies the items of second string to the first string
    printf("%s\n", name);
    
    //INPUT STUFF using scanf()
    //scanf() cannot input space
    
    char stuff[20];
    printf("Type some stuff\n");
    scanf("%s",stuff);//Inputting Stuff
    printf("The stuff you typed is %s\n",stuff);//Printing Stuff

    int num;
    printf("Type some number\n");
    scanf("%d", &num); // & needed in case of numbers
    printf("The num = %d\n", num);
    
    //MATH OPERATORS
    //Add +, Subtract -, Multiply *, Divide /, Remainder %, Equals ==
    //Follows BODMAS Order of operations
    //Answer is of the datatype of variables
    //If both variables are int then ans is int
    //multiple variables can be assigned in a single line like a=b=c
    
    // TYPECASTING
    int i1 = 1;
    float f1 = 1.1;
    printf("%d\n",(int)f1);//f1 converted into integer
    printf("%.0f\n",f1);//.0 in %f removes decimal

    //CONDITIONS
    //IF AND ELSE STATEMENT AND NESTING THEM
    if((8==2) || (2!=2) && (2>=3))//&& means 'and' , || means 'or'
    {
        if(8>2)
        printf("IF\n");
    }

    else if(8==8)
    {
        float f;
        scanf(" %f", &f); //Always add space before placeholder in floats
        printf("ELSE!\n");
    }
    //Shorthand If Else Statement
    //(condition) ? true statement : false statement;
    char i = 'A';
    (i<'B') ? printf("Ok\n") : printf("No\n"); //Characters can be compared like numbers
    
    //INCREMENT OPERATORS
    int z = 1;
    printf("%d\n", z++);
    printf("%d\n", ++z);

    //WHILE LOOP
    while(1)//1 means true, while(0) 0 means false
    {
        printf("WHILE\n");
        break;
    }

    //DO WHILE LOOPS
    do{
        printf("Hey\n");
        break;
    }while(1);
    
    //FOR LOOPS
    for(int i=1;i<10;i++)
    {
        printf("_");
    }

    printf("\n");

    //Creating a table
    int rows;
    int columns;
    for(rows=1;rows<=4;rows++)
    {
        for(columns=1;columns<=4;columns++)
            printf("A");
        printf("\n");
    }
    
    //BREAK STATEMENT & CONTINUE STATEMENT
    for(int i=1;i<10;i++)
    {
        printf("%d\n", i);
        if(i>4)
            break;
        else
            continue;
    }

    //SWITCH STATEMENT
    char grade = 'A';
    switch(grade)
    {
        case 'A' : printf("Noice!\n");break;
        case 'B' : printf("Noice!\n");break;
        case 'C' : printf("Noice!\n");break;
        case 'D' : printf("Noice!\n");break;
        default : printf("NOICE!\n");
    }

    //Using integers and characters interchangingly
    int x = '$';
    printf("%c\n", x);
    //Characters are stored as numbers in computers hence A can be stored in int variable
    
    //isupper(var);
    //islower(var);
    //isdigit(var);
    //isalpha(var);
    //toupper(var);
    //tolower(var);

    //ATTACHING STRINGS
    char firstName[20] = "Faisal ";
    char lastName[20] = "Saifi";
    strcat(firstName, lastName);//attaches second string to the first string
    printf("%s\n", firstName);

    //COPYING STRINGS
    strcpy(firstName, "MFS");
    printf("%s", firstName);

    //PUTS and GETS
    puts("This is puts");//Moves cursor to next line unlike printf
    gets(firstName);//Inputs space unlike scanf
    
    //MATHS FUNCTIONS

    //ROUNDING OFF Numbers
    float f3 = 1.53;
    floor(f3);//Rounds off to lower number
    float f4 = 7.32;
    ceil(f4);//Rounds off to higher number

    //ABSOLUTE VALUE
    f3 = -20.1;
    abs(f3);
    printf("%d", f3);

    //POWERS
    a = pow(5, 2); //pow(base, exponent)
    
    //SQUARE ROOT
    sqrt(a);

    //RANDOM NUMBERS
    printf("%d\n",rand()%50); //%n means at most n random numbers,%n is also called rand_max

    //INT and FLOAT ARRAYS
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};//There is no null zero in int arrays

    for(int i = 0; i<10 ;i++)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }

    //SORTING ARRAYS
    //Bubble Sort
    int temp, swapped;
    int n = 10;
    int list[n];

    //temp is used in swapping values between list[i] and list [i+1]
    //swapped is used to check whether the values have swapped or not

    for(int i = 0; i<n; i++)
    {
        list[i] = (rand()%25) + 1;
    }

    printf("Original List:\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d\n", list[i]);
    }

    while(1)
    {
        swapped = 0;
        for(int i = 0; i<n; i++)
        {
            if(list[i] < list[i+1])
            {
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
                swapped = 1;
            }
            
        }

        if(swapped == 0)
            break;

    }

    printf("\nSorted List:\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d\n", list[i]);
    }

    //POINTERS are special types of variables used to hold addresses of other variables
    int *pvar = &var;//Declaration of a pointer, the datatype is of the variable to which the pointer points
    //Naming of pointer: p"Name of variable to point at"
    printf("%p\n", pvar);//Displays memory location of var
    printf("%p\n", &pvar);//Displays memory location of pvar
    //DEREFERENCING A POINTER
    printf("%d\n", *pvar);//Displays the value of variable to which the pointer points

    printf("Element\tAddress\tValue\n");
    for(int i = 0; i<10; i++)
    {
        printf("arr[%d]\t%p\t%d\n", i, &arr[i], arr[i]);
    }

    printf(" Arr\t%p\n", arr);//the name of an array itself is a pointer of the first element of the array
    printf("*Arr\t%d\n", *arr);//dereferencing an array name gives the value of the first element
    printf("*Arr\t%d\n", *(arr+2));//arr points at arr[0], hence arr+2 points at arr[2]
    
    //Changing the value of string
    char *movie = "Avengers";//Creating a pointer pointing at A(The first element)
    movie = "Avengers 2";//Now the pointer points towards the other value 
    puts(movie);//Prints the other value that it points towards now

    //FGETS is better than GETS
    //FGETS is like gets which only stores the number of elements in an array as specified
    //This is needed becoz sometimes the computer doesnt have enough memeory to store a really big string and hence it crashes
    
    //fgets(movie, 10, stdin);//Syntax: fgets(name of array, no. of max elements to be stored, standard input which is form the keyboard)
    
    puts(movie);

    //THE HEAP is like extra memory that our program can use if it needs and when it is done it returns the extra memory back to the computer when it is done
    //Example
    int *points;//Making a pointer that points at int var
    //Making of Heap
    points = (int *) malloc(5*sizeof(int));//Allocates memory for points of 5 times the size of int
    //(int *)  -> Typecasting to int pointer
    //malloc() -> Allocates memory
    //sizeof(x)-> Returns size of x

    //STRUCTURES -> Check MyHeader.h
    struct user faisal;

    strcpy(faisal.name, "Faisal Saifi");
    puts(faisal.name);
    //Types of files
    //Sequencial
    //Random Access Files
    
    //Writing files
    FILE * fPointer;//Creating a file pointer for doing anything related to files
    fPointer = fopen("file.txt","w");
    //fopen -> Opens file
    //w -> write / create
    //r -> read
    //a -> append / add
    fprintf(fPointer, "NOICE!\n BOI!\n");
    //fprintf -> Print to file
    //w creates a new file everytime we run the program hence overwrites the existing one   
    fclose(fPointer);
    //Reading a File
    fPointer = fopen("file.txt", "r");//Opening a file to read
    char singleLine[150];//Creating a string 

    while(!feof(fPointer))//!feof-> Until end of file
    {
        fgets(singleLine, 150, fPointer);
        printf(singleLine);//Printing one line
    }
    fclose(fPointer);

    //Appending a file
    fPointer = fopen("file.txt", "a");
    fprintf(fPointer, "- Faisal");
    fclose(fPointer);

    //Random File Access
    fPointer = fopen("file.txt", "w+");
    //w+ -> Write first then read
    fputs("This is a file\n", fPointer);
    fseek(fPointer, 7, SEEK_SET);
    //SEEK_SET -> Move cursor to starting of file
    //move cursor forward
    fputs(" the file", fPointer);
    fseek(fPointer, -4, SEEK_END);
    //SEEK_END -> Move Cursor to end of file
    //Negative number for moving cursor backwards
    fputs("FILE.", fPointer);

    //Calling a Function
    printsomething();

    //Global Variables -> Declared outside all the functions so that it can be accessed by every function in the program
    //Local Variables -> Declared inside a function so it's scope is only in that function

    //Passing arguments to functions
        float e = 100;
    convertToDollars(e);
    convertToDollars(25.5);

    printf("Bonus: %d", calculateBonus(2));
    
    int tuna = 50;

    //Passing by value
    printf("Passing by value: ", tuna);//Doesn't affect value of tuna

    //Passing by reference
    printf("Passing by reference: ", tuna);//Affects the value of tuna
    
    system("pause");
}

//FUNCTIONS
//Body of a function
void printsomething()
{
    printf("This is a function");
    return;//It is not needed in case of void
}

void convertToDollars(float euro)
{
    float usd = euro*1.37;
    printf("%.2f Euro -> %.2f USD", euro, usd);
    return;
}
//Return values
int calculateBonus(int yearsWorked)
{
    int bonus = yearsWorked * 250;
    return bonus;
}

//Passing by value
//Only changes the valu of i not tuna
void passbyvalue(int i)
{
    i = 99;
    return;
}

//Passing by reference
//i is a pointer that points at tuna which means if we change i then tuna gets afffected
void passbyreference(int *i)
{
    *i = 64;
    return;
}