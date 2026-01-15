#ifndef SENSOR_H
#define SENSOR_H

#include <stdint.h>

typedef enum 
{
    SENSOR_STATUS_OK = 0,
    SENSOR_STATUS_WARNING,
    SENSOR_STATUS_ERROR
}SensorStatus;

/* SENSOR DATA STRUCTURE*/
typedef struct 
{
    /* data */
    float value;
    SensorStatus status;
}SensorData;

/*Initialize Sensor*/
void sensor_init(void);

/*Read one Sensor Sample*/
SensorData sensor_read(void);

/*end SENSOR_H*/
#endif