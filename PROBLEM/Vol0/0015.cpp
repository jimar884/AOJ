/*
2�̐��̘a�����߂�B80���𒴂���ꍇ��"overflow"�ƕ\��
int�^��long�^�ł�80���͈����Ȃ����Ƃɒ���
*/
#include <iostream>
using namespace std;

int main(void) {
    char n1[100], n2[100];                       // ���͂��鐔�����i�[���鐮��������
    int size1, size2, size_sum;                  // ���͂��������Ƃ��̘a�̌������i�[����ϐ�
    int N1, N2, Sum;                             // N1,N2�͂��ꂼ��̌���int�^�Ŋi�[�BSum�͌J��オ��̔���
    int sum[100 + 1];                           // �a���i�[���鐮��������
    int n;
    
    cin >> n;
    
    for(int k = 0; k < n; ++k) {
        cin >> n1 >>n2;
        size1    = 0;
        size2    = 0;
        size_sum = 0;
        Sum      = 0;
        while(n1[size1] != '\0') {
            size1++;
        }
        while(n2[size2] != '\0') {
            size2++;
        }
        if(size1 > size2) {
            while(size1 != 0) {
                if(size2 != 0) {
                    N1 = n1[--size1] - '0';
                    N2 = n2[--size2] - '0';
                } else {
                    N1 = n1[--size1] - '0';
                    N2 = 0;
                }
                Sum += N1 + N2;
                if(Sum >= 10) {
                    sum[size_sum++] = Sum - 10;
                    Sum = 1;
                } else { 
                    sum[size_sum++] = Sum;
                    Sum = 0;
                }
            }
        } else {
            while(size2 != 0) {
                if(size1 != 0) {
                    N1 = n1[--size1] - '0';
                    N2 = n2[--size2] - '0';
                } else {
                    N1 = 0;
                    N2 = n2[--size2] - '0';
                }
                Sum += N1 + N2;
                if(Sum >= 10) {
                    sum[size_sum++] = Sum - 10;
                    Sum = 1;
                } else { 
                    sum[size_sum++] = Sum;
                    Sum = 0;
                }
            }
        }
        if(Sum == 1) {
            sum[size_sum++] = 1;
        }
        if(size_sum > 80) {
            cout << "overflow" << endl;
        } else {
            for(int i = 1; i <= size_sum; ++i) {
                cout << sum[size_sum - i];
            }
            cout << endl;
        }
    }
}