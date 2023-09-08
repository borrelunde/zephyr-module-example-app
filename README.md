# Zephyr Module Example Application

Application example using the [zephyr-module-example](https://github.com/borrelunde/zephyr-module-example).

## Output

Built and flashed to the nRF52840 Development Kit.

```
west build -p -b nrf52840dk_nrf52840 app && west flash
```

The output is:

```
*** Booting Zephyr OS build zephyr-v3.4.0-3415-g7140b6f9c10e ***
Module example application version 1.0.0 initialized on board nrf52840dk_nrf52840!
Module example version: 1.0.0
```