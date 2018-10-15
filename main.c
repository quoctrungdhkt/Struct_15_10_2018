#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct Sinhvien{
    char ten[50];
    char email[50];
    char soDienthoai[20];
    int tuoi;
};
//int main() {
//    struct Sinhvien mangSinhvien [5];
//    strcpy(mangSinhvien[0].ten, "Hoang Quoc Trung");
//    strcpy(mangSinhvien[0].email, "quoctrungdhkt@gmail.com");
//    strcpy(mangSinhvien[0].soDienthoai, "0986023592");
//    mangSinhvien [0].tuoi = 26;
//    printf("%s\n", mangSinhvien[0].ten);
//    printf("%d\n", mangSinhvien[0].tuoi);
//    printf("%s\n", mangSinhvien[0].email);
//    printf("%s\n", mangSinhvien[0].soDienthoai);
//    return 0;
//}

void removeStdchar(char array[]) {
    if (strchr(array, '\n') == NULL) {
        while (fgetc(stdin) != '\n');
    }
}
int main(){
    struct Sinhvien sinhviens[2];
    for (int i = 0; i < 2 ; ++i) {
        printf(" Vui long nhap ten sinh vien thu %d", i + 1);
        fgets(sinhviens[i].ten, sizeof(sinhviens[i].ten) * sizeof(char), stdin);
        removeStdchar(sinhviens[i].ten);

        printf(" Vui long nhap email sinh vien thu %d", i + 1);
        fgets(sinhviens[i].email, sizeof(sinhviens[i].email) * sizeof(char), stdin);
        removeStdchar(sinhviens[i].email);

        printf(" Vui long nhap phone sinh vien thu %d", i + 1);
        fgets(sinhviens[i].soDienthoai, sizeof(sinhviens[i].soDienthoai) * sizeof(char), stdin);
        removeStdchar(sinhviens[i].soDienthoai);

        printf(" Vui long nhap tuoi sinh vien thu %d", i + 1);
        scanf("%d", &sinhviens[i].tuoi);
        getchar();
    }

    for (int i = 0; i < 2; ++i) {
        printf("Ten sinh vien %s\n", sinhviens[i].ten);
        printf("So dien thoai %s\n", sinhviens[i].soDienthoai);
        printf("Email %s\n", sinhviens[i].email);
        printf("Tuoi %d\n", sinhviens[i].tuoi);
    }

    }
