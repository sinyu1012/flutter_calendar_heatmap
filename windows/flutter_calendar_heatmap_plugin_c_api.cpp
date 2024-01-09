#include "include/flutter_calendar_heatmap/flutter_calendar_heatmap_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_calendar_heatmap_plugin.h"

void FlutterCalendarHeatmapPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_calendar_heatmap::FlutterCalendarHeatmapPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
