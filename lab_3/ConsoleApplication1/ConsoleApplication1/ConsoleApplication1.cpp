
#include <iostream>
#include <algorithm>

// Функция для вывода массива
void printArray(int arr[], int n) {
    std::cout << "исходный массив ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

// Функция для сортировки массива min max
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int imin = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[imin]) {
                imin = j;
            }
        }
        // Обмен элементов
        int temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
    std::cout << "сортировка min max";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
        std::cout << std::endl;
}

// Функция для сортировки пузырьком
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



// Функция для разделения массива для быстрой сортировки
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

// Функция для быстрой сортировки
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Функция для сортировки по возрастанию четных и убыванию нечетных значений
void customSort(int arr[], int n) {
    // Разделение массива на четные и нечетные значения
    int* even = new int[n]();
    int* odd = new int[n]();
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        }
        else {
            odd[oddCount++] = arr[i];
        }
    }

    // Сортировка четных чисел по возрастанию
    std::sort(even, even + evenCount);

    // Сортировка нечетных чисел по убыванию
    std::sort(odd, odd + oddCount, std::greater<int>());

    // Объединение отсортированных четных и нечетных значений
    int index = 0;
    for (int i = 0; i < evenCount; i++) {
        arr[index++] = even[i];
    }
    for (int i = 0; i < oddCount; i++) {
        arr[index++] = odd[i];
    }

    delete[] even;
    delete[] odd;
    std::cout << "Сортировка по возрастанию четных и убыванию нечетных чисел ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

// Функция для сортировки массива на интервале от N1 до N2 по возрастанию
void customSortAscending(int arr[], int n, int N1, int N2) {
    for (int i = N1; i < N2; i++) {
        for (int j = i + 1; j < N2; j++) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    std::cout << "Сортировка на интервале от " << N1 << " до " << N2 << " по возрастанию: ";

    // Вывод отсортированного массива
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

// Функция для сортировки массива на интервале от N1 до N2 по убыванию
void customSortDescending(int arr[], int n, int N1, int N2) {
    for (int i = N1; i < N2; i++) {
        for (int j = i + 1; j < N2; j++) {
            if (arr[i] < arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    std::cout << "Сортировка на интервале от " << N1 << " до " << N2 << " по убыванию: ";

    // Вывод отсортированного массива
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int mas[] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };
    int n = sizeof(mas) / sizeof(int);
    int N1 = 2; // Начало интервала
    int N2 = 8; // Конец интервала

    // Вывод исходного массива
    printArray(mas, n);

    // Сортировка массива min max
    selectionSort(mas, n);

    // Сортировка массива пузырьком
    bubbleSort(mas, n);
    std::cout << "После сортировки пузырьком: ";
    printArray(mas, n);

    // Сортировка массива методом быстрой сортировки
    quickSort(mas, 0, n - 1);
    std::cout << "После быстрой сортировки: ";
    printArray(mas, n);

    // Сортировка по возрастанию четных и убыванию нечетных чисел
    customSort(mas, n);
    //
    customSortAscending(mas, n, N1, N2);

    //
    customSortDescending(mas, n, N1, N2);

    return 0;
}