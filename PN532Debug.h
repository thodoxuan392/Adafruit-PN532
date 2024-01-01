#ifndef PN532_DEBUG_H
#define PN532_DEBUG_H

#include <utils/utils_logger.h>

#define PN532DEBUG  1
#define DMSG_STR(str)       utils_log_raw("%s", str)
#define DMSG_CHAR(ch)       utils_log_raw("%c", ch)
#define DMSG_HEX(num)       utils_log_raw("%x", num)
#define DMSG_INT(num)       utils_log_raw("%d", num)


#endif // PN532_DEBUG_H
