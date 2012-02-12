#ifndef _METERPRETER_SOURCE_EXTENSION_MIRV_MIRV_H
#define _METERPRETER_SOURCE_EXTENSION_MIRV_MIRV_H
#include "../../common/common.h"

#define TLV_TYPE_EXTENSION_MIRV	0


#define TLV_TYPE_MIRV_LUA_CODE	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_STRING,				\
				TLV_TYPE_EXTENSION_MIRV,		\
				TLV_EXTENSIONS + 681)

#define TLV_TYPE_MIRV_LUA_RETMSG	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_STRING,				\
				TLV_TYPE_EXTENSION_MIRV,		\
				TLV_EXTENSIONS + 682)
#endif