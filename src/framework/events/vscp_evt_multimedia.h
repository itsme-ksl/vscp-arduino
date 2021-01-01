/* The MIT License (MIT)
 *
 * Copyright (c) 2014 - 2021, Andreas Merkle
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
@brief  Multimedia
@file   vscp_evt_multimedia.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
Dedicated class for multimedia functionality. This class was introduced to supplement the control
class and to offer multimedia specific control events.

This file is automatically generated. Don't change it manually.

*******************************************************************************/

#ifndef __VSCP_EVT_MULTIMEDIA_H__
#define __VSCP_EVT_MULTIMEDIA_H__

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include <stdint.h>
#include "..\user\vscp_platform.h"

/*******************************************************************************
    COMPILER SWITCHES
*******************************************************************************/

/*******************************************************************************
    CONSTANTS
*******************************************************************************/

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

/**
 * General event
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendGeneralEvent(void);

/**
 * Playback
 * 
 * @param[in] function Function (See below)
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendPlayback(uint8_t function, uint8_t zone, uint8_t subZone);

/**
 * NavigatorKey English
 * 
 * @param[in] function Function
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendNavigatorkeyEnglish(uint8_t function, uint8_t zone, uint8_t subZone);

/**
 * Adjust Contrast
 * 
 * @param[in] contrast A value between 0 and 127 indicates the specific contrast level to set. A value
 * between 128 and 159 is change down by the specified number of contrast levels. A value between 160
 * and 191 is change up by the specified number of contrast levels. A value of 255 means that this is
 * and extended event and that the specific contrast level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustContrast(uint8_t contrast, uint8_t zone, uint8_t subZone);

/**
 * Adjust Focus
 * 
 * @param[in] focus A value between 0 and 127 indicates the specific focus level to set. A value
 * between 128 and 159 is change down by the specified number of focus levels. A value between 160 and
 * 191 is change up by the specified number of focus levels. A value of 255 means that this is and
 * extended event and that the specific focus level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustFocus(uint8_t focus, uint8_t zone, uint8_t subZone);

/**
 * Adjust Tint
 * 
 * @param[in] tint A value between 0 and 127 indicates the specific tint level to set. A value between
 * 128 and 159 is change down by the specified number of tint levels. A value between 160 and 191 is
 * change up by the specified number of tint levels. A value of 255 means that this is and extended
 * event and that the specific tint level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustTint(uint8_t tint, uint8_t zone, uint8_t subZone);

/**
 * Adjust Color Balance
 * 
 * @param[in] reserved Reserved.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustColorBalance(uint8_t reserved, uint8_t zone, uint8_t subZone);

/**
 * Adjust Brightness
 * 
 * @param[in] brightness A value between 0 and 127 indicates the specific brightness level to set. A
 * value between 128 and 159 is change down by the specified number of brightness levels. A value
 * between 160 and 191 is change up by the specified number of brightness levels. A value of 255 means
 * that this is and extended event and that the specific brightness level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustBrightness(uint8_t brightness, uint8_t zone, uint8_t subZone);

/**
 * Adjust Hue
 * 
 * @param[in] hue A value between 0 and 127 indicates the specific hue level to set. A value between
 * 128 and 159 is change down by the specified number of hue levels. A value between 160 and 191 is
 * change up by the specified number of hue levels. A value of 255 means that this is and extended
 * event and that the specific hue level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustHue(uint8_t hue, uint8_t zone, uint8_t subZone);

/**
 * Adjust Bass
 * 
 * @param[in] bass A value between 0 and 127 indicates the specific bass level to set. A value between
 * 128 and 159 is change down by the specified number of bass levels. A value between 160 and 191 is
 * change up by the specified number of bass levels. A value of 255 means that this is and extended
 * event and that the specific bass level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustBass(uint8_t bass, uint8_t zone, uint8_t subZone);

/**
 * Adjust Treble
 * 
 * @param[in] treble 0 A value between 0 and 127 indicates the specific treble level to set. A value
 * between 128 and 159 is change down by the specified number of treble levels. A value between 160
 * and 191 is change up by the specified number of treble levels. A value of 255 means that this is
 * and extended event and that the specific treble level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustTreble(uint8_t treble, uint8_t zone, uint8_t subZone);

/**
 * Adjust Master Volume
 * 
 * @param[in] volume A value between 0 and 127 indicates the specific volume level to set. A value
 * between 128 and 159 is change down by the specified number of volume levels. A value between 160
 * and 191 is change up by the specified number of volume levels. A value of 255 means that this is
 * and extended event and that the specific volume level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustMasterVolume(uint8_t volume, uint8_t zone, uint8_t subZone);

/**
 * Adjust Front Volume
 * 
 * @param[in] volume A value between 0 and 127 indicates the specific volume level to set. A value
 * between 128 and 159 is change down by the specified number of volume levels. A value between 160
 * and 191 is change up by the specified number of volume levels. A value of 255 means that this is
 * and extended event and that the specific volume level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustFrontVolume(uint8_t volume, uint8_t zone, uint8_t subZone);

/**
 * Adjust Center Volume
 * 
 * @param[in] volume A value between 0 and 127 indicates the specific volume level to set. A value
 * between 128 and 159 is change down by the specified number of volume levels. A value between 160
 * and 191 is change up by the specified number of volume levels. A value of 255 means that this is
 * and extended event and that the specific volume level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustCenterVolume(uint8_t volume, uint8_t zone, uint8_t subZone);

/**
 * Adjust Rear Volume
 * 
 * @param[in] volume A value between 0 and 127 indicates the specific volume level to set. A value
 * between 128 and 159 is change down by the specified number of volume levels. A value between 160
 * and 191 is change up by the specified number of volume levels. A value of 255 means that this is
 * and extended event and that the specific volume level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustRearVolume(uint8_t volume, uint8_t zone, uint8_t subZone);

/**
 * Adjust Side Volume
 * 
 * @param[in] volume A value between 0 and 127 indicates the specific volume level to set. A value
 * between 128 and 159 is change down by the specified number of volume levels. A value between 160
 * and 191 is change up by the specified number of volume levels. A value of 255 means that this is
 * and extended event and that the specific volume level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendAdjustSideVolume(uint8_t volume, uint8_t zone, uint8_t subZone);

/* "Reserved" not supported. No frame defined. */

