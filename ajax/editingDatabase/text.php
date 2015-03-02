<html>
<head>
        <script src="jQuery.js" type="text/javascript"></script>
        <script type="text/javascript">
function check(str)
{
var xmlhttp;
if (str=="")
  {
  document.getElementById("result").innerHTML="";
  return;
  }
if (window.XMLHttpRequest)
  {// code for IE7+, Firefox, Chrome, Opera, Safari
  xmlhttp=new XMLHttpRequest();
  }
else
  {// code for IE6, IE5
  xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
  }
xmlhttp.onreadystatechange=function()
  {
  if (xmlhttp.readyState==4 && xmlhttp.status==200)
    {
    document.getElementById("result").innerHTML=xmlhttp.responseText;
    }
  }
xmlhttp.open("POST","checkusername.php",true);
xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
xmlhttp.send("name="+str);
}
</script>
</head>
<body>
<?php
$con = mysqli_connect('localhost','root','shivi');
if (!$con) {
    die('Could not connect: ' . mysqli_error($con));
}

mysqli_select_db($con,"lr");
$sql="SELECT username, name FROM users";
$result = mysqli_query($con,$sql);
$row = mysqli_fetch_assoc($result);
?>
check the username: 
<input type="text" name="name" onchange="check(this.value)" autocomplete="off" value="<?php// echo $result[0]; ?>"><br>
<div id="result">
<table>
<?php 
print_r ($result);
foreach($row as $key){ ?>
<tr>
<td>Username: </td><td><?php echo $row['username']; ?></td>
</tr>
<tr>
<td>Name: </td><td><?php echo $row['name']; ?></td>
</tr>
<?php } ?>
</table>
</div>
</body>
</html>