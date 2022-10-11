//
// Created by bear on 10/11/2022.
//

#pragma once

#include <error.h>

#include <pf_file.h>
#include <pf_page.h>

#include <string_view>
#include <span>

namespace bluebase::pf
{
	class PFManager
	{
	public:
		PFManager();

		~PFManager();

		ret_code CreateFile(std::string_view fileName);

		ret_code DestroyFile(std::string_view fileName);

		expected<PFFileHandle> OpenFile(std::string_view fileName);

		ret_code CloseFile(PFFileHandle& fileHandle);

		expected<std::span<char>> AllocateBlock();

		ret_code DisposeBlock(std::span<char> buf);
	};
}