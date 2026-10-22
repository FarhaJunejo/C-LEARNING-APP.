#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// ===================== LECTURES =====================

void variables(){
    cout<<"VARIABLES"<<endl;
    cout<<"A variable is a named memory location used to store a value that can change during program execution."<<endl;
    cout<<"EXAMPLE : int age = 20"<<endl;
    cout<<"Here age is variable name which stores value 20."<<endl;
}

void datatypes(){
    cout<<"DATA TYPES"<<endl;
    cout<<"A data type specifies what kind of value a variable can store."<<endl;
    cout<<"EXAMPLES:"<<endl;
    cout<<"Integer : Whole numbers (without decimal)"<<endl;
    cout<<"int age = 20;"<<endl;
    cout<<"Float : Decimal/fractional numbers"<<endl;
    cout<<"float price = 25.5f;"<<endl;
    cout<<"Double : Decimal numbers with higher precision"<<endl;
    cout<<"double pi = 3.141592;"<<endl;
    cout<<"Char : A single character"<<endl;
    cout<<"char grade = 'A';"<<endl;
    cout<<"Bool : True or false values"<<endl;
    cout<<"bool passed = true;"<<endl;
    cout<<"String : A sequence of characters"<<endl;
    cout<<"string name = \"Hello World\";"<<endl;
}

void input(){
    cout<<"INPUT"<<endl;
    cout<<"Input is the process of taking data from the user using cin."<<endl;
    cout<<"EXAMPLE : cin >> age;"<<endl;
}

void output(){
    cout<<"OUTPUT"<<endl;
    cout<<"Output is the process of displaying information on the screen using cout."<<endl;
    cout<<"EXAMPLE : cout << \"Enter number\";"<<endl;
}

void operators(){
    cout<<"OPERATORS"<<endl;
    cout<<"An operator is a symbol used to perform an operation on values or variables."<<endl;
    cout<<"Types of operators in C++:"<<endl;
    cout<<"Arithmetic : Used to perform mathematical calculations."<<endl;
    cout<<"+ , - , % , / , *"<<endl;
    cout<<"Relational : Used to compare two values and produce true or false."<<endl;
    cout<<"< , > , <= , >= , == , !="<<endl;
    cout<<"Logical : Used to combine or reverse conditions."<<endl;
    cout<<"&& , || , !"<<endl;
    cout<<"Assignment : Used to assign or update a value in a variable."<<endl;
    cout<<"= , += , -= , *= , /="<<endl;
    cout<<"Increment/Decrement : Used to increase or decrease a value by 1."<<endl;
    cout<<"++ , --"<<endl;
}

void comments(){
    cout<<"COMMENTS"<<endl;
    cout<<"A comment is text written in code for explanation and is ignored by the compiler."<<endl;
    cout<<"// This is a single-line comment"<<endl;
    cout<<"There are two types of comments:"<<endl;
    cout<<"1. Single line"<<endl;
    cout<<"2. Multi-line"<<endl;
}

void conditions(){
    cout<<"CONDITIONS"<<endl;
    cout<<"A condition is used to make a decision by checking whether something is true or false."<<endl;
    cout<<"Types of conditions:"<<endl;

    cout<<"1. if"<<endl;
    cout<<"Executes code when a condition is true."<<endl;
    cout<<"if(age >= 18)"<<endl;
    cout<<"cout << \"Adult\";"<<endl;

    cout<<"2. if-else"<<endl;
    cout<<"Chooses between two alternatives."<<endl;
    cout<<"if(age >= 18)"<<endl;
    cout<<"cout << \"Adult\";"<<endl;
    cout<<"else"<<endl;
    cout<<"cout << \"Minor\";"<<endl;

    cout<<"3. else-if"<<endl;
    cout<<"Checks multiple conditions one by one."<<endl;
    cout<<"if(marks >= 80)"<<endl;
    cout<<"cout << \"A\";"<<endl;
    cout<<"else if(marks >= 60)"<<endl;
    cout<<"cout << \"B\";"<<endl;
    cout<<"else"<<endl;
    cout<<"cout << \"C\";"<<endl;

    cout<<"4. switch"<<endl;
    cout<<"Selects one block of code from multiple choices."<<endl;
    cout<<"switch(choice)"<<endl;
    cout<<"case 1: cout << \"Start\"; break;"<<endl;
    cout<<"case 2: cout << \"Exit\"; break;"<<endl;
}

