[Base]
Group = Settings
; ==============================================================

[String.getText]
InLineSetting=Face | JetBrains Mono
InLineSetting2=Color | [#FontColor],100
InLineSetting3=Size | ([#TitleBarHeight]/3)
StringAlign=LeftCenter
; SolidColor=255,0,0,100
H=[#TitleBarHeight]
ClipString=1
TrailingSpaces=1
MouseOverAction=[!SetVariable OverItem [#CURRENTSECTION]][!UpdateMeter Meter\Background][!UpdateMeter [#CURRENTSECTION]][!Redraw]
MouseLeaveAction=[!SetVariable OverItem null][!UpdateMeter Meter\Background][!UpdateMeter [#CURRENTSECTION]][!Redraw]

; ==============================================================

[List.getConfig]
InLinePattern4=[#List1].*
InLineSetting4=Color | [#FontColor]
StringCase=Upper
Y=R
W=([#WidthSettings]-[[#CURRENTSECTION]:X]*2)

[List.getIndex(1)]
StringStyle = Bold
X=([#TitleBarHeight]/2)
Text=[#List[#SelectedList1[#CURRENTSECTION]]] [#Clock.Menu.List1.[#CURRENTSECTION]]
LeftMouseUpAction=[#RestoreList1[#CURRENTSECTION]][#RestoreList2][#RestoreList3][!SetVariable SelectedList1[#CURRENTSECTION] [#StatusValue[#SelectedList1[#CURRENTSECTION]]]][!WriteKeyValue Variables SelectedList1[#CURRENTSECTION] [#SelectedList1[#CURRENTSECTION]] "#@#Variables\SkinSettingsVars.inc"][!UpdateMeter *][!UpdateMeter Meter\Background][!UpdateMeter *][!Redraw]

[List.getIndex(2)]
X=([#TitleBarHeight]*2/2)
Text=[#List[#SelectedList2[#CURRENTSECTION]]] [#Clock.Menu.List2.[#CURRENTSECTION]]
LeftMouseUpAction=[#RestoreList2[#CURRENTSECTION]][!SetVariable SelectedList2[#CURRENTSECTION] [#StatusValue[#SelectedList2[#CURRENTSECTION]]]][!WriteKeyValue Variables SelectedList2[#CURRENTSECTION] [#SelectedList2[#CURRENTSECTION]] "#@#Variables\SkinSettingsVars.inc"][!UpdateMeter *][!UpdateMeter Meter\Background][!UpdateMeter *][!Redraw]

[List.getIndex(3)]
X=([#TitleBarHeight]*3/2)
Text=[#List[#SelectedList3[#CURRENTSECTION]]] [#Clock.Menu.List3.[#CURRENTSECTION]]
LeftMouseUpAction=[#RestoreList3[#CURRENTSECTION]][!SetVariable SelectedList3[#CURRENTSECTION] [#StatusValue[#SelectedList3[#CURRENTSECTION]]]][!WriteKeyValue Variables SelectedList3[#CURRENTSECTION] [#SelectedList3[#CURRENTSECTION]] "#@#Variables\SkinSettingsVars.inc"][!UpdateMeter *][!UpdateMeter Meter\Background][!UpdateMeter *][!Redraw]

; ==============================================================

[Item.getConfig]
InlinePattern4=[#Status1].*|✎.*
InLineSetting4=Color | [#FontColor]
StringCase=Proper
X=([#TitleBarHeight]*3/2)
Y=R
W=([#WidthSettings]-[[#CURRENTSECTION]:X]*2)

[Item.getSimpleText]
InLineSetting2=Color | [#FontColor],200
Text="•  [#Clock.Menu.Item.[#CURRENTSECTION]]"

[Item.getUserInput]
StringAlign=CenterCenter
X=([#WidthSettings]-[[#CURRENTSECTION]T:X]-[[#CURRENTSECTION]:W]/2)
Y=r
W=100
Text=[#[#CURRENTSECTION]]
LeftMouseUpAction=[!SetOption InputTextMeasure InputNumber 1][!SetVariable SelectedInputItem [#CURRENTSECTION]][!UpdateMeasure InputTextMeasure][!CommandMeasure InputTextMeasure "ExecuteBatch 1"]
MouseOverAction=[]
MouseLeaveAction=[]

[Item.getCustom]
X=([#TitleBarHeight]/2)r
Text=" ✎  [#Clock.Menu.Item.[#CURRENTSECTION]]"

[Item.getStatus]
Text="[#Status[#[#CURRENTSECTION]Status]]  [#Clock.Menu.Item.[#CURRENTSECTION]]"

[Item.setToggle]
LeftMouseUpAction=[!SetVariable [#CURRENTSECTION]Status "[#StatusValue[#[#CURRENTSECTION]Status]]"][!WriteKeyValue Variables [#CURRENTSECTION]Status "[#[#CURRENTSECTION]Status]" "#@#Variables\UserVars.inc"][#Action][!Refresh]

[Item.setColor]
LeftMouseUpAction=[#RestoreRadioColor][!SetVariable [#CURRENTSECTION]Status 1][!WriteKeyValue Variables [#CURRENTSECTION]Status 1 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Colors [#CURRENTSECTION] "#@#Variables\UserVars.inc"][#Action][!Refresh]

[Item.setLanguage]
LeftMouseUpAction=[#RestoreRadioLanguage][!SetVariable [#CURRENTSECTION]Status 1][!WriteKeyValue Variables [#CURRENTSECTION]Status 1 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Language [#CURRENTSECTION] "#@#Variables\UserVars.inc"][#Action][!Refresh]

[Item.setZPos]
X=([#TitleBarHeight]*4/2)
LeftMouseUpAction=[#RestoreRadioZPos][!SetVariable [#CURRENTSECTION]Status 1][!WriteKeyValue Variables [#CURRENTSECTION]Status 1 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables ZposStatus [#CURRENTSECTION] "#@#Variables\UserVars.inc"][#Action][!Refresh]

[Item.setSkin]
LeftMouseUpAction=[!SetVariable [#CURRENTSECTION]Status "[#StatusValue[#[#CURRENTSECTION]Status]]"][!WriteKeyValue Variables [#CURRENTSECTION]Status "[#[#CURRENTSECTION]Status]" "#@#Variables\UserVars.inc"][![#CURRENTSECTION] [#[#CURRENTSECTION]Status] "#ROOTCONFIG#"][#Action][!Refresh]

[Item.getUserInputText]
LeftMouseUpAction=[!SetOption InputTextMeasure InputNumber 0][!SetVariable SelectedInputItem [#CURRENTSECTION]][!UpdateMeasure InputTextMeasure][!CommandMeasure InputTextMeasure "ExecuteBatch 1"]

; ; ==============================================================
