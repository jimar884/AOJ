// 4点を結んでできる図形に凹みがあるかどうかを調べる。
#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
  double xa, ya, xb, yb, xc, yc, xd, yd;
  bool check;
  int BABC, CACD, DADB, CBCD, DBDA, ABAC, DCDA, ACAB, BCBD, ADAB, BDBC, CDCA;
  
  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd) != EOF) {
    check = false;
    // 3点を結んでできる図形の内部に他の1点があるとき、凹みがある。
    // AがBCDの内部にあるかどうかを調べる。
    BABC = (ya - yb)*(xc - xb) - (yc - yb)*(xa - xb);
    CACD = (ya - yc)*(xd - xc) - (yd - yc)*(xa - xc);
    DADB = (ya - yd)*(xb - xd) - (yb - yd)*(xa - xd);
    if((BABC > 0 && CACD > 0 && DADB > 0) || (BABC < 0 && CACD < 0 && DADB < 0)) {
      check = true;
    }
    // BがCDAの内部にあるかどうかを調べる。
    CBCD = (yb - yc)*(xd - xc) - (yd - yc)*(xb - xc);
    DBDA = (yb - yd)*(xa - xd) - (ya - xd)*(xb - xd);
    ABAC = (yb - ya)*(xc - xa) - (yc - ya)*(xb - xa);
    if((CBCD > 0 && DBDA > 0 && ABAC > 0) || (CBCD < 0 && DBDA < 0 && ABAC < 0)) {
      check = true;
    }
    // CがDABの内部にあるかどうかを調べる。
    DCDA = (yc - yd)*(xa - xd) - (ya - yd)*(xc - xd);
    ACAB = (yc - ya)*(xb - xa) - (yb - ya)*(xc - xa);
    BCBD = (yc - yb)*(xd - xb) - (yd - yb)*(xc - xb);
    if((DCDA > 0 && ACAB > 0 && BCBD > 0) || (DCDA < 0 && ACAB < 0 && BCBD < 0)) {
      check = true;
    }
    // DがABCの内部にあるかどうか調べる。
    ADAB = (yd - ya)*(xb - xa) - (yb - ya)*(xd - xa);
    BDBC = (yd - yb)*(xc - xb) - (yc - yb)*(xd - xb);
    CDCA = (yd - yc)*(xa - xc) - (ya - yc)*(xd - xc);
    if((ADAB > 0 && BDBC > 0 && CDCA > 0) || (ADAB < 0 && BDBC < 0 && CDCA < 0)) {
      check = true;
    }
    
    if(check) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}