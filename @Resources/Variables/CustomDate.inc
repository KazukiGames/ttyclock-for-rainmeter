[Variables]
; IN THIS PLACE YOU CAN CUSTOMIZE YOUR DATE, PLEASE READ :D
;
; 
; Example:
;       FirstPosition FirstDvisor SecondPosition SecondDivisor ThirdPosition
; Default Value:
;       DAY / MONTH / YEAR
; ------------------------------------------------------------- ;
; Strings you can add in each position:
; UTIL INFO -> STRING : DEFINITION
; ------------------------------------------------------------- ;
;   DAY0 : Empty Value ()
;   DAY1 : Full weekday name. (Saturday)
;   DAY2 : Abbreviated weekday name. (Sat)
;   DAY3 : Day of month as number. (10)
; ------------------------------------------------------------- ;
;   MONTH0 : Empty Value ()
;   MONTH1 : Full month name. (December)
;   MONTH2 : Abbreviated month name. (Dec)
;   MONTH3 : Month as number (12)
; ------------------------------------------------------------- ;
;   YEAR0 : Empty Value ()
;   YEAR1 : Year with century (2023)
;   YEAR2 : Year without century (23)
; ------------------------------------------------------------- ;
FirstPosition=DAY3

FirstDivisor="/"

SecondPosition=MONTH3

SecondDivisor="/"

ThirdPosition=YEAR2

ThirdDivisor=""

FourthPosition=YEAR0
; ------------------------------------------------------------- ;