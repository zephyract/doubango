/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tsdp_header_T.h
 * @brief SDP "t=" header (Timing).
 *
 * @author Mamadou Diop <diopmamadou(at)doubango.org>
 *
 * @date Created: Iat Nov 8 16:54:58 2009 mdiop
 */
#ifndef _TSDP_HEADER_T_H_
#define _TSDP_HEADER_T_H_

#include "tinySDP_config.h"
#include "tinySDP/headers/tsdp_header.h"

#include "tinySDP/headers/tsdp_header_R.h"

TSDP_BEGIN_DECLS

/**@def TSDP_HEADER_T_CREATE
* Creates new sdp "t=" header.  You must call @ref TSK_OBJECT_SAFE_FREE to free the header.
* @sa TSK_OBJECT_SAFE_FREE.
*/
#define TSDP_HEADER_T_VA_ARGS(start, stop)		tsdp_header_T_def_t, (uint64_t)start, (uint64_t)stop
#define TSDP_HEADER_T_CREATE(start, stop)			tsk_object_new(TSDP_HEADER_T_VA_ARGS(start, stop))
#define TSDP_HEADER_T_CREATE_NULL()			TSDP_HEADER_T_CREATE(0, 0)

////////////////////////////////////////////////////////////////////////////////////////////////////
/// @struct	
///
/// @brief	SDP "t=" header (Timing).
/// The "t=" lines specify the start and stop times for a session.
///   Multiple "t=" lines MAY be used if a session is active at multiple
///   irregularly spaced times; each additional "t=" line specifies an
///   additional period of time for which the session will be active.  If
///   the session is active at regular times, an "r=" line (see below)
///   should be used in addition to, and following, a "t=" line -- in which
///   case the "t=" line specifies the start and stop times of the repeat
///   sequence.
///
///
/// @par ABNF : t= 	 start-time SP stop-time *( CRLF repeat-fields ) 
/// 	
////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct tsdp_header_T_s
{	
	TSDP_DECLARE_HEADER;
	uint64_t start;
	uint64_t stop;

	tsdp_headers_R_L_t* repeat_fields;
}
tsdp_header_T_t;

typedef tsk_list_t tsdp_headers_T_L_t;

tsdp_header_T_t *tsdp_header_T_parse(const char *data, size_t size);

TINYSDP_GEXTERN const tsk_object_def_t *tsdp_header_T_def_t;

TSDP_END_DECLS

#endif /* _TSDP_HEADER_P_H_ */
