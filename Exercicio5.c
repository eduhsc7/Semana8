#include <stdbool.h> 

bool soma_array(int arr[], int tam, int x) {
    
    if (tam == 0) {
        return true;
    }
    
    if (arr[tam - 1] % x != 0) {
        return false;
    }
    return soma_array(arr, tam - 1, x);
}
    return 0;
}
