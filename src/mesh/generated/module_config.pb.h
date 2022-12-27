/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_MODULE_CONFIG_PB_H_INCLUDED
#define PB_MODULE_CONFIG_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Baudrate for codec2 voice */
typedef enum _ModuleConfig_AudioConfig_Audio_Baud {
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_DEFAULT = 0,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_3200 = 1,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_2400 = 2,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_1600 = 3,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_1400 = 4,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_1300 = 5,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_1200 = 6,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_700 = 7,
    ModuleConfig_AudioConfig_Audio_Baud_CODEC2_700B = 8
} ModuleConfig_AudioConfig_Audio_Baud;

/* TODO: REPLACE */
typedef enum _ModuleConfig_SerialConfig_Serial_Baud {
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_DEFAULT = 0,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_110 = 1,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_300 = 2,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_600 = 3,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_1200 = 4,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_2400 = 5,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_4800 = 6,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_9600 = 7,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_19200 = 8,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_38400 = 9,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_57600 = 10,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_115200 = 11,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_230400 = 12,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_460800 = 13,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_576000 = 14,
    ModuleConfig_SerialConfig_Serial_Baud_BAUD_921600 = 15
} ModuleConfig_SerialConfig_Serial_Baud;

/* TODO: REPLACE */
typedef enum _ModuleConfig_SerialConfig_Serial_Mode {
    ModuleConfig_SerialConfig_Serial_Mode_DEFAULT = 0,
    ModuleConfig_SerialConfig_Serial_Mode_SIMPLE = 1,
    ModuleConfig_SerialConfig_Serial_Mode_PROTO = 2,
    ModuleConfig_SerialConfig_Serial_Mode_TEXTMSG = 3,
    ModuleConfig_SerialConfig_Serial_Mode_NMEA = 4
} ModuleConfig_SerialConfig_Serial_Mode;

/* TODO: REPLACE */
typedef enum _ModuleConfig_CannedMessageConfig_InputEventChar {
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_NONE = 0,
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_UP = 17,
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_DOWN = 18,
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_LEFT = 19,
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_RIGHT = 20,
    /* '\n' */
    ModuleConfig_CannedMessageConfig_InputEventChar_SELECT = 10,
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_BACK = 27,
    /* TODO: REPLACE */
    ModuleConfig_CannedMessageConfig_InputEventChar_CANCEL = 24
} ModuleConfig_CannedMessageConfig_InputEventChar;

/* Struct definitions */
/* MQTT Client Config */
typedef struct _ModuleConfig_MQTTConfig {
    /* If a meshtastic node is able to reach the internet it will normally attempt to gateway any channels that are marked as
 is_uplink_enabled or is_downlink_enabled. */
    bool enabled;
    /* The server to use for our MQTT global message gateway feature.
 If not set, the default server will be used */
    char address[32];
    /* MQTT username to use (most useful for a custom MQTT server).
 If using a custom server, this will be honoured even if empty.
 If using the default server, this will only be honoured if set, otherwise the device will use the default username */
    char username[64];
    /* MQTT password to use (most useful for a custom MQTT server).
 If using a custom server, this will be honoured even if empty.
 If using the default server, this will only be honoured if set, otherwise the device will use the default password */
    char password[64];
    /* Whether to send encrypted or decrypted packets to MQTT.
 This parameter is only honoured if you also set server
 (the default official mqtt.meshtastic.org server can handle encrypted packets)
 Decrypted packets may be useful for external systems that want to consume meshtastic packets */
    bool encryption_enabled;
    /* Whether to send / consume json packets on MQTT */
    bool json_enabled;
} ModuleConfig_MQTTConfig;

