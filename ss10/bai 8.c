#include <stdio.h>

int main() {
    int n, x, i, j, temp;
    int arr[100];
    int left, right, mid, found = -1, flag;


    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu trong mang:\n ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nMang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

 
    for (i = 0; i < n - 1; i++) {
        flag = 0; 
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break; 
    }


    printf("\nMang sau khi sap xep tang dan:\n ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nNhap gia tri can tim: ");
    scanf("%d", &x);

  
    left = 0;
    right = n - 1;
    found = -1;

    while (left <= right) {
        mid = (left + right) / 2;
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

