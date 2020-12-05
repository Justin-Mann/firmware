/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.1 */

#ifndef PB_PORTNUMS_PB_H_INCLUDED
#define PB_PORTNUMS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _PortNum {
    PortNum_UNKNOWN_APP = 0,
    PortNum_TEXT_MESSAGE_APP = 1,
    PortNum_GPIO_APP = 2,
    PortNum_POSITION_APP = 3,
    PortNum_NODEINFO_APP = 4,
    PortNum_PRIVATE_APP = 256,
    PortNum_IP_TUNNEL_APP = 1024
} PortNum;

/* Helper constants for enums */
#define _PortNum_MIN PortNum_UNKNOWN_APP
#define _PortNum_MAX PortNum_IP_TUNNEL_APP
#define _PortNum_ARRAYSIZE ((PortNum)(PortNum_IP_TUNNEL_APP+1))


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
