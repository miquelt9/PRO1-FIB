#include <iostream>
using namespace std;

int calcular(int m){
	char c;
	cin >> c;
	int n;
	if(c == '('){
		//cerr << "aqui" << endl;
		cin >> n;
		cin >> c;
		if(c == '*'){
			return n * calcular(m+1);
		}
		if(c == '+'){
			return n + calcular(m+1);	
		} 
		if(c == '-'){
			return n - calcular(m+1);
		} 
	}
	if(c == ')') return calcular(m-1);
	if(c >= '0' and c <= '9') return c - '0';
	if(m == 0) return n;
	return -1;
}

int calcular()
{
	char c;
	cin >> c;
	if(c == '(')
	{
		char op;
		int left = calcular();
		cin >> op;
		int right = calcular();
		cin >> c;
		if(op == '*')
		{
			return left * right;
		}
		if(op == '+')
		{
			return left + right;	
		} 
		if(op == '-')
		{
			return left - right;
		} 
	}
	return c - '0';
}

int main()
{
	cout << calcular() << endl;
}