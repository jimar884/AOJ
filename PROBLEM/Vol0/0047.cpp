#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
	bool A = true;
	bool B = false;
	bool C = false;
	char cup1, cup2;
	
	while(scanf("%c,%c", &cup1, &cup2) != EOF) {
		switch(cup1) {
			case 'A' : {
				switch(cup2) {
					case 'B' : {
						if(A || B) {
							bool copy = A;
							A = B;
							B = copy;
						}
						break;
					}
					case 'C' : {
						if(A || C) {
							bool copy = A;
							A = C;
							C = copy;
						}
						break;
					}
				}
				break;
			}
			case 'B' : {
				switch(cup2) {
					case 'A' : {
						if(B || A) {
							bool copy = B;
							B = A;
							A = copy;
						}
						break;
					}
					case 'C' : {
						if(B || C) {
							bool copy = B;
							B = C;
							C = copy;
						}
						break;
					}
				}
				break;
			}
			case 'C' : {
				switch(cup2) {
					case 'A' : {
						if(C || A) {
							bool copy = C;
							C = A;
							A = copy;
						}
						break;
					}
					case 'B' : {
						if(C || B) {
							bool copy = C;
							C = B;
							B = copy;
						}
						break;
					}
				}
				break;
			}
		}
	}
	
	if(A)   cout << 'A' << endl;
	else if(B)   cout << 'B' << endl;
	else if(C)   cout << 'C' << endl;
	
	return 0;
}