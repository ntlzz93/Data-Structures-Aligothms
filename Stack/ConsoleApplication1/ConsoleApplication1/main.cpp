#include<iostream>
using namespace std;
#include<string>
#include"stack.h"

bool isBalanced(string str);
string convertToPostfix(string s);

int main(){
	string s;
	cin >> s;
	if (isBalanced(s) == true){
		cout << "balanced" << endl;
	}
	else
	cout << "not balanced" << endl;
	return 0;
}
bool isBalanced(string str){
	Stack stack;
	int i = 0;
	bool b = true;
	while (i < str.length() && b){
		if (str[i] == '{'){
			stack.push('{');
		}
		else if (str[i] == '}'){
			if (!stack.isEmpty())
				stack.pop();
			else
				b = false;
		}
		i++;
	}
	if (b&&stack.isEmpty())
		return true;
	else
		return false;
}
string convertToPostfix(string s){

}