//
// Created by bear on 10/11/2022.
//

#include "pf_manager.h"

bluebase::pf::PFManager::PFManager()
{

}

bluebase::pf::PFManager::~PFManager()
{

}

bluebase::ret_code bluebase::pf::PFManager::CreateFile(std::string_view fileName)
{
	return 0;
}

bluebase::ret_code bluebase::pf::PFManager::DestroyFile(std::string_view fileName)
{
	return 0;
}

bluebase::expected<bluebase::pf::PFFileHandle> bluebase::pf::PFManager::OpenFile(std::string_view fileName)
{
	return bluebase::expected<bluebase::pf::PFFileHandle>();
}

bluebase::ret_code bluebase::pf::PFManager::CloseFile(bluebase::pf::PFFileHandle& fileHandle)
{
	return 0;
}

bluebase::expected<std::span<char>> bluebase::pf::PFManager::AllocateBlock()
{
	return bluebase::expected<std::span<char>>();
}

bluebase::ret_code bluebase::pf::PFManager::DisposeBlock(std::span<char> buf)
{
	return 0;
}
