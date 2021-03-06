#ifndef ISOLATE_POLICY_H
#define ISOLATE_POLICY_H

#include <seccomp.h>
#include <errno.h>

uint32_t seccomp_default_action = SCMP_ACT_ERRNO(EPERM);

int seccomp_allow[] = {
  SCMP_SYS(restart_syscall),
  SCMP_SYS(getpriority),
  SCMP_SYS(setpriority),
  SCMP_SYS(sigaction),
  SCMP_SYS(sigaltstack),
  SCMP_SYS(rt_sigaction),
  SCMP_SYS(rt_sigprocmask),
  SCMP_SYS(futex),
  SCMP_SYS(set_tid_address),
  SCMP_SYS(set_robust_list),
  SCMP_SYS(getpid),
  SCMP_SYS(getrandom),
  SCMP_SYS(sigsuspend),
  SCMP_SYS(set_thread_area),
  SCMP_SYS(execve),
  SCMP_SYS(exit),
  SCMP_SYS(exit_group),
  SCMP_SYS(kill),
  SCMP_SYS(tgkill),
  SCMP_SYS(tkill),
  SCMP_SYS(brk),
  SCMP_SYS(mmap),
  SCMP_SYS(mmap2),
  SCMP_SYS(munmap),
  SCMP_SYS(mremap),
  SCMP_SYS(mprotect),
  SCMP_SYS(arch_prctl),
  SCMP_SYS(getuid),
  SCMP_SYS(getgid),
  SCMP_SYS(geteuid),
  SCMP_SYS(getegid),
  SCMP_SYS(ugetrlimit),
  SCMP_SYS(getrlimit),
  SCMP_SYS(ioctl),
  SCMP_SYS(getcpu),
  SCMP_SYS(gettid),
  SCMP_SYS(uname),
  SCMP_SYS(olduname),
  SCMP_SYS(oldolduname),
  SCMP_SYS(sysinfo),
  SCMP_SYS(clock_gettime),
  SCMP_SYS(gettimeofday),
  SCMP_SYS(time),
  SCMP_SYS(open),
  SCMP_SYS(write),
  SCMP_SYS(writev),
  SCMP_SYS(read),
  SCMP_SYS(readv),
  SCMP_SYS(close),
  SCMP_SYS(dup),
  SCMP_SYS(dup2),
  SCMP_SYS(fcntl),
  SCMP_SYS(fcntl64),
  SCMP_SYS(lseek),
  SCMP_SYS(_llseek),
  SCMP_SYS(stat),
  SCMP_SYS(stat64),
  SCMP_SYS(fstat),
  SCMP_SYS(fstat64),
  SCMP_SYS(lstat),
  SCMP_SYS(lstat64),
  SCMP_SYS(listxattr),
  SCMP_SYS(llistxattr),
  SCMP_SYS(flistxattr),
  SCMP_SYS(readlink),
  SCMP_SYS(access),
  SCMP_SYS(getdents),
  SCMP_SYS(unlink),
  SCMP_SYS(unlinkat),
  SCMP_SYS(mkdir),
  SCMP_SYS(symlink),
  SCMP_SYS(timer_create),
  SCMP_SYS(timer_settime),
  SCMP_SYS(timer_gettime),
  SCMP_SYS(timer_getoverrun),
  SCMP_SYS(timer_delete),
  SCMP_SYS(_newselect),
  SCMP_SYS(fork),
  SCMP_SYS(clone),
  SCMP_SYS(waitpid),
  SCMP_SYS(waitid),
  SCMP_SYS(wait4)
};

#endif //ISOLATE_POLICY_H
