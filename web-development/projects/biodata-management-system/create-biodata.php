<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="app.css">
</head>
<body>
    <h1>Create Biodata</h1>
    <form action="create-biodata-script.php" method="post">
        <label for="name">Name</label>
        <input type="text" name="name" id="name">
        <label for="dob">Date of Birth</label>
        <input type="date" name="dob" id="dob">
        <label for="gender">Gender</label>
        <select name="gender" id="gender">
            <option value="male">Male</option>
            <option value="female">Female</option>
        </select>
        <button>Submit</button>
    </form>
    <p><a href="index.php">Click here</a> to go to homepage.</p>
</body>
</html>