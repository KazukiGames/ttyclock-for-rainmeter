[Meter\Background]
Meter=Shape
MeterStyle=Base
; SHAPES FOR TITLEBAR
Shape=Rectangle 0,0,[#WidthSettings],[#TitleBarHeight],([#AcrylicStatus]=1?([#BackgroundStatus]=0?[#RadiusSettings]:0):[#RadiusSettings]) | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?[#BackgroundOpacity]:255):255) | StrokeWidth 0
Shape2=Rectangle 0,([#TitleBarHeight]/3),[#WidthSettings],([#TitleBarHeight]/1.5) | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?[#BackgroundOpacity]:255):255) | StrokeWidth 0
Shape3=Combine Shape | Union Shape2

; SHAPE FOR BACKGROUND HOVER AND SELECTION
Shape4=Rectangle 0,[#TitleBarHeight],[#WidthSettings],([#HeightSettings]/2),0 | FillColor [#BackgroundColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?[#BackgroundOpacity]:255):255) | StrokeWidth 0
Shape5=Rectangle 0,([#HeightSettings]/2),[#WidthSettings],([#HeightSettings]/2),([#AcrylicStatus]=1?([#BackgroundStatus]=0?[#RadiusSettings]:0):[#RadiusSettings]) | FillColor [#BackgroundColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?[#BackgroundOpacity]:255):255) | StrokeWidth 0
Shape6=Combine Shape4 | Union Shape5

; Border
Shape7=Rectangle 0,0,[#WidthSettings],[#HeightSettings],([#AcrylicStatus]=1?([#BackgroundStatus]=0?[#RadiusSettings]:0):[#RadiusSettings]) | FillColor [#Border],([#AcrylicStatus]=1?([#BackgroundStatus]=0?255:0):([#BorderStatus]=1?255:0)) | StrokeWidth 0
Shape8=Rectangle 1,1,([#WidthSettings]-2),([#HeightSettings]-2),([#AcrylicStatus]=1?([#BackgroundStatus]=0?[#RadiusSettings]:0):[#RadiusSettings]) | FillColor [#Border],([#AcrylicStatus]=1?([#BackgroundStatus]=0?255:0):([#BorderStatus]=1?255:0)) | StrokeWidth 0
Shape9=Combine Shape7 | Exclude Shape8
Shape10=Rectangle 1,([#TitleBarHeight]),([#WidthSettings]-2),1 | FillColor [#Border],([#AcrylicStatus]=1?255:([#BorderStatus]=1?255:0)) | StrokeWidth 0

Shape11=Rectangle ([Shape:X]-10),([Shape:Y]),([#WidthSettings]-([Shape:X]-10)*2),([Shape:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1Clock]=1?[#SelectedList2Shape]:0)):(255*([#SelectedList1Clock]=1?[#SelectedList2Shape]:0))):(255*([#SelectedList1Clock]=1?[#SelectedList2Shape]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Shape]:0)):([#BorderStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Shape]:0)):0))
Shape12=Rectangle ([Text:X]-10),([Text:Y]),([#WidthSettings]-([Text:X]-10)*2),([Text:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1Clock]=1?[#SelectedList2Text]:0)):(255*([#SelectedList1Clock]=1?[#SelectedList2Text]:0))):(255*([#SelectedList1Clock]=1?[#SelectedList2Text]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Text]:0)):([#BorderStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Text]:0)):0))
Shape13=Rectangle ([Style:X]-10),([Style:Y]),([#WidthSettings]-([Style:X]-10)*2),([Style:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1Clock]=1?[#SelectedList2Style]:0)):(255*([#SelectedList1Clock]=1?[#SelectedList2Style]:0))):(255*([#SelectedList1Clock]=1?[#SelectedList2Style]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Style]:0)):([#BorderStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Style]:0)):0))
Shape14=Rectangle ([Color:X]-10),([Color:Y]),([#WidthSettings]-([Color:X]-10)*2),([Color:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1Clock]=1?[#SelectedList2Color]:0)):(255*([#SelectedList1Clock]=1?[#SelectedList2Color]:0))):(255*([#SelectedList1Clock]=1?[#SelectedList2Color]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Color]:0)):([#BorderStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Color]:0)):0))
Shape15=Rectangle ([Format:X]-10),([Format:Y]),([#WidthSettings]-([Format:X]-10)*2),([Format:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1Clock]=1?[#SelectedList2Format]:0)):(255*([#SelectedList1Clock]=1?[#SelectedList2Format]:0))):(255*([#SelectedList1Clock]=1?[#SelectedList2Format]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Format]:0)):([#BorderStatus]=1?(255*([#SelectedList1Clock]=1?[#SelectedList2Format]:0)):0))
Shape16=Rectangle ([Language:X]-10),([Language:Y]),([#WidthSettings]-([Language:X]-10)*2),([Language:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1Extras]=1?[#SelectedList2Language]:0)):(255*([#SelectedList1Extras]=1?[#SelectedList2Language]:0))):(255*([#SelectedList1Extras]=1?[#SelectedList2Language]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1Extras]=1?[#SelectedList2Language]:0)):([#BorderStatus]=1?(255*([#SelectedList1Extras]=1?[#SelectedList2Language]:0)):0))
Shape17=Rectangle ([Manage:X]-10),([Manage:Y]),([#WidthSettings]-([Manage:X]-10)*2),([Manage:H]-1),8 | FillColor [#TitleBarColor],([#AcrylicStatus]=1?([#BackgroundStatus]=1?([#BackgroundOpacity]*([#SelectedList1SkinSettings]=1?[#SelectedList2Manage]:0)):(255*([#SelectedList1SkinSettings]=1?[#SelectedList2Manage]:0))):(255*([#SelectedList1SkinSettings]=1?[#SelectedList2Manage]:0))) | StrokeWidth 1 | StrokeColor [#Border],([#AcrylicStatus]=1?(255*([#SelectedList1SkinSettings]=1?[#SelectedList2Manage]:0)):([#BorderStatus]=1?(255*([#SelectedList1SkinSettings]=1?[#SelectedList2Manage]:0)):0))

Shape18=Rectangle ([[#OverItem]:X]-10),([[#OverItem]:Y]),([#WidthSettings]-([[#OverItem]:X]-10)*2),([[#OverItem]:H]-1),8 | FillColor [#Text],50 | StrokeWidth 0
; ===================================================

[null]
Meter=String
MeterStyle=Base | String.getText
X=([#WidthSettings]/2)
W=0
H=0

[Name]
Meter=String
MeterStyle=Base | String.getText
X=([#WidthSettings]/2)
Y=([#TitleBarHeight]/2)
W=[#WidthSettings]
H=[#TitleBarHeight]
StringAlign=CenterCenter
InLineSetting2=Color | [#FontColor]
InLineSetting3=Size | ([#TitleBarHeight]/3)
InlineSetting4=Shadow | 0 | 0 | 0 | [#FontColor]
MouseOverAction=[!Draggable 1]
MouseLeaveAction=[!Draggable 0]
MouseScrollUpAction=[!SetVariable TitleBarHeight "([#TitleBarHeight] + 2)"][!SetVariable WidthSettings "(300+[#TitleBarHeight]*(Floor([#TitleBarHeight]/10)))"][!WriteKeyValue Variables TitleBarHeight "[#TitleBarHeight]" "#@#Variables\SkinSettingsVars.inc"][!UpdateMeterGroup Settings][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!SetVariable TitleBarHeight "([#TitleBarHeight] - 2 < 30 ? 30 : [#TitleBarHeight]-2)"][!SetVariable WidthSettings "(300+[#TitleBarHeight]*(Floor([#TitleBarHeight]/10)))"][!WriteKeyValue Variables TitleBarHeight "[#TitleBarHeight]" "#@#Variables\SkinSettingsVars.inc"][!UpdateMeterGroup Settings][!UpdateMeter *][!Redraw]
Text=#ROOTCONFIG#

[CloseSkin]
Meter=String
Padding=5,0,5,0
MeterStyle=Base | String.getText
X=([#WidthSettings]-5)
Y=([#TitleBarHeight]/2)
H=[#TitleBarHeight]
StringAlign=RightCenter
InLineSetting2=Color | [#FontColor]
InLineSetting3=Size | ([#TitleBarHeight]/3)
InlineSetting4=Shadow | 0 | 0 | 0 | [#FontColor]
SolidColor=0,0,0,1
LeftMouseUpAction=[!DeactivateConfig]
MouseOverAction=
Text=⨉


; ===================================================

[Clock]
Meter=String
Y=5R
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(1)

; ===================================================

[Shape]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1Clock])

; ===================================================

[WidthT]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Shape])

[Width]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Shape])

[HeightT]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Shape])

[Height]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Shape])

[RadiusT]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Shape]+[#AcrylicStatus]+(1-[#BackgroundStatus]))

[Radius]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Shape]+[#AcrylicStatus]+(1-[#BackgroundStatus]))

; ===================================================

[Text]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1Clock])

; ===================================================

[Paddingt]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Text])

[Padding]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Text])

[Glow]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Text])

; ===================================================

[Style]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1Clock])

; ===================================================

[Background]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Style])

[Acrylic]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(([#WindowsVersion]<10?1:((3-[#SelectedList1Clock]-[#SelectedList2Style]-[#BackgroundStatus]))))

[Corner]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(([#WindowsVersion]<11?1:(4-[#SelectedList1Clock]-[#SelectedList2Style]-[#BackgroundStatus]-[#AcrylicStatus])))

[Border]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(3-[#SelectedList1Clock]-[#SelectedList2Style]-[#BackgroundStatus]+([#AcrylicStatus]=0?0:[#CornerStatus]))

; ===================================================

[Color]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1Clock])

; ===================================================

[Latte]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setColor
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Color])

[Frappe]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setColor
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Color])

[Macchiato]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setColor
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Color])

[Mocha]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setColor
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Color])

[Custom]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setColor
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Color])

[CustomColor]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle | Item.getCustom
LeftMouseUpAction=["#@#Colors\Custom.inc"]
Hidden=(3-[#SelectedList1Clock]-[#SelectedList2Color]-[#CustomStatus])

; ===================================================

[Format]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1Clock])

; ===================================================

[Hour]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Format])

[Indicator]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(3-[#SelectedList1Clock]-[#SelectedList2Format]-[#HourStatus])

[Second]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Format])

[Date]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1Clock]-[#SelectedList2Format])

[CustomDate]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle | Item.getCustom
LeftMouseUpAction=["#@#Variables\CustomDate.inc"]
Hidden=(3-[#SelectedList1Clock]-[#SelectedList2Format]-[#DateStatus])

; ===================================================

[Extras]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(1)

; ===================================================

[Screensaver]
Meter=String
MeterStyle=Base | String.getText | List.getIndex(2) | Item.getConfig | Item.getStatus | Item.setToggle
X=(30)
Hidden=(1-[#SelectedList1Extras])

; ===================================================

[OpenKeyT]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
Hidden=(2-[#SelectedList1Extras]-[#ScreensaverStatus])

[OpenKey]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput | Item.getUserInputText
Hidden=(2-[#SelectedList1Extras]-[#ScreensaverStatus])
X=([#WidthSettings]-[OpenKeyT:X]-[OpenKey:W]/2-[OpenKey2:W]-15)
W=80

[OpenKey2]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput | Item.getUserInputText
X=([#WidthSettings]-[OpenKeyT:X]-[OpenKey2:W]/2)
W=40
Hidden=(2-[#SelectedList1Extras]-[#ScreensaverStatus])

[QuitKeyT]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
Hidden=(2-[#SelectedList1Extras]-[#ScreensaverStatus])

[QuitKey]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText | Item.getUserInput | Item.getUserInputText
Hidden=(2-[#SelectedList1Extras]-[#ScreensaverStatus])

; ===================================================

[Language]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1Extras])

; ===================================================

[en]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setLanguage
Hidden=(2-[#SelectedList1Extras]-[#SelectedList2Language])

[es]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setLanguage
Hidden=(2-[#SelectedList1Extras]-[#SelectedList2Language])

[it]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setLanguage
Hidden=(2-[#SelectedList1Extras]-[#SelectedList2Language])

[Custom2]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setLanguage
LeftMouseUpAction=[#RestoreRadioLanguage][!SetVariable [#CURRENTSECTION]Status 1][!WriteKeyValue Variables [#CURRENTSECTION]Status 1 "#@#Variables\UserVars.inc"][!WriteKeyValue Variables Language Custom "#@#Variables\UserVars.inc"][#Action][!Refresh]
Hidden=(2-[#SelectedList1Extras]-[#SelectedList2Language])

[CustomLanguage]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle | Item.getCustom
LeftMouseUpAction=["#@#Languages\Custom.inc"]
Hidden=(3-[#SelectedList1Extras]-[#SelectedList2Language]-[#Custom2Status])

; ===================================================

[SkinSettings]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(1)

; ===================================================

[Manage]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
Hidden=(1-[#SelectedList1SkinSettings])

; ===================================================

[Centerit]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(3)
Hidden=(2-[#SelectedList1SkinSettings]-[#SelectedList2Manage])

; ===================================================

[CenterHorizontal]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
X=([#TitleBarHeight]*4/2)
LeftMouseUpAction=[!Move "([#SCREENAREAWIDTH]/2-[#Width]/2)" "[#Skin.Main.getY]" "#ROOTCONFIG#"]
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Centerit])

[CenterVertical]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getSimpleText
X=([#TitleBarHeight]*4/2)
LeftMouseUpAction=[!Move "[#Skin.Main.getX]" "([#WORKAREAY]+[#WORKAREAHEIGHT]/2-[#Height]/2)" "#ROOTCONFIG#"]
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Centerit])

; ===================================================

[ZPos]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(3)
Hidden=(2-[#SelectedList1SkinSettings]-[#SelectedList2Manage])

; ===================================================

[StayTopMost]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setZPos
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Zpos])

[TopMost]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setZPos
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Zpos])

[Normal]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setZPos
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Zpos])

[Bottom]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setZPos
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Zpos])

[OnDesktop]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setZPos
Hidden=(3-[#SelectedList1SkinSettings]-[#SelectedList2Manage]-[#SelectedList3Zpos])

; ===================================================

[ClickThrough]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1SkinSettings]-[#SelectedList2Manage])

[Draggable]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1SkinSettings]-[#SelectedList2Manage])

[KeepOnScreen]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1SkinSettings]-[#SelectedList2Manage])

[SnapEdges]
Meter=String
MeterStyle=Base | String.getText | Item.getConfig | Item.getStatus | Item.setToggle
Hidden=(2-[#SelectedList1SkinSettings]-[#SelectedList2Manage])

; ===================================================

[Edit]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
LeftMouseUpAction=["#@#Variables\UserVars.inc"]
Hidden=(1-[#SelectedList1SkinSettings])

[Unload]
Meter=String
MeterStyle=Base | String.getText | List.getConfig | List.getIndex(2)
LeftMouseUpAction=[!DeactivateConfig][!DeactivateConfig #ROOTCONFIG#]
Hidden=(1-[#SelectedList1SkinSettings])

; ===================================================

[UtilitiesPlus]
Meter=String
MeterStyle=Base | String.getText
X=([OpenKey2:X]-12.5)
Y=([OpenKey2:Y]+15)
MouseOverAction=[]
MouseLeaveAction=[]
Text=+
Hidden=(2-[#SelectedList1Extras]-[#ScreensaverStatus])
