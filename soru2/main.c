#include <stdio.h>

int subset_sum(int arr[], int n, int sum) { // Bir alt kümedeki elemanların toplamını hesaplayan yardımcı kod.

    int i, j;

    int dp[n + 1][sum + 1];     // alt küme toplamı hesaplama.
    for (i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    for (j = 1; j <= sum; j++) {
        dp[0][j] = 0;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= sum; j++) {
            if (arr[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
        }
    }
    return dp[n][sum];
}

int can_be_divided(int arr[], int n) {     // İki alt kümeye bölünüp bölünemeyeceğini kontrol eden ana işlev.
    int i, sum = 0;

    for (i = 0; i < n; i++) {    // Dizinin toplamını hesapla.
        sum += arr[i];
    }

    if (sum % 2 != 0) {    // Dizinin toplamı tek sayı ise, bölünemez.
        return 0;
    }

    return subset_sum(arr, n, sum/2);    // İki alt kümenin toplamı eşit ise, bölünebilir.
}

int main() {
    int arr[] = {1, 3, 5, 5, 2, 1, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (can_be_divided(arr, n)) {    // Dizinin alt kümelerine bölünebilirliğini kontrol et.
        printf("Dizi iki alt kumedeki elemanlarin toplami esit olacak sekilde iki alt kumeye bolunebilir.\n");
    } else {
        printf("Dizi iki alt kumedeki elemanlarin toplami esit olacak şekilde iki alt kumeye bolunemez.\n");
    }

    return 0;
}
