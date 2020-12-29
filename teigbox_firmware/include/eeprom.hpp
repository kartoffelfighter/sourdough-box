#ifndef eeprom_header
#define eeprom_header

void write_eeprom_initially(set_values *preset, quickcall *quickcall_buttons);
void write_preset_to_eeprom(set_values *preset);
void read_preset_from_eeprom(set_values *preset);
void write_fastcalls_to_eeprom(quickcall *quickcall_buttons);
void read_fastcalls_from_eeprom(quickcall *quickcall_buttons);
#endif // !eeprom_header
