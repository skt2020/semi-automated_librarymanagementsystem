<html>
<head>
	<title>login</title>
	<link href="style_form.css" rel="stylesheet">
	<ul>
		<li><a href="contect.html">Contact</a></li>
		<li><a href="form.html">SignUp</a></li>
		<li><a href="reservation.html">Reservations</a></li>
		<li><a href="about.html">About</a>
			<ul>
			<li><a href="services.html">Our services</a></li>
			<li><a href="events.html">Special events</a></li>
			<li><a href="restaurents.html">Restaurants</a></li>
			<li><a href="offers.html">Offers</a></li>
			</ul>
		</li>
		<li><a href="home.html">Home</a></li>
	</ul>
</head>
<body>
<?php
$hostname="localhost";
$username="root";
$password="";
$dbName="test";
$flag=0;
//////////////////////////////////////////////////////////////////////////////////
//detabase connection
$db=mysqli_connect($hostname, $username, $password, $dbName);
//detabase selection

$st=mysqli_select_db($db,$dbName);
//////////////////////////////////////////////////////////////////////////////////

if($db)
{echo"MySql connected<br>";
if($st)
{echo"Database connected <br>";
$flag=1;
}
else
 echo"Database connected <br>";
}
else
echo"MySql not connected<br>";

///////////////////////////////////////////detabase query//////////////////////////


if($flag==1)
{ // $drop_sql="DROP DATABASE ".$dbName;
	//if(mysqli_query($db,$drop_sql))
	//	echo "<br>database droped<br>";
	//else
	//	echo"<br>database not droped<br>";
$insert = " INSERT INTO test.record(`id`, `username`, `password`) "."VALUES (NULL, ".$user .",". $pass.");";   
echo $insert;
$tr=mysqli_query($db,$insert);
echo $tr;
			
echo "Record Subbmited<br>";

}
else
echo"Access denayed<br>";


?>




	</div>
			<p style="font-size:400%; color:black;padding-top: 0;font-family:Bahnschrift SemiBold Condensed;height:80px;width:100%;color: white;">XENESIS</p>
			<progress style="top:90px;position: absolute;"></progress>
		
<div class="box">
	<h2 style="color:#03a9f4">SignUp</h2>
			
		<form action="#">
				<div class="inputbox">
			    
					  <label>Username</label>
					  <input type="text" name="" id="" placeholder="Username" class="Username">
			    </div>
			    <div class="password">

					  <label><abbr title="17 digit required">Enrollment Number</abbr></label>
					  <input type="text" name="" id="" placeholder="Enrollment Number" class="pass">
			    </div>
			    <div class="inputbox">
			    
					  <label>E-mail</label>
					  <input type="text" name="" id="" placeholder="E-mail" class="Username">
			    </div>
			    <div class="inputbox">
			    
					  <label>Contact no.</label>
					  <input type="text" name="" id="" placeholder="contact" class="Username">
			    </div>

			    <div class="inputbox">
			    
					  <label>Password</label>
					  <input type="password" name="" id="" placeholder="Password" class="pass">
			    </div>
			   
			  <center><button type="submit">SignUp </button></center>
		</form>

</div>

