#include <iostream>
#include <vector>
using namespace std;

int main(){
	string s;
	while(cin >> s){
		int llargada = s.size();
		bool error = false;
		vector<char> r;
		int i = 0;
	    while(i < llargada and not error){
	    	//cerr << "reading " << s[i] << "(" << i << ")" << endl;
	    	if(s[i] == '(' or s[i] == '['){
	    		//cerr << "pushingggg..." << endl;
	        	r.push_back(s[i]);
	        }
	      	else{
	      		//cerr << s[i] << " <---> " <<  r[r.size()-1] << endl;
		      	if(i == 0 or (s[i] == ')' and r[r.size()-1] != '(') or (s[i] == ']' and r[r.size()-1] != '[')) error = true;
		      	else r.pop_back();
		    }
		    //for(int k = 0; k < (int)r.size(); ++k) cerr << r[k];
	      	//cerr << "  " << error << endl;
	      	++i;
	    }
		if(error or r.size() != 0) cout << "no" << endl;
		else cout << "si" << endl;
	}
}