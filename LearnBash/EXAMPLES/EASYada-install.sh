#!/bin/bash
echo "------------Start Installation------------"
rm -rf /opt/easyeda-pro
cp -rf easyeda-pro /opt/easyeda-pro
chmod -R 755 /opt/easyeda-pro
cp /opt/easyeda-pro/easyeda-pro.dkt /usr/share/applications/easyeda-pro.desktop
echo "------------Install Finish, Please open it in the launcher------------"

