//  Using break to Stop at 5
//#include <stdio.h>
//int main() {
//    for (int i = 1; i <= 10; i++) {
//        if (i == 5) {
//            break;  
//        }
//        printf("%d ", i);
//    }
//    return 0;
//}




// Modifying to Skip 3 Using continue

#include<stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  
        }
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }
    return 0;
}

