#include <stdio.h>

int main() {
    int M, N;
    
    while (1) {
        // 輸入整數 M 和基數 N
        printf("請輸入整數 M 和基數 N（以空格分隔）或輸入 0 0 以退出： ");
        scanf("%d %d", &M, &N);
        
        if (M == 0 && N == 0) {
            // 用戶輸入 0 0 表示退出
            printf("程式結束。\n");
            break;
        }
        
        if (M < 1 || N < 2 || N > 16) {
            printf("錯誤的輸入，請重新輸入有效的 M 和 N。\n");
            continue;
        }
        
        // 開始進行 M 到 N 進制的轉換
        printf("轉換結果：");
        if (M == 0) {
            printf("0");
        } else {
            int result[32]; // 用於存儲每一位數字的陣列，假設不超過 32 位
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
        printf("（%d 進制）\n\n", N);
    }
    
    return 0;
}

