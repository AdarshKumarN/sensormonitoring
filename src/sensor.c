#include <sensor.h>

/*Internal State File Local*/
static float current_value = 20.0f;

void sensor_init(void){
    /*Initialize Simulated Sensor Value*/
    current_value=20.0f;
}

SensorData sensor_read(void){
    SensorData data;
    /*Simulation*/
    current_value += 2.5f;
    if(current_value > 80.0f)
    {
        current_value = 20.0f;
    }
    data.value = current_value;
    
    if (data.value <= 60.0f)
    {
        data.status = SENSOR_STATUS_OK;
    }
    else if (data.value <= 70.0f)
    {
        data.status = SENSOR_STATUS_WARNING;
    }
    else
    {
        data.status = SENSOR_STATUS_ERROR;
    }
    return data;
}
SensorStatus sensor_evaluate_status(float value)
{
    if (value <= 60.0f)
    {
        return SENSOR_STATUS_OK;
    }
    else if (value <= 70.0f)
    {
        return SENSOR_STATUS_WARNING;
    }
    else
    {
        return SENSOR_STATUS_ERROR;
    }
}