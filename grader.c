#include "T112_HW06_2.h"

int main()
{

    int len;
    scanf("%d", &len);
    int arr1[len];
    int arr2[len];
    int i;

    for (i = 0; i < len; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < len; i++) {
        scanf("%d", &arr2[i]);
    }
    int result = is_rotation(len, arr1, arr2);

    if (result == TRUE) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}






