# Prepare

```bash
mv ~/Downloads/mxsteini.json keyboards/splitkb/kyria/keymaps/mxsteini/mxsteini.json
qmk json2c keyboards/splitkb/kyria/keymaps/mxsteini/mxsteini.json > keyboards/splitkb/kyria/keymaps/mxsteini/keymap.c
```

# compile
```bash
qmk compile -kb  splitkb/kyria/rev3  -km msteini
```

## flash
```bash
qmk flash -kb  splitkb/kyria/rev3  -km msteini -e CONVERT_TO=liatris
```
