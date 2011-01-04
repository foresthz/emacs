/* Header for xg_select.
   Copyright (C) 2009, 2010, 2011
     Free Software Foundation, Inc.

This file is part of GNU Emacs.

GNU Emacs is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

GNU Emacs is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef XGSELECT_H
#define XGSELECT_H

#include "lisp.h"
#include "systime.h"
#include "sysselect.h"

extern int xg_select P_ ((int max_fds,
                          SELECT_TYPE *rfds,
                          SELECT_TYPE *wfds,
                          SELECT_TYPE *efds,
                          EMACS_TIME *timeout));

extern void xgselect_initialize P_ ((void));

#endif /* XGSELECT_H */

/* arch-tag: 0c5392a8-3a41-41eb-839c-58e6595926f0
   (do not change this comment) */
