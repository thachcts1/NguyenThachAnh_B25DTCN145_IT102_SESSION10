#include <stdio.h>

int main() {
    int n, id;


    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int price[n];


    printf("Nhap gia cua %d san pham:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Gia san pham %d: ", i);
        scanf("%d", &price[i]);
    }


    printf("\nDanh sach gia san pham ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }

    printf("\n\nNhap ma san pham (index) can tim: ");
    scanf("%d", &id);

    // Ki?m tra m? h?p l?
    if (id >= 0 && id < n) {
        printf("Gia cua san pham co ma %d la: %d\n", id, price[id]);
    } else {
        printf("Khong ton tai san pham co ma %d!\n", id);
    }


    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (price[j] > price[j + 1]) {
                int temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }


    printf("\nDanh sach gia san pham sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }


    int target;
    printf("\n\nNhap gia san pham can tim : ");
    scanf("%d", &target);

    int left = 0, right = n - 1, found = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (price[mid] == target) {
            found = mid;
            break;
        } else if (price[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1)
        printf("San pham co gia %d duoc tim thay tai vi tri %d trong mang da sap xep.\n", target, found);
    else
        printf("Khong tim thay san pham co gia %d trong danh sach.\n", target);

    return 0;
}

