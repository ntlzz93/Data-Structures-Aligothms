#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include"stack.h"
#include"stack_int.h"

void readFile(char* file,string &str);
void convertFromInfixToPostfix(string &str);
float evaluatingPostfix(string str);
int convert(int value);
bool isPair(string opening, string closing);
bool isBalanced(string str);

int main(){
	string str;
	readFile("Text.txt", str);
	cout << "String:                ";
	cout << str << endl;
	cout << "Check balanced: ";

	if (isBalanced(str)){
		cout << "       Balanced" << endl;

		convertFromInfixToPostfix(str);
		cout << "String PostFix:        ";
		cout << str << endl;
		cout << "Result:                ";
		cout << evaluatingPostfix(str) << endl;
	}
	else
		cout << "       Not Balanced" << endl;
	
	
	return 0;
}
void readFile(char* file,string &str){
	ifstream read(file);
	if (!read.is_open()){
		cout << "Error!.File wasn't opened." << endl;
	}
	else
	{
		getline(read, str);
	}
	read.close();
}
bool isPair(char opening, char closing){
	if (opening == '(' && closing == ')') return true;
	else if (opening == '[' && closing == ']') return true;
	else if (opening == '{' && closing == '}') return true;
	else
	return false;
}
bool isBalanced(string str){
	Stack _stack;
	int i = 0;
	while (i < str.length()){
		if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
			_stack.push(str[i]);
		}
		else if (str[i] == ')' || str[i] == ']' || str[i] == '}'){
			// check the first time. If stack is empty and the first elements of stack include '(' '[' '{' character 
			// or opening character is unsuitable with closing characeter
			// then return true. Otherwise return false
			if (_stack.isEmpty() || !isPair(_stack.getTop(),str[i])){
				return false;
			}
			else{
				_stack.pop();
			}
		}
		i++;
	}
	// After excute . If stack is empty then string balanced , otherwise return false
	if (_stack.isEmpty())return true;
	else
		return false;
}
void convertFromInfixToPostfix(string &str){
	Stack _stack;
	
	string output="";
	int i = 0;
	while (i < str.length()){
		if (str[i] == '(' || str[i] == '+' || str[i] == '-' 
		|| str[i] == '*' || str[i] == '/' || str[i] == '%'
		|| str[i]=='[' || str[i]=='{'){
			_stack.push(str[i]);
		}
		else {
			//excute character )
			if (str[i] == ')'||str[i]==']'||str[i]=='}'){
				while (!_stack.isEmpty()){
					char top = _stack.getTop();
					output += top;
					_stack.pop();
				}
			}else
			//excute character digit
			output = output + str[i];
		}
		// excute end of string
		if (_stack.getTop() == '(' || _stack.getTop() == '[' || _stack.getTop() == '{'){
			_stack.pop();
		}
		i++;
	}
	str = output;
}
float evaluatingPostfix(string str){
	float result;
	StackInt s;
	float oprand1, oprand2;
	int i = 0;
	float temp;
	while (i < str.length()){
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'||str[i] == '%'){
			//excute character string
			oprand1 = s.getTop();
			s.pop();
			oprand2 = s.getTop();
			s.pop();

			char ch;
			ch = str[i];
			switch (ch){
			case('+') : {
							temp = oprand2 + oprand1;
							s.push(temp);
							break;
			}
			case('-') : {
							temp = oprand2 - oprand1;
							s.push(temp);
							break;
			}
			case('*') : {
							temp = oprand2 * oprand1;
							s.push(temp);
							break;
			}
			case('/') : {
							temp = oprand2 / oprand1;
							s.push(temp);
							break;
			}
			default:
				break;
			} // end switch

		}
		else{
			//excute character digit
			temp = str[i];
			// convert data from char to integer
			temp = convert(temp);
			s.push(temp);
			
		}//end else
		i++;
	}//end while
	result = s.getTop();
	s.pop();
	return result;
}

int convert(int value){
	int result;
	result = value - 48;
	return result;
}

