#include <stdio.h>
#include "sensor.h"

int main(void)
{
    sensor_init();

    for(int i=0;i<10;i++)
    {
        SensorData data = sensor_read();
        printf("Sensor Value: %.2f\n",data.value);
    }
    return 0;
}