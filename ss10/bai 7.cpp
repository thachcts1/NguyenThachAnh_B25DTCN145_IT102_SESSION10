#include <stdio.h>

int main() {
    int n, x;
    int arr[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu da duoc sap xep tang dan: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int left = 0, right = n - 1;
    int found = -1; 

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            found = mid; 
            break;  
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, found);
    else
        printf("Khong tim thay.\n");

    return 0;
}



