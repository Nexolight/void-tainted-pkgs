# Cross build profile for PowerPC.

XBPS_TARGET_MACHINE="ppc-musl"
XBPS_TARGET_QEMU_MACHINE="ppc"
XBPS_CROSS_TRIPLET="powerpc-linux-musl"
XBPS_CROSS_CFLAGS="-mcpu=powerpc -mno-altivec -mtune=G4 -mlong-double-64"
XBPS_CROSS_CXXFLAGS="$XBPS_CROSS_CFLAGS"
XBPS_CROSS_FFLAGS=""
XBPS_CROSS_RUSTFLAGS="--sysroot=${XBPS_CROSS_BASE}/usr"
XBPS_CROSS_RUST_TARGET="powerpc-unknown-linux-musl"
