/*  This file is part of the KDE project

    Copyright (C) 2007 John Tapsell <tapsell@kde.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.

*/

#if defined __linux__
#include "processes_linux_p.cpp"
#elif defined __FreeBSD__ || defined __FreeBSD_kernel__
#include "processes_freebsd_p.cpp"
#elif defined __DragonFly__
#include "processes_dragonfly_p.cpp"
#elif defined __OpenBSD__
#include "processes_openbsd_p.cpp"
#elif defined __NetBSD__
#include "processes_netbsd_p.cpp"
#elif defined __GNU__ || defined __APPLE__
#include "processes_gnu_p.cpp"
#else
// Use Qt's OS detection
#include <qglobal.h>
#ifdef Q_OS_SOLARIS
#include "processes_solaris_p.cpp"
#endif
#endif