/* Audio Config for codec2 voice */
typedef struct _ModuleConfig_AudioConfig {
    /* Whether Audio is enabled */
    bool codec2_enabled;
    /* PTT Pin */
    uint8_t ptt_pin;
    /* The audio sample rate to use for codec2 */
    ModuleConfig_AudioConfig_Audio_Baud bitrate;
    /* I2S Word Select */
    uint8_t i2s_ws;
    /* I2S Data IN */
    uint8_t i2s_sd;
    /* I2S Data OUT */
    uint8_t i2s_din;
    /* I2S Clock */
    uint8_t i2s_sck;
} ModuleConfig_AudioConfig;

/* Serial Config */
typedef struct _ModuleConfig_SerialConfig {
    /* Preferences for the SerialModule
 FIXME - Move this out of UserPreferences and into a section for module configuration. */
    bool enabled;
    /* TODO: REPLACE */
    bool echo;
    /* TODO: REPLACE */
    uint32_t rxd;
    /* TODO: REPLACE */
    uint32_t txd;
    /* TODO: REPLACE */
    ModuleConfig_SerialConfig_Serial_Baud baud;
    /* TODO: REPLACE */
    uint32_t timeout;
    /* TODO: REPLACE */
    ModuleConfig_SerialConfig_Serial_Mode mode;
} ModuleConfig_SerialConfig;

/* External Notifications Config */
typedef struct _ModuleConfig_ExternalNotificationConfig {
    /* Enable the ExternalNotificationModule */
    bool enabled;
    /* When using in On/Off mode, keep the output on for this many
 milliseconds. Default 1000ms (1 second). */
    uint32_t output_ms;
    /* Define the output pin GPIO setting Defaults to
 EXT_NOTIFY_OUT if set for the board.
 In standalone devices this pin should drive the LED to match the UI. */
    uint32_t output;
    /* IF this is true, the 'output' Pin will be pulled active high, false
 means active low. */
    bool active;
    /* True: Alert when a text message arrives (output) */
    bool alert_message;
    /* True: Alert when the bell character is received (output) */
    bool alert_bell;
    /* use a PWM output instead of a simple on/off output. This will ignore
 the 'output', 'output_ms' and 'active' settings and use the
 device.buzzer_gpio instead. */
    bool use_pwm;
    /* Optional: Define a secondary output pin for a vibra motor
 This is used in standalone devices to match the UI. */
    uint8_t output_vibra;
    /* Optional: Define a tertiary output pin for an active buzzer
 This is used in standalone devices to to match the UI. */
    uint8_t output_buzzer;
    /* True: Alert when a text message arrives (output_vibra) */
    bool alert_message_vibra;
    /* True: Alert when a text message arrives (output_buzzer) */
    bool alert_message_buzzer;
    /* True: Alert when the bell character is received (output_vibra) */
    bool alert_bell_vibra;
    /* True: Alert when the bell character is received (output_buzzer) */
    bool alert_bell_buzzer;
    /* The notification will toggle with 'output_ms' for this time of seconds.
 Default is 0 which means don't repeat at all. 60 would mean blink
 and/or beep for 60 seconds */
    uint16_t nag_timeout;
} ModuleConfig_ExternalNotificationConfig;

/* Store and Forward Module Config */
typedef struct _ModuleConfig_StoreForwardConfig {
    /* Enable the Store and Forward Module */
    bool enabled;
    /* TODO: REPLACE */
    bool heartbeat;
    /* TODO: REPLACE */
    uint32_t records;
    /* TODO: REPLACE */
    uint32_t history_return_max;
    /* TODO: REPLACE */
    uint32_t history_return_window;
} ModuleConfig_StoreForwardConfig;

/* Preferences for the RangeTestModule */
typedef struct _ModuleConfig_RangeTestConfig {
    /* Enable the Range Test Module */
    bool enabled;
    /* Send out range test messages from this node */
    uint32_t sender;
    /* Bool value indicating that this node should save a RangeTest.csv file. 
 ESP32 Only */
    bool save;
} ModuleConfig_RangeTestConfig;

