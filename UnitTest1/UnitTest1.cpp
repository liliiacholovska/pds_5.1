#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_5(1)/pds_5(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestGenerateCombinations)
        {
            std::ostringstream output;
            std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

            generateCombinations();

            std::cout.rdbuf(oldCoutBuffer);

            std::string strOutput = output.str();
            Assert::IsTrue(strOutput.find("a0a") != std::string::npos);
            Assert::IsTrue(strOutput.find("a0b") != std::string::npos);
            Assert::IsTrue(strOutput.find("a0c") != std::string::npos);
            Assert::IsTrue(strOutput.find("b1a") != std::string::npos);
            Assert::IsTrue(strOutput.find("c1c") != std::string::npos);
        }
	};
}
