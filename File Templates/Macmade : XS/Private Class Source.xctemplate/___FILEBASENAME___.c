/*******************************************************************************
 * Copyright (c) ___YEAR___, Jean-David Gadina <macmade@eosgarden.com>
 * Distributed under the Boost Software License, Version 1.0.
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ******************************************************************************/
 
/* $Id$ */

/*!
 * @file        ___FILEBASENAME___.c
 * @brief       Private implementation for the ___FILEBASENAME___ class
 * @author      Jean-David Gadina <macmade@eosgarden.com>
 */

#include "XS.h"
#include "___FILEBASENAME___.h"

/*!
 * @var         ___FILEBASENAME___Class
 * @brief       Runtime class definition
 */
static const XSClassInfos ___FILEBASENAME___Class =
{
    "",                 /* Class name */
    sizeof( ___FILEBASENAME___ ),       /* Object size */
    NULL,               /* Constructor */
    NULL,               /* Destructor */
    NULL,               /* Default initializer */
    NULL,               /* Object copy */
    NULL,               /* Object description */
    NULL                /* Object comparison */
};

/*!
 * @var         ___FILEBASENAME___ClassID
 * @brief       Type ID for the runtime class
 */
XSClassID ___FILEBASENAME___ClassID;

void ___FILEBASENAME____Initialize( void )
{
    ___FILEBASENAME___ClassID = XSRuntime_RegisterClass( &__Class );
}