/* Configuration for both device and environment metrics */
typedef struct _ModuleConfig_TelemetryConfig {
    /* Interval in seconds of how often we should try to send our
 device metrics to the mesh */
    uint32_t device_update_interval;
    uint32_t environment_update_interval;
    /* Preferences for the Telemetry Module (Environment)
 Enable/Disable the telemetry measurement module measurement collection */
    bool environment_measurement_enabled;
    /* Enable/Disable the telemetry measurement module on-device display */
    bool environment_screen_enabled;
    /* We'll always read the sensor in Celsius, but sometimes we might want to
 display the results in Fahrenheit as a "user preference". */
    bool environment_display_fahrenheit;
} ModuleConfig_TelemetryConfig;

/* TODO: REPLACE */
typedef struct _ModuleConfig_CannedMessageConfig {
    /* Enable the rotary encoder #1. This is a 'dumb' encoder sending pulses on both A and B pins while rotating. */
    bool rotary1_enabled;
    /* GPIO pin for rotary encoder A port. */
    uint32_t inputbroker_pin_a;
    /* GPIO pin for rotary encoder B port. */
    uint32_t inputbroker_pin_b;
    /* GPIO pin for rotary encoder Press port. */
    uint32_t inputbroker_pin_press;
    /* Generate input event on CW of this kind. */
    ModuleConfig_CannedMessageConfig_InputEventChar inputbroker_event_cw;
    /* Generate input event on CCW of this kind. */
    ModuleConfig_CannedMessageConfig_InputEventChar inputbroker_event_ccw;
    /* Generate input event on Press of this kind. */
    ModuleConfig_CannedMessageConfig_InputEventChar inputbroker_event_press;
    /* Enable the Up/Down/Select input device. Can be RAK rotary encoder or 3 buttons. Uses the a/b/press definitions from inputbroker. */
    bool updown1_enabled;
    /* Enable/disable CannedMessageModule. */
    bool enabled;
    /* Input event origin accepted by the canned message module.
 Can be e.g. "rotEnc1", "upDownEnc1" or keyword "_any" */
    char allow_input_source[16];
    /* CannedMessageModule also sends a bell character with the messages.
 ExternalNotificationModule can benefit from this feature. */
    bool send_bell;
} ModuleConfig_CannedMessageConfig;

/* Module Config */
typedef struct _ModuleConfig {
    pb_size_t which_payload_variant;
    union {
        /* TODO: REPLACE */
        ModuleConfig_MQTTConfig mqtt;
        /* TODO: REPLACE */
        ModuleConfig_SerialConfig serial;
        /* TODO: REPLACE */
        ModuleConfig_ExternalNotificationConfig external_notification;
        /* TODO: REPLACE */
        ModuleConfig_StoreForwardConfig store_forward;
        /* TODO: REPLACE */
        ModuleConfig_RangeTestConfig range_test;
        /* TODO: REPLACE */
        ModuleConfig_TelemetryConfig telemetry;
        /* TODO: REPLACE */
        ModuleConfig_CannedMessageConfig canned_message;
        /* TODO: REPLACE */
        ModuleConfig_AudioConfig audio;
    } payload_variant;
} ModuleConfig;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _ModuleConfig_AudioConfig_Audio_Baud_MIN ModuleConfig_AudioConfig_Audio_Baud_CODEC2_DEFAULT
#define _ModuleConfig_AudioConfig_Audio_Baud_MAX ModuleConfig_AudioConfig_Audio_Baud_CODEC2_700B
#define _ModuleConfig_AudioConfig_Audio_Baud_ARRAYSIZE ((ModuleConfig_AudioConfig_Audio_Baud)(ModuleConfig_AudioConfig_Audio_Baud_CODEC2_700B+1))

