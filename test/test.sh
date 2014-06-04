BUILD=../build

RSTEST=../upstream/RSTest
RSTEST_ARGS="-isystem $RSTEST/ $RSTEST/RSTest.c"
ARGS="-std=c99 -Wall -O3 $RSTEST_ARGS -isystem ../"

mkdir -p $BUILD

echo 'Building...' && \
    $CC \
        $ARGS \
        -o $BUILD/runtests \
        ../RSBitmask.c \
        test-RSBitmask.c \
        runtests.c && \
    $BUILD/runtests
