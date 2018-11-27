const fizzbuzz = require("../test");
describe("FizzBuzz",function(){
 it("return ordinary number", function(){
  let number = 1;
  let result = fizzbuzz(number);
  expect(result).to.equal("1");
 }); 
 it("return fizz", function(){
  let number = 3;
  let result = fizzbuzz(number);
  expect(result).to.equal("Fizz");
 }); 
 it("return buzz", function(){
  let number = 5;
  let result = fizzbuzz(number);
  expect(result).to.equal("Buzz");
 }); 
 it("return fizzbuzz", function(){
  let number = 15;
  let result = fizzbuzz(number);
  expect(result).to.equal("FizzBuzz");
 }); 
});