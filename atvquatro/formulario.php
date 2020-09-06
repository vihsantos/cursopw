<!DOCTYPE html>
<html>
<head>
	<title>Formulário de Clientes</title>
	<meta charset="utf-8">
	<link rel="stylesheet" type="text/css" href="estilos.css">
</head>
<body>
	<div id="block">
		<h1>CADASTRO</h1>
		<form action="processo.php" method="POST" enctype="multipart/form-data">
			<label for="Nome">Nome</label>
			<input type="text" name="Nome" placeholder="Insira o seu nome">
			<label for="cpf">CPF</label>
			<input type="text" name="cpf">
			<label for="Endereco">Endereço</label>
			<input type="text" name="Endereço">
			<label for="Estado">Estado</label>
			<select name="listaestados">
				<option value="Outros Estados">Outros</option>
				<option value="Alagoas">AL</option>
				<option value="Bahia">BA</option>
				<option value="Ceará">CE</option>
				<option value="Maranhão">MA</option>
				<option value="Paraíba">PA</option>
				<option value="Pernambuco">PE</option>
				<option value="Piauí">PI</option>
				<option value="Rio Grande do Norte">RN</option>
				<option value="Sergipe">SE</option>
			</select>
			<label for="DataDeNas">Data de Nascimento</label>
			<input type="text" name="DataDeNas">
			<label for="Sexo">Sexo</label>
			<input type="radio" name="Sexo" value="FEMININO"> FEMININO 
			<input type="radio" name="Sexo" value="MASCULINO"> MASCULINO
			<label for="questão">Quais suas áreas de interesse?</label>
			<input type="checkbox" name="musica" value="true">Musica
			<input type="checkbox" name="teatro" value="true">Teatro
			<input type="checkbox" name="cinema" value="true">Cinema
			<input type="checkbox" name="informatica" value="true">Informática
			<label for="Login">Login</label>
			<input type="text" name="Login">
			<label for="senha"> Insira uma senha </label>
			<input type="password" name="senha">
			<label for="senha2"> Confirme a senha </label>
			<input type="password" name="senha2">
			<label for="foto">Foto</label>
			<input type="file" name="foto">
			<br>
			<br>
			<input type="submit" name="enviar" value="Enviar">
			<input type="reset" name="apagar" value="Reset">			
		</form>
	</div>
</body>
</html>