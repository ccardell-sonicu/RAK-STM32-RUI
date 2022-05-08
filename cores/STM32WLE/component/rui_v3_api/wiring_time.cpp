#include "wiring_time.h"
#include "udrv_rtc.h"

unsigned long millis()
{
    return udrv_rtc_get_timestamp((RtcID_E)SYS_RTC_COUNTER_PORT);
}

unsigned long micros()
{
    return millis() * 1000;
}

