#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int func(int hor, int blo, int ver);

int main() {
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0, b8 = 0, b9 = 0;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
	int e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0, e6 = 0, e7 = 0, e8 = 0, e9 = 0;
	int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
	int g1 = 0, g2 = 0, g3 = 0, g4 = 0, g5 = 0, g6 = 0, g7 = 0, g8 = 0, g9 = 0;
	int h1 = 0, h2 = 0, h3 = 0, h4 = 0, h5 = 0, h6 = 0, h7 = 0, h8 = 0, h9 = 0;
	int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0;


	a1 = func(1, 1, 1 );

	a2 = func(1, 1, 2);

	a3 = func(1, 1, 3);

	a4 = func(1, 2, 4);

	a5 = func(1, 2, 5);

	a6 = func(1, 2, 6);

	a7 = func(1, 3, 7);

	a8 = func(1, 3, 8);

	a9 = func(1, 3, 9);

	b1 = func(2, 1, 1);

	b2 = func(2, 1, 2);

	b3 = func(2, 1, 3);

	b4 = func(2, 2, 4);

	b5 = func(2, 2, 5);

	b6 = func(2, 2, 6);

	b7 = func(2, 3, 7);

	b8 = func(2, 3, 8);

	b9 = func(2, 3, 9);

	c1 = func(3, 1, 1);

	c2 = func(3, 1, 2);

	c3 = func(3, 1, 3);

	c4 = func(3, 2, 4);

	c5 = func(3, 2, 5);

	c6 = func(3, 2, 6);

	c7 = func(3, 3, 7);

	c8 = func(3, 3, 8);

	c9 = func(3, 3, 9);

	d1 = func(4, 4, 1);

	d2 = func(4, 4, 2);

	d3 = func(4, 4, 3);

	d4 = func(4, 5, 4);

	d5 = func(4, 5, 5);

	d6 = func(4, 5, 6);

	d7 = func(4, 6, 7);

	d8 = func(4, 6, 8);

	d9 = func(4, 6, 9);

	e1 = func(5, 4, 1);

	e2 = func(5, 4, 2);

	e3 = func(5, 4, 3);

	e4 = func(5, 5, 4);

	e5 = func(5, 5, 5);

	e6 = func(5, 5, 6);

	e7 = func(5, 6, 7);

	e8 = func(5, 6, 8);

	e9 = func(5, 6, 9);

	f1 = func(6, 4, 1);

	f2 = func(6, 4, 2);

	f3 = func(6, 4, 3);

	f4 = func(6, 5, 4);

	f5 = func(6, 5, 5);

	f6 = func(6, 5, 6);

	f7 = func(6, 6, 7);

	f8 = func(6, 6, 8);

	f9 = func(6, 6, 9);

	g1 = func(7, 7, 1);

	g2 = func(7, 7, 2);

	g3 = func(7, 7, 3);

	g4 = func(7, 8, 4);

	g5 = func(7, 8, 5);

	g6 = func(7, 8, 6);

	g7 = func(7, 9, 7);

	g8 = func(7, 9, 8);

	g9 = func(7, 9, 9);

	h1 = func(8, 7, 1);

	h2 = func(8, 7, 2);

	h3 = func(8, 7, 3);

	h4 = func(8, 8, 4);

	h5 = func(8, 8, 5);

	h6 = func(8, 8, 6);

	h7 = func(8, 9, 7);

	h8 = func(8, 9, 8);

	h9 = func(8, 9, 9);

	i1 = func(9, 7, 1);

	i2 = func(9, 7, 2);

	i3 = func(9, 7, 3);

	i4 = func(9, 8, 4);

	i5 = func(9, 8, 5);

	i6 = func(9, 8, 6);

	i7 = func(9, 9, 7);

	i8 = func(9, 9, 8);

	i9 = func(9, 9, 9);




	cout << a1 << " " << a2 << " " << a3 << " " << "|" << " " << a4 << " " << a5 << " " << a6 << " " << "|" << " " << a7 << " " << a8 << " " << a9 << endl;
	cout << b1 << " " << b2 << " " << b3 << " " << "|" << " " << b4 << " " << b5 << " " << b6 << " " << "|" << " " << b7 << " " << b8 << " " << b9 << endl;
	cout << c1 << " " << c2 << " " << c3 << " " << "|" << " " << c4 << " " << c5 << " " << c6 << " " << "|" << " " << c7 << " " << c8 << " " << c9 << endl;
	cout << "---------------------" << endl;
	cout << d1 << " " << d2 << " " << d3 << " " << "|" << " " << d4 << " " << d5 << " " << d6 << " " << "|" << " " << d7 << " " << d8 << " " << d9 << endl;
	cout << e1 << " " << e2 << " " << e3 << " " << "|" << " " << e4 << " " << e5 << " " << e6 << " " << "|" << " " << e7 << " " << e8 << " " << e9 << endl;
	cout << f1 << " " << f2 << " " << f3 << " " << "|" << " " << f4 << " " << f5 << " " << f6 << " " << "|" << " " << f7 << " " << f8 << " " << f9 << endl;
	cout << "---------------------" << endl;
	cout << g1 << " " << g2 << " " << g3 << " " << "|" << " " << g4 << " " << g5 << " " << g6 << " " << "|" << " " << g7 << " " << g8 << " " << g9 << endl;
	cout << h1 << " " << h2 << " " << h3 << " " << "|" << " " << h4 << " " << h5 << " " << h6 << " " << "|" << " " << h7 << " " << h8 << " " << h9 << endl;
	cout << i1 << " " << i2 << " " << i3 << " " << "|" << " " << i4 << " " << i5 << " " << i6 << " " << "|" << " " << i7 << " " << i8 << " " << i9 << endl;

	return 0;
}

int func(int hor, int blo, int ver)
{
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0, v7 = 0, v8 = 0, v9 = 0;
	int var = 0;

	bool cor;
	srand((int)time(0));


		do {
			v1 = rand() % 9 + 1;
			cor = true;
		} while (!cor);
		do {
			v2 = rand() % 9 + 1;
			cor = true;
			if (v2 == v1) {
				cor = false;
			}
		} while (!cor);
		do {
			v3 = rand() % 9 + 1;
			cor = true;
			if (v3 == v1 || v3 == v2 ) {
				cor = false;
			}
		} while (!cor);
		do {
			v4 = rand() % 9 + 1;
			cor = true;
			if (v4 == v1 || v4 == v2 || v4 == v3) {
				cor = false;
			}
		} while (!cor);
		do {
			v5 = rand() % 9 + 1;
			cor = true;
			if (v5 == v1 || v5 == v2 || v5 == v3 || v5 == v4 ) {
				cor = false;
			}
		} while (!cor);
		do {
			v6 = rand() % 9 + 1;
			cor = true;
			if (v6 == v1 || v6 == v2 || v6 == v3 || v6 == v4 || v6 == v5) {
				cor = false;
			}
		} while (!cor);
		do {
			v7 = rand() % 9 + 1;
			cor = true;
			if (v7 == v1 || v7 == v2 || v7 == v3 || v7 == v4 || v7 == v5 || v7 == v6) {
				cor = false;
			}
		} while (!cor);
		do {
			v8 = rand() % 9 + 1;
			cor = true;
			if (v8 == v1 || v8 == v2 || v8 == v3 || v8 == v4 || v8 == v5 || v8 == v6 || v8 == v7) {
				cor = false;
			}
		} while (!cor);
		do {
			v9 = rand() % 9 + 1;
			cor = true;
			if (v9 == v1 || v9 == v2 || v9 == v3 || v9 == v4 || v9 == v5 || v9 == v6 || v9 == v7 || v9 == v8) {
				cor = false;
			}
		} while (!cor);



		
	if (hor == 1 && blo == 1 && ver == 1) {

		var = v1;
	}
	if (hor == 1 && blo == 1 && ver == 2) {

		var = v2;
	}
    if (hor == 1 && blo == 1 && ver == 3) {

		var = v3;
    }
	if (hor == 1 && blo == 2 && ver == 4) {

		var = v4;
	}
	if (hor == 1 && blo == 2 && ver == 5) {

		var = v5;
	}
	if (hor == 1 && blo == 2 && ver == 6) {

		var = v6;
	}
	if (hor == 1 && blo == 3 && ver == 7) {

		var = v7;
	}
	if (hor == 1 && blo == 3 && ver == 8) {

		var = v8;
	}
	if (hor == 1 && blo == 3 && ver == 9) {

		var = v9;
	}
	if (hor == 2 && blo == 1 && ver == 1) {

		var = v4;
	}
	if (hor == 2 && blo == 1 && ver == 2) {

		var = v5;
	}
	if (hor == 2 && blo == 1 && ver == 3) {

		var = v6;
	}
	if (hor == 2 && blo == 2 && ver == 4) {

		var = v7;
	}
	if (hor == 2 && blo == 2 && ver == 5) {

		var = v8;
	}
	if (hor == 2 && blo == 2 && ver == 6) {

		var = v9;
	}
	if (hor == 2 && blo == 3 && ver == 7) {

		var = v1;
	}
	if (hor == 2 && blo == 3 && ver == 8) {

		var = v2;
	}
	if (hor == 2 && blo == 3 && ver == 9) {

		var = v3;
	}
	if (hor == 3 && blo == 1 && ver == 1) {

		var = v7;
	}
	if (hor == 3 && blo == 1 && ver == 2) {

		var = v8;
	}
	if (hor == 3 && blo == 1 && ver == 3) {

		var = v9;
	}
	if (hor == 3 && blo == 2 && ver == 4) {

		var = v1;
	}
	if (hor == 3 && blo == 2 && ver == 5) {

		var = v2;
	}
	if (hor == 3 && blo == 2 && ver == 6) {

		var = v3;
	}
	if (hor == 3 && blo == 3 && ver == 7) {

		var = v4;
	}
	if (hor == 3 && blo == 3 && ver == 8) {

		var = v5;
	}
	if (hor == 3 && blo == 3 && ver == 9) {

		var = v6;
	}
	if (hor == 4 && blo == 4 && ver == 1) {

		var = v3;
	}
	if (hor == 4 && blo == 4 && ver == 2) {

		var = v1;
	}
	if (hor == 4 && blo == 4 && ver == 3) {

		var = v2;
	}
	if (hor == 4 && blo == 5 && ver == 4) {

		var = v6;
	}
	if (hor == 4 && blo == 5 && ver == 5) {

		var = v4;
	}
	if (hor == 4 && blo == 5 && ver == 6) {

		var = v5;
	}
	if (hor == 4 && blo == 6 && ver == 7) {

		var = v9;
	}
	if (hor == 4 && blo == 6 && ver == 8) {

		var = v7;
	}
	if (hor == 4 && blo == 6 && ver == 9) {

		var = v8;
	}
	if (hor == 5 && blo == 4 && ver == 1) {

		var = v9;
	}
	if (hor == 5 && blo == 4 && ver == 2) {

		var = v7;
	}
	if (hor == 5 && blo == 4 && ver == 3) {

		var = v8;
	}
	if (hor == 5 && blo == 5 && ver == 4) {

		var = v3;
	}
	if (hor == 5 && blo == 5 && ver == 5) {

		var = v1;
	}
	if (hor == 5 && blo == 5 && ver == 6) {

		var = v2;
	}
	if (hor == 5 && blo == 6 && ver == 7) {

		var = v6;
	}
	if (hor == 5 && blo == 6 && ver == 8) {

		var = v4;
	}
	if (hor == 5 && blo == 6 && ver == 9) {

		var = v5;
	}
	if (hor == 6 && blo == 4 && ver == 1) {

		var = v6;
	}
	if (hor == 6 && blo == 4 && ver == 2) {

		var = v4;
	}
	if (hor == 6 && blo == 4 && ver == 3) {

		var = v5;
	}
	if (hor == 6 && blo == 5 && ver == 4) {

		var = v9;
	}
	if (hor == 6 && blo == 5 && ver == 5) {

		var = v7;
	}
	if (hor == 6 && blo == 5 && ver == 6) {

		var = v8;
	}
	if (hor == 6 && blo == 6 && ver == 7) {

		var = v3;
	}
	if (hor == 6 && blo == 6 && ver == 8) {

		var = v1;
	}
	if (hor == 6 && blo == 6 && ver == 9) {

		var = v2;
	}
	if (hor == 7 && blo == 7 && ver == 1) {

		var = v2;
	}
	if (hor == 7 && blo == 7 && ver == 2) {

		var = v3;
	}
	if (hor == 7 && blo == 7 && ver == 3) {

		var = v1;
	}
	if (hor == 7 && blo == 8 && ver == 4) {

		var = v5;
	}
	if (hor == 7 && blo == 8 && ver == 5) {

		var = v6;
	}
	if (hor == 7 && blo == 8 && ver == 6) {

		var = v4;
	}
	if (hor == 7 && blo == 9 && ver == 7) {

		var = v8;
	}
	if (hor == 7 && blo == 9 && ver == 8) {

		var = v9;
	}
	if (hor == 7 && blo == 9 && ver == 9) {

		var = v7;
	}
	if (hor == 8 && blo == 7 && ver == 1) {

		var = v8;
	}
	if (hor == 8 && blo == 7 && ver == 2) {

		var = v9;
	}
	if (hor == 8 && blo == 7 && ver == 3) {

		var = v7;
	}
	if (hor == 8 && blo == 8 && ver == 4) {

		var = v2;
	}
	if (hor == 8 && blo == 8 && ver == 5) {

		var = v3;
	}
	if (hor == 8 && blo == 8 && ver == 6) {

		var = v1;
	}
	if (hor == 8 && blo == 9 && ver == 7) {

		var = v5;
	}
	if (hor == 8 && blo == 9 && ver == 8) {

		var = v6;
	}
	if (hor == 8 && blo == 9 && ver == 9) {

		var = v4;
	}
	if (hor == 9 && blo == 7 && ver == 1) {

		var = v5;
	}
	if (hor == 9 && blo == 7 && ver == 2) {

		var = v6;
	}
	if (hor == 9 && blo == 7 && ver == 3) {

		var = v4;
	}
	if (hor == 9 && blo == 8 && ver == 4) {

		var = v8;
	}
	if (hor == 9 && blo == 8 && ver == 5) {

		var = v9;
	}
	if (hor == 9 && blo == 8 && ver == 6) {

		var = v7;
	}
	if (hor == 9 && blo == 9 && ver == 7) {

		var = v2;
	}
	if (hor == 9 && blo == 9 && ver == 8) {

		var = v3;
	}
	if (hor == 9 && blo == 9 && ver == 9) {

		var = v1;
	}
	






	return var;
}



		
