#pragma once
#include "string.h"
#include <pebble.h>

typedef enum {
  CA    = 0x0,
  DE    = 0x1,
  EN_GB = 0x2,
  EN_US = 0x3,
  ES    = 0x4,
  FR    = 0x5,
  NO    = 0x6,
  SV    = 0x7
} Language;

#define FUZZINESS_FIVE 0
#define FUZZINESS_FIFTEEN 1
#define FUZZINESS_THIRTY 2
#define FUZZINESS_TOD 3
#define FUZZINESS_WEEKDAY 4
#define FUZZINESS_WEEK 5

extern int fuzziness;

void time_to_words(Language lang, struct tm *t, char* words, size_t buffer_size);

const char *get_alert(Language lang, int index);

#define ALERT_DISCONNECTED 0
#define ALERT_NOBT         1
#define ALERT_RECONNECTED  2
#define ALERT_CHARGING     3
#define ALERT_CHARGED      4
