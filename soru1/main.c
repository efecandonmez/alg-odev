#include <stdio.h>
#include <stdlib.h>

#define N 3    // N matris boyutunu belirtir.

void print_images(int img1[][N], int img2[][N]) {  // img1 ve img2 matrislerini ekrana yazdırmak için kullanacağımız fonksiyon.
    int i, j;
    printf("Image 1:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", img1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Image 2:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", img2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void find_best_fit(int img1[][N], int img2[][N]) {  // img1 matrisini, tüm yönlere (sol, sağ, yukarı, aşağı) kaydırarak img2 matrisine en çok benzeyen matrisi bulan fonksiyon.
    int i, j, k, l;
    int max_score = -1;
    int shift_x = 0, shift_y = 0;

    for (i = -N+1; i < N; i++) {    // img1 matrisini, tüm yönlere kaydırarak img2 matrisine en çok benzeyen matrisi bulma işlemi.
        for (j = -N+1; j < N; j++) {
            int score = 0;
            for (k = 0; k < N; k++) {
                for (l = 0; l < N; l++) {
                    int x = k + i;
                    int y = l + j;
                    if (x >= 0 && x < N && y >= 0 && y < N) {
                        score += (img1[k][l] == img2[x][y]);
                    }
                }
            }
            if (score > max_score) {
                max_score = score;
                shift_x = i;
                shift_y = j;
            }
        }
    }

    printf("Best shift: (%d, %d)\n", shift_x, shift_y);     // En iyi kaydırma sonucunu ekrana yazdırma.
}

int main() {
    int img1[N][N] = {{0, 0, 1},
                      {1, 1, 0},
                      {0, 1, 1}};
    int img2[N][N] = {{1, 1, 0},
                      {0, 1, 1},
                      {0, 0, 1}};

    print_images(img1, img2);     // Görüntülerin ekrana yazdırılması.

    find_best_fit(img1, img2);     // En uygun kaydırma işleminin bulunması ve sonucun ekrana yazdırılması.

    return 0;
}
