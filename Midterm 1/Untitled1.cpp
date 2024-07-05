#include <stdio.h>

int main() {
    int M, N;
    
    while (1) {
        // ��J��� M �M��� N
        printf("�п�J��� M �M��� N�]�H�Ů���j�^�ο�J 0 0 �H�h�X�G ");
        scanf("%d %d", &M, &N);
        
        if (M == 0 && N == 0) {
            // �Τ��J 0 0 ��ܰh�X
            printf("�{�������C\n");
            break;
        }
        
        if (M < 1 || N < 2 || N > 16) {
            printf("���~����J�A�Э��s��J���Ī� M �M N�C\n");
            continue;
        }
        
        // �}�l�i�� M �� N �i��ഫ
        printf("�ഫ���G�G");
        if (M == 0) {
            printf("0");
        } else {
            int result[32]; // �Ω�s�x�C�@��Ʀr���}�C�A���]���W�L 32 ��
            int i = 0;
            
            while (M > 0) {
                result[i] = M % N;
                M /= N;
                i++;
            }
            
            for (int j = i - 1; j >= 0; j--) {
                if (result[j] < 10) {
                    printf("%d", result[j]);
                } else {
                    printf("%c", 'A' + (result[j] - 10));
                }
            }
        }
        printf("�]%d �i��^\n\n", N);
    }
    
    return 0;
}

