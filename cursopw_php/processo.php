<!DOCTYPE html>
<html>
<head>
	<title>Processamento de Dados</title>
	<meta http-equiv="Content-Type">
	<meta charset="utf-8">
</head>
<body>
	<?php  
		$nome= $_POST['Nome'];
		$cpf= $_POST['cpf'];
		$endereco= $_POST['Endereço'];
		$estado= $_POST['listaestados'];
		$DataDeNas= $_POST['DataDeNas'];
		$sexo= $_POST['Sexo'];
		$musica= $_POST['musica'];
		$teatro= $_POST['teatro'];
		$cinema= $_POST['cinema'];
		$informatica= $_POST['informatica'];
		$Login= $_POST['Login'];
		$senha= $_POST['senha'];
		$senha2= $_POST['senha2'];
		$foto= $_FILES['foto'];

		$camposOK = true;

		if($foto['error']!=0){
			echo "Erro no upload do arquivo";
			$camposOK= false;
		}
		if ($foto['size']==0) {
			echo "O tamanho do arquivo é zero";
			$camposOK= false;
		}
		if ($foto['size']>400000) {
			echo "O tamanho do arquivo é muito grande para ser suportado";
			$camposOK= false;
		}

		if (($foto['type']!="image/gif")&&($foto['type']!="image/jpeg")&&($foto['type']!="image/pjpeg")&&($foto['type']!="image/x-png")&&($foto['type']!="image/png")&&($foto['type']!="image/bmp")) {
			echo "Formato de imagem não compativel <br>";
			$camposOK= false;
		}
		$destino= "C:/xampp/htdocs/cursopw_php/img/";
		$destino= $destino.$foto['name'];
		$res= move_uploaded_file($foto['tmp_name'],$destino);

		if ($res==false) {
			echo "Erro ao copiar arquivo";
		}

		if($nome==""){
			echo "Informe o seu nome <br>";
			$camposOK= false;
		}
		if($endereco==""){
			echo "Informe o seu endereço <br>";
			$camposOK= false;
		}
		if($senha != $senha2){
			echo "As senhas não conferem <br>";
			$camposOK= false;
		}

		if ($camposOK=true){
			echo "<table border='0'>";
	//		echo "<tr><td>FOTO:</td><td><b>$foto</b></td></tr>";
			echo "<IMG heigth=120 width=120 src='img/".$foto['name']."'>";
			echo "<tr><td>NOME:</td><td><b>$nome</b></td></tr>";
			echo "<tr><td>CPF:</td><td><b>$cpf</b></td></tr>";			
			echo "<tr><td>ENDEREÇO:</td><td><b>$endereco</b></td></tr>";
			echo "<tr><td>ESTADO:</td><td><b>$estado</b></td></tr>";
			echo "<tr><td>DATA DE NASCIMENTO:</td><td><b>$DataDeNas</b></td></tr>";
			echo "<tr><td>SEXO:</td><td><b>$sexo</b></td></tr>";
			echo "<tr><td>LOGIN:</td><td><b>$Login</b></td></tr>";			
			echo "<tr><td>SENHA:</td><td><b>$senha</b></td></tr>";
			echo "<tr><td>ÁREAS DE INTERESSE:</td><td><b>";
				if($cinema==true){
					echo "Cinema <br>";
				}
				if($musica==true){
					echo "Música <br>";
				}
				if($teatro==true){
					echo "Teatro <br>";
				}
				if($informatica==true){
					echo "Informática <br>";
				}				
				echo "</b></td></tr></table>";
		}	
	?>
</body>
</html>