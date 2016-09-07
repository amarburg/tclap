#include "gtest/gtest.h"
#include "tclap/CmdLine.h"

using namespace std;
using namespace TCLAP;

TEST(Reject, UnlabeledArgsWithDash) {
	// Define the command line object.
	CmdLine cmd("Reject unlabeled args with dash", ' ', "0.9");

	ValueArg<string> name("n", "name", "Name to print", true, "homer", "string", cmd);
    UnlabeledMultiArg<string> input("input", "Input files", true, "file name", cmd);

    vector<char*> args = { "test", "-n", "joe", "foo", "bar", "--jar" };
	try {
        cmd.parse(args.size(), &args[0]);
    } catch (const ArgException& e) {
        cerr << e.what() << endl;
    }

    EXPECT_EQ(true, name.isSet());
    EXPECT_EQ("joe", name.getValue());
    EXPECT_EQ(2, input.getValue().size());
}