#define _ModuleConfig_SerialConfig_Serial_Baud_MIN ModuleConfig_SerialConfig_Serial_Baud_BAUD_DEFAULT
#define _ModuleConfig_SerialConfig_Serial_Baud_MAX ModuleConfig_SerialConfig_Serial_Baud_BAUD_921600
#define _ModuleConfig_SerialConfig_Serial_Baud_ARRAYSIZE ((ModuleConfig_SerialConfig_Serial_Baud)(ModuleConfig_SerialConfig_Serial_Baud_BAUD_921600+1))

#define _ModuleConfig_SerialConfig_Serial_Mode_MIN ModuleConfig_SerialConfig_Serial_Mode_DEFAULT
#define _ModuleConfig_SerialConfig_Serial_Mode_MAX ModuleConfig_SerialConfig_Serial_Mode_NMEA
#define _ModuleConfig_SerialConfig_Serial_Mode_ARRAYSIZE ((ModuleConfig_SerialConfig_Serial_Mode)(ModuleConfig_SerialConfig_Serial_Mode_NMEA+1))

#define _ModuleConfig_CannedMessageConfig_InputEventChar_MIN ModuleConfig_CannedMessageConfig_InputEventChar_NONE
#define _ModuleConfig_CannedMessageConfig_InputEventChar_MAX ModuleConfig_CannedMessageConfig_InputEventChar_BACK
#define _ModuleConfig_CannedMessageConfig_InputEventChar_ARRAYSIZE ((ModuleConfig_CannedMessageConfig_InputEventChar)(ModuleConfig_CannedMessageConfig_InputEventChar_BACK+1))



#define ModuleConfig_AudioConfig_bitrate_ENUMTYPE ModuleConfig_AudioConfig_Audio_Baud

#define ModuleConfig_SerialConfig_baud_ENUMTYPE ModuleConfig_SerialConfig_Serial_Baud
#define ModuleConfig_SerialConfig_mode_ENUMTYPE ModuleConfig_SerialConfig_Serial_Mode





#define ModuleConfig_CannedMessageConfig_inputbroker_event_cw_ENUMTYPE ModuleConfig_CannedMessageConfig_InputEventChar
#define ModuleConfig_CannedMessageConfig_inputbroker_event_ccw_ENUMTYPE ModuleConfig_CannedMessageConfig_InputEventChar
#define ModuleConfig_CannedMessageConfig_inputbroker_event_press_ENUMTYPE ModuleConfig_CannedMessageConfig_InputEventChar


/* Initializer values for message structs */
#define ModuleConfig_init_default                {0, {ModuleConfig_MQTTConfig_init_default}}
#define ModuleConfig_MQTTConfig_init_default     {0, "", "", "", 0, 0}
#define ModuleConfig_AudioConfig_init_default    {0, 0, _ModuleConfig_AudioConfig_Audio_Baud_MIN, 0, 0, 0, 0}
#define ModuleConfig_SerialConfig_init_default   {0, 0, 0, 0, _ModuleConfig_SerialConfig_Serial_Baud_MIN, 0, _ModuleConfig_SerialConfig_Serial_Mode_MIN}
#define ModuleConfig_ExternalNotificationConfig_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define ModuleConfig_StoreForwardConfig_init_default {0, 0, 0, 0, 0}
#define ModuleConfig_RangeTestConfig_init_default {0, 0, 0}
#define ModuleConfig_TelemetryConfig_init_default {0, 0, 0, 0, 0}
#define ModuleConfig_CannedMessageConfig_init_default {0, 0, 0, 0, _ModuleConfig_CannedMessageConfig_InputEventChar_MIN, _ModuleConfig_CannedMessageConfig_InputEventChar_MIN, _ModuleConfig_CannedMessageConfig_InputEventChar_MIN, 0, 0, "", 0}
#define ModuleConfig_init_zero                   {0, {ModuleConfig_MQTTConfig_init_zero}}
#define ModuleConfig_MQTTConfig_init_zero        {0, "", "", "", 0, 0}
#define ModuleConfig_AudioConfig_init_zero       {0, 0, _ModuleConfig_AudioConfig_Audio_Baud_MIN, 0, 0, 0, 0}
#define ModuleConfig_SerialConfig_init_zero      {0, 0, 0, 0, _ModuleConfig_SerialConfig_Serial_Baud_MIN, 0, _ModuleConfig_SerialConfig_Serial_Mode_MIN}
#define ModuleConfig_ExternalNotificationConfig_init_zero {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define ModuleConfig_StoreForwardConfig_init_zero {0, 0, 0, 0, 0}
#define ModuleConfig_RangeTestConfig_init_zero   {0, 0, 0}
#define ModuleConfig_TelemetryConfig_init_zero   {0, 0, 0, 0, 0}
#define ModuleConfig_CannedMessageConfig_init_zero {0, 0, 0, 0, _ModuleConfig_CannedMessageConfig_InputEventChar_MIN, _ModuleConfig_CannedMessageConfig_InputEventChar_MIN, _ModuleConfig_CannedMessageConfig_InputEventChar_MIN, 0, 0, "", 0}

