
/* Generated data (by glib-mkenums) */

#include "idotypebuiltins.h"
/* enumerations from "idorange.h" */
#include "idorange.h"
GType
ido_range_style_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { IDO_RANGE_STYLE_DEFAULT, "IDO_RANGE_STYLE_DEFAULT", "default" },
        { IDO_RANGE_STYLE_SMALL, "IDO_RANGE_STYLE_SMALL", "small" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("IdoRangeStyle"), values);
    }
  return enum_type_id;
}
/* enumerations from "idoscalemenuitem.h" */
#include "idoscalemenuitem.h"
GType
ido_scale_menu_item_style_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { IDO_SCALE_MENU_ITEM_STYLE_NONE, "IDO_SCALE_MENU_ITEM_STYLE_NONE", "none" },
        { IDO_SCALE_MENU_ITEM_STYLE_IMAGE, "IDO_SCALE_MENU_ITEM_STYLE_IMAGE", "image" },
        { IDO_SCALE_MENU_ITEM_STYLE_LABEL, "IDO_SCALE_MENU_ITEM_STYLE_LABEL", "label" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("IdoScaleMenuItemStyle"), values);
    }
  return enum_type_id;
}
/* enumerations from "idotimeline.h" */
#include "idotimeline.h"
GType
ido_timeline_direction_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { IDO_TIMELINE_DIRECTION_FORWARD, "IDO_TIMELINE_DIRECTION_FORWARD", "forward" },
        { IDO_TIMELINE_DIRECTION_BACKWARD, "IDO_TIMELINE_DIRECTION_BACKWARD", "backward" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("IdoTimelineDirection"), values);
    }
  return enum_type_id;
}
GType
ido_timeline_progress_type_get_type(void) {
  static GType enum_type_id = 0;
  if (G_UNLIKELY (!enum_type_id))
    {
      static const GEnumValue values[] = {
        { IDO_TIMELINE_PROGRESS_LINEAR, "IDO_TIMELINE_PROGRESS_LINEAR", "linear" },
        { IDO_TIMELINE_PROGRESS_SINUSOIDAL, "IDO_TIMELINE_PROGRESS_SINUSOIDAL", "sinusoidal" },
        { IDO_TIMELINE_PROGRESS_EXPONENTIAL, "IDO_TIMELINE_PROGRESS_EXPONENTIAL", "exponential" },
        { IDO_TIMELINE_PROGRESS_EASE_IN_EASE_OUT, "IDO_TIMELINE_PROGRESS_EASE_IN_EASE_OUT", "ease-in-ease-out" },
        { 0, NULL, NULL }
      };
      enum_type_id = g_enum_register_static (g_intern_static_string ("IdoTimelineProgressType"), values);
    }
  return enum_type_id;
}

/* Generated data ends here */

