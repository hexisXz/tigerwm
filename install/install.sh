#!/bin/sh 

git clone https://github.com/hexisXz/tigerwm.git && cd tigerwm && sudo make clean && sudo make && sudo cp tigerwm /usr/bin && sudo cp desktop/tigerwm.desktop /usr/share/xsessions

echo "------------------------------------------------------"
echo "would you like to add the autostart Directory as well?" 
echo "------------------------------------------------------"

read i

if ["$i" == "y" ]; then
	cp -r .tigerwm ~/ && echo "edit ~/.tigerwm/tigerwm.sh to autostart programs."
else
   echo "installed without autostart."

fi