/* Field tags (for use in manual encoding/decoding) */
#define ModuleConfig_MQTTConfig_enabled_tag      1
#define ModuleConfig_MQTTConfig_address_tag      2
#define ModuleConfig_MQTTConfig_username_tag     3
#define ModuleConfig_MQTTConfig_password_tag     4
#define ModuleConfig_MQTTConfig_encryption_enabled_tag 5
#define ModuleConfig_MQTTConfig_json_enabled_tag 6
#define ModuleConfig_AudioConfig_codec2_enabled_tag 1
#define ModuleConfig_AudioConfig_ptt_pin_tag     2
#define ModuleConfig_AudioConfig_bitrate_tag     3
#define ModuleConfig_AudioConfig_i2s_ws_tag      4
#define ModuleConfig_AudioConfig_i2s_sd_tag      5
#define ModuleConfig_AudioConfig_i2s_din_tag     6
#define ModuleConfig_AudioConfig_i2s_sck_tag     7
#define ModuleConfig_SerialConfig_enabled_tag    1
#define ModuleConfig_SerialConfig_echo_tag       2
#define ModuleConfig_SerialConfig_rxd_tag        3
#define ModuleConfig_SerialConfig_txd_tag        4
#define ModuleConfig_SerialConfig_baud_tag       5
#define ModuleConfig_SerialConfig_timeout_tag    6
#define ModuleConfig_SerialConfig_mode_tag       7
#define ModuleConfig_ExternalNotificationConfig_enabled_tag 1
#define ModuleConfig_ExternalNotificationConfig_output_ms_tag 2
#define ModuleConfig_ExternalNotificationConfig_output_tag 3
#define ModuleConfig_ExternalNotificationConfig_active_tag 4
#define ModuleConfig_ExternalNotificationConfig_alert_message_tag 5
#define ModuleConfig_ExternalNotificationConfig_alert_bell_tag 6
#define ModuleConfig_ExternalNotificationConfig_use_pwm_tag 7
#define ModuleConfig_ExternalNotificationConfig_output_vibra_tag 8
#define ModuleConfig_ExternalNotificationConfig_output_buzzer_tag 9
#define ModuleConfig_ExternalNotificationConfig_alert_message_vibra_tag 10
#define ModuleConfig_ExternalNotificationConfig_alert_message_buzzer_tag 11
#define ModuleConfig_ExternalNotificationConfig_alert_bell_vibra_tag 12
#define ModuleConfig_ExternalNotificationConfig_alert_bell_buzzer_tag 13
#define ModuleConfig_ExternalNotificationConfig_nag_timeout_tag 14
#define ModuleConfig_StoreForwardConfig_enabled_tag 1
#define ModuleConfig_StoreForwardConfig_heartbeat_tag 2
#define ModuleConfig_StoreForwardConfig_records_tag 3
#define ModuleConfig_StoreForwardConfig_history_return_max_tag 4
#define ModuleConfig_StoreForwardConfig_history_return_window_tag 5
#define ModuleConfig_RangeTestConfig_enabled_tag 1
#define ModuleConfig_RangeTestConfig_sender_tag  2
#define ModuleConfig_RangeTestConfig_save_tag    3
#define ModuleConfig_TelemetryConfig_device_update_interval_tag 1
#define ModuleConfig_TelemetryConfig_environment_update_interval_tag 2
#define ModuleConfig_TelemetryConfig_environment_measurement_enabled_tag 3
#define ModuleConfig_TelemetryConfig_environment_screen_enabled_tag 4
#define ModuleConfig_TelemetryConfig_environment_display_fahrenheit_tag 5
#define ModuleConfig_CannedMessageConfig_rotary1_enabled_tag 1
#define ModuleConfig_CannedMessageConfig_inputbroker_pin_a_tag 2
#define ModuleConfig_CannedMessageConfig_inputbroker_pin_b_tag 3
#define ModuleConfig_CannedMessageConfig_inputbroker_pin_press_tag 4
#define ModuleConfig_CannedMessageConfig_inputbroker_event_cw_tag 5
#define ModuleConfig_CannedMessageConfig_inputbroker_event_ccw_tag 6
#define ModuleConfig_CannedMessageConfig_inputbroker_event_press_tag 7
#define ModuleConfig_CannedMessageConfig_updown1_enabled_tag 8
#define ModuleConfig_CannedMessageConfig_enabled_tag 9
#define ModuleConfig_CannedMessageConfig_allow_input_source_tag 10
#define ModuleConfig_CannedMessageConfig_send_bell_tag 11
#define ModuleConfig_mqtt_tag                    1
#define ModuleConfig_serial_tag                  2
#define ModuleConfig_external_notification_tag   3
#define ModuleConfig_store_forward_tag           4
#define ModuleConfig_range_test_tag              5
#define ModuleConfig_telemetry_tag               6
#define ModuleConfig_canned_message_tag          7
#define ModuleConfig_audio_tag                   8

