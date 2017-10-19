#define STR_TELEMETRY_LOG "[checkLOS] %5 generated %2m area, %1 cells, size %3m, in %4s."

#define STR_FINISHED_MESSAGE "Finished\ndrawn cells: %1\ncell size: %2m\ntime taken: %3s"

#define STR_DIARY_LOS "<font size='18'><execute expression='call %1'>Check LOS</execute><br/>\
<br/>\
<execute expression='call %2'>Clear LOS display</execute></font><br/>\
<br/>\
How to use it:<br/>\
1. Click orange 'Check LOS' text<br/>\
2. On map, click position where Line of Sight will be calculated from<br/>\
3. Click position where will be middle of area where LOS will be calculated<br/>\
4. Move your mouse to set size of the area, click to confirm<br/>\
5. Wait for script to finish. Depending on cell count you selected it might take from 3 seconds up to few minutes!<br/>\
<br/>\
You can abort generation at any time by pressing A on your keyboard."

#define STR_DIARY_PROFILE "<font size='18'><execute expression='call %1'>Draw Terrain Profile</execute><br/>\
<br/>\
<execute expression='call %2'>Remove Terrain Profile chart</execute></font><br/>\
<br/>\
How to use it:<br/>\
1. Click orange 'Draw Terrain Profile' text<br/>\
2. On map, click position where terrain profile will start<br/>\
3. Click end position for profile<br/>\
4. Chart can be closed by pressing x in it's right upper corner."

#define STR_DISABLED "Option is currently unavailable. Check Information tab for potential causes."

#define STR_DIARY_SUBJECT "LOS checker"

#define STR_DIARY_USER_INSTR "<font size='18'>Important information</font><br/>\
*LOS Tool is available only in:<br/>\
    - briefing<br/>\
    - vehicles equipped with devices capable of performing this function in<br/>\
      real life (M1 Abrams, M2 Bradley, HMMWV's front seat)<br/>\
    - in-game if mission maker configured mission to allow for this<br/>\
*Access settings in 'Options'->'Addon Settings'<br/>\
*LOS Tool's resolution scales with size of area. Make area smaller for better quality<br/>\
*Areas colored <font color='#FF4444'>red</font> are areas <font color='#FF4444'>obscured</font> by terrain<br/>\
*Areas colored <font color='#4444FF'>blue</font> are <font color='#4444FF'>not obscured</font> by terrain, but might be obscured by objects or vegetation<br/>\
<br/>\
<br/><font size='16'>I don't like it and I don't want to use it and my immersion is completely ruined.</font>\
<br/>- You can disable this addon in CBA addon settings.\
<br/>\
<br/><font size='16'>Can I make it so other people see it?</font>\
<br/>No. This will not be added due to complexity.\
<br/>\
<br/><font size='18'>I still don't understand how to use it</font><br/>\
<execute expression='openYoutubeVideo ""watch?v=KJYGfS8R8YI""'>LOS Tool video guide</execute><br/>\
<execute expression='openYoutubeVideo ""watch?v=Tf4wExGAk-M""'>Terrain Profile tool video guide</execute><br/>\
<execute expression='openYoutubeVideo ""watch?v=sXzgAsNXafE""'>CBA settings guide</execute><br/>\
<br/>\
<font size='18'>For mission makers</font><br/>\
If you want to disable it in your mission, go to Eden editor and open CBA settings for your mission. Set the addon to disabled and select option to overwrite client settings.<br/>\
If you have a mission with in-game briefing and you want this tool available while in-game you need to do 2 things:<br/>\
- add `BH_checkLOS_disableAfterStart=false;` to your init.sqf<br/>\
- to disable it run `call BH_checkLOS_fnc_disable`<br/>\
<br/>\
Author: BlackHawk"
