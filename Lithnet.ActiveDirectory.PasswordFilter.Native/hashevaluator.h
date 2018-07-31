#pragma once

bool IsPasswordInStore(std::wstring password);

bool IsHashInStore(std::wstring hash);

bool IsHashInStorev1(BYTE * hash);

bool IsHashInStore(std::wstring hash, std::wstring range);

bool IsHashInStorev1(BYTE * hash, std::wstring range);

std::wstring GetStoreFileName(std::wstring range);

std::wstring GetStoreFileNamev1(std::wstring range);

bool IsHashInFile(std::wstring filename, std::wstring hash);

bool IsHashInFileBS(std::wstring filename, std::wstring hash);

bool IsHashInFilev1(std::wstring filename, BYTE * hashBytes);

const int SHA1_HASH_LENGTH = 40;

const int SHA1_HASH_ROW_TERMINATOR_LENGTH = 2;

const int SHA1_BINARY_HASH_LENGTH = 20;

const int SHA1_BINARY_HASH_ROW_TERMINATOR_LENGTH = 0;

