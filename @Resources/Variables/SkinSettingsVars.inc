[Variables]
Skin.Main.getX=1444
Skin.Main.getY=22
TitleBarHeight=30
WidthSettings=(300+[#TitleBarHeight]*(Floor([#TitleBarHeight]/10)))
HeightSettings=(10+[Name:H]+[#oList.getTotal]+[#oList1.getTotal]+[#oList2.getTotal])
RadiusSettings=8

; ====================================================================
oList.getTotal=[#oList1]+[#oList2]+[#oList3]
oList1=[Clock:H]+[Extras:H]+[SkinSettings:H]
oList2=[Shape:H]+[Text:H]+[Style:H]+[Color:H]+[Format:H]+[Screensaver:H]+[OpenKeyT:H]+[QuitKeyT:H]+[Language:H]+[Manage:H]+[Edit:H]+[Unload:H]
oList3=[Centerit:H]+[ZPos:H]

oList1.getTotal=[#oList1.getClock.getItem]+[#oList1.getCExtras.getItem]+[#oList1.getSkinSettings.getItem]
oList1.getClock.getItem=0
oList1.getCExtras.getItem=0
oList1.getSkinSettings.getItem=0

oList2.getTotal=[#oList2.getShape.getItem]+[#oList2.getText.getItem]+[#oList2.getStyle.getItem]+[#oList2.getColor.getItem]+[#oList2.getFormat.getItem]+[#oList2.getLanguage.getItem]+[#oList2.getManage.getItem]+[#oList2.getCenterIt.getItem]+[#oList2.getPosition.getItem]+[#oList2.getEdit.getItem]+[#oList2.getUnload.getItem]
oList2.getShape.getItem=[WidthT:H]+[HeightT:H]+[RadiusT:H]
oList2.getText.getItem=[Padding:H]+[Glow:H]
oList2.getStyle.getItem=[Background:H]+[Acrylic:H]+[Corner:H]+[Border:H]
oList2.getColor.getItem=[Latte:H]+[Frappe:H]+[Macchiato:H]+[Mocha:H]+[Custom:H]+[CustomColor:H]
oList2.getFormat.getItem=[Hour:H]+[Indicator:H]+[Second:H]+[Date:H]+[CustomDate:H]
oList2.getLanguage.getItem=[en:H]+[es:H]+[it:H]+[custom2:H]+[CustomLanguage:H]
oList2.getManage.getItem=[ClickThrough:H]+[Draggable:H]+[KeepOnScreen:H]+[SnapEdges:H]
oList2.getCenterIt.getItem=[CenterHorizontal:H]+[CenterVertical:H]
oList2.getPosition.getItem=[StayTopMost:H]+[TopMost:H]+[Normal:H]+[Bottom:H]+[OnDesktop:H]
oList2.getEdit.getItem=0
oList2.getUnload.getItem=0

OverItem=null
SelectedInputItem=null

; ---------------- List1 ---------------- ;

RestoreList1Clock=[!SetVariable SelectedList1Extras 0][!SetVariable SelectedList1SkinSettings 0][!WriteKeyValue Variables SelectedList1Extras 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList1SkinSettings 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList1Extras=[!SetVariable SelectedList1Clock 0][!SetVariable SelectedList1SkinSettings 0][!WriteKeyValue Variables SelectedList1Clock 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList1SkinSettings 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList1SkinSettings=[!SetVariable SelectedList1Clock 0][!SetVariable SelectedList1Extras 0][!WriteKeyValue Variables SelectedList1Clock 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList1Extras 0 "#@#Variables\SkinSettingsVars.inc"]

RestoreList2=[!SetVariable SelectedList2Shape 0][!SetVariable SelectedList2Text 0][!SetVariable SelectedList2Style 0][!SetVariable SelectedList2Format 0][!SetVariable SelectedList2Language 0][!SetVariable SelectedList2Color 0][!SetVariable SelectedList2Manage 0][!WriteKeyValue Variables SelectedList2Shape 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Text 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Style 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Format 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Language 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Color 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Manage 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList3=[!SetVariable SelectedList3Centerit 0][!SetVariable SelectedList3Zpos 0][!WriteKeyValue Variables SelectedList3Centerit 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList3Zpos 0 "#@#Variables\SkinSettingsVars.inc"]

SelectedList1Clock=0
SelectedList1Extras=0
SelectedList1SkinSettings=0

; ---------------- List2 ---------------- ;

RestoreList2Shape=[!SetVariable SelectedList2Text 0][!SetVariable SelectedList2Style 0][!SetVariable SelectedList2Color 0][!SetVariable SelectedList2Format 0][!WriteKeyValue Variables SelectedList2Text 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Style 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Color 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Format 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList2Text=[!SetVariable SelectedList2Shape 0][!SetVariable SelectedList2Style 0][!SetVariable SelectedList2Color 0][!SetVariable SelectedList2Format 0][!WriteKeyValue Variables SelectedList2Shape 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Style 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Color 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Format 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList2Style=[!SetVariable SelectedList2Shape 0][!SetVariable SelectedList2Text 0][!SetVariable SelectedList2Color 0][!SetVariable SelectedList2Format 0][!WriteKeyValue Variables SelectedList2Shape 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Text 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Color 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Format 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList2Color=[!SetVariable SelectedList2Shape 0][!SetVariable SelectedList2Text 0][!SetVariable SelectedList2Style 0][!SetVariable SelectedList2Format 0][!WriteKeyValue Variables SelectedList2Shape 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Text 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Style 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Format 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList2Format=[!SetVariable SelectedList2Shape 0][!SetVariable SelectedList2Text 0][!SetVariable SelectedList2Style 0][!SetVariable SelectedList2Color 0][!WriteKeyValue Variables SelectedList2Shape 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Text 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Style 0 "#@#Variables\SkinSettingsVars.inc"][!WriteKeyValue Variables SelectedList2Color 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList2Language=[]
RestoreList2Manage=[]
RestoreList2Edit=[]
RestoreList2Unload=[]

SelectedList2Shape=0
SelectedList2Text=0
SelectedList2Style=0
SelectedList2Color=0
SelectedList2Format=0
SelectedList2Language=0
SelectedList2Manage=0
SelectedList2Edit=0
SelectedList2Unload=0

; ---------------- List3 ---------------- ;

RestoreList3Centerit=[!SetVariable SelectedList3Zpos 0][!WriteKeyValue Variables SelectedList3Zpos 0 "#@#Variables\SkinSettingsVars.inc"]
RestoreList3Zpos=[!SetVariable SelectedList3Centerit 0][!WriteKeyValue Variables SelectedList3Centerit 0 "#@#Variables\SkinSettingsVars.inc"]

SelectedList3Centerit=1
SelectedList3Zpos=0

; ------------- RadioButtons ------------ ;
RestoreRadioColor=[!WriteKeyValue Variables LatteStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables FrappeStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables MacchiatoStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables MochaStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables CustomStatus 0 "#@#Variables\UserVars.inc"]
RestoreRadioLanguage=[!WriteKeyValue Variables enStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables esStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Custom2Status 0 "#@#Variables\UserVars.inc"]
RestoreRadioZpos=[!WriteKeyValue Variables StayTopMostStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables TopMostStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables NormalStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables BottomStatus 0 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables OnDesktopStatus 0 "#@#Variables\UserVars.inc"]
SelectedList2Screensaver=0