void loops(){
    cout<<"LOOPS"<<endl;
    cout<<"A loop repeatedly executes a block of code while a condition is satisfied."<<endl;

    cout<<"FOR LOOP"<<endl;
    cout<<"Repeats code when the number of repetitions is generally known."<<endl;
    cout<<"for(int i=0; i<5; i++)"<<endl;
    cout<<"cout << i;"<<endl;

    cout<<"WHILE LOOP"<<endl;
    cout<<"Repeats code while a condition remains true."<<endl;
    cout<<"while(x < 5)"<<endl;
    cout<<"x++;"<<endl;

    cout<<"DO-WHILE LOOP"<<endl;
    cout<<"Executes the code at least once before checking the condition."<<endl;
    cout<<"do"<<endl;
    cout<<"{"<<endl;
    cout<<"x++;"<<endl;
    cout<<"}while(x < 5);"<<endl;
}

void arrays(){
    cout<<"ARRAYS"<<endl;
    cout<<"An array is a collection of multiple values of the same data type stored under one name."<<endl;
    cout<<"Example:"<<endl;
    cout<<"int marks[5] = {80,75,90,85,70};"<<endl;
    cout<<"Here, marks stores 5 integer values."<<endl;
}

void structures(){
    cout<<"STRUCTURES"<<endl;
    cout<<"A structure is a user-defined data type in C++ that allows multiple variables of different data types to be grouped together under a single name."<<endl;
    cout<<"EXAMPLE:"<<endl;
    cout<<"struct Student"<<endl;
    cout<<"{"<<endl;
    cout<<"string name;"<<endl;
    cout<<"int age;"<<endl;
    cout<<"};"<<endl;
}

void functions(){
    cout<<"FUNCTIONS"<<endl;
    cout<<"A function is a block of code designed to perform a specific task and can be called whenever needed."<<endl;

    cout<<"Example:"<<endl;
    cout<<"void greet()"<<endl;
    cout<<"{"<<endl;
    cout<<"cout << \"Hello!\";"<<endl;
    cout<<"}"<<endl;

    cout<<"Types of functions:"<<endl;
    cout<<"1. No argument, no return value"<<endl;
    cout<<"void show()"<<endl;

    cout<<"2. Argument, no return value"<<endl;
    cout<<"void show(int x)"<<endl;

    cout<<"3. No argument, with return value"<<endl;
    cout<<"int getNumber()"<<endl;

    cout<<"4. Argument, with return value"<<endl;
    cout<<"int add(int a, int b)"<<endl;
}

void pointers(){
    cout<<"POINTERS"<<endl;
    cout<<"A pointer is a variable that stores the memory address of another variable or object and allows indirect access to the value stored at that address."<<endl;
    cout<<"Example:"<<endl;
    cout<<"int x = 10;"<<endl;
    cout<<"int *p = &x;"<<endl;
    cout<<"cout << *p;"<<endl;
}

