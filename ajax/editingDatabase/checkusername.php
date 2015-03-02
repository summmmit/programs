<?php
// Database connection...
$name = ($_POST['name']);
$username = ($_POST['username']);

echo $name. "\n";
echo $username;

die;


$con = mysqli_connect('localhost','root','shivi');
if (!$con) {
    die('Could not connect: ' . mysqli_error($con));
}
mysqli_select_db($con,"lr");

$sql = "INSERT INTO `lr`.`users` (`username`, `name`, `can_login`, `group`) VALUES ('', '', '1', '1');";

if (mysqli_query($conn, $sql)) {
    echo "Record updated successfully";
} else {
    echo "Error updating record: " . mysqli_error($conn);
}
//print_r($result = mysqli_fetch_row($result));
?>