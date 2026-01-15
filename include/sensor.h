#ifndef SENSOR_H
#define SENSOR_H

#include <stdint.h>

/* SENSOR DATA STRUCTURE*/
typedef struct 
{
    /* data */
    float value;
}SensorData;

/*Initialize Sensor*/
void sensor_init(void);

/*Read one Sensor Sample*/
SensorData sensor_read(void);

/*end SENSOR_H*/
#endif