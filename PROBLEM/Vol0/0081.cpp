#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
	double x1, y1, x2, y2, xq, yq, xr, yr;
	
	while(scanf("%lf,%lf,%lf,%lf,%lf,%lf", &x1, &y1, &x2, &y2, &xq, &yq) != EOF) {
		double a, b, c; //a,b,cはそれぞれ辺P1P2,P1Q,P2Q
		double cos, sin; //求める角は角QP1P2
		a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		b = sqrt((x1-xq)*(x1-xq) + (y1-yq)*(y1-yq));
		c = sqrt((xq-x2)*(xq-x2) + (yq-y2)*(yq-y2));
		cos = (a*a + b*b - c*c) / (2*a*b);
		sin = sqrt(1 - cos*cos);
		
		//P1を中心にP2を回転、長さを調整
		xr = ((x2-x1)*cos - (y2-y1)*sin) * b/a + x1;
		yr = ((x2-x1)*sin + (y2-y1)*cos) * b/a + y1;
		
		//逆回転させた場合Qと一致するので、修正。==0にすると打切り誤差があるので不可
		if(abs(xr - xq) < 0.000001 && abs(yr - yq) < 0.000001) {
			sin = -sin;
			xr = ((x2-x1)*cos - (y2-y1)*sin) * b/a + x1;
			yr = ((x2-x1)*sin + (y2-y1)*cos) * b/a + y1;
		}
		
		printf("%.6lf %.6lf\n", xr, yr);
	}
	
	return 0;
}