void memoryallocation(){
    cout<<"MEMORY ALLOCATION"<<endl;
    cout<<"Memory allocation is the process of reserving a specific amount of memory for variables or data during program execution."<<endl;

    cout<<"There are two main types:"<<endl;
    cout<<"1. Static allocation"<<endl;
    cout<<"2. Dynamic allocation"<<endl;

    cout<<"Static memory allocation is the process of allocating memory at compile time, where the size of memory remains fixed throughout the program's execution."<<endl;
    cout<<"Example:"<<endl;
    cout<<"int numbers[5];"<<endl;

    cout<<"Dynamic memory allocation is the process of allocating memory at runtime, allowing the program to determine the required memory size during execution."<<endl;
    cout<<"Example:"<<endl;
    cout<<"int *p = new int;"<<endl;
    cout<<"*p = 10;"<<endl;
    cout<<"delete p;"<<endl;

    cout<<"new allocates memory dynamically."<<endl;
    cout<<"p stores the address of the allocated memory."<<endl;
    cout<<"delete releases the allocated memory."<<endl;
}

void filehandling(){
    cout<<"FILE HANDLING"<<endl;
    cout<<"File handling is the process of creating, opening, reading, writing, modifying, and closing files through a program for permanent storage of data."<<endl;

    cout<<"Common C++ classes:"<<endl;
    cout<<"ofstream : writing to a file"<<endl;
    cout<<"ifstream : reading from a file"<<endl;
    cout<<"fstream : reading and writing"<<endl;
}

void standardlibraries(){
    cout<<"STANDARD LIBRARIES"<<endl;
    cout<<"Standard libraries are collections of pre-defined classes, functions, objects, and algorithms provided by C++ to perform commonly required programming tasks without implementing them from scratch."<<endl;
}


// ===================== QUIZ HELPER =====================

void checkAnswer(int answer, int correct){
    if(answer == correct){
        cout<<"Yahoo... Correct!"<<endl;
    }
    else{
        cout<<"Incorrect answer! Correct answer is "<<correct<<endl;
    }
}


// ===================== QUIZ RESULT =====================

void showQuizResult(int score, int total){

    double percentage = (score * 100.0) / total;

    cout<<endl;
    cout<<"========================================"<<endl;
    cout<<"              QUIZ RESULT"<<endl;
    cout<<"========================================"<<endl;
    cout<<"Your Score: "<<score<<"/"<<total<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"========================================"<<endl;
}


// ===================== BEGINNER QUIZ =====================

void beginnerQuiz(){

    int answer;
    int score = 0;

    cout<<endl;
    cout<<"========================================"<<endl;
    cout<<"          BEGINNER QUIZ"<<endl;
    cout<<"========================================"<<endl;

    cout<<"Q1. What is a variable?"<<endl;
    cout<<"1. A named memory location used to store a value"<<endl;
    cout<<"2. A programming language"<<endl;
    cout<<"3. An operator"<<endl;
    cout<<"4. A loop"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q2. Which declaration correctly creates an integer variable named age?"<<endl;
    cout<<"1. integer age;"<<endl;
    cout<<"2. int age;"<<endl;
    cout<<"3. age int;"<<endl;
    cout<<"4. age integer;"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q3. Which data type is used to store whole numbers?"<<endl;
    cout<<"1. float"<<endl;
    cout<<"2. char"<<endl;
    cout<<"3. int"<<endl;
    cout<<"4. bool"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q4. Which data type is used to store a single character?"<<endl;
    cout<<"1. int"<<endl;
    cout<<"2. float"<<endl;
    cout<<"3. char"<<endl;
    cout<<"4. bool"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q5. Which symbol is used to write a single-line comment?"<<endl;
    cout<<"1. //"<<endl;
    cout<<"2. ##"<<endl;
    cout<<"3. **"<<endl;
    cout<<"4. --"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q6. Which statement is used to take input from the user?"<<endl;
    cout<<"1. cout"<<endl;
    cout<<"2. cin"<<endl;
    cout<<"3. input"<<endl;
    cout<<"4. get"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q7. Which statement is used to display output on the screen?"<<endl;
    cout<<"1. cin"<<endl;
    cout<<"2. input"<<endl;
    cout<<"3. cout"<<endl;
    cout<<"4. display"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q8. Which operator is used for equality comparison?"<<endl;
    cout<<"1. ="<<endl;
    cout<<"2. =="<<endl;
    cout<<"3. !="<<endl;
    cout<<"4. >="<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q9. Which operators are used to increase or decrease a value by 1?"<<endl;
    cout<<"1. + and -"<<endl;
    cout<<"2. * and /"<<endl;
    cout<<"3. ++ and --"<<endl;
    cout<<"4. && and ||"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q10. Which operator is used for logical AND?"<<endl;
    cout<<"1. ||"<<endl;
    cout<<"2. &&"<<endl;
    cout<<"3. !"<<endl;
    cout<<"4. =="<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    showQuizResult(score,10);
}


