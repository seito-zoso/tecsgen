test1 = "const int8_t*"
test1 = "int8_t*"
if test1.include?("*") && !test1.include?("const") then
  p test1
end