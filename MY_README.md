# Setup Repository

``` bash
# Clone qmk fork
git clone

# Init and clone submodules
git submodule update --init --recursive

# Pulling submodule changes
git pull --recurse-submodules
```

# Setup Mac

``` bash
brew install qmk/qmk/qmk
qmk setup -H $HOME/git/qmk_firmware -b breitbandmod
qmk config user.keyboard=crkbd/rev1
qmk config user.keymap=breitbandmodem

# QMK toobox for flashing (optional)
brew tap homebrew/cask-drivers
brew install --cask qmk-toolbox
```

# Compile Firmware

``` bash
qmk compile

# For specific keyboard / keymap
qmk compile -kb crkbd/rev1 -km breitbandmodem
```

# Flashing Firmware

Press the reset button to flash firmware.

``` bash
qmk flash

# For specific keyboard / keymap
qmk flash -kb crkbd/rev1 -km breitbandmodem
```
