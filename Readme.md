# About

This is a german layout splitkb kyria rev.3

## Layout
![Alt text](kyria-mxsteini-2.png)

## Install
```bash
git submodule add git@github.com:mxsteini/mxsteini_de.git keyboards/splitkb/kyria/keymaps/mxsteini_de
```

## Rebuild

```bash
mv ~/Downloads/mxsteini_de.json keyboards/splitkb/kyria/keymaps/mxsteini_de/mxsteini_de.json
qmk json2c keyboards/splitkb/kyria/keymaps/mxsteini_de/mxsteini_de.json > keyboards/splitkb/kyria/keymaps/mxsteini_de/keymap.c
```

## compile
```bash
qmk compile -kb  splitkb/kyria/rev3  -km mxsteini_de
```

## flash
```bash
qmk flash -kb  splitkb/kyria/rev3  -km mxsteini_de -e CONVERT_TO=liatris
```
