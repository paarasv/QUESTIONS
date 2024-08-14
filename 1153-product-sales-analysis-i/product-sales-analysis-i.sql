# Write your MySQL query statement below
select product_name, year , price from Sales 
right join Product
 on Sales.product_id = Product.product_id where year is not null;
