; [Clock\Hitbox\Side\Top\Corner]
; Meter=Shape
; MeterStyle=Base | Clock | HitboxStyle
; Shape=Rectangle 0,0,([#WH]*4),([#HH]*4) | Extend Color
; MouseScrollUpAction=[!SetVariable R "([#Radius] + 1)"][!WriteKeyValue Variables R "[#Radius]" "[#WriteConfigPath]"][!UpdateMeterGroup [#UpdateConfigName]][!Redraw]
; MouseScrollDownAction=[!SetVariable R "([#Radius] - 1 < 0 ? 0 : [#Radius]-1)"][!WriteKeyValue Variables R "[#Radius]" "[#WriteConfigPath]"][!UpdateMeterGroup [#UpdateConfigName]][!Redraw]
; Hidden=[#ScreensaverStatus]

[Clock\Hitbox\Side\Right]
Meter=Shape
MeterStyle=Base | Clock | HitboxStyle
Shape=Rectangle ([#Width]-[#WH]),0,[#WH],([#Height]-[#HH]*2) | Extend Color
LeftMouseDownAction=[!CommandMeasure Plugin\Mouse\Resize\Right "Start"][#SkinSettingActionUnload[#LoadedSkinSettings]]
MouseActionCursorName=SIZE_WE
Hidden=[#ScreensaverStatus]

[Clock\Hitbox\Side\Bottom]
Meter=Shape
MeterStyle=Base | Clock | HitboxStyle
Shape=Rectangle 0,([#Height]-[#HH]),([#Width]-[#WH]*2),[#HH] | Extend Color
LeftMouseDownAction=[!CommandMeasure Plugin\Mouse\Resize\Bottom "Start"][#SkinSettingActionUnload[#LoadedSkinSettings]]
MouseActionCursorName=SIZE_NS
Hidden=[#ScreensaverStatus]

[Clock\Hitbox\Side\Corner]
Meter=Shape
MeterStyle=Base | Clock | HitboxStyle
Shape=Rectangle ([#Width]-[#WH]*2),([#Height]-[#HH]*2),([#WH]*2),([#HH]*2) | Extend Color
LeftMouseDownAction=[!CommandMeasure Plugin\Mouse\Resize\Corner "Start"][#SkinSettingActionUnload[#LoadedSkinSettings]]
MouseActionCursorName=SIZE_NWSE
Hidden=[#ScreensaverStatus]