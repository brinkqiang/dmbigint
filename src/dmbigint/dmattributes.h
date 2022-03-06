
#ifndef __DM_ATTRIBUTES_H__
#define __DM_ATTRIBUTES_H__

#if defined(__clang__)
#  if __has_attribute(lifetimebound)
#    define LIFETIMEBOUND [[clang::lifetimebound]]
#  else
#    define LIFETIMEBOUND
#  endif
#else
#  define LIFETIMEBOUND
#endif

#endif // __DM_ATTRIBUTES_H__
