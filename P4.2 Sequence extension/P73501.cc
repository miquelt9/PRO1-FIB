#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n ; ++i){
		int pre, post, count = 0;
		cin >> pre;
		if(pre != 0){
			while(cin >> post and post != 0){
				if(post > pre) ++count;
				pre = post;
			}
		}
		cout << count << endl;
	}
}