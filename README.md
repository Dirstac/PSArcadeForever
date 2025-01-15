What is PSARCDEFOREVER?
===================
It is called Project Shadow Arcade Forever+, it is a project that began in the middle of 2016, it is currently being used as a base system of version 0.245.21 [HBMAME](https://hbmame.1emulation.com/), it focuses on combining the [ARCADE64](https://arcade.mameworld.info/) + [HBMAME](https://hbmame.1emulation.com/) source code in order to achieve unique control systems had all the features in a single version, but to achieve all this it has been going through many stages of development, demo, prototype, beta until being able to get an official version.

I am only giving support for the Windows XP, Windows 7, Windows 8, Windows 10 and Windows 11 operating systems, for the 86/64 bit cpu of the compatible microprocessors.

Games that have not been included:
----------------------------------

Does not include mechanical games.

Does not include pinball games.

Does not include crane games.

Does not include trivia games.

Does not include bingo games.

Does not include mahjong games.

Does not include poker games.

Does not include skeleton drivers.

Does not include fruit games.

Does not include slot games or gambling.

Does not include console games.

Does not include games that display a black screen.

It does not include games that are sound test or demo, controls, color palette.

It does not include games of does not work correctly .CHD.

What has been optimized in this version?
---------------------------------------

The command of all the game systems was optimized, now it is much more practical to be able to play, the command of the arrow keys "Up, Down, Left, Right" comes by default, this command is used to be able to move and to take actions For shooting or jumping and throwing grenades, the A, S, D key is used and the rest of the keys are used for certain kinds of games Z, X, C, Q, W, E.

Added custom buttons and autofire.

Removed the black border on NeoGeo systems, now has full screen.

Removed warning screen, startups, Loading, Decryption screen texts.

Removed the following annoying messages: “WRONG LENGTH”, “NO_DUMP”, “WRONG CHECKSUMS”, “BAD_DUMP” And “THE PARENT FILE DOES NOT EXIST”.

Added movement optimization for all fighting games (By GSC2007).

Fix screen timings, remove non-existent sprite buffer ram [PGM].

The Arcade64 "GUI" EKMAME source code has been implemented (By KAZE).

The Arcade64 "GUI" some default settings have been implemented.

It is already pre-configured, enforce aspect ratio is disabled, full screen mode and tricks are already enabled by default.

The cheat reference function, if the cloned game does not have a cheat file, it will reference the cheat file of the main ROM.

Supports game list lst language files. The list language can be edited freely.

CPS 1, 2, NEOGEO, PGM, driver supports key combination settings.

Added 13 new UI folders by default.
 * Capcom
 * Dataeast
 * IGS
 * konami
 * Namco
 * Nintendo
 * Neogeo
 * Midway
 * Sega
 * Seta
 * Taito
 * Toaplan
 * Misc

Two new folder sections called “config” and “support” were added that independently group the configurations and extra content, so that everything is kept in order in a single folder.

In the Config folders it is incorporated by:

Bgfx, Cfg, Comments, Crosshair, Diff, Docs, Folders, Glsl, Gui, Hash, Hlsl, Ini, Inp, Language, Nvram, Plugins, Share, Sta.

In the support folders it is incorporated by:

Artpreview, Artwork, Bosses, Cabinets, Cheat, Cpanel, Ctrlr, Flyers, Gameover, Howto, Icons,
Logo, Manuals, Marquees, Pcb, Roms, Samples, Scores, Select, Snap, Titles, Versus, Video, Cheat.7z, Command.dat, Gameinit.dat, Hiscore.dat, History.dat, Mameinfo.dat, Story. dat and Sysinfo.dat


How to compile
--------------

In order to compile this version we will need the source code, for this we will place it in the folder docs/Source Code[HBMame]/hbmame-tag245.7z.001, once located we will begin to unzip the files it will take a few minutes, once unzipped we will have a folder with the name hbmame-tag245.7z, we will rename it to “src”. Now we will get the latest source code from this Github container once downloaded we will start to unzip and once finished unzipping we will select the files that we had left in the folder “3rdparty, scripts, src and makefile” we will copy them into the src folder, the system will ask us to replace it we will say yes.

And we will apply this command to start the compilation, this command is for Windows 64Bit system:
```
make PTR64=1 SUBTARGET=arcade OSD=winui NOWERROR=1 STRIP_SYMBOLS=1
```

The compilation [TOOL](https://github.com/mamedev/buildtools/releases) is suggested to be version msys64 2020-11-03.
