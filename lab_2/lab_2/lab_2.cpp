#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

void printMatrix(float matrix[][N]) {
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << std::setw(8) << std::setprecision(5) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

float findMin(float matrix[][N]) {
    float min = matrix[0][0];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    return min;
}

float findMax(float matrix[][N]) {
    float max = matrix[0][0];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    return max;
}

float findMaxLowerTriangle(float matrix[][N]) {
    float max = matrix[N - 1][0]; // Начальное значение - нижний левый элемент

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    return max;
}

float findMinLowerTriangle(float matrix[][N]) {
    float min = matrix[N - 1][0]; // Начальное значение - нижний левый элемент

    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    return min;
}

float findMinUpperTriangle(float matrix[][N]) {
    float min = matrix[0][1]; // Начальное значение - верхний правый элемент

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    return min;
}

float findMaxUpperTriangle(float matrix[][N]) {
    float max = matrix[0][1]; // Начальное значение - верхний правый элемент

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    return max;
}

float findMaxMainDiagonal(float matrix[][N]) {
    float max = matrix[0][0];

    for (int i = 1; i < N; i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }

    return max;
}

float findMinMainDiagonal(float matrix[][N]) {
    float min = matrix[0][0];

    for (int i = 1; i < N; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }

    return min;
}

float findMinSecondaryDiagonal(float matrix[][N]) {
    float min = matrix[0][N - 1];

    for (int i = 1; i < N; i++) {
        if (matrix[i][N - 1 - i] < min) {
            min = matrix[i][N - 1 - i];
        }
    }

    return min;
}

float findMaxSecondaryDiagonal(float matrix[][N]) {
    float max = matrix[0][N - 1];

    for (int i = 1; i < N; i++) {
        if (matrix[i][N - 1 - i] > max) {
            max = matrix[i][N - 1 - i];
        }
    }

    return max;
}

float calculateAverage(float matrix[][N]) {
    float sum = 0;
    int count = N * N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum += matrix[i][j];
        }
    }

    return sum / count;
}

float calculateLowerTriangleAverage(float matrix[][N]) {
    float sum = 0;
    int count = 0;

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            sum += matrix[i][j];
            count++;
        }
    }

    return sum / count;
}

float calculateUpperTriangleAverage(float matrix[][N]) {
    float sum = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += matrix[i][j];
            count++;
        }
    }

    return sum / count;
}

void calculateRowSums(float matrix[][N]) {
    for (int i = 0; i < N; i++) {
        float rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += matrix[i][j];
        }
        std::cout << "сумма строк " << i << ": " << rowSum << std::endl;
    }
}

void calculateColumnSums(float matrix[][N]) {
    for (int j = 0; j < N; j++) {
        float columnSum = 0;
        for (int i = 0; i < N; i++) {
            columnSum += matrix[i][j];
        }
        std::cout << "сумма столбцов " << j << ": " << columnSum << std::endl;
    }
}

void calculateColumnMinima(float matrix[][N]) {
    for (int j = 0; j < N; j++) {
        float min = std::numeric_limits<float>::max();
        for (int i = 0; i < N; i++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
        std::cout << "минимальное значения столбцов матрицы " << j << ": " << min << std::endl;
    }
}

void calculateRowMinima(float matrix[][N]) {
    for (int i = 0; i < N; i++) {
        float min = std::numeric_limits<float>::max();
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
        std::cout << "минимальное значения сторок матрицы " << i << ": " << min << std::endl;
    }
}

void calculateColumnMaxima(float matrix[][N]) {
    for (int j = 0; j < N; j++) {
        float max = matrix[0][j];
        for (int i = 1; i < N; i++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        std::cout << "максимальное значения столбцов матрицы " << j << ": " << max << std::endl;
    }
}

void calculateRowMaxima(float matrix[][N]) {
    for (int i = 0; i < N; i++) {
        float max = std::numeric_limits<float>::min();
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        std::cout << "максимальное значения строк матрицы " << i << ": " << max << std::endl;
    }
}

void calculateColumnAverages(float matrix[][N]) {
    for (int j = 0; j < N; j++) {
        float columnSum = 0;
        for (int i = 0; i < N; i++) {
            columnSum += matrix[i][j];
        }
        std::cout << "среднеарифметическое значения столбцов матрицы " << j << ": " << columnSum / N << std::endl;
    }
}

void calculateRowAverages(float matrix[][N]) {
    for (int i = 0; i < N; i++) {
        float rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += matrix[i][j];
        }
        std::cout << "среднеарифметическое значения строк матрицы " << i << ": " << rowSum / N << std::endl;
    }
}

void calculateUpperLowerSum(float matrix[][N]) {
    float upperSum = 0, lowerSum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > j) {
                lowerSum += matrix[i][j];
            } else if (i < j) {
                upperSum += matrix[i][j];
            }
        }
    }

    std::cout << "сумма нижней треугольной части матрицы: " << lowerSum << std::endl;
    std::cout << "сумма верхней треугольной части матрицы: " << upperSum << std::endl;
}

