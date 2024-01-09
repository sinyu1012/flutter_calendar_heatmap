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