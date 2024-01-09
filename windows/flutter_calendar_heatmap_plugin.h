#ifndef FLUTTER_PLUGIN_FLUTTER_CALENDAR_HEATMAP_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_CALENDAR_HEATMAP_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flutter_calendar_heatmap {

class FlutterCalendarHeatmapPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FlutterCalendarHeatmapPlugin();

  virtual ~FlutterCalendarHeatmapPlugin();

  // Disallow copy and assign.
  FlutterCalendarHeatmapPlugin(const FlutterCalendarHeatmapPlugin&) = delete;
  FlutterCalendarHeatmapPlugin& operator=(const FlutterCalendarHeatmapPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flutter_calendar_heatmap

#endif  // FLUTTER_PLUGIN_FLUTTER_CALENDAR_HEATMAP_PLUGIN_H_
