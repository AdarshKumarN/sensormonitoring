#include <stdio.h>
#include "sensor.h"

/* Convert sensor status enum to readable string */
static const char *sensor_status_to_string(SensorStatus status)
{
    switch (status)
    {
        case SENSOR_STATUS_OK:
            return "OK";
        case SENSOR_STATUS_WARNING:
            return "WARNING";
        case SENSOR_STATUS_ERROR:
            return "ERROR";
        default:
            return "UNKNOWN";
    }
}

int main(void)
{
    sensor_init();

    for(int i=0;i<10;i++)
    {
        SensorData data = sensor_read();
        printf("Sensor Value: %.2f | Status: %s \n",data.value,sensor_status_to_string(data.status));
    }
    return 0;
}