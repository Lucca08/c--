#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

void sayHi(string name, int age){
        cout << "Hello User"<< name << "you are " << age << endl; 
    }
double cube (double num){
    double result = num * num * num;
    return result;
}

int getMax(int num1, int num2, int num3);

int getMax(int num1, int num2, int num3){
    
    int result;
    
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }else if(num2 >= num1 && num2 >= num3){
        result = num2;
   }else{
       result = num3;
    }

    if( num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }
    return result;
}

string getDayOfWeek(int dayNum){
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number";
    } 
}
int main(){
    cout << "        /|    |=      " << endl;
    cout << "       / |    | =    " << endl;
    cout << "      /  |    |  =   " << endl;
    cout << "     /   |    |   =  " << endl;
    cout << "    /    |    |    = " << endl;
    cout << "   /_____|    |_____= " << endl;


    int characterAge1 = 33;
    int characterAge2 = 15;

    string characterName = "Joel";
    string characterName2 = "Ellie";
    cout << "Bom dia " << characterName << endl;
    cout << "Bom dia " << characterName2 << endl;
    cout << "Como vamos passar por isso?" << endl;
    cout << "Pulando" << endl;
    cout << "voce e muito doida para uma garota de " << characterAge2 << endl;
    cout << "vai se fuder idoso de " << characterAge1 << endl;

    string phrase = "New game developer";
    cout << phrase << endl;
    cout << phrase.substr(8, 3 ) << endl;
    cout << phrase.find("game", 0);
    phrase [6] = 'b';
    cout << phrase << endl;
    
    
    double tri = 3.3;
    int num = 23;
    cout << 40 + 120 * 2 << endl;
    cout << 10 % 3 << endl;
    cout << (num + 10) / tri << endl;

    cout << pow( 2 , 3) << endl;
    cout << round (4.9) << endl;
    cout << ceil (4.9) << endl;
    cout << floor (4.9) << endl;
    cout << fmax (3, 10) << endl;
    cout << fmin (3, 10) << endl;
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old" << endl;
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "hello " << name;

    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Soma: " << num1 + num2 << endl; 
    cout << "Subtracao: " << num1 - num2 << endl; 
    cout << "Multiplicacao: " << num1 * num2 << endl; 
    cout << "Divisao: " << num1 / num2 << endl; 
    
    
    string color, pluralNumber, celebrity;

    cout << "enter color: ";
    getline(cin, color);
    
    cout << "enter a plural noum: ";
    getline(cin, pluralNumber);
    
    cout << "enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNumber << " are Blue" << endl;
    cout << "I love " << celebrity << endl;

    int lucknumbers[] ={2 , 3 , 5 , 67 , 5 , 4 ,2};
    lucknumbers[4] = 4;
    cout << lucknumbers[4] << endl;
    

   sayHi(" Nancy ", 19);
   sayHi(" Mikaela ", 22);
   sayHi( " Steve ", 19);
   double answer = cube(2);
   cout << "o cubo do numero e " << answer;
   
    
    bool isMale = false;
    bool isTall = false;
    
    if(isMale && isTall){
        cout << "you are a male and tall" <<endl;
    } else {
        cout << "you are not male and tall " << endl;
    }
    
    if(isMale || isTall){
        cout << "you are a male or tall" <<endl;
    } else {
        cout << "you are not male or not tall " << endl;
    }

    if(isMale && isTall){
       cout << "you are a male and tall" <<endl;
    } else if(isMale && !isTall){
       cout << "you are a short male " << endl;
    }else if(!isMale && isTall){
       cout << "you are tall but not a male " << endl;
    }
    else{
       cout << "you are not male and tall " << endl;
    }
    
    
    if(isMale){
        cout << "you are a male" <<endl;
    } else {
        cout << "you are not male " << endl;
    }


    cout << getMax(2, 5, 6);


    /* int num1 , num1;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int result;
    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
     }else if(op == '/'){
        result = num1 / num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else{
        cout << "invalid operator" << endl;
    }
    cout << result; */



    cout << getDayOfWeek(1);
 


    return 0;



}