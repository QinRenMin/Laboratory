function startTime()
{
var today=new Date()
var h=today.getHours()
var m=today.getMinutes()
var s=today.getSeconds()
var nian=today.getYear()+1900
var yue=today.getMonth()+1
var ri=today.getDate()
var week=today.getDay()
var str

switch (week) {  
        case 0 :  
                str = "Sunday"
                break 
        case 1 :  
                str = "Monday"
                break
        case 2 :  
                str = "Tuesday"
                break 
        case 3 :  
                str = "Wednesday"
                break 
        case 4 :  
                str = "Thursday"
                break 
        case 5 :  
                str = "Friday"
                break
        case 6 :  
                str = "Saturday"
                break 
}  
m=checkTime(m)
s=checkTime(s)
document.getElementById("time").innerHTML=nian+"."+yue+"."+ri+"<br>"+str+"<br>"+h+":"+m+":"+s
t=setTimeout('startTime()',500)
}

function checkTime(i)
{
if (i<10) 
  {i="0" + i}
  return i
}