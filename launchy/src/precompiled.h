/*
Launchy: Application Launcher
Copyright (C) 2007-2009  Simon Capewell

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef PRECOMPILED_H
#define PRECOMPILED_H

#ifdef _MSC_VER
#pragma warning(push,3)
#define _CRT_SECURE_NO_WARNINGS
#endif

//#define _WIN32_WINNT 0x0600
//#define _WIN32_IE 0x0700

//#include <sdkddkver.h>
//#include <windows.h>
#include <qt_windows.h>
#include <tchar.h>
#include <string.h>
#include <shlobj.h>
#include <shlguid.h>
#include <shobjidl.h>
#include <shellapi.h>
#include <commctrl.h>
#include <commoncontrols.h>
#include <userenv.h>
#include <lm.h>



#if QT_VERSION >= 0x050000
#   include <QtWidgets>
#endif

#include <QtGui>
#include <QtNetwork>
#include <QFuture>

#ifdef _MSC_VER
#pragma warning(pop)
#endif

#include <stdlib.h>
#include <memory>

using namespace std;

#endif // PRECOMPILED_H
