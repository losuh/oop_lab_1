#include <gtest/gtest.h>
#include "count_one.h"

// Тест для базовых случаев
TEST(CountOneTest, BasicCases) {
    EXPECT_EQ(counter(0, 0), 0);    // 0: 0 единиц
    EXPECT_EQ(counter(1, 1), 1);    // 1: 1 единица
    EXPECT_EQ(counter(2, 2), 1);    // 2: 10 - 1 единица
    EXPECT_EQ(counter(3, 3), 2);    // 3: 11 - 2 единицы
}

// Тест для диапазонов чисел
TEST(CountOneTest, NumberRanges) {
    // Диапазон 0-1: 0(0) + 1(1) = 1
    EXPECT_EQ(counter(0, 1), 1);

    // Диапазон 0-3: 0(0) + 1(1) + 2(1) + 3(2) = 4
    EXPECT_EQ(counter(0, 3), 4);

    // Диапазон 4-7: 4(1) + 5(2) + 6(2) + 7(3) = 8
    EXPECT_EQ(counter(4, 7), 8);
}

// Тест для одинаковых чисел
TEST(CountOneTest, SameNumbers) {
    EXPECT_EQ(counter(5, 5), 2);    // 5: 101 - 2 единицы
    EXPECT_EQ(counter(10, 10), 2);  // 10: 1010 - 2 единицы
    EXPECT_EQ(counter(15, 15), 4);  // 15: 1111 - 4 единицы
}

// Тест для больших диапазонов
TEST(CountOneTest, LargeRanges) {
    // Диапазон 0-15: можно проверить по формуле
    // Каждый бит появляется в половине чисел
    // Всего чисел: 16, битов: 4 → 16 * 4 / 2 = 32 единицы
    EXPECT_EQ(counter(0, 15), 32);
}
