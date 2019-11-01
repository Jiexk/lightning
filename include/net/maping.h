#ifndef __MAPING_H__
#define __MAPING_H__

/*from maping.c*/

#include "net_lib.h"

#define HOST2NID    "network/host2nid"
#define NID2NETINFO "network/nid2netinfo"
#define MAPING_MISC "misc"

int maping_init(void);
int maping_nid2netinfo(const nid_t *nid, ltg_net_info_t *info);
int maping_addr2nid(const char *addr, nid_t *nid);
int maping_nid2host(const nid_t *nid, char *hostname);
int maping_getmaster(nid_t *nid, int force);
int maping_set(const char *type, const char *_key, const char *value);
int maping_get(const char *type, const char *_key, char *value, time_t *ctime);
int maping_drop(const char *type, const char *_key);

#endif
