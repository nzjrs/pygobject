/* -*- Mode: C; c-basic-offset: 4 -*-
 * pygtk- Python bindings for the GTK toolkit.
 * Copyright (C) 2008  Johan Dahlin
 *
 *   giomodule.c: module wrapping the GIO library
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

#ifndef __PYGIO_UTILS_H__
#define __PYGIO_UTILS_H__

#define NO_IMPORT_PYGOBJECT
#include <Python.h>
#include <pygobject.h>
#include <gio/gio.h>

extern PyTypeObject PyGCancellable_Type;

gboolean pygio_check_cancellable(PyGObject *pycancellable,
				 GCancellable **cancellable);

#endif /* __PYGIO_UTILS_H__ */