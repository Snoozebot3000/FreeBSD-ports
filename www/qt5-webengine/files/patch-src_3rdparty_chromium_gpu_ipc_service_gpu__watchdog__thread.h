--- src/3rdparty/chromium/gpu/ipc/service/gpu_watchdog_thread.h.orig	2020-03-16 14:04:24 UTC
+++ src/3rdparty/chromium/gpu/ipc/service/gpu_watchdog_thread.h
@@ -171,7 +171,7 @@ class GPU_IPC_SERVICE_EXPORT GpuWatchdogThreadImplV1
   base::ThreadTicks GetWatchedThreadTime();
 #endif
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
   int GetActiveTTY() const;
 #endif
 
@@ -219,7 +219,7 @@ class GPU_IPC_SERVICE_EXPORT GpuWatchdogThreadImplV1
   base::Time check_time_;
   base::TimeTicks check_timeticks_;
 
-#if defined(USE_X11)
+#if defined(USE_X11) && !defined(OS_BSD)
   FILE* tty_file_;
   int host_tty_;
 #endif
