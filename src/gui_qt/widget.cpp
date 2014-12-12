/*
   Copyright (C) 2014 - 2015 by Fabian Mueller <fabianmueller5@gmx.de>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/


#include "widget.hpp"

namespace gui_qt {

void widget::cppSlot(const QVariant &v)
{
    qDebug() << "Called the C++ slot with value:" << v;

    QQuickItem *item = qobject_cast<QQuickItem*>(v.value<QObject*>());
    qDebug() << "Item dimensions:" << item->width() << item->height();
}

}  // namespace gui_qt
