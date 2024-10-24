#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"

class TextureConverter
{
public:

	//テクスチャをWICからDDSに変換する
	void ConvertTectureWiCToDDs(const std::string& filePath);

private:

	//テクスチャファイル読み込み
	void LoadWICTextureFromFile(const std::string& filePath);

	//マルチバイト文字列をワイド文字列に変換
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scratchImage_;

};

