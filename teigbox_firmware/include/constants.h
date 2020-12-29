#ifndef constants
#define constants
// Structs
// -----------------------------------------------------------------------------------------
// uses the time since power on since no rtc is present
struct time_t
{
    int millis; // not needed for time display but for overflow
    int seconds;
    int minutes;
    int hours;
};

// save to eeprom after 2 minutes without changes
struct set_values
{
    float humidity;
    float temperature;
};

// stores the current values for humidity and temperature with their measured timestamp
struct read_values
{
    set_values values;
    time_t timestamp;
};

// save to eeprom as soon as set
struct quickcall
{
    set_values button_1;
    set_values button_2;
    set_values button_3;
};
#endif // !constants