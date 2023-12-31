[Variables]
LoadedSkinSettings=0
ScreensaverActive=0
; ================================= 
;  COLOR VARIABLES
; =================================
TitleBarColor=[#TitleBar]
BackgroundColor=[#Background]
BorderColor=[#Border]
FontColor=[#Text]
GlowColor=[#Glow]

; ================================= 
;  MOUSE MEASURE VARIABLES
; =================================
MainMeterTime=Meter\Time
MinWidth=[Meter\Time:W]
MinHeight=[Meter\Time:H]
WriteConfigPath="#@#Variables\UserVars.inc"
UpdateConfigName=Clock
; ================================= 
;  CONTEXT MENU VARIABLES
; =================================
Action=[!Refresh #ROOTCONFIG#]
ActionSimple=[!Refresh]
; Status0=○
; Status1=◉
Status0=▢
Status1=▣
StatusValue0=1
StatusValue1=0
List0=▶
List1=▼
StayTopMostValue=2
TopMostValue=1
NormalValue=0
BottomValue=-1
OnDesktopValue=-2

Border0=None
Border1=All

LoadPluginIFS0=""
LoadPluginIFS1=#@#Plugins\IsFullScreen.inc

LoadPluginHK0=""
LoadPluginHK1=#@#Plugins\HotKey.inc

SkinSettingActionLoad0=[!ActivateConfig "#ROOTCONFIG#\Settings" "Settings.ini"][!Zpos 1 "#ROOTCONFIG#\Settings"]
SkinSettingActionLoad1=[!Hide "#ROOTCONFIG#\Settings"][!ShowFade "#ROOTCONFIG#\Settings"]
SkinSettingActionUnload0=[]
SkinSettingActionUnload1=[!DeactivateConfig "#ROOTCONFIG#\Settings"]

CornerValue0=
CornerValue1=[#CornerValueAcrylic[#BackgroundStatus][#AcrylicStatus]]
CornerValueAcrylic00=
CornerValueAcrylic01=
CornerValueAcrylic10=
CornerValueAcrylic11=Round

; ================================= 
;  SCREENSAVER INDICATOR VARIABLES
; =================================
ScreensaverMouseAction0=[#SkinSettingActionLoad[#*LoadedSkinSettings*]]
SScreensaverMouseAction1=[]

ScreensaverActionHK200=[]
ScreensaverActionHK201=[#SkinSettingActionUnload[#*LoadedSkinSettings*]][!Delay 16][!Hide][!KeepOnScreen 0][!Draggable 0][!Move "0" "0"][!WriteKeyValue Variables RestoreX [#*CURRENTCONFIGX*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreY [#*CURRENTCONFIGY*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreW [#*Width*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreH [#*Height*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreR [#*Radius*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreC [#*CornerStatus*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreFS [#*FontSize*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreBgC "[#*Background*]" "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreBgO [#*BackgroundOpacity*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreTxtC "[#*Text*]" "#@#Variables\UserVars.inc"][!WriteKeyValue Variables RestoreGwC "[#*Glow*]" "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Width [#*ScreenAreaWidth*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Height [#*ScreenAreaHeight*] "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Radius 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables CornerStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables FontSize 50 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Background "0,0,0" "#@#Colors\[#Colors].inc"][!WriteKeyValue Variables Text "255,255,255" "#@#Colors\[#Colors].inc"][!WriteKeyValue Variables Glow "255,255,255" "#@#Colors\[#Colors].inc"][!WriteKeyValue Variables BackgroundOpacity 255 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables ScreensaverActive 1 "#@#Variables\ConditionalVars.inc"][!Refresh][!Delay 16][!Zpos 2]
ScreensaverActionHK210=[]
ScreensaverActionHK211=[]

ScreensaverActionHK0=[]
ScreensaverActionHK1=[!Hide][!SetVariable Width [#*RestoreW*]][!WriteKeyValue Variables Width [#*RestoreW*] "#@#Variables\UserVars.inc"][!SetVariable Height [#*RestoreH*]][!WriteKeyValue Variables Height [#*RestoreH*] "#@#Variables\UserVars.inc"][!SetVariable Radius [#*RestoreR*]][!WriteKeyValue Variables Radius [#*RestoreR*] "#@#Variables\UserVars.inc"][!SetVariable CornerStatus [#*RestoreC*]][!WriteKeyValue Variables CornerStatus [#*RestoreC*] "#@#Variables\UserVars.inc"][!SetVariable FontSize [#*RestoreFS*]][!WriteKeyValue Variables FontSize [#*RestoreFS*] "#@#Variables\UserVars.inc"][!SetVariable Background "[#*RestoreBgC*]"][!WriteKeyValue Variables Background "[#*RestoreBgC*]" "#@#Colors\[#Colors].inc"][!SetVariable BackgroundOpacity [#*RestoreBgO*]][!WriteKeyValue Variables BackgroundOpacity [#*RestoreBgO*] "#@#Variables\UserVars.inc"][!SetVariable Text "[#*RestoreTxtC*]"][!WriteKeyValue Variables Text "[#*RestoreTxtC*]" "#@#Colors\[#Colors].inc"][!SetVariable Glow "[#*RestoreGwC*]"][!WriteKeyValue Variables Glow "[#*RestoreGwC*]" "#@#Colors\[#Colors].inc"][!SetVariable ScreensaverActive 0][!WriteKeyValue Variables ScreensaverActive 0 "#@#Variables\ConditionalVars.inc"][!UpdateMeterGroup Clock][!Redraw][!Move "[#RestoreX]" "[#RestoreY]"][!Refresh]

; ================================= 
;  TIME VARIABLES
; =================================

HourFormat=%H:%M[#SecondFormat[#SecondStatus]]
HourFormat0=%H:%M[#SecondFormat[#SecondStatus]]
HourFormat1="%I:%M[#SecondFormat[#SecondStatus]][#IndicatorFormat[#IndicatorStatus]]"

SecondFormat=:%S
SecondFormat0=
SecondFormat1=:%S

IndicatorFormat=" %p"
IndicatorFormat0=
IndicatorFormat1=" %p"

; ================================= 
;  DATE VARIABLES
; =================================
DateFormat=#CRLF#[Plugin\Date]
DateFormat0=
DateFormat1=#CRLF#[Plugin\Date]
DAY0=
DAY1=%A
DAY2=%a
DAY3=%d
MONTH0=
MONTH1=%B
MONTH2=%b
MONTH3=%m
YEAR0=
YEAR1=%Y
YEAR2=%y
