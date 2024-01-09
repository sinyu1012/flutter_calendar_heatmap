
extension DateTimeExtension on DateTime {
  DateTime get midnight => DateTime(year, month, day);

  bool get isToday {
    return isSameDate(DateTime.now());
  }

  bool get isYesterday {
    final yesterday = DateTime.now().subtract(const Duration(days: 1));
    return isSameDate(yesterday);
  }

  bool isSameDate(DateTime other) => year == other.year && month == other.month && day == other.day;

}
