/*Neithan Rivera
COM 2315*/

#include <iostream>
#include<cmath>
#include<string>
using namespace std;

void tutorial1() {
    cout << "Hello World!" << endl;
}
void tutorial2() {
    string size = "size";
    cout << "The length of the string is:\n" << size.size() << endl << "The string was:\n" << size << endl;
}
void tutorial3() {
    int i;
    string cars[5];

    for (i = 0; i < 5; i++) {
        cout << "Enter the cars name: " << i << "\n";
        cin >> cars[i];
    }

    for (i = 0; i < 5; i++) {
        cout << "The name is: " << cars[i] << "\n";
        cout << "Address arr[" << i << "] is " << &cars[i] << "/n";
    }
}
void tutorial4() {
    int name;
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Your name is: ";
    cout << name << endl;
}

void tutorial5() {
    int x, y, total;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "Enter a number" << endl;
    cin >> y;
    total = x / y;
    cout << "Your total is: " << total << endl;
}
void tutorial6() {
    int age;
    cout << "Enter your age: \n";
    cin >> age;
    if (age > 18 && age < 100) {
        cout << "You are in a older age";
    }
    else if (age < 18 && age > 0) {
        cout << "You are a minor : \n";
    }
    else {
        cout << "No valid input please enter a valid age. \n";
    }
    cout << "Thank you for using our servesis: \n";
}

