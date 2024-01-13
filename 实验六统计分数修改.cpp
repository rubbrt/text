#include <stdio.h>

void row_average(int i, int j, int (*a)[5], float *b) {
    int x, y;
    float sum = 0;
    float row_avg = 0;

    for (x = 0; x < i; x++) {
        sum = 0;
        for (y = 0; y < j; y++) {
            sum += a[x][y];
        }
        row_avg = sum / j;  // ����ÿһ�е�ƽ����
        b[x] = row_avg;    // �洢��������
    }
}

void column_average(int i, int j, int (*a)[5], float *b) {
    int x, y;
    float sum = 0;
    float column_avg = 0;

    for (y = 0; y < j; y++) {
        sum = 0;
        for (x = 0; x < i; x++) {
            sum += a[x][y]; 
        }
        column_avg = sum / i;  // ����ÿһ�е�ƽ����
        b[y] = column_avg;
    }
}

void print_array(float a[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("��һ�е�ƽ������ %f\n", a[i]);
    }
}

int main() {
    int a[10][5] = {
        {60, 60, 50, 40, 90},
        {40, 45, 46, 49, 98},
        {66, 66, 55, 49, 45},
        {98, 78, 79, 45, 68},
        {98, 100, 54, 87, 65}
    };

    float row_answer[10] = {0};    // ʮ��ͬѧ���Ե�ƽ����
    float column_answer[5] = {0};  // ÿһ��Ŀ��ƽ����

    row_average(10, 5, a, row_answer);
    column_average(10, 5, a, column_answer);

    printf("ÿһ�е�ƽ������\n");
    print_array(row_answer, 10);

    printf("ÿһ�е�ƽ������\n");
    print_array(column_answer, 5);

    return 0;
}

