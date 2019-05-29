# Cross build profile for ppc64 big-endian GNU.

XBPS_TARGET_MACHINE="ppc64"
XBPS_TARGET_QEMU_MACHINE="ppc64"
XBPS_CROSS_TRIPLET="powerpc64-linux-gnu"
XBPS_CROSS_CFLAGS="-mcpu=970 -mtune=power9 -maltivec -mabi=elfv2"
XBPS_CROSS_CXXFLAGS="$XBPS_CROSS_CFLAGS"
XBPS_CROSS_FFLAGS=""
XBPS_CROSS_RUSTFLAGS="--sysroot=${XBPS_CROSS_BASE}/usr"
XBPS_CROSS_RUST_TARGET="powerpc64-unknown-linux-gnu"