int main() {
    int choice = 0;
    while (choice != 7) {
        cout << "Please choose an function between numbers 1 to 7:" << endl;
        //Le pregunta al usuario que funcion de c++ quiere aprender
        cout << "1. Option 1 cout" << endl;
        cout << "2. Option 2 string length/size" << endl;
        cout << "3. Option 3 Array" << endl;
        cout << "4. Option 4 Cin" << endl;
        cout << "5. Option 5 Divide" << endl;
        cout << "6. Option 6 If" << endl;
        cout << "7. Exit" << endl;
        cin >> choice;
        //Mientras el usuario entre un numero valido no le va da un error
        if (choice == 1) {

            cout << "You chose cout" << endl;

            cout << "cout in C++ is used to display output to the screen." << endl;
            cout << "The 'c' in cout stands for character, and 'out' stands for output." << endl;
            cout << "Thus cout refers to character output. We use the insertion operator along with cout to output formatted data." << endl;
            cout << "cout in C++ is defined in the iostream header file." << endl;
            cout << "Now i'll show what you can use cout for: " << endl;
            cout << "cout << Hello World with this cout i am able to display hello world on the screen" << endl;
            cout << "All information about cout was retrieved in https://www.scaler.com/topics/cout-in-cpp/" << endl;
            cout << "Example:" << endl;
            cout << "cout << Hello World! << endl;" << endl;
            cout << "Output:" << endl;
            tutorial1();
        }
        else if (choice == 2) {

            cout << "You chose option string length/size" << endl;

            cout << "To determine a strings length we use a function called length or size both work the same in c++" << endl;
            cout << "This function allows us to see how many characters a string has this function is very useful because it allows us to concatenate" << endl;
            cout << "This is an example i made to determine the size of (size) which is 4 characters long as you can see in the example below" << endl;
            cout << "Example:" << endl;
            cout << "string size = size;" << endl;
            cout << "cout << The length of the string is:\n << size.size() << endl << The string was:\n << size << endl;" << endl;
            cout << "Output:" << endl;
            tutorial2();
        }
        else if (choice == 3) {

            cout << "You chose option array" << endl;

            cout << "Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value." << endl;
            cout << "To declare an array, define the variable type, specify the name of the array followed by square bracketsand specify the number of elements it should store" << endl;
            cout << "string cars[4];" << endl;
            cout << "We have now declared a variable that holds an array of four strings." << endl;
            cout << "To insert values to it, we can use an array literal - place the values in a comma - separated list, inside curly braces" << endl;
            cout << "string cars[4] = { Volvo, BMW, Ford, Mazda };" << endl;
            cout << "To create an array of three integers, you could write" << endl;
            cout << "int myNum[3] = { 10, 20, 30 };" << endl;
            cout << "All information about array was retrieved in https://www.w3schools.com/cpp/cpp_arrays.asp" << endl;
            cout << "Example:" << endl;
            cout << "int i; << endl";
            cout << "string cars[5];" << endl;

            cout << "for (i = 0; i < 5; i++) {" << endl;
            cout << "cout << Enter the cars name:  << i << \n;" << endl;
            cout << "cin >> cars[i];" << endl;
            cout << " } " << endl;

            cout << "for (i = 0; i < 5; i++) {" << endl;
            cout << "cout << The name is:  << cars[i] << \n;" << endl;
            cout << "cout << Address arr[ << i << ] is  << &cars[i] << /n;" << endl;
            cout << "} " << endl;
            cout << "Output:" << endl;
            tutorial3();
        }
        else if (choice == 4) {

            cout << "You chose option cin" << endl;

            cout << "cin in C++ refers to character input from the user from the input stream." << endl;
            cout << "cin in C++ is an object of class istreamand it is declared in the iostream header file." << endl;
            cout << "cin object helps us to read data from a standard input device like a keyboard" << endl;
            cout << "with the use of extraction operator ( >> ) or member functions like getline(), read(), etc.along with the cin object." << endl;
            cout << "All information about cin was retrieved in https://www.scaler.com/topics/cin-in-cpp/" << endl;
            cout << "Example:" << endl;
            cout << "int name;" << endl;
            cout << "cout << Enter your name: << endl;" << endl;
            cout << "cin >> name;" << endl;
            cout << "cout << Your name is:  << name << \n;" << endl;
            cout << "Output:" << endl;

        }
        else if (choice == 5) {

            cout << "You chose option divide" << endl;

            cout << "In C++, Division is performed using arithmetic operator /." << endl;
            cout << "The operator takes two operandsand returns the division of left operand by the right operand." << endl;
            cout << "You can divide two integers using division operator." << endl;
            cout << "The datatype of the operandsand returned value is given in the following code snippet." << endl;
            cout << "int = int / int" << endl;
            cout << "As both the operands are integers, if dividend is not exactly divisible by divisor, the division operator returns only quotientand the reminder is discarded." << endl;
            cout << "All information about divide was retrieved in https://www.tutorialkart.com/cpp/cpp-division/" << endl;
            cout << "Example:" << endl;
            cout << "int x, y, total;" << endl;
            cout << "cout << Enter a number << endl;" << endl;
            cout << "cin >> x;" << endl;
            cout << "cout << Enter a number << endl;" << endl;
            cout << "cin >> y;" << endl;
            cout << "total = x / y;" << endl;
            cout << "cout << Your total is:  << total << endl;" << endl;
            cout << "Output:" << endl;
            tutorial5();

        }
        else if (choice == 6) {

            cout << "You chose option if" << endl;

            cout << "if statement is the most simple decision - making statement." << endl;
            cout << "It is used to decide whether a certain statement or block of statements will be executed or not i.e if a certain condition is true then a block of statement is executed otherwise not." << endl;
            cout << "Syntax:" << endl;
            cout << "if (condition)" << endl;
            cout << "{" << endl;
            cout << "Statements to execute if" << endl;
            cout << "condition is true" << endl;
            cout << "}" << endl;
            cout << "Here, the condition after evaluation will be either true or false." << endl;
            cout << "C if statement accepts boolean values – if the value is true then it will execute the block of statements below it otherwise not." << endl;
            cout << "If we do not provide the curly braces ‘{ ‘ and ‘ }’ after if (condition) then by default if statement will consider the first immediately below statement to be inside its block." << endl;
            cout << "All information about if was retrieved in https://www.geeksforgeeks.org/decision-making-c-cpp/" << endl;
            cout << "Example:" << endl;
            cout << "int age;" << endl;
            cout << "Enter your age: \n;" << endl;
            cout << "cin >> age;" << endl;
            cout << "if (age > 18 && age < 100) {" << endl;
            cout << "cout << You are in a older age;" << endl;
            cout << "}" << endl;
            cout << "else if (age < 18 && age > 0) {" << endl;
            cout << "cout << You are a minor : \n;" << endl;
            cout << "}" << endl;
            cout << "else {" << endl;
            cout << "cout << No valid input please enter a valid age. \n;" << endl;
            cout << "}" << endl;
            cout << "cout << Thank you for using our servesis: \n;" << endl;
            cout << "Output:" << endl;
            tutorial6();

        }
        else if (choice == 7) {
            //Cierra el programa
            cout << "Goodbye and thank you for using our program" << endl;
        }
        else {
            //El usuario escogio un numero invalido 
            cout << "Invalid option choose again" << endl;
        }
    }
    return 0;
}