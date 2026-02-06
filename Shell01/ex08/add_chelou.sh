#!/bin/sh

echo "obase=13; ibase=5; \
$(echo "$FT_NBR1" | sed "s/'/0/g; s/\\\\/1/g; s/\"/2/g; s/?/3/g; s/!/4/g") + \
$(echo "$FT_NBR2" | tr 'mrdoc' '01234')" \
| bc \
| tr '0123456789ABC' 'gtaio luSnemf'
