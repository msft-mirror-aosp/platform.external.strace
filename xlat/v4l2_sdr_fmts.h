/* Generated by ./xlat/gen.sh from ./xlat/v4l2_sdr_fmts.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(V4L2_SDR_FMT_PCU20BE) || (defined(HAVE_DECL_V4L2_SDR_FMT_PCU20BE) && HAVE_DECL_V4L2_SDR_FMT_PCU20BE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_PCU20BE) == (v4l2_fourcc('P', 'C', '2', '0')), "V4L2_SDR_FMT_PCU20BE != v4l2_fourcc('P', 'C', '2', '0')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_PCU20BE v4l2_fourcc('P', 'C', '2', '0')
#endif
#if defined(V4L2_SDR_FMT_RU12LE) || (defined(HAVE_DECL_V4L2_SDR_FMT_RU12LE) && HAVE_DECL_V4L2_SDR_FMT_RU12LE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_RU12LE) == (v4l2_fourcc('R', 'U', '1', '2')), "V4L2_SDR_FMT_RU12LE != v4l2_fourcc('R', 'U', '1', '2')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_RU12LE v4l2_fourcc('R', 'U', '1', '2')
#endif
#if defined(V4L2_SDR_FMT_CS14LE) || (defined(HAVE_DECL_V4L2_SDR_FMT_CS14LE) && HAVE_DECL_V4L2_SDR_FMT_CS14LE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_CS14LE) == (v4l2_fourcc('C', 'S', '1', '4')), "V4L2_SDR_FMT_CS14LE != v4l2_fourcc('C', 'S', '1', '4')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_CS14LE v4l2_fourcc('C', 'S', '1', '4')
#endif
#if defined(V4L2_SDR_FMT_PCU16BE) || (defined(HAVE_DECL_V4L2_SDR_FMT_PCU16BE) && HAVE_DECL_V4L2_SDR_FMT_PCU16BE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_PCU16BE) == (v4l2_fourcc('P', 'C', '1', '6')), "V4L2_SDR_FMT_PCU16BE != v4l2_fourcc('P', 'C', '1', '6')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_PCU16BE v4l2_fourcc('P', 'C', '1', '6')
#endif
#if defined(V4L2_SDR_FMT_CU16LE) || (defined(HAVE_DECL_V4L2_SDR_FMT_CU16LE) && HAVE_DECL_V4L2_SDR_FMT_CU16LE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_CU16LE) == (v4l2_fourcc('C', 'U', '1', '6')), "V4L2_SDR_FMT_CU16LE != v4l2_fourcc('C', 'U', '1', '6')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_CU16LE v4l2_fourcc('C', 'U', '1', '6')
#endif
#if defined(V4L2_SDR_FMT_CS8) || (defined(HAVE_DECL_V4L2_SDR_FMT_CS8) && HAVE_DECL_V4L2_SDR_FMT_CS8)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_CS8) == (v4l2_fourcc('C', 'S', '0', '8')), "V4L2_SDR_FMT_CS8 != v4l2_fourcc('C', 'S', '0', '8')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_CS8 v4l2_fourcc('C', 'S', '0', '8')
#endif
#if defined(V4L2_SDR_FMT_CU8) || (defined(HAVE_DECL_V4L2_SDR_FMT_CU8) && HAVE_DECL_V4L2_SDR_FMT_CU8)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_CU8) == (v4l2_fourcc('C', 'U', '0', '8')), "V4L2_SDR_FMT_CU8 != v4l2_fourcc('C', 'U', '0', '8')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_CU8 v4l2_fourcc('C', 'U', '0', '8')
#endif
#if defined(V4L2_SDR_FMT_PCU18BE) || (defined(HAVE_DECL_V4L2_SDR_FMT_PCU18BE) && HAVE_DECL_V4L2_SDR_FMT_PCU18BE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((V4L2_SDR_FMT_PCU18BE) == (v4l2_fourcc('P', 'C', '1', '8')), "V4L2_SDR_FMT_PCU18BE != v4l2_fourcc('P', 'C', '1', '8')");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define V4L2_SDR_FMT_PCU18BE v4l2_fourcc('P', 'C', '1', '8')
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_sdr_fmts[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_sdr_fmts[] = {

 XLAT(V4L2_SDR_FMT_PCU20BE),
 XLAT(V4L2_SDR_FMT_RU12LE),
 XLAT(V4L2_SDR_FMT_CS14LE),
 XLAT(V4L2_SDR_FMT_PCU16BE),
 XLAT(V4L2_SDR_FMT_CU16LE),
 XLAT(V4L2_SDR_FMT_CS8),
 XLAT(V4L2_SDR_FMT_CU8),
 XLAT(V4L2_SDR_FMT_PCU18BE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */