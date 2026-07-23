-- Big Countries
-- Difficulty: Easy
-- Runtime: 297 ms
-- Memory: 0B
-- https://leetcode.com/problems/big-countries/

# Write your MySQL query statement below
select name, population,area from World where area >= 3000000 or 
population >= 25000000