/* "Reserved" not supported. No frame defined. */

/* "Reserved" not supported. No frame defined. */

/* "Reserved" not supported. No frame defined. */

/**
 * Select Disk
 * 
 * @param[in] discNo A value between 0 and 127 indicates the specific disk number. A value between 128
 * and 159 is change down by the specified number of disks. A value between 160 and 191 is change up
 * by the specified number of disks. A value of 200 means select a random disk. A value of 255 means
 * that this is and extended event and that the disk number is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectDisk(uint8_t discNo, uint8_t zone, uint8_t subZone);

/**
 * Select Track
 * 
 * @param[in] track A value between 0 and 127 indicates the track number. A value between 128 and 159
 * is change down by the specified number of tracks. A value between 160 and 191 is change up by the
 * specified number of tracks. A value of 200 means select a random track. A value of 255 means that
 * this is and extended event and that the track number is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectTrack(uint8_t track, uint8_t zone, uint8_t subZone);

/**
 * Select Album/Play list
 * 
 * @param[in] album A value between 0 and 127 indicates the album/play-list number. A value between
 * 128 and 159 is change down by the specified number of albums/play-lists. A value between 160 and
 * 191 is change up by the specified number of albums. A value of 200 means select a random album. A
 * value of 255 means that this is and extended event and that the album number is sent in byte 3 and
 * after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectAlbumPlayList(uint8_t album, uint8_t zone, uint8_t subZone);

/**
 * Select Channel
 * 
 * @param[in] channel A value between 0 and 127 indicates the channel number. A value between 128 and
 * 159 is change down by the specified number of channels. A value between 160 and 191 is change up by
 * the specified number of channels. A value of 200 means select a random channel. A value of 255
 * means that this is and extended event and that the channel number is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectChannel(uint8_t channel, uint8_t zone, uint8_t subZone);

/**
 * Select Page
 * 
 * @param[in] page A value between 0 and 127 indicates the page number. A value between 128 and 159 is
 * change down by the specified number of pages. A value between 160 and 191 is change up by the
 * specified number of pages. A value of 200 means select a random page. A value of 255 means that
 * this is and extended event and that the page number is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectPage(uint8_t page, uint8_t zone, uint8_t subZone);

/**
 * Select Chapter
 * 
 * @param[in] chapter A value between 0 and 127 indicates the chapter number. A value between 128 and
 * 159 is change down by the specified number of chapters. A value between 160 and 191 is change up by
 * the specified number of chapters. A value of 200 means select a random chapter. A value of 255
 * means that this is and extended event and that the chapter number is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectChapter(uint8_t chapter, uint8_t zone, uint8_t subZone);

/**
 * Select Screen Format
 * 
 * @param[in] format 0 = Auto, 1 = Just, 2 = Norma,l 3 = Zoom.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectScreenFormat(uint8_t format, uint8_t zone, uint8_t subZone);

/**
 * Select Input Source
 * 
 * @param[in] source Device code
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectInputSource(uint8_t source, uint8_t zone, uint8_t subZone);

/**
 * Select Output
 * 
 * @param[in] output Output Code
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSelectOutput(uint8_t output, uint8_t zone, uint8_t subZone);

/**
 * Record
 * 
 * @param[in] function 0 - Start to record, 1 - Stop record, 2 - Disable, AGC 3 - Enable AGC.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendRecord(uint8_t function, uint8_t zone, uint8_t subZone);

/**
 * Set Recording Volume
 * 
 * @param[in] volume A value between 0 and 127 indicates the specific contrast level to set. A value
 * between 128 and 159 is change down by the specified number of contrast levels. A value between 160
 * and 191 is change up by the specified number of contrast levels. A value of 255 means that this is
 * and extended event and that the specific contrast level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSetRecordingVolume(uint8_t volume, uint8_t zone, uint8_t subZone);

/**
 * Tivo Function
 * 
 * @param[in] tivoCode TIVO Code
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendTivoFunction(uint8_t tivoCode, uint8_t zone, uint8_t subZone);

/**
 * Get Current Title
 * 
 * @param[in] reserved Reserved.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendGetCurrentTitle(uint8_t reserved, uint8_t zone, uint8_t subZone);

/**
 * Set media position in milliseconds
 * 
 * @param[in] reserved Reserved
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] pos Position in milliseconds, This is an integer with a size specified by the event
 * size. This 0xFF, 0xFFFF, 0xFFFFFF, 0xFFFFFFFF and 0xFFFFFFFFFF is the maximum that can be sent for
 * different sizes. (array[5])
 * @param[in] possize Size in byte.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSetMediaPositionInMilliseconds(uint8_t reserved, uint8_t zone, uint8_t subZone, uint8_t const * const pos, uint8_t posSize);

/**
 * Get media information
 * 
 * @param[in] type Type of media information requested. 1 - Current Title, 1 - Get Folders, 2 - Get
 * Disks, 3 - Get Tracks, 4 - Get Albums/Play list,s 5 - Get Channels, 6 - Get Pages, 7 - Get Chapters
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendGetMediaInformation(uint8_t type, uint8_t zone, uint8_t subZone);

/**
 * Remove Item from Album
 * 
 * @param[in] item 0-128 - Pos to remove from album/play-list A value of 255 means that this is and
 * extended event and that the specific contrast level is sent in byte 3 and after.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendRemoveItemFromAlbum(uint8_t item, uint8_t zone, uint8_t subZone);

/**
 * Remove all Items from Album
 * 
 * @param[in] reserved Reserved.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendRemoveAllItemsFromAlbum(uint8_t reserved, uint8_t zone, uint8_t subZone);

/**
 * Save Album/Play list
 * 
 * @param[in] function 0 - Do not overwrite if it already exists 1 - Overwrite if it exist.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendSaveAlbumPlayList(uint8_t function, uint8_t zone, uint8_t subZone);

/**
 * Multimedia Control
 * 
 * @param[in] control Control codes
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] index Index. Base 0. Increase by one for every fragment of the title sent.
 * @param[in] data Data. (array[5])
 * @param[in] datasize Size in byte.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_multimedia_sendMultimediaControl(uint8_t control, uint8_t zone, uint8_t subZone, uint8_t index, uint8_t const * const data, uint8_t dataSize);

/* "Multimedia Control response" not supported. No frame defined. */

#endif  /* __VSCP_EVT_MULTIMEDIA_H__ */
