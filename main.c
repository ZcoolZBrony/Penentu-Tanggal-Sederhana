#include <stdio.h>
#include <stdlib.h>

struct tanggal
{
    int dd;
    int mm;
    int yy;
};

int main()
{
    struct tanggal tgl;

    printf("tuliskan Tanggal\t\t: ");
    scanf("%d", &tgl.dd);
    printf("Tuliskan Bulan (dalam angka)\t: ");
    scanf("%d", &tgl.mm);
    printf("Tuliskan Bulan (dalam angka)\t: ");
    scanf("%d", &tgl.yy);

    switch(tgl.mm)
    {
        case 1:
            if(tgl.dd < 31)
            {
                tgl.dd = tgl.dd + 1;
            }
            else
            {
                tgl.dd = 1;
                tgl.mm = tgl.mm + 1;
            }
        break;

        case 2:
            if (tgl.dd < 28)
            {
                tgl.dd = tgl.dd + 1;
            }
            else
            {
                if(((tgl.yy % 4==0) && (tgl.yy % 100 != 0)) || (tgl.yy % 400==0))
                {
                    if (tgl.dd == 28)
                    {
                        tgl.dd = tgl.dd + 1;
                    }
                    else {
                        tgl.dd = 1;
                        tgl.mm = tgl.mm + 1;
                    }
                }
                else {
                    tgl.dd =1;
                    tgl.mm = tgl.mm + 1;
                }
            }
        break;

         case 4:
            if(tgl.dd < 30)
                {
                tgl.dd=tgl.dd +1;
                }
            else{
                tgl.dd = 1;
                tgl.mm = tgl.mm + 1;
            }
        break;

    case 12:
        if(tgl.dd<31) {
            tgl.dd = tgl.dd + 1;
        }
        else{
            tgl.dd = 1;
            tgl.mm = 1;
            tgl.yy = tgl.yy+1;
        }
    break;
    }
    printf("\n\nTanggal berikutnya ialah %d - %d - %d", tgl.dd, tgl.mm, tgl.yy);
    return 0;
}
