#ifndef dht_header
#define dht_header
#include <Arduino.h>
#include "config.h"

void temp_sensor_setup(void);
void temp_sensor_read(read_values *storage, time_t timestamp);

#endif // !dht_header
