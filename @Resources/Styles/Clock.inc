[Clock]
Group=clock

[Meter]
Padding=([#FontSize]/10+[#Padding]),[#Padding],[#Padding],[#Padding]
X=([#Width]/2)
Y=([#Height]/2)
TexT=[Plugin\Time][#DateFormat[#DateStatus]]
StringCase=Upper
stringAlign = CenterCenter

InLineSetting=Size | [#FontSize]
InLineSetting2=Face | [#Font-1]
InLineSetting3=Color | [#FontColor]
InLineSetting4=CharacterSpacing | (Round([#FontSize]/10)) | (Round([#FontSize]/10))

InLinePattern5=#CRLF#(.*)
InLineSetting5=Size | ([#FontSize]-[#FontSize]/1.5)
InLinePattern6=#CRLF#(.*)
InLineSetting6=Face | [#Font-2]
InLinePattern7=#CRLF#(.*)
InLineSetting7=Color | [#FontColor],(255-255/3)
InLinePattern8=#CRLF#(.*)
InLineSetting8=CharacterSpacing | (Round([#FontSize]/20)) | (Round([#FontSize]/20))

InLineSetting9=Shadow | 0 | 0 | 10 | [#GlowColor],([#GlowOpacity]/6*[#GlowStatus])
InLineSetting10=Shadow | 0 | 0 | 8 | [#GlowColor],([#GlowOpacity]/5*[#GlowStatus])
InLineSetting11=Shadow | 0 | 0 | 6 | [#GlowColor],([#GlowOpacity]/4*[#GlowStatus])
InLineSetting12=Shadow | 0 | 0 | 4 | [#GlowColor],([#GlowOpacity]/3*[#GlowStatus])
InLineSetting13=Shadow | 0 | 0 | 2 | [#GlowColor],([#GlowOpacity]/2*[#GlowStatus])

MouseScrollUpAction=[!SetVariable FontSize "(([[#MainMeterTime]:W]+([#FontSize]/5)) >= [#Width] ? [#FontSize] : (([[#MainMeterTime]:H]+([#FontSize]/5)) >= [#Height] ? [#FontSize] : ([#FontSize] + 2)))"][!WriteKeyValue Variables FontSize "[#FontSize]" "[#WriteConfigPath]"][!UpdateMeter Meter\Time][!Redraw]
MouseScrollDownAction=[!SetVariable FontSize "([#FontSize] - 2 < 20 ? 20 : [#FontSize]-2)"][!WriteKeyValue Variables FontSize "[#FontSize]" "[#WriteConfigPath]"][!UpdateMeter Meter\Time][!Redraw]