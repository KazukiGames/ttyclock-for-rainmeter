[Meter\Background]
Meter=Shape
MeterStyle=Base | Clock
Shape=Rectangle 0,0,[#Width],[#Height],([#AcrylicStatus]=1?0:[#Radius]) | FillColor [#BackgroundColor],([#BackgroundStatus]=1?[#BackgroundOpacity]:0) | StrokeWidth 0
Shape2=Rectangle 0,0,[#Width],[#Height],([#AcrylicStatus]=1?0:[#Radius]) | FillColor [#BorderColor],([#BackgroundStatus]=1?[#BorderOpacity]:0) | StrokeWidth 0
Shape3=Rectangle ([#AcrylicStatus]=1?0:[#BorderStatus]),([#AcrylicStatus]=1?0:[#BorderStatus]),([#Width]-([#AcrylicStatus]=1?0:[#BorderStatus])*2),([#Height]-([#AcrylicStatus]=1?0:[#BorderStatus])*2),([#AcrylicStatus]=1?0:[#Radius]) | FillColor [#BorderColor],([#BackgroundStatus]=1?[#BorderOpacity]:0) | StrokeWidth 0
Shape4=Combine Shape2 | Exclude Shape3

[Meter\Time]
Meter=String
MeterStyle=Base | Clock | Meter