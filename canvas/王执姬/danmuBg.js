    var canvas1 = document.getElementById("canvas1");
    var context1 = canvas1.getContext("2d");
    var maxWidth = canvas1.width;
    var maxHeight = canvas1.height;
    var colors = ["#FFFF00","#FFFFFF","#CD00CD","#BFEFFF","#40E0D0","#54FF9F","#7FFF00","#33B5E5", "#0099CC", "#AA66CC", "#9933CC", "#99CC00", "#669900", "#FFBB33", "#FF8800", "#FF4444", "#CC0000"];
    var danmu = ["苟利国家生死以","岂因祸福避趋之","你们啊，naive","66666","233333","屏幕怎么脏了","我好兴奋啊","好好学习 天天向上","每天都要开心吖","QAQ","恭喜你度过了2018年最后一个法定节假日","十一回家你做作业了吗","要加油鸭","离四级考试还有几天？","早起早睡身体好"];
    var listX = [];
	var listY = [];
	var listV = [];
	var listDanmu = [];
	var listColor = [];
	context1.font = "20px 微软雅黑"

    function random(min, max) {
        return Math.floor(Math.random() * (max - min) + min)
    }
	
	for(i=0;i<10;i++){
		context1.fillStyle = colors[Math.floor(Math.random() * colors.length)];
		var x = random(0,maxWidth);
		var y = random(2,50);
		var v = random(1,8);
		var color = colors[Math.floor(Math.random() * colors.length)];
		var Danmu = danmu[Math.floor(Math.random() * danmu.length)];
		context1.fillStyle = color;
		context1.fillText(Danmu,x,y*10);
		listX.push(x);
		listY.push(y);
		listV.push(v);
		listDanmu.push(Danmu);
		listColor.push(color);
	}
	
	var tt = setInterval(function move(){
		context1.clearRect(0,0,maxWidth,maxHeight);
		for(i=0;i<10;i++){
			if(listX[i] > maxWidth){
				listX[i] = 0;
			}
			else{
				listX[i] += listV[i];
			}
			context1.fillStyle = listColor[i];
			context1.fillText(listDanmu[i],listX[i],listY[i]*10);
		}
	},30);