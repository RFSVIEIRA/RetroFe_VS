[TOC]

RetroFE is a cross-platform frontend designed for MAME cabinets/game centers/etc. with a focus on simplicity and customization.

## If you want Linux/Mac/Windows Cmake Option Download from original source code ##

Download the source code

	git clone https://github.com/phulshof/RetroFE.git
	
	
### If you Want Converted using only Visual Studio 2019  ###

This version is and "migration/adaptation" from original to Visual Studio 2019 standalone compiler
I config it to windows to be user friendly for windows users, and if DEV #phulshof update i will try update here to, I can't pull to original as it isnt compatible, if is i dont know how to, I add this git link in original forum, so they can see it.

----- Source code change only conection to SDL2, Ex. (original --> #include <SDL2/SDL.h> to --> #include <SDL.h>)

## 1st Install libraries ##
	
	Install visual studio 2019 (https://visualstudio.microsoft.com/downloads/)
	Install Microsoft Windows SDK for Windows 10 and .net Framework 4 (https://developer.microsoft.com/nl-nl/windows/downloads/windows-10-sdk/)
	Install git (https://git-scm.com/download/win)
	Install 7zip (https://www.7-zip.org/)
	Install gstreamer and gstreamer-devel to c:/gstreamer(x86, not 64 bit!) (https://gstreamer.freedesktop.org/data/pkg/windows/1.4.0/ /its a folder inside this git

# Compiling and installing on Windows #

Open Retrofe sln file

Choose Debug our Release and menu Build - Rebuild Solution

It will copy the dlls and retrofe.exe files to RetroFe/Core 

If you do right click and clean it will clean all files.

## Start the dream add GIF Animations ##


	

	P.S. /** ALL EXPERIENCES AFTER ADD CODE WILL BE COMMENT (/*  */) ALL CODE DISABLING THEM BECAUSE FOR 99% CASES RETROFE WILL NOT RUN.  IM NEW IN C++ AND PROGRAMING WORLD, AS I STOPED FOR MORE THAN 13 YEARS **//
