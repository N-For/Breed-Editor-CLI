@echo off
title Resetting projects
RMDIR /S /Q res
md res
cd res
md edit
cd edit
echo //stop>> pt.b
echo I >> editor.b
cd ..
cd ..
start Breed_Editor.exe
exit