/* Struct field encoding specification for nanopb */
#define ModuleConfig_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,mqtt,payload_variant.mqtt),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,serial,payload_variant.serial),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,external_notification,payload_variant.external_notification),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,store_forward,payload_variant.store_forward),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,range_test,payload_variant.range_test),   5) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,telemetry,payload_variant.telemetry),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,canned_message,payload_variant.canned_message),   7) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload_variant,audio,payload_variant.audio),   8)
#define ModuleConfig_CALLBACK NULL
#define ModuleConfig_DEFAULT NULL
#define ModuleConfig_payload_variant_mqtt_MSGTYPE ModuleConfig_MQTTConfig
#define ModuleConfig_payload_variant_serial_MSGTYPE ModuleConfig_SerialConfig
#define ModuleConfig_payload_variant_external_notification_MSGTYPE ModuleConfig_ExternalNotificationConfig
#define ModuleConfig_payload_variant_store_forward_MSGTYPE ModuleConfig_StoreForwardConfig
#define ModuleConfig_payload_variant_range_test_MSGTYPE ModuleConfig_RangeTestConfig
#define ModuleConfig_payload_variant_telemetry_MSGTYPE ModuleConfig_TelemetryConfig
#define ModuleConfig_payload_variant_canned_message_MSGTYPE ModuleConfig_CannedMessageConfig
#define ModuleConfig_payload_variant_audio_MSGTYPE ModuleConfig_AudioConfig

#define ModuleConfig_MQTTConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           1) \
X(a, STATIC,   SINGULAR, STRING,   address,           2) \
X(a, STATIC,   SINGULAR, STRING,   username,          3) \
X(a, STATIC,   SINGULAR, STRING,   password,          4) \
X(a, STATIC,   SINGULAR, BOOL,     encryption_enabled,   5) \
X(a, STATIC,   SINGULAR, BOOL,     json_enabled,      6)
#define ModuleConfig_MQTTConfig_CALLBACK NULL
#define ModuleConfig_MQTTConfig_DEFAULT NULL

