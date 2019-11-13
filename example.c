#include "stdio.h"
#include "stdint.h"
#include "string.h"

typedef struct {
    uint8_t  adc_id;
    // uint8_t padding[3];
    uint32_t adc_counts;
    int32_t  millivolts;
} AdcReading;

int main(void)
{

    AdcReading data = {
        .adc_id     = 0x12,
        .adc_counts = 0xA1A2B3B4,
        .millivolts = -4300,
    };

    uint8_t buf[sizeof(AdcReading)] = { 0 };
    memcpy(&buf, &data, sizeof(buf));

    for(int i = 0; i < sizeof(AdcReading); i++)
    {
        printf("[0x%02X]", buf[i]);
    }
    printf("\n");

    return 0;
}
