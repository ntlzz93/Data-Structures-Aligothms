#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include"stack.h"


void readFile(char* file, string &str);
void convertFromInfixToPostfix(string &str);
int evaluatingPostfix(string str);
int convert(int value);
string convertToString(int value);
int main(){
	string str;
	readFile("Text.txt", str);
	cout << str << endl;
	convertFromInfixToPostfix(str);
	cout << "Output: ";
	cout << str << endl;
	cout << "Result: ";
	cout << evaluatingPostfix(str) << endl;

	return 0;
}
void readFile(char* file, string &str){
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
void convertFromInfixToPostfix(string &str){
	Stack stack;
	string output = "";
	int i = 0;
	string s;
	while (i < str.length()){
		s = str[i];
		if (str[i] == '(' || str[i] == '+' || str[i] == '-'
			|| str[i] == '*' || str[i] == '/' || str[i] == '%'){
			stack.push(s);
		}
		else {
			//excute character )
			if (str[i] == ')'){
				while (!stack.isEmpty()){
					string top = stack.getTop();
					output += top;
					stack.pop();
				}
			}
			else
				//excute character digit
				output = output + str[i];
		}
		// excute end of string
		if (stack.getTop() == "("){
			stack.pop();
		}
		i++;
	}
	str = output;
}
int evaluatingPostfix(string str){
	int result;
	Stack stack;
	int op1, op2;
	int i = 0;
	int index;
	string temp;
	string next_ch;
	while (i < str.length()){
		next_ch = str[i];
		if (next_ch == "+" || next_ch == "-"
			|| next_ch == "*" || next_ch == "/"
			){
			//excute operator
			op1 = stack.getTop();
			stack.pop();
			// convert op1 to integer
			op1 = convert(op1);
			op2 = stack.getTop();
			stack.pop();
			// convert op2 to integer
			op2 = convert(op2);

			if (next_ch == '+'){
				index = op2 + op1;
				// convert index from integer to char
				temp = convertToString(index);
				stack.push(temp);
			}
			if (next_ch == '-'){
				index = op2 - op1;
				// convert index from integer to char
				temp = convertToString(index);
				//stack.push(temp);
			}
			if (next_ch == '*'){
				index = op2 * op1;
				// convert index from integer to char
				temp = convertToString(index);
				//stack.push(temp);
			}
			if (next_ch == '/'){
				index = op2 / op1;
				// convert index from integer to char
				temp = convertToString(index);
				//stack.push(temp);
			}
		}
		else {
			// excute integer
			stack.push(next_ch);
		}
		i++;
	}
	// push the result onto the stack
	result = stack.getTop();
	// stack is empty
	stack.pop();
	return result;
}
int convert(int value){
	int result;
	result = value - 48;
	return result;
}
string convertToString(int value){
	string result;
	int n = value;
	do{
		n = n % 10;
		result = (char)(n + 48);
	} while (n>0);
	return result;
}