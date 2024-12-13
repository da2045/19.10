//#include <iostream>
//
//
//int maxFunc(int* arr, int size) {
//    int maxVal = arr[0];
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] > maxVal) {
//            maxVal = arr[i];
//        }
//    }
//    return maxVal;
//}
//
//int minFunc(int* arr, int size) {
//    int minVal = arr[0];
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] < minVal) {
//            minVal = arr[i];
//        }
//    }
//    return minVal;
//}
//
//double avgFunc(int* arr, int size) {
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += arr[i];
//    }
//    return static_cast<double>(sum) / size;
//}
//
//template <typename Func>
//auto Action(int* arrA, int* arrB, int sizeA, int sizeB, Func func) -> decltype(func(arrA, sizeA)) {
// 
//    return func(arrA, sizeA);
//}
//
//int main() {
//    const int SIZE = 5;
//    int arrA[SIZE] = { 1, 2, 3, 4, 5 };
//    int arrB[SIZE] = { 5, 4, 3, 2, 1 };
//
//    std::cout << "vuber dii (1 - max, 2 - min, 3 - avg): ";
//    int choice;
//    std::cin >> choice;
//
//    switch (choice) {
//    case 1:
//        std::cout << "max " << Action(arrA, arrB, SIZE, SIZE, maxFunc) << std::endl;
//        break;
//    case 2:
//        std::cout << "min " << Action(arrA, arrB, SIZE, SIZE, minFunc) << std::endl;
//        break;
//    case 3:
//        std::cout << "seredne " << Action(arrA, arrB, SIZE, SIZE, avgFunc) << std::endl;
//        break;
//    default:
//        std::cout << "wrong" << std::endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <string>
//
//
//void removeChar(std::string& str, int index) {
// 
//    if (index < 0 || index >= str.length()) {
//        std::cout << "Невірний індекс." << std::endl;
//        return;
//    }
//
//
//    str.erase(index, 1);
//}
//
//int main() {
//    std::string str;
//    int index;
//
//    std::cout << "vedit radok
//    std::getline(std::cin, str);
//
//    std::cout << "vedit index
//    std::cin >> index;
//
//    removeChar(str, index);
//
//    std::cout << "Результат: " << str << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//
//void removeAllChars(std::string& str, char ch) {
//   
//    for (size_t i = 0; i < str.length(); ) {
//        if (str[i] == ch) {
//            str.erase(i, 1);  
//        }
//        else {
//            ++i;  
//        }
//    }
//}
//
//int main() {
//    std::string str;
//    char ch;
//
//    std::cout << "veditrdok";
//    std::getline(std::cin, str);
//
//    std::cout << "vedit sumvol";
//    std::cin >> ch;
//
//    removeAllChars(str, ch);
//
//    std::cout << "rezultat " << str << std::endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//
//void insertChar(std::string& str, char ch, int index) {
//   
//    if (index < 0 || index > str.length()) {
//        std::cout << "Невірний індекс." << std::endl;
//        return;
//    }
//
//  
//    str.insert(index, 1, ch);
//}
//
//int main() {
//    std::string str;
//    char ch;
//    int index;
//
//    std::cout << "radok";
//    std::getline(std::cin, str);
//
//    std::cout << "sumvol";
//    std::cin >> ch;
//
//    std::cout << "index";
//    std::cin >> index;
//
//    insertChar(str, ch, index);
//
//    std::cout << "rezultat: " << str << std::endl;
//
//    return 0;
//}
