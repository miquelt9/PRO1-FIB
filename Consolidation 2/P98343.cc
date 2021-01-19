#include <iostream>
#include <vector>
using namespace std;


void fins_999 (int n) {
	int x = n;

   	if(n>=900){
   		cout << " nou-cents" ;
   		n=n-900;
   	}
   	else if(n>=800){
   		cout << " vuit-cents" ; 
   		n=n-800;
   	}
   	else if(n>=700){
   		cout << " set-cents" ; 
   		n=n-700;
   	}
   	else if(n>=600){
   		cout << " sis-cents" ; 
   		n=n-600;
   	}
   	else if(n>=500){
   		cout << " cinc-cents"  ; 
   		n=n-500;
   	}
   	else if(n>=400){
   		cout << " quatre-cents"   ; 
   		n=n-400;
   	}
   	else if(n>=300){
   		cout << " tres-cents" ; 
   		n=n-300;
   	}
   	else if(n>=200){
   		cout << " dos-cents"  ; 
   		n=n-200;
   	}
   	else if(n>=100){
   		 cout << " cent"  ;
   		 n=n-100;
   	}
   	if(n>90){
   		cout << " noranta-"   ;
   		 n=n-90; 
   	}
   	if(n==90){
   		cout << " noranta"  ;
   		n=n-90;   
    }
    if(n>80){
    	cout << " vuitanta-"   ;
    	n=n-80; 
    }
    if(n==80){
    	cout << " vuitanta"  ;
    	n=n-80; 
    }
    if(n>70){
    	cout << " setanta-"   ;
    	n=n-70; 
    }
    if(n==70){
    	cout << " setanta"  ;
    	n=n-70; 
    }
    if(n>60){
    	cout << " seixanta-"   ;
    	n=n-60; 
    }
    if(n==60){
    	cout << " seixanta"  ;
    	n=n-60; 
    }
    if(n>50){
    	cout << " cinquanta-" ;
    	n=n-50; 
    }
    if(n==50){
    	cout << " cinquanta"    ;
    	n=n-50; 
    }
    if(n>40){
    	cout << " quaranta-"  ;
    	n=n-40; 
    }
    if(n==40){
    	cout << " quaranta" ;
    	n=n-40; 
    }
    if(n>30){
    	cout << " trenta-"   ;
    	n=n-30; 
    }
    if(n==30){
    	cout << " trenta"  ;
    	n=n-30; 
    }
    if(n>20){
    	cout << " vint-i-"       ;
    	n=n-20; 
    }
    if(n==20){
    	cout << " vint"       ;
    	n=n-20; 
    }
    else if(n==19){
    	cout << " dinou"        ;
    	n=n-19; 
    }
    else if(n==18){
    	cout << " divuit"        ;
    	n=n-18; 
    }
    else if(n==17){
    	cout << " disset"        ;
    	n=n-17;
    }
    else if(n==16){
    	cout << " setze"        ;
    	n=n-16; 
    }
    else if(n==15) {
    	cout << " quinze"       ;
    	n=n-15; 
    }
    else if(n==14) {
    	cout << " catorze"  ;
    	n=n-14;
    } 
    else if(n==13) {
    	cout << " tretze"        ; 
    	n=n-13;
    }  
    else if(n==12) {
    	cout << " dotze"     ;
    	n=n-12;
    } 
    else if(n==11) {
    	cout << " onze"     ;
    	n=n-11;
    } 
    else if(n==10) {
    	cout << " deu"     ; 
    	n=n-10;
    }  
    if(x < 10 or (x > 100 and x < 110) or (x > 200 and x < 210) or (x > 300 and x < 310) or (x > 400 and x < 410) or (x > 500 and x < 510) or (x > 600 and x < 610) or (x > 700 and x < 710) or (x > 800 and x < 810) or (x > 900 and x < 910)) cout << " ";    
    if(n==9) cout << "nou"        ;
    if(n==8) cout << "vuit"     ;  
    if(n==7) cout << "set"        ;  
    if(n==6) cout << "sis"     ;   
    else if(n==5) {
    	cout << "cinc"        ;
    }  
    else if(n==4) {
    	cout << "quatre"       ;
    }  
    else if(n==3) {
    	cout << "tres"     ;
    }  
    else if(n==2) {
    	cout << "dos"      ;
    }  
    else if(n==1) {
    	cout << "un"      ;
    }   
}

int main(){
	int n;
	while(cin >> n){
	//for(int i = 999999900; i < 1002000000; ++i){

		//n = i;

		vector<int> v(10); // poden arribar numeros de fins a 10⁹
		if(n != 0){
			int original = n;
			for(int i = v.size()-1; i >= 0; --i){
				v[i] = n%10;
				n /= 10;
			}
			//for(int i = 0; i < (int)v.size(); ++i) cout << v[i] << " ";
			//cout << endl;

			cout << original << ":";

			n = v[0];
			if(n != 0 and v[1] == 0 and v[2] == 0 and v[3] == 0){
				if(n != 1) fins_999(n);
				cout << " mil milions";
			}
			else if(n != 0){
				if(n != 1) fins_999(n);
				cout << " mil";
			}

			n = v[1]*100 + v[2]*10 + v[3];
			//cerr << n << endl;
			if(n != 0){
				fins_999(n);
				if(v[0] != 0) cout << " milions";
				else if(v[1] == 0 and v[2] == 0 and v[3] == 1) cout << " milio";
				else cout << " milions";
			}

			n = v[4]*100 + v[5]*10 + v[6];
			if(n != 0){
				if(n != 1) fins_999(n);
				cout << " mil";
			}

			n = v[7]*100 + v[8]*10 + v[9];
			//cerr << n << " <-- n" << endl;
			if(n != 0){
				fins_999(n);
			}

			cout << "." << endl;

		} else {
			cout << "0: zero." << endl;
		}
	}
}