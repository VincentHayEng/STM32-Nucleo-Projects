#include <stdint.h>

typedef enum {
	digital_ir_sensor_state__disabled = 0,
	digital_ir_sensor_state__normal =  1,
	digital_ir_sensor_state__fault = 2,
	digital_ir_sensor_state__undefined = 3
} digital_ir_sensor_state_t;

typedef struct {
	uint8_t 	enabled;
	uint8_t 	state;
	uint8_t 	reading;
} digital_ir_sensor_t;
