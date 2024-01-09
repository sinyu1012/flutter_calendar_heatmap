# flutter_calendar_heatmap


[![pub](https://img.shields.io/pub/v/flutter_calendar_heatmap)](https://pub.dev/packages/flutter_calendar_heatmap)
[![stars](https://img.shields.io/github/stars/sinyu1012/flutter_calendar_heatmap)](https://github.com/sinyu1012/flutter_calendar_heatmap)
[![license](https://img.shields.io/github/license/sinyu1012/flutter_calendar_heatmap)](./LICENSE)



Flutter heatmap calendar inspired by github contribution chart.

<img src="https://github.com/sinyu1012/flutter_calendar_heatmap/blob/main/images/img.jpg?raw=true" alt="img" style="zoom:50%;" />

## Getting Started

## Usage

### 1 - Depend on it

Add it to your package's pubspec.yaml file

```
dependencies:
  flutter_calendar_heatmap: ^0.1.0
```



### 2 - Install it

Install packages from the command line

```
flutter packages get
```



### 3 - Use it

example code:

```dart
class _MyAppState extends State<MyApp> {
  Map<DateTime, int> _data = {};

  @override
  void initState() {
    _initExampleData();
    super.initState();
  }

  void _initExampleData() {
    var rng = Random();
    var now = DateTime.now();
    var today = DateTime(now.year, now.month, now.day);
    for (int i = 0; i < 200; i++) {
      DateTime date = today.subtract(Duration(days: i));
      _data[date] = rng.nextInt(6); // Random number between 0 and 5
    }
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Heatmap plugin example app'),
        ),
        body: SingleChildScrollView(
          child: Padding(
            padding: const EdgeInsets.all(20),
            child: Column(
              children: [
                const SizedBox(height: 16),
                const Text("HeatMap", textScaleFactor: 1.4),
                const Text(
                  "Flutter heatmap calendar inspired by github contribution chart.",
                  textAlign: TextAlign.center,
                ),
                const SizedBox(height: 30),
                HeatMap(aspectRatio: 2.3, data: _data),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
```



# flutter_qiniu_upload

[![support-android](https://img.shields.io/badge/support-Android-green)](https://pub.dev/packages/flutter_qiniu_upload)
[![pub](https://img.shields.io/pub/v/flutter_qiniu_upload)](https://pub.dev/packages/flutter_qiniu_upload)
[![stars](https://img.shields.io/github/stars/bruce3x/flutter_qiniu_upload)](https://github.com/bruce3x/flutter_qiniu_upload)
[![license](https://img.shields.io/github/license/bruce3x/flutter_qiniu_upload)](./LICENSE)

A flutter plugin for Qiniu file upload. Support multiple file uploads, listen progress and cancel uploads. 

七牛文件上传插件，支持多文件上传、监听进度和取消上传。

## Getting Started

### 初始化

```dart
QiniuUpload.initialize();
```


### 直接上传

```dart
final qiniuFile = await QiniuUpload.uploadDirectly(file, uploadToken, key);
```


### 监听进度
```dart
final requestId = await QiniuUpload.upload(file, uploadToken, key);
QiniuUpload.progress(requestId).listen((progress) {
  print(progress.percent);
});
```

### 取消上传

```dart
final requestId = await QiniuUpload.upload(file, uploadToken, key);
QiniuUpload.cancel(requestId);
```