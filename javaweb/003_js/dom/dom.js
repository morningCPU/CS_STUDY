onload = function () {
    var but1 = this.document.getElementById("but1");
    var but2 = this.document.getElementById("but2");
    var city = document.getElementById("city");
    but1.onclick = function () {
        var add1 = document.createElement("li");
        add1.innerText = "厦门";
        var list = city.children;
        for (var i = 0; i < list.length; ++i) {
            if (list[i].innerText == "上海") {
                city.insertBefore(add1, list[i]);
            }
        }
    }
    but2.onclick = function () {
        var list = city.children;
        for (var i = 0; i < list.length; ++i) {
            if (list[i].innerText == "上海") {
                list[i].remove();
            }
        }
    }
}