float findClosestToAverage(float matrix[][N]) {
    float average = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            average += matrix[i][j];
            count++;
        }
    }

    average /= count;

    float closestValue = matrix[0][0];
    float minDiff = std::abs(closestValue - average);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            float diff = std::abs(matrix[i][j] - average);
            if (diff < minDiff) {
                minDiff = diff;
                closestValue = matrix[i][j];
            }
        }
    }

    return closestValue;
}

int main() {
    setlocale(LC_ALL, "RU");
    float m[N][N];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m[i][j] = static_cast<float>(rand() % RAND_MAX) / 10;
        }
    }

    std::cout << "Исходная матрица:" << std::endl;
    printMatrix(m);

    float min = findMin(m);
    std::cout << "Минимальное число в матрице: " << min << std::endl;

    float max = findMax(m);
    std::cout << "Максимальное значение: " << max << std::endl;

    float maxLowerTriangle = findMaxLowerTriangle(m);
    std::cout << "максимальное значение нижней треугольной части матрицы: " << maxLowerTriangle << std::endl;

    float minLowerTriangle = findMinLowerTriangle(m);
    std::cout << "минимальное значение нижней треугольной части матрицы: " << minLowerTriangle << std::endl;

    float maxUpperTriangle = findMaxUpperTriangle(m);
    std::cout << "максимальное значение верхней треугольной части матрицы: " << maxUpperTriangle << std::endl;

    float minUpperTriangle = findMinUpperTriangle(m);
    std::cout << "минимальное значение верхней треугольной части матрицы: " << minUpperTriangle << std::endl;

    float maxMainDiagonal = findMaxMainDiagonal(m);
    std::cout << "максимальное значение главной диагонали: " << maxMainDiagonal << std::endl;

    float minMainDiagonal = findMinMainDiagonal(m);
    std::cout << "минимальное значение главной диагонали: " << minMainDiagonal << std::endl;

    float minSecondaryDiagonal = findMinSecondaryDiagonal(m);
    std::cout << "минимальное значение второстепенной диагонали: " << minSecondaryDiagonal << std::endl;

    float maxSecondaryDiagonal = findMaxSecondaryDiagonal(m);
    std::cout << "максимальное значение второстепенной диагонали: " << maxSecondaryDiagonal << std::endl;

    float average = calculateAverage(m);
    std::cout << "среднеарифметическое значения элементов матрицы " << average << std::endl;

    float lowerTriangleAverage = calculateLowerTriangleAverage(m);
    std::cout << "среднеарифметическое значения элементов нижней треугольной части матрицы " << lowerTriangleAverage << std::endl;

    float upperTriangleAverage = calculateUpperTriangleAverage(m);
    std::cout << "среднеарифметическое значения элементов верхней треугольной части матрицы: " << upperTriangleAverage << std::endl;

    calculateRowSums(m);

    calculateColumnSums(m);

    calculateColumnMinima(m);

    calculateRowMinima(m);

    calculateColumnMaxima(m);

    calculateRowMaxima(m);

    calculateColumnAverages(m);

    calculateRowAverages(m);

    calculateUpperLowerSum(m);

    float closestValue = findClosestToAverage(m);
    std::cout << "элемент близкий по значению среднеарифметическому: " << closestValue << std::endl;


    std::cin.get();
    return 0;
}

