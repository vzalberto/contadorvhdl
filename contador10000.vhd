--Alberto Vera Zavala
--2CV2
--Practica #3.3 "Contador a 10 000"

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity contador10000 is
	port(
		clk,reset	:	in 	std_logic :='0';
		led 			:	inout	std_logic :='0';
		an				:	out	std_logic_vector(0 to 3);
		ca				:	out	std_logic_vector(0 to 6)
		);
end contador10000;

architecture cuenta of contador10000 is

type display is array(1 to 4) of std_logic_vector(0 to 3);
constant DISPLAYS : display := ("0111","1011","1101","1110");

type 	digit	is array(0 to 9) of std_logic_vector(0 to 6);
constant DIGITS : digit := ("0000001","1001111","0010010","0000110","1001100","0100100","0100000","0001111","0000000","0001100");

signal k			: integer RANGE 0 to		4500000	:=	0;
signal i			: integer RANGE 0 to 	1500000	:=	0;
signal j 		: integer RANGE 0 to 		1000	:= 0;
signal a,b,c,d : integer RANGE 0 to 9;

signal q : std_logic 				:= '0';
signal x : integer RANGE 1 to 4	:=1;

begin

process(clk)
	begin
	if(clk'event AND clk='1') then		
		i	<=	i + 1;
		j 	<= j + 1;
		--k	<= k + 1;
		
		if i = 1500000 then
		
		led <= not led;
		i 		<= 0;
		
		end if;
			
		if j = 1000 then
		
			q	<= not q;
			j	<= 0;
			
		end if;
	end if;
end process;

process(led,reset)
begin
if reset='1' then
a <= 0;b <= 0;c <= 0;d <= 0;
else
	if(led'event and led='1') then
		if a = 9 then
			a <= 0;
			
			if b = 9 then
				b <= 0;
				
				if c = 9 then
					c <= 0;
					
					if d = 9 then
						d <= 0;
						
					else d <= d + 1;
					end if;
					
				else c <= c + 1;
				end if;
				
			else b <= b + 1;
			end if;
			
		else 
			a <= a + 1;
		end if;
	end if;
end if;
end process;


process(q)
	begin
	if q'event and q='1' then
	an <= DISPLAYS(x);

	if x = 4 then x <= 1;
	else x <= x + 1;end if;
	
	end if;

end process;

process(x)
begin
   
	case x is

	when 1 => ca <= DIGITS(d);				--menos significativo
	when 2 => ca <= DIGITS(a);
	when 3 => ca <= DIGITS(b);
	when 4 => ca <= DIGITS(c);
	end case;
end process;

--process(q)
--begin
--
--if q'event and q='1' then
--case x is
--	when 1 =>
--		case a is
--		
--			when 0 => ca <= DIGITS(0);
--			when 1 => ca <= DIGITS(1);
--			when 2 => ca <= DIGITS(2);
--			when 3 => ca <= DIGITS(3);
--			when 4 => ca <= DIGITS(4);
--			when 5 => ca <= DIGITS(5);
--			when 6 => ca <= DIGITS(6);
--			when 7 => ca <= DIGITS(7);
--			when 8 => ca <= DIGITS(8);
--			when 9 => ca <= DIGITS(9);
--			
--		end case;
--		
--	when 2 =>
--		case b is
--		
--			when 0 => ca <= DIGITS(0);
--			when 1 => ca <= DIGITS(1);
--			when 2 => ca <= DIGITS(2);
--			when 3 => ca <= DIGITS(3);
--			when 4 => ca <= DIGITS(4);
--			when 5 => ca <= DIGITS(5);
--			when 6 => ca <= DIGITS(6);
--			when 7 => ca <= DIGITS(7);
--			when 8 => ca <= DIGITS(8);
--			when 9 => ca <= DIGITS(9);
--			
--		end case;
--		
--	when 3 =>
--		case c is
--			
--			when 0 => ca <= DIGITS(0);
--			when 1 => ca <= DIGITS(1);
--			when 2 => ca <= DIGITS(2);
--			when 3 => ca <= DIGITS(3);
--			when 4 => ca <= DIGITS(4);
--			when 5 => ca <= DIGITS(5);
--			when 6 => ca <= DIGITS(6);
--			when 7 => ca <= DIGITS(7);
--			when 8 => ca <= DIGITS(8);
--			when 9 => ca <= DIGITS(9);
--			
--		end case;
--		
--	when 4 =>
--		case d is
--		
--			when 0 => ca <= DIGITS(0);
--			when 1 => ca <= DIGITS(1);
--			when 2 => ca <= DIGITS(2);
--			when 3 => ca <= DIGITS(3);
--			when 4 => ca <= DIGITS(4);
--			when 5 => ca <= DIGITS(5);
--			when 6 => ca <= DIGITS(6);
--			when 7 => ca <= DIGITS(7);
--			when 8 => ca <= DIGITS(8);
--			when 9 => ca <= DIGITS(9);
--			
--		end case;
--end case;
--end if;
--
--end process;


--process
--begin	
--
--		for d in 0 to 9 loop
--			for c in 0 to 9 loop
--				for b in 0 to 9 loop
--				
--					for a in 0 to 9 loop
--						wait until led='1';
--					end loop;
--					
--				end loop;
--			end loop;
--		end loop;
--		
--end process;


--process(reset,led,a,b,c,d)
--begin
--if led'event and='1' then
--	if reset'event and rising_edge(reset) then
--		a <= 0;
--		b <= 0;
--		c <= 0;
--		d <= 0;
--	else
--	
--	
--	end if;
--end if;
--end process;

--process(a)
--begin
--	an <= "0111";
--	ca <= DIGITS(a);
--end process;
--
--process(b)
--begin
--	Tan := "1011";
--	Tca := DIGITS(b);
--end process;
--
--process(c)
--begin
--	Tan := "1101";
--	Tca := DIGITS(c);
--end process;
--
--process(d)
--begin
--	Tan := "1110";
--	Tca := DIGITS(d);
--end process;
--
--process(Tan,Tca)
--begin
--an <= Tan;
--ca <= Tca;
--end process;

--process(clk)
--	begin
--
--	if(clk'event AND clk='1') then	
--	 
--	case i is
--		when 	0 => an <= "0111"; ca <= DIGITS(4);
--		when 	1 => an <= "1011"; ca <= DIGITS(3);
--		when 	2 => an <= "1101"; ca <= DIGITS(2);
--		when 3 => an <= "1110"; ca <= DIGITS(1); i <= 0;
--		when others =>  i <= i + 1;
--	end case;
--	
--	end if;
--end process;

--process(clk)
--	begin
--	if(clk'event AND clk='1') then
--		i	<=	i + 1;
--		if(i = 10000000) then
--			led	<=	not led;
--			i		<=	0;
--		end if;
--	end if;
--end process;

--process(led,a,b)
--begin	
--
--		for x in 0 to 9 loop
--			for y in 0 to 9 loop
--				for z in 0 to 9 loop
--				
--					for w in 0 to 9 loop
--						if(led'event and led='1') then
--							an<="0111";
--							ca <= DIGITS(w);
--						end if;
--					end loop;
--					
--				end loop;
--			end loop;
--		end loop;
--		
--end process;
--
--process(a,b,c,d)
--begin
--	an <= "1011";
--	ca <= DIGITS(b);
--
--	an<="0111";
--	ca <= DIGITS(a);
--
--end process;
--
--process(a)
--begin
--an<="0111";
--case a is
--when 0 =>	ca	<= "0000001";
--when 1 =>	ca <= "1001111";
--when 2 =>	ca <= "0010010";
--when 3 =>	ca <= "0000110";
--when 4 =>	ca <= "1001100";
--when 5 =>	ca <= "0100100";
--when 6 =>	ca <= "0100000";
--when 7 =>	ca <= "0001111";
--when 8 =>	ca <= "0000000";
--when 9 =>	ca <= "0001100";
--end case;
--end process;
--



end cuenta;
