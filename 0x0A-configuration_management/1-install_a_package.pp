# installs flask from pip3
exec { 'flask':
  command => 'pip install flask==2.1.0',
}
