/* main.c - main */

#include <xinu.h>

void sndA(void);
void sndB(void);

process main(void)
{
    sndA();
    sndB();
    return OK;
}

void sndA(void)
{
    while (1) {
        printf("A\n");
        sleepms(1000);
    }
}

void sndB(void)
{
    while (1) {
        printf("B\n");
        sleepms(1000);
    }
}










/* main.c - main */

#include <xinu.h>

void sndA(void);
void sndB(void);

process main(void)
{
    // Membuat dan menjalankan proses sndA dan sndB secara paralel
    resume(create(sndA, 1024, 20, "process A", 0)); // Proses sndA
    resume(create(sndB, 1024, 20, "process B", 0)); // Proses sndB
    return OK;
}

void sndA(void)
{
    while (1) {
        printf("A\n");       // Cetak "A" di terminal
        sleepms(1000);       // Tunggu selama 1000 milidetik (1 detik)
    }
}

void sndB(void)
{
    while (1) {
        printf("B\n");       // Cetak "B" di terminal
        sleepms(1000);       // Tunggu selama 1000 milidetik (1 detik)
    }
}
