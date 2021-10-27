# PlatformIO Project

prepare environments:

```
$ pip install platformio
```

project usage:

```
$ cd platformio_test/
$ pio run
```

build specified env & taget:

```
$ pio run -e stm32 -t build
$ pio run -e native -t build
$ pio run -e native -t clean
$ pio run -e native -t cleanall
```
