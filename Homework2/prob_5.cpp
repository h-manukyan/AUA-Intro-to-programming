#include <iostream>
#include <pthread.h>
#include <vector>
#include <sys/time.h>

const int M = 3, N = 3, P = 3;
int A[M][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int B[N][P] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
int C[M][P] = {0};

struct ThreadData {
    int row;
};

void* multiplyRow(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    int row = data->row;
    for (int j = 0; j < P; j++) {
        C[row][j] = 0;
        for (int k = 0; k < N; k++) {
            C[row][j] += A[row][k] * B[k][j];
        }
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[M];
    ThreadData threadData[M];
    struct timeval start, end;
    gettimeofday(&start, NULL);

    for (int i = 0; i < M; i++) {
        threadData[i].row = i;
        pthread_create(&threads[i], NULL, multiplyRow, (void*)&threadData[i]);
    }
    for (int i = 0; i < M; i++) {
        pthread_join(threads[i], NULL);
    }

    gettimeofday(&end, NULL);
    double elapsedTime = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1e6;
    std::cout << "Parallel Execution Time: " << elapsedTime << " seconds" << std::endl;
    
    std::cout << "Result Matrix: " << std::endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

