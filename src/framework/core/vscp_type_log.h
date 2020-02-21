/* The MIT License (MIT)
 *
 * Copyright (c) 2014 - 2020, Andreas Merkle
 * http://www.blue-andi.de
 * vscp@blue-andi.de
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/*******************************************************************************
    DESCRIPTION
*******************************************************************************/
/**
@brief  Logging
@file   vscp_type_log.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
Logging functionality.

This file is automatically generated. Don't change it manually.

*******************************************************************************/

#ifndef __VSCP_TYPE_LOG_H__
#define __VSCP_TYPE_LOG_H__

/** @defgroup vscp_type_log Logging
 * Level 1 protocol class types
 * @{
 * @ingroup vscp_l1
 */

/*******************************************************************************
    INCLUDES
*******************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/*******************************************************************************
    COMPILER SWITCHES
*******************************************************************************/

/*******************************************************************************
    CONSTANTS
*******************************************************************************/

/**
 * General Event.
 */
#define VSCP_TYPE_LOG_GENERAL 0

/**
 * Message for Log. Several frames have to be sent for a event that take up more the five bytes which
 * is the maximum for each frame. In this case the zero based index (byte 2) should be increased for
 * each frame.
 */
#define VSCP_TYPE_LOG_MESSAGE 1

/**
 * Start logging.
 */
#define VSCP_TYPE_LOG_START   2

/**
 * Stop logging.
 */
#define VSCP_TYPE_LOG_STOP    3

/**
 * Set level for logging.
 */
#define VSCP_TYPE_LOG_LEVEL   4

/*******************************************************************************
    MACROS
*******************************************************************************/

/*******************************************************************************
    TYPES AND STRUCTURES
*******************************************************************************/

/*******************************************************************************
    VARIABLES
*******************************************************************************/

/*******************************************************************************
    FUNCTIONS
*******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif  /* __VSCP_TYPE_LOG_H__ */

/** @} */
