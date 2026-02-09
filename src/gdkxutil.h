#pragma once

#include <gdk/gdk.h>
#include <gdk/gdkx.h>

static inline gboolean gdk_is_under_x11(void)
{
    return GDK_IS_X11_DISPLAY(gdk_display_get_default());
}
