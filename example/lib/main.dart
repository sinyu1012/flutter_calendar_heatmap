import 'dart:math';

import 'package:flutter/material.dart';
import 'package:flutter_calendar_heatmap/flutter_calendar_heatmap.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatefulWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  State<MyApp> createState() => _MyAppState();
}

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
