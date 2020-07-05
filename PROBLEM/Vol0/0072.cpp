#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

#define N 100 //jÕ‚Ì”

int main(void) {
	int n, m;
	int a, b, d;
	int road[N][N]; //“Y‚¦š‚©‚ç“Y‚¦š‚Ö‚Ì‹——£‚ğ1/100‚Ék¬‚µ‚½‚à‚Ì
	bool ruin[N]; //’Ê‚Á‚½jÕ‚Ítrue
	int count; //’Ê‚Á‚½jÕ‚Ì”
	int ans; //“”˜U‚Ì”
	int min_a, min_b;
	
	while(true) {
		cin >> n;
		if(n == 0) break;
		
		//‰Šú‰»
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				road[i][j] = INT_MAX;
			}
			ruin[i] = false;
		}
		count = 0;
		ans = 0;
		
		cin >> m;
		
		for(int i = 0; i < m; ++i) {
			scanf("%d,%d,%d", &a, &b, &d);
			road[a][b] = road[b][a] = d / 100;
		}
		
		ruin[0] = true; //n“_‚Í0
		++count; //n“_‚ğƒJƒEƒ“ƒg
		while(count != n) {
			min_a = min_b = 0; //road[0][0]‚ÍINT_MAX‚¾‚©‚ç”Ô•º‚Æ‚µ‚Ä—˜—p
			for(int i = 0; i < n; ++i) {
				if(ruin[i]) {
					for(int j = 0; j < n; ++j) {
						if(road[i][j] < road[min_a][min_b] && !ruin[j]) {
							min_a = i;
							min_b = j;
						}
					}
				}
			}
			
			ans += road[min_a][min_b] - 1;
			ruin[min_b] = true;
			++count;
			road[min_a][min_b] = road[min_b][min_a] = INT_MAX;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}