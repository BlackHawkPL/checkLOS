#define STR_TELEMETRY_LOG "[checkLOS] %4 generated %2m area, %1 cells, size %3m, in %4s."

#define STR_FINISHED_MESSAGE "Finished\ndrawn cells: %1\ncell size: %2m\ntime taken: %3s"

#define STR_DIARY_LOS "<font size='18'><execute expression='call %1'>Check LOS</execute><br/>\
<br/>\
<execute expression='call %2'>Remove LOS display</execute></font>"

#define STR_DIARY_PROFILE "<font size='18'><execute expression='call %1'>Draw Terrain Profile</execute><br/>\
<br/>\
<execute expression='call %2'>Remove Terrain Profile chart</execute></font>"

#define STR_DISABLED "Option has been disabled"

#define STR_DIARY_SUBJECT "LOS checker"

#define STR_DIARY_USER_INSTR "<font size='18'>Important information</font><br/>\
*Access settings in 'Options'->'Addon Settings'<br/>\
*LOS Tool's resolution scales with size of area. Make area smaller for better quality.<br/>\
*Areas colored <font color='#FF4444'>red</font> are areas that are not obstructed by terrain shape, but are <font color='#FF4444'>obstruced by an object</font><br/>\
*Areas in a shade between red and blue are obstructed partially<br/>\
*Areas with no color are completely obstructed by terrain<br/>\
*The more transparent area, the taller target has to be to be seen<br/>\
<br/>\
<font size='18'>LOS checker</font><br/>\
1. In 'Check LOS Tool' section click orange 'Check LOS' link<br/>\
2. On map, click position where Line of Sight will be calculated from<br/>\
3. Click position where will be middle of area where LOS will be calculated<br/>\
4. Move your mouse to set size of the area, click to confirm<br/>\
5. Wait for script to finish. Depending on cell count you selected it might take from 3 seconds up to few minutes!<br/>\
<br/>\
<font size='18'>Terrain profile</font><br/>\
1. In 'Terrain Profile Tool' section click orange 'Draw Terrain Profile' link<br/>\
2. On map, click position where terrain profile will start<br/>\
3. Click end position for profile<br/>\
4. Chart can be closed by pressing x in it's right upper corner.<br/>\
<br/>\
<br/>\
<font size='18'>I still don't understand how to use it</font><br/>\
<execute expression='openYoutubeVideo ""watch?v=KJYGfS8R8YI""'>LOS Tool video guide</execute><br/>\
<execute expression='openYoutubeVideo ""watch?v=Tf4wExGAk-M""'>Terrain Profile tool video guide</execute><br/>\
<execute expression='openYoutubeVideo ""watch?v=sXzgAsNXafE""'>Settings guide</execute><br/>\
<br/>\
<font size='18'>For mission makers</font><br/>\
If you have a mission with in-game briefing and you want this tool available while in-game you need to do 2 things:<br/>\
- add `BH_checkLOS_disableAfterStart=false;` to your init.sqf<br/>\
- to disable it run `call BH_checkLOS_fnc_disable`"
