#include <RSTest.h>
#include <RSBitmask.h>

void test_RSBitmask() {

    DESCRIBE("RSBitmask_create") {
        IT("sets capacityBits") {
            RSBitmask *bitmask = RSBitmask_create(123);
            assert_ints_equal(bitmask->capacityBits, 123);
            RSBitmask_free(bitmask);
        }
    }

    TEST("setting and getting where only the 9th bit is set") {
        RSBitmask *bitmask = RSBitmask_create(123);
        RSBitmask_set(bitmask, 8, 1);
        assert_ints_equal(RSBitmask_get(bitmask, 7), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 8), 1);
        assert_ints_equal(RSBitmask_get(bitmask, 9), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 10), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 11), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 12), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 13), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 14), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 15), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 16), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 17), 0);
        RSBitmask_free(bitmask);
    }

    TEST("setting and getting where only the 10th bit is set") {
        RSBitmask *bitmask = RSBitmask_create(123);
        RSBitmask_set(bitmask, 9, 1);
        assert_ints_equal(RSBitmask_get(bitmask, 7), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 8), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 9), 1);
        assert_ints_equal(RSBitmask_get(bitmask, 10), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 11), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 12), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 13), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 14), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 15), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 16), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 17), 0);
        RSBitmask_free(bitmask);
    }

    TEST("setting and getting where only the 15th bit is set") {
        RSBitmask *bitmask = RSBitmask_create(123);
        RSBitmask_set(bitmask, 14, 1);
        assert_ints_equal(RSBitmask_get(bitmask, 7), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 8), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 9), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 10), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 11), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 12), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 13), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 14), 1);
        assert_ints_equal(RSBitmask_get(bitmask, 15), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 16), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 17), 0);
        RSBitmask_free(bitmask);
    }

    TEST("setting and getting where only the 16th bit is set") {
        RSBitmask *bitmask = RSBitmask_create(123);
        RSBitmask_set(bitmask, 15, 1);
        assert_ints_equal(RSBitmask_get(bitmask, 7), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 8), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 9), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 10), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 11), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 12), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 13), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 14), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 15), 1);
        assert_ints_equal(RSBitmask_get(bitmask, 16), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 17), 0);
        RSBitmask_free(bitmask);
    }

    TEST("setting and getting where only the 17th bit is set") {
        RSBitmask *bitmask = RSBitmask_create(123);
        RSBitmask_set(bitmask, 16, 1);
        assert_ints_equal(RSBitmask_get(bitmask, 7), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 8), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 9), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 10), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 11), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 12), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 13), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 14), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 15), 0);
        assert_ints_equal(RSBitmask_get(bitmask, 16), 1);
        assert_ints_equal(RSBitmask_get(bitmask, 17), 0);
        RSBitmask_free(bitmask);
    }
}