// ===================== INTERMEDIATE QUIZ =====================

void intermediateQuiz(){

    int answer;
    int score = 0;

    cout<<endl;
    cout<<"========================================"<<endl;
    cout<<"       INTERMEDIATE QUIZ"<<endl;
    cout<<"========================================"<<endl;

    cout<<"Q1. Which statement is mainly used to make a decision?"<<endl;
    cout<<"1. if"<<endl;
    cout<<"2. array"<<endl;
    cout<<"3. function"<<endl;
    cout<<"4. pointer"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q2. Which statement is used to select one block from multiple choices?"<<endl;
    cout<<"1. if"<<endl;
    cout<<"2. switch"<<endl;
    cout<<"3. for"<<endl;
    cout<<"4. while"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q3. Which loop is generally used when the number of repetitions is known?"<<endl;
    cout<<"1. if"<<endl;
    cout<<"2. while"<<endl;
    cout<<"3. for"<<endl;
    cout<<"4. switch"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q4. Which loop executes its body at least once?"<<endl;
    cout<<"1. for"<<endl;
    cout<<"2. while"<<endl;
    cout<<"3. do-while"<<endl;
    cout<<"4. if"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q5. What is an array?"<<endl;
    cout<<"1. Collection of different functions"<<endl;
    cout<<"2. Collection of values of the same data type"<<endl;
    cout<<"3. A memory address"<<endl;
    cout<<"4. A condition"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q6. How many integer values can marks[5] store?"<<endl;
    cout<<"1. 4"<<endl;
    cout<<"2. 5"<<endl;
    cout<<"3. 6"<<endl;
    cout<<"4. 10"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q7. What is a structure in C++?"<<endl;
    cout<<"1. A loop"<<endl;
    cout<<"2. A user-defined data type"<<endl;
    cout<<"3. An operator"<<endl;
    cout<<"4. A comment"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q8. Which keyword is used to define a structure?"<<endl;
    cout<<"1. struct"<<endl;
    cout<<"2. structure"<<endl;
    cout<<"3. group"<<endl;
    cout<<"4. record"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q9. What is a function?"<<endl;
    cout<<"1. A block of code designed to perform a specific task"<<endl;
    cout<<"2. A data type"<<endl;
    cout<<"3. A variable only"<<endl;
    cout<<"4. A memory address"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q10. Which function has no arguments and no return value?"<<endl;
    cout<<"1. int add(int a, int b)"<<endl;
    cout<<"2. int getNumber()"<<endl;
    cout<<"3. void show()"<<endl;
    cout<<"4. void show(int x)"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q11. What does a pointer store?"<<endl;
    cout<<"1. A memory address"<<endl;
    cout<<"2. Only characters"<<endl;
    cout<<"3. A loop"<<endl;
    cout<<"4. A condition"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q12. Which symbol is used to get the address of a variable?"<<endl;
    cout<<"1. *"<<endl;
    cout<<"2. &"<<endl;
    cout<<"3. %"<<endl;
    cout<<"4. #"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    showQuizResult(score,12);
}


// ===================== HIGH LEVEL QUIZ =====================

