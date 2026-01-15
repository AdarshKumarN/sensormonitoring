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
    return data;
}