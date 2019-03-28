#include <oniguruma.h>

extern int CompileAndMatch(const void *p, int np, const void *s, int ns);

extern int NewOnigRegex(const void *pattern, int pattern_length, int option, OnigRegex *regex, OnigRegion **region, OnigEncoding *encoding, OnigErrorInfo **error_info, char **error_buffer);

extern int SearchOnigRegex(const void *str, int str_length, int offset, int option, OnigRegex regex, OnigRegion *region, OnigErrorInfo *error_info, char *error_buffer, int *captures, int *numCaptures);

extern int MatchOnigRegex(const void *str, int str_length, int offset, int option, OnigRegex regex, OnigRegion *region);

extern int LookupOnigCaptureByName(char *name, int name_length, OnigRegex regex, OnigRegion *region);

extern int GetCaptureNames(OnigRegex regex, void *buffer, int bufferSize, int* groupNumbers);
