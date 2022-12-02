#include <time.h>

typedef struct {
    char * name;
    struct tm openingDate;
    struct tm closingDate;
    char * state;
    char * lawyerName;
    char * clerkName;
} Case;

