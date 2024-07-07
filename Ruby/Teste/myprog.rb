puts "hello, ruby programemer"
puts "it is now #{Time.now}"

puts " hello ".strip #=> "hello"
puts "\tgoodbye\r\n".strip #=> "goodbye"
puts "\x00\t\n\v\f\r ".strip #=> ""
puts "hello".strip #=> "hello"

  p 'qual seu nome?'
name = gets.chomp

p 'qual seu sobrenome:'
sobrename = gets.chomp

p 'quantos anos você tem?'
idade = gets.chomp.to_i

p 'E seu amigo? qual o nome dele?'
name2 = gets.chomp

p 'Qual o sobrenome dele?'
sobrename2 = gets.chomp

p 'Quantos anos ele tem?'
idade2 = gets.chomp.to_i

case idade2
when 1..12
  p "é criança"
when 13..18
  p "é adolescente"
else
  p "é adulto"
end

case idade
when 1..12
  p "Você é criança"
when 13..18
  p "Você é adolescente"
else
  p "Você é adulto"
end


p "#{name} #{sobrename} tem #{idade} anos!"


p "#{name2} #{sobrename2} tem #{idade2} anos!"
