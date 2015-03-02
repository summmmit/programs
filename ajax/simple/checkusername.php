<?php
// Database connection...
$q = ($_GET['q']);

$con = mysqli_connect('localhost','root','shivi');
if (!$con) {
    die('Could not connect: ' . mysqli_error($con));
}

mysqli_select_db($con,"lr");
$sql="SELECT username FROM users WHERE username = '".$q."'";
$result = mysqli_query($con,$sql);
print_r($result = mysqli_fetch_row($result));
if ($result) {
echo "Username Not available.";
}else{
echo "Congrates; Username is available.";
}
?>