find . -type f -name \*.sh | sed 's|.sh$||g' | sed 's|^./||' | rev | cut -d '/' -f1 | rev
