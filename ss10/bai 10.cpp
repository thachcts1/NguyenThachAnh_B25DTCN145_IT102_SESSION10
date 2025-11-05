#include <stdio.h>

int main() {
    int n, i, j, min_index, temp, x;


    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

 
    printf("Nhap %d phan tu cua mang:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int min_value = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    printf("\nSo nho nhat trong mang la: %d\n", min_value);


    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("\nMang sau khi sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("\n\nNhap so can tim trong mang da sap xep: ");
    scanf("%d", &x);

    int left = 0, right = n - 1, mid, found = -1;

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
        printf("Phan tu %d duoc tim thay tai chi so %d trong mang.\n", x, found);
    else
        printf("Khong tim thay.\n");

    return 0;
}

