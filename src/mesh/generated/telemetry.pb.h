/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_TELEMETRY_PB_H_INCLUDED
#define PB_TELEMETRY_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* TODO: REPLACE */
typedef enum _TelemetrySensorType {
    /* No external telemetry sensor explicitly set */
    TelemetrySensorType_SENSOR_UNSET = 0,
    /* High accuracy temperature, pressure, humidity */
    TelemetrySensorType_BME280 = 1,
    /* High accuracy temperature, pressure, humidity, and air resistance */
    TelemetrySensorType_BME680 = 2,
    /* Very high accuracy temperature */
    TelemetrySensorType_MCP9808 = 3,
    /* Moderate accuracy current and voltage */
    TelemetrySensorType_INA260 = 4,
    /* Moderate accuracy current and voltage */
    TelemetrySensorType_INA219 = 5,
    /* High accuracy temperature and pressure */
    TelemetrySensorType_BMP280 = 6,
    /* High accuracy temperature and humidity */
    TelemetrySensorType_SHTC3 = 7,
    /* High accuracy pressure */
    TelemetrySensorType_LPS22 = 8,
    /* 3-Axis magnetic sensor */
    TelemetrySensorType_QMC6310 = 9,
    /* 6-Axis inertial measurement sensor */
    TelemetrySensorType_QMI8658 = 10,
    /* 3-Axis magnetic sensor */
    TelemetrySensorType_QMC5883L = 11,
    /* High accuracy temperature and humidity */
    TelemetrySensorType_SHT31 = 12
} TelemetrySensorType;

/* Struct definitions */
/* Key native device metrics such as battery level */
typedef struct _DeviceMetrics {
    /* 1-100 (0 means powered) */
    uint32_t battery_level;
    /* Voltage measured */
    float voltage;
    /* Utilization for the current channel, including well formed TX, RX and malformed RX (aka noise). */
    float channel_utilization;
    /* Percent of airtime for transmission used within the last hour. */
    float air_util_tx;
} DeviceMetrics;

/* Weather station or other environmental metrics */
typedef struct _EnvironmentMetrics {
    /* Temperature measured */
    float temperature;
    /* Relative humidity percent measured */
    float relative_humidity;
    /* Barometric pressure in hPA measured */
    float barometric_pressure;
    /* Gas resistance in mOhm measured */
    float gas_resistance;
    /* Voltage measured */
    float voltage;
    /* Current measured */
    float current;
} EnvironmentMetrics;

/* Types of Measurements the telemetry module is equipped to handle */
typedef struct _Telemetry {
    /* This is usually not sent over the mesh (to save space), but it is sent
 from the phone so that the local device can set its RTC If it is sent over
 the mesh (because there are devices on the mesh without GPS), it will only
 be sent by devices which has a hardware GPS clock (IE Mobile Phone).
 seconds since 1970 */
    uint32_t time;
    pb_size_t which_variant;
    union {
        /* Key native device metrics such as battery level */
        DeviceMetrics device_metrics;
        /* Weather station or other environmental metrics */
        EnvironmentMetrics environment_metrics;
    } variant;
} Telemetry;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _TelemetrySensorType_MIN TelemetrySensorType_SENSOR_UNSET
#define _TelemetrySensorType_MAX TelemetrySensorType_SHT31
#define _TelemetrySensorType_ARRAYSIZE ((TelemetrySensorType)(TelemetrySensorType_SHT31+1))





/* Initializer values for message structs */
#define DeviceMetrics_init_default               {0, 0, 0, 0}
#define EnvironmentMetrics_init_default          {0, 0, 0, 0, 0, 0}
#define Telemetry_init_default                   {0, 0, {DeviceMetrics_init_default}}
#define DeviceMetrics_init_zero                  {0, 0, 0, 0}
#define EnvironmentMetrics_init_zero             {0, 0, 0, 0, 0, 0}
#define Telemetry_init_zero                      {0, 0, {DeviceMetrics_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define DeviceMetrics_battery_level_tag          1
#define DeviceMetrics_voltage_tag                2
#define DeviceMetrics_channel_utilization_tag    3
#define DeviceMetrics_air_util_tx_tag            4
#define EnvironmentMetrics_temperature_tag       1
#define EnvironmentMetrics_relative_humidity_tag 2
#define EnvironmentMetrics_barometric_pressure_tag 3
#define EnvironmentMetrics_gas_resistance_tag    4
#define EnvironmentMetrics_voltage_tag           5
#define EnvironmentMetrics_current_tag           6
#define Telemetry_time_tag                       1
#define Telemetry_device_metrics_tag             2
#define Telemetry_environment_metrics_tag        3

/* Struct field encoding specification for nanopb */
#define DeviceMetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   battery_level,     1) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           2) \
X(a, STATIC,   SINGULAR, FLOAT,    channel_utilization,   3) \
X(a, STATIC,   SINGULAR, FLOAT,    air_util_tx,       4)
#define DeviceMetrics_CALLBACK NULL
#define DeviceMetrics_DEFAULT NULL

#define EnvironmentMetrics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    temperature,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    relative_humidity,   2) \
X(a, STATIC,   SINGULAR, FLOAT,    barometric_pressure,   3) \
X(a, STATIC,   SINGULAR, FLOAT,    gas_resistance,    4) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           5) \
X(a, STATIC,   SINGULAR, FLOAT,    current,           6)
#define EnvironmentMetrics_CALLBACK NULL
#define EnvironmentMetrics_DEFAULT NULL

#define Telemetry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FIXED32,  time,              1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,device_metrics,variant.device_metrics),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (variant,environment_metrics,variant.environment_metrics),   3)
#define Telemetry_CALLBACK NULL
#define Telemetry_DEFAULT NULL
#define Telemetry_variant_device_metrics_MSGTYPE DeviceMetrics
#define Telemetry_variant_environment_metrics_MSGTYPE EnvironmentMetrics

extern const pb_msgdesc_t DeviceMetrics_msg;
extern const pb_msgdesc_t EnvironmentMetrics_msg;
extern const pb_msgdesc_t Telemetry_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define DeviceMetrics_fields &DeviceMetrics_msg
#define EnvironmentMetrics_fields &EnvironmentMetrics_msg
#define Telemetry_fields &Telemetry_msg

/* Maximum encoded size of messages (where known) */
#define DeviceMetrics_size                       21
#define EnvironmentMetrics_size                  30
#define Telemetry_size                           37

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
