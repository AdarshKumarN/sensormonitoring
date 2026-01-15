#include <stdio.h>
#include "sensor.h"

static int tests_failed = 0;

void test_status(float value, SensorStatus expected)
{
    SensorStatus actual = sensor_evaluate_status(value);

    if (actual != expected)
    {
        printf("FAIL: value=%.2f expected=%d got=%d\n",
               value, expected, actual);
        tests_failed++;
    }
    else
    {
        printf("PASS: value=%.2f\n", value);
    }
}

int main(void)
{
    test_status(20.0f, SENSOR_STATUS_OK);
    test_status(60.0f, SENSOR_STATUS_OK);
    test_status(60.1f, SENSOR_STATUS_WARNING);
    test_status(70.0f, SENSOR_STATUS_WARNING);
    test_status(70.1f, SENSOR_STATUS_ERROR);

    
    if (tests_failed == 0)
    {
        printf("ALL TESTS PASSED\n");
        return 0;
    }
    else
    {
        printf("%d TESTS FAILED\n", tests_failed);
        return 1;
    }
}