void highLevelQuiz(){

    int answer;
    int score = 0;

    cout<<endl;
    cout<<"========================================"<<endl;
    cout<<"          HIGH LEVEL QUIZ"<<endl;
    cout<<"========================================"<<endl;

    cout<<"Q1. What is memory allocation?"<<endl;
    cout<<"1. Reserving memory for variables or data"<<endl;
    cout<<"2. Creating comments"<<endl;
    cout<<"3. Comparing values"<<endl;
    cout<<"4. Printing output"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q2. When is static memory allocation generally determined?"<<endl;
    cout<<"1. At compile time"<<endl;
    cout<<"2. After the program ends"<<endl;
    cout<<"3. Only by the user"<<endl;
    cout<<"4. During file reading"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q3. Which keyword is used for dynamic memory allocation in C++?"<<endl;
    cout<<"1. create"<<endl;
    cout<<"2. new"<<endl;
    cout<<"3. memory"<<endl;
    cout<<"4. allocate"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q4. Which keyword is used to release dynamically allocated memory?"<<endl;
    cout<<"1. remove"<<endl;
    cout<<"2. release"<<endl;
    cout<<"3. delete"<<endl;
    cout<<"4. clear"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q5. Which C++ class is commonly used for writing data to a file?"<<endl;
    cout<<"1. ifstream"<<endl;
    cout<<"2. ofstream"<<endl;
    cout<<"3. cin"<<endl;
    cout<<"4. ostream"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q6. Which C++ class is commonly used for reading data from a file?"<<endl;
    cout<<"1. ofstream"<<endl;
    cout<<"2. ifstream"<<endl;
    cout<<"3. cout"<<endl;
    cout<<"4. cin"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q7. Which class can be used for both reading and writing files?"<<endl;
    cout<<"1. ifstream"<<endl;
    cout<<"2. ofstream"<<endl;
    cout<<"3. fstream"<<endl;
    cout<<"4. iostream"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    cout<<endl;
    cout<<"Q8. What are standard libraries in C++?"<<endl;
    cout<<"1. Collections of predefined functions, classes and other facilities"<<endl;
    cout<<"2. User passwords"<<endl;
    cout<<"3. Only variables"<<endl;
    cout<<"4. Only comments"<<endl;
    cin>>answer;
    checkAnswer(answer,1);
    if(answer==1) score++;

    cout<<endl;
    cout<<"Q9. Which library is commonly used for input and output using cin and cout?"<<endl;
    cout<<"1. fstream"<<endl;
    cout<<"2. iostream"<<endl;
    cout<<"3. string"<<endl;
    cout<<"4. cmath"<<endl;
    cin>>answer;
    checkAnswer(answer,2);
    if(answer==2) score++;

    cout<<endl;
    cout<<"Q10. Which of the following is an example of dynamic memory allocation?"<<endl;
    cout<<"1. int numbers[5];"<<endl;
    cout<<"2. int age = 20;"<<endl;
    cout<<"3. int *p = new int;"<<endl;
    cout<<"4. int x;"<<endl;
    cin>>answer;
    checkAnswer(answer,3);
    if(answer==3) score++;

    showQuizResult(score,10);
}


// ===================== BEGINNER LECTURES =====================

void beginnerLectures(){

    int choice;
    int continueChoice;

    do{

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"          BEGINNER LECTURES"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Variables"<<endl;
        cout<<"2. Data Types"<<endl;
        cout<<"3. Cin / Input"<<endl;
        cout<<"4. Cout / Output"<<endl;
        cout<<"5. Operators"<<endl;
        cout<<"6. Comments"<<endl;
        cout<<"7. Back"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                variables();
                break;

            case 2:
                datatypes();
                break;

            case 3:
                input();
                break;

            case 4:
                output();
                break;

            case 5:
                operators();
                break;

            case 6:
                comments();
                break;

            case 7:
                return;

            default:
                cout<<"Invalid choice!"<<endl;
                continue;
        }

        cout<<endl;
        cout<<"Do you want to continue learning?"<<endl;
        cout<<"1. Yes"<<endl;
        cout<<"2. No"<<endl;
        cout<<"Enter your choice: ";
        cin>>continueChoice;

        if(continueChoice==2){
            return;
        }

    }while(true);
}


