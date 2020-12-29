#ifndef teigbox_fw_header
#define teigbox_fw_header
#include "config.h"
// firmware related internal uses
unsigned long ms_begin_loop = 0;
time_t current_time;
read_values current_values;
set_values preset;
quickcall quickcall_buttons;

#endif // !teigbox_fw_header