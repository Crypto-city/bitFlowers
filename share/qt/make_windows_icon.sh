#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/gsave.ico

convert ../../src/qt/res/icons/gsave-16.png ../../src/qt/res/icons/gsave-32.png ../../src/qt/res/icons/gsave-48.png ${ICON_DST}