// ===================== INTERMEDIATE LECTURES =====================

void intermediateLectures(){

    int choice;
    int continueChoice;

    do{

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"       INTERMEDIATE LECTURES"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Conditions"<<endl;
        cout<<"2. Loops"<<endl;
        cout<<"3. Arrays"<<endl;
        cout<<"4. Functions"<<endl;
        cout<<"5. Structures"<<endl;
        cout<<"6. Pointers"<<endl;
        cout<<"7. Back"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                conditions();
                break;

            case 2:
                loops();
                break;

            case 3:
                arrays();
                break;

            case 4:
                functions();
                break;

            case 5:
                structures();
                break;

            case 6:
                pointers();
                break;

            case 7:
                return;

            default:
                cout<<"Invalid choice!"<<endl;
                continue;
        }

        cout<<endl;
        cout<<"Do you want to continue learning?"<<endl;
        cout<<"1. Yes"<<endl;
        cout<<"2. No"<<endl;
        cout<<"Enter your choice: ";
        cin>>continueChoice;

        if(continueChoice==2){
            return;
        }

    }while(true);
}


// ===================== HIGH LEVEL LECTURES =====================

void highLevelLectures(){

    int choice;
    int continueChoice;

    do{

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"          HIGH LEVEL LECTURES"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Memory Allocation"<<endl;
        cout<<"2. File Handling"<<endl;
        cout<<"3. Standard Libraries"<<endl;
        cout<<"4. Back"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                memoryallocation();
                break;

            case 2:
                filehandling();
                break;

            case 3:
                standardlibraries();
                break;

            case 4:
                return;

            default:
                cout<<"Invalid choice!"<<endl;
                continue;
        }

        cout<<endl;
        cout<<"Do you want to continue learning?"<<endl;
        cout<<"1. Yes"<<endl;
        cout<<"2. No"<<endl;
        cout<<"Enter your choice: ";
        cin>>continueChoice;

        if(continueChoice==2){
            return;
        }

    }while(true);
}


// ===================== BEGINNER MENU =====================

void beginnerLevel(){

    int choice;

    while(true){

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"             BEGINNER LEVEL"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Lectures"<<endl;
        cout<<"2. Quiz"<<endl;
        cout<<"3. Back"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                beginnerLectures();
                break;

            case 2:
                beginnerQuiz();
                break;

            case 3:
                return;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}


// ===================== INTERMEDIATE MENU =====================

void intermediateLevel(){

    int choice;

    while(true){

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"          INTERMEDIATE LEVEL"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Lectures"<<endl;
        cout<<"2. Quiz"<<endl;
        cout<<"3. Back"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                intermediateLectures();
                break;

            case 2:
                intermediateQuiz();
                break;

            case 3:
                return;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}


// ===================== HIGH LEVEL MENU =====================

void highLevel(){

    int choice;

    while(true){

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"             HIGH LEVEL"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Lectures"<<endl;
        cout<<"2. Quiz"<<endl;
        cout<<"3. Back"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                highLevelLectures();
                break;

            case 2:
                highLevelQuiz();
                break;

            case 3:
                return;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}


// ===================== MAIN FUNCTION =====================

int main(){

    int choice = 0;

    while(choice != 4){

        cout<<endl;
        cout<<"========================================"<<endl;
        cout<<"          C++ LEARNING APP"<<endl;
        cout<<"========================================"<<endl;

        cout<<"1. Beginner Level"<<endl;
        cout<<"2. Intermediate Level"<<endl;
        cout<<"3. High Level"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                beginnerLevel();
                break;

            case 2:
                intermediateLevel();
                break;

            case 3:
                highLevel();
                break;

            case 4:
                cout<<endl;
                cout<<"Thank you for using C++ Learning App!"<<endl;
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }

    return 0;
}
