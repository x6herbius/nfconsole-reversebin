#pragma once

#include "BinaryFileCommon.h"

class BinaryFileCollection
{
public:
	static BinaryFileCollection Instance;

	void initialise(const std::string& rootDir);

	const BinaryFileCommon& common() const;

private:
	void readCommonFile();

	std::string m_RootDir;
	BinaryFileCommon m_CommonFile;
};
