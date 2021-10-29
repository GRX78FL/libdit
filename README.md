# libdit

This repository aims to provide a wrapper around each function found in the GNU libc for auditing purposes.

# building:

```bash 
git clone https://github.com/GRX78FL/libdit.git
cd libdit
make
```

### usage:

```bash
cd build
LD_PRELOAD="$(pwd)/libdit.so" <application>
#example
LD_PRELOAD="$(pwd)/libdit.so" man 3 assert
```

### reading the logfile:

```bash
tail -f /dev/shm/log.dit
...
argp_parse(0x5560c0aff040, 2, 0x7ffedfdac948, 4, 0x5560c0affca0, (nil))          
access("/usr/share/man/man1/man.1.gz", 4)                                        
access("/usr/share/man/mandb_nfmt", 1)                                           
access("/usr/share/man/man1/man.1.gz", 4)                                        
access("/etc/terminfo/s/screen", 4)                                              
access("/lib/terminfo/s/screen", 4)                                              
argp_parse(0x55eee38d2f20, 2, 0x7ffd267d43a8, 0, 0x7ffd267d427c, (nil))         
...
```
