#include <iostream>

using namespace std;

template<typename T>
class ArrayProcessor {
public:
    T findMax(const T* array, int size) {
        T max = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }

    T findMin(const T* array, int size) {
        T min = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
    }
};

int main() {
    int intArray[] = { 3, 9, 2, 6, 1 };
    double doubleArray[] = { 2.5, 4.7, 1.2, 3.9, 0.5 };

    ArrayProcessor<int> intProcessor;
    int maxInt = intProcessor.findMax(intArray, 5);
    int minInt = intProcessor.findMin(intArray, 5);
    cout << "Max Int: " << maxInt << endl;
    cout << "Min Int: " << minInt << endl;

    ArrayProcessor<double> doubleProcessor;
    double maxDouble = doubleProcessor.findMax(doubleArray, 5);
    double minDouble = doubleProcessor.findMin(doubleArray, 5);
    cout << "Max Double: " << maxDouble << endl;
    cout << "Min Double: " << minDouble << endl;

    return 0;
}