#define ModuleConfig_AudioConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     codec2_enabled,    1) \
X(a, STATIC,   SINGULAR, UINT32,   ptt_pin,           2) \
X(a, STATIC,   SINGULAR, UENUM,    bitrate,           3) \
X(a, STATIC,   SINGULAR, UINT32,   i2s_ws,            4) \
X(a, STATIC,   SINGULAR, UINT32,   i2s_sd,            5) \
X(a, STATIC,   SINGULAR, UINT32,   i2s_din,           6) \
X(a, STATIC,   SINGULAR, UINT32,   i2s_sck,           7)
#define ModuleConfig_AudioConfig_CALLBACK NULL
#define ModuleConfig_AudioConfig_DEFAULT NULL

#define ModuleConfig_SerialConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           1) \
X(a, STATIC,   SINGULAR, BOOL,     echo,              2) \
X(a, STATIC,   SINGULAR, UINT32,   rxd,               3) \
X(a, STATIC,   SINGULAR, UINT32,   txd,               4) \
X(a, STATIC,   SINGULAR, UENUM,    baud,              5) \
X(a, STATIC,   SINGULAR, UINT32,   timeout,           6) \
X(a, STATIC,   SINGULAR, UENUM,    mode,              7)
#define ModuleConfig_SerialConfig_CALLBACK NULL
#define ModuleConfig_SerialConfig_DEFAULT NULL

#define ModuleConfig_ExternalNotificationConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           1) \
X(a, STATIC,   SINGULAR, UINT32,   output_ms,         2) \
X(a, STATIC,   SINGULAR, UINT32,   output,            3) \
X(a, STATIC,   SINGULAR, BOOL,     active,            4) \
X(a, STATIC,   SINGULAR, BOOL,     alert_message,     5) \
X(a, STATIC,   SINGULAR, BOOL,     alert_bell,        6) \
X(a, STATIC,   SINGULAR, BOOL,     use_pwm,           7) \
X(a, STATIC,   SINGULAR, UINT32,   output_vibra,      8) \
X(a, STATIC,   SINGULAR, UINT32,   output_buzzer,     9) \
X(a, STATIC,   SINGULAR, BOOL,     alert_message_vibra,  10) \
X(a, STATIC,   SINGULAR, BOOL,     alert_message_buzzer,  11) \
X(a, STATIC,   SINGULAR, BOOL,     alert_bell_vibra,  12) \
X(a, STATIC,   SINGULAR, BOOL,     alert_bell_buzzer,  13) \
X(a, STATIC,   SINGULAR, UINT32,   nag_timeout,      14)
#define ModuleConfig_ExternalNotificationConfig_CALLBACK NULL
#define ModuleConfig_ExternalNotificationConfig_DEFAULT NULL

#define ModuleConfig_StoreForwardConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           1) \
X(a, STATIC,   SINGULAR, BOOL,     heartbeat,         2) \
X(a, STATIC,   SINGULAR, UINT32,   records,           3) \
X(a, STATIC,   SINGULAR, UINT32,   history_return_max,   4) \
X(a, STATIC,   SINGULAR, UINT32,   history_return_window,   5)
#define ModuleConfig_StoreForwardConfig_CALLBACK NULL
#define ModuleConfig_StoreForwardConfig_DEFAULT NULL

#define ModuleConfig_RangeTestConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           1) \
X(a, STATIC,   SINGULAR, UINT32,   sender,            2) \
X(a, STATIC,   SINGULAR, BOOL,     save,              3)
#define ModuleConfig_RangeTestConfig_CALLBACK NULL
#define ModuleConfig_RangeTestConfig_DEFAULT NULL

