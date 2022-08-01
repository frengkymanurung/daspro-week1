#include <stdio.h>

#define VOLUME_DALAM_LITER 1192405

int barrel_dalam_liter;
int volume_dalam_barrel;

int main()
{
    printf("Masukkan jumlah barrel:");
    scanf("%d", &barrel_dalam_liter);
    volume_dalam_barrel = barrel_dalam_liter / VOLUME_DALAM_LITER;
    printf("\nVolume barrel dalam liter = %d", volume_dalam_barrel);

    return 0;
}
