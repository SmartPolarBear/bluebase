//
// Created by bear on 10/11/2022.
//

#pragma once

namespace bluebase::pf
{
	class PFFileHandle
	{
	public:
		PFFileHandle();

		~PFFileHandle();

		PFFileHandle(const PFFileHandle& fileHandle);

		PFFileHandle& operator=(const PFFileHandle& fileHandle);

		expected <PFFileHandle> GetFirstPage() const;

		expected <PFFileHandle> GetLastPage() const;

		expected <PFFileHandle> GetThisPage(PageNum) const;


	};
}