#define ModuleConfig_TelemetryConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   device_update_interval,   1) \
X(a, STATIC,   SINGULAR, UINT32,   environment_update_interval,   2) \
X(a, STATIC,   SINGULAR, BOOL,     environment_measurement_enabled,   3) \
X(a, STATIC,   SINGULAR, BOOL,     environment_screen_enabled,   4) \
X(a, STATIC,   SINGULAR, BOOL,     environment_display_fahrenheit,   5)
#define ModuleConfig_TelemetryConfig_CALLBACK NULL
#define ModuleConfig_TelemetryConfig_DEFAULT NULL

#define ModuleConfig_CannedMessageConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     rotary1_enabled,   1) \
X(a, STATIC,   SINGULAR, UINT32,   inputbroker_pin_a,   2) \
X(a, STATIC,   SINGULAR, UINT32,   inputbroker_pin_b,   3) \
X(a, STATIC,   SINGULAR, UINT32,   inputbroker_pin_press,   4) \
X(a, STATIC,   SINGULAR, UENUM,    inputbroker_event_cw,   5) \
X(a, STATIC,   SINGULAR, UENUM,    inputbroker_event_ccw,   6) \
X(a, STATIC,   SINGULAR, UENUM,    inputbroker_event_press,   7) \
X(a, STATIC,   SINGULAR, BOOL,     updown1_enabled,   8) \
X(a, STATIC,   SINGULAR, BOOL,     enabled,           9) \
X(a, STATIC,   SINGULAR, STRING,   allow_input_source,  10) \
X(a, STATIC,   SINGULAR, BOOL,     send_bell,        11)
#define ModuleConfig_CannedMessageConfig_CALLBACK NULL
#define ModuleConfig_CannedMessageConfig_DEFAULT NULL

extern const pb_msgdesc_t ModuleConfig_msg;
extern const pb_msgdesc_t ModuleConfig_MQTTConfig_msg;
extern const pb_msgdesc_t ModuleConfig_AudioConfig_msg;
extern const pb_msgdesc_t ModuleConfig_SerialConfig_msg;
extern const pb_msgdesc_t ModuleConfig_ExternalNotificationConfig_msg;
extern const pb_msgdesc_t ModuleConfig_StoreForwardConfig_msg;
extern const pb_msgdesc_t ModuleConfig_RangeTestConfig_msg;
extern const pb_msgdesc_t ModuleConfig_TelemetryConfig_msg;
extern const pb_msgdesc_t ModuleConfig_CannedMessageConfig_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ModuleConfig_fields &ModuleConfig_msg
#define ModuleConfig_MQTTConfig_fields &ModuleConfig_MQTTConfig_msg
#define ModuleConfig_AudioConfig_fields &ModuleConfig_AudioConfig_msg
#define ModuleConfig_SerialConfig_fields &ModuleConfig_SerialConfig_msg
#define ModuleConfig_ExternalNotificationConfig_fields &ModuleConfig_ExternalNotificationConfig_msg
#define ModuleConfig_StoreForwardConfig_fields &ModuleConfig_StoreForwardConfig_msg
#define ModuleConfig_RangeTestConfig_fields &ModuleConfig_RangeTestConfig_msg
#define ModuleConfig_TelemetryConfig_fields &ModuleConfig_TelemetryConfig_msg
#define ModuleConfig_CannedMessageConfig_fields &ModuleConfig_CannedMessageConfig_msg

/* Maximum encoded size of messages (where known) */
#define ModuleConfig_AudioConfig_size            19
#define ModuleConfig_CannedMessageConfig_size    49
#define ModuleConfig_ExternalNotificationConfig_size 40
#define ModuleConfig_MQTTConfig_size             169
#define ModuleConfig_RangeTestConfig_size        10
#define ModuleConfig_SerialConfig_size           26
#define ModuleConfig_StoreForwardConfig_size     22
#define ModuleConfig_TelemetryConfig_size        18
#define ModuleConfig_size                        172

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
