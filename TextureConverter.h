#pragma once
#include <string>

class TextureConverter
{
public:

	void ConvertTectureWiCToDDs(const std::string& filePath);

	void LoadWICTextureFromFile(const std::string& filePath);

private:

	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};

