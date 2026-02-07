/******************************************************************************
 * Họ và tên: [LÃ HẢI ĐĂNG]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện
// 5. Chức năng số 5: Chức năng đổi tiền
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

// Hàm kiểm tra số có phải số nguyên hay không
int isInteger(double num)
{
    return num == (int)num;
}
// Khai báo hàm
void cau1();
void cau2();
void cau3();
void cau4();
void cau5();
void cau6();
void cau7();
void cau8();
void cau9();
void cau10();
int main()
{
    int choice;
    do
    {
        printf("\n----------ASSIGNMENT----------\n");
        printf("1: Chương trình kiểm tra số nhập vào\n");
        printf("2: Ước chung lớn nhất và bội chung nhỏ nhất\n");
        printf("3: Chương trình tính tiền cho quán Karaoke\n");
        printf("4: Tính tiền điện \n");
        printf("5: Chức năng đổi tiền \n");
        printf("6: Chức năng đổi tiền \n");
        printf("7: Chương trình vay tiền mua xe \n");
        printf("8: Chức năng đang được phát triển \n");
        printf("9: Chức năng đang được phát triển \n");
        printf("10: Chức năng đang được phát triển \n");
        printf("0: Thoát trương trình\n");
        printf("Chọn chức năng bạn muốn thực hiện : ");
        if (scanf("%d", &choice) != 1) {
            printf("Vui lòng nhập số nguyên!\n");
            // xóa dữ liệu lỗi trong buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }
        switch (choice)
        {
        case 0:
            break;
        case 1:
            printf("Bạn đã chọn chức năng 1\n");
            cau1();
            break;
        case 2:
        printf("Bạn đã chọn chức năng 2\n");
            cau2();
            break;
        case 3:
            printf("Bạn đã chọn chức năng 3\n");
            cau3();
            break;
        case 4:
            printf("Bạn đã chọn chức năng 4\n");
            cau4();
            break;
        case 5:
            printf("Bạn đã chọn chức năng 5\n");
            cau5();
            break;
        case 6:
            printf("Bạn đã chọn chức năng 6\n");
            cau6();
            break;
        case 7:
            printf("Bạn đã chọn chức năng 7\n");
            cau7();
            break;
        case 8:
            printf("Bạn đã chọn chức năng 8\n");
            cau8();
            break;
        case 9:
            printf("Bạn đã chọn chức năng 9\n");
            cau9();
            break;
        case 10:
            printf("Bạn đã chọn chức năng 10\n");
            cau10();
            break;
        default:
            printf("Vui lòng chọn câu theo mẫu!!!\n");
            break;
        }
    } while (choice != 0);
    printf("Bye byeeeeee !!!");
    return 0;
}

void cau1()
{
    printf("----------------------------------\n");
    printf("Chương trình kiểm tra số nhập vào\n");
    double num;
    printf("Nhập vào số: ");
    scanf("%lf", &num);
    // Kiểm tra số nguyên
    if (!isInteger(num))
    {
        printf("%.1f không phải là số nguyên\n", num);
        return; // không là số nguyên thì out
    }
    else
    {
        printf("%.1f là số nguyên\n", num);
    }

    int n = (int)num; // ép lại kiểu của số nhập vào

    // Kiểm tra số nguyên tố

    if (n <= 1)
    {
        printf("%d không phải là số nguyên tố\n", n);
    }
    else
    {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d là số nguyên tố\n", n);
        }
        else
        {
            printf("%d không phải là số nguyên tố\n", n);
        }
    }

    // Kiểm tra số chính phương
    if (!isInteger(sqrt(n)))
    {
        printf("%d không phải là số chính phương\n", n);
        return; // không là số nguyên thì out
    }
    else
    {
        printf("%d là số chính phương\n", n);
    }
}
void cau2()
{
    printf("----------------------------------\n");
    printf("Ước chung lớn nhất và bội chung nhỏ nhất\n");
    int x, y;
    printf("nhập x : ");
    scanf("%d", &x);
    printf("nhập y : ");
    scanf("%d", &y);
    int a = x, b = y;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    int UCLN = a; // a hoặc b đều được vì lúc này a = b
    int BCNN = (x * y) / UCLN;
    printf("\nƯớc số chung lớn nhất của %d và %d là: %d\n", x, y, UCLN);
    printf("Bội số chung nhỏ nhất của %d và %d là: %d\n", x, y, BCNN);
}
void cau3()
{
    float batDau, ketThuc, thoiGianHat, Gia = 0;
    printf("----------------------------------\n");
    printf("-------Karaoke Hải Đăng doo-------\n");
    printf("Nhập giờ bắt đầu : ");
    scanf("%f", &batDau);
    printf("Nhập giờ kết thúc : ");
    scanf("%f", &ketThuc);
    thoiGianHat = ketThuc - batDau;
    if (batDau < 12 || ketThuc > 23 || batDau >= ketThuc || ketThuc < thoiGianHat)
    {
        printf("Giờ không hợp lệ");
        return;
    }
    else
    {
        if (thoiGianHat < 3)
        {
            Gia = thoiGianHat * 150000;
        }
        else
        {
            Gia = 3 * 150000;
            Gia += (thoiGianHat - 3) * 0.7 * 150000;
        }
    }
    if (batDau >= 14 && batDau <= 17)
    {
        Gia *= 0.9;
    }
    printf("Tổng bill cần thanh toán là : %.1f", Gia);
}
void cau4()
{
    printf("----------------------------------\n");
    printf("Chương trình tính tiền điện\n");
    float soDienTieuThu, tongDien = 0;
    printf("Nhập số điện tiêu thụ : ");
    // Loại trường hợp < 0
    do
    {
        scanf("%f", &soDienTieuThu);
        if (soDienTieuThu < 0)
        {
            printf("Vui lòng nhập số điện tiêu thụ > 0 : ");
        }
    } while (soDienTieuThu < 0);
    // Bậc 1
    if (soDienTieuThu > 50)
    {
        tongDien += 50 * 1678;
        soDienTieuThu -= 50;
    }
    else
    {
        tongDien += soDienTieuThu * 1678;
        soDienTieuThu = 0;
    }
    // Bậc 2
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 50)
        {
            tongDien += 50 * 1734;
            soDienTieuThu -= 50;
        }
        else
        {
            tongDien += soDienTieuThu * 1734;
            soDienTieuThu = 0;
        }
    }
    // Bậc 3
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 100)
        {
            tongDien += 100 * 2014;
            soDienTieuThu -= 100;
        }
        else
        {
            tongDien += soDienTieuThu * 2014;
            soDienTieuThu = 0;
        }
    }
    // Bậc 4
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 100)
        {
            tongDien += 100 * 2536;
            soDienTieuThu -= 100;
        }
        else
        {
            tongDien += soDienTieuThu * 2536;
            soDienTieuThu = 0;
        }
    }
    // Bậc 5
    if (soDienTieuThu > 0)
    {
        if (soDienTieuThu > 100)
        {
            tongDien += 100 * 2834;
            soDienTieuThu -= 100;
        }
        else
        {
            tongDien += soDienTieuThu * 2834;
            soDienTieuThu = 0;
        }
    }
    // Bậc 6
    if (soDienTieuThu > 0)
    {
        tongDien += soDienTieuThu * 2927;
        soDienTieuThu = 0;
    }
    printf("Số tiền điện cần phải đóng là : %.2f\n", tongDien);
}
void cau5()
{
    printf("----------------------------------\n");
    printf("Chương trình đổi tiền\n");
    int soTien;
    printf("Nhập số tiền cần đổi: ");
    scanf("%d", &soTien);

    int t500 = soTien / 500;
    soTien %= 500;
    int t200 = soTien / 200;
    soTien %= 200;
    int t100 = soTien / 100;
    soTien %= 100;
    int t50 = soTien / 50;
    soTien %= 50;
    int t20 = soTien / 20;
    soTien %= 20;
    int t10 = soTien / 10;
    soTien %= 10;
    int t5 = soTien / 5;
    soTien %= 5;
    int t2 = soTien / 2;
    soTien %= 2;
    int t1 = soTien / 1;
    soTien %= 1;
    printf("\nKết quả đổi tiền:\n");
    if (t500 > 0)
        printf("%d tờ 500\n", t500);
    if (t200 > 0)
        printf("%d tờ 200\n", t200);
    if (t100 > 0)
        printf("%d tờ 100\n", t100);
    if (t50 > 0)
        printf("%d tờ 50\n", t50);
    if (t20 > 0)
        printf("%d tờ 20\n", t20);
    if (t10 > 0)
        printf("%d tờ 10\n", t10);
    if (t5 > 0)
        printf("%d tờ 5\n", t5);
    if (t2 > 0)
        printf("%d tờ 2\n", t2);
    if (t1 > 0)
        printf("%d tờ 1\n", t1);
}
void cau6()
{
    long tienVay, gocPhaiTra, tienConLai, laiPhaiTra, tongCong;
    float laiThang = 0.05;
    printf("Nhập số tiền muốn vay: ");
    scanf("%ld", &tienVay);

    gocPhaiTra = tienVay / 12;
    tienConLai = tienVay;

    printf("Kỳ hạn | Lãi phải trả | Gốc phải trả | Tổng phải trả | Số tiền còn lại\n");
    printf("----------------------------------------------------------------------\n");
    for (int i = 1; i <= 12; i++)
    {
        laiPhaiTra = tienConLai * laiThang;
        tongCong = laiPhaiTra + gocPhaiTra;
        tienConLai -= gocPhaiTra;

        printf("%5d | %11ld | %12ld | %13ld | %15ld\n",
               i, laiPhaiTra, gocPhaiTra, tongCong, tienConLai);
    }
}
void cau7()
{
    printf("----------------------------------\n");
    printf("Chương trình vay tiền mua xe\n");
    long vayTien;
    int thoiHan, traTruoc;
    float laiSuatNam = 0.072; // 7.2%/năm
    float laiSuatThang = laiSuatNam / 12;

    // Nhập liệu
    do
    {
        printf("Nhập số tiền muốn vay: ");
        scanf("%ld", &vayTien);

        printf("Nhập số phần trăm bạn muốn trả trước (%%): ");
        scanf("%d", &traTruoc);

        printf("Nhập thời hạn vay (tháng): ");
        scanf("%d", &thoiHan);

        if (vayTien > 500000000 || vayTien < 0 || thoiHan < 6 || thoiHan > 24 || traTruoc < 0 || traTruoc > 100)
        {
            printf("Vui lòng nhập lại! (Vay <= 500 triệu, thời hạn 64 tháng, trả trước 0-100%)\n");
        }
    } while (vayTien > 500000000 || vayTien < 0 || thoiHan < 6 || thoiHan > 24 || traTruoc < 0 || traTruoc > 100);

    long soTienTraSau = vayTien - (vayTien * traTruoc / 100);
    float gocHangThang = (float)soTienTraSau / thoiHan;

    printf("\nKỳ |     Lãi trả     |   Gốc trả   |  Tổng trả  |   Còn lại\n");
    printf("--------------------------------------------------------------\n");

    float tienConLai = soTienTraSau;

    for (int i = 1; i <= thoiHan; i++)
    {
        float laiPhaiTra = tienConLai * laiSuatThang;
        float tongCong = gocHangThang + laiPhaiTra;

        tienConLai -= gocHangThang;

        printf("%2d | %14.0f | %11.0f | %10.0f | %10.0f\n",
               i, laiPhaiTra, gocHangThang, tongCong, tienConLai);
    }
}
void cau8()
{
    // Chức năng đang được phát triển
}
void cau9()
{
    // Chức năng đang được phát triển
}
void cau10()
{
    // Chức năng đang được phát triển
}