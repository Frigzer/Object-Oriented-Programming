#pragma once

class TSilnik
{
private:
	int moc;
	int max_moment_obr;

	

public:

	TSilnik(int m, int n);

	friend class TSamochod;
};

