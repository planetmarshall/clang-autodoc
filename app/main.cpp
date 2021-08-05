#include <iostream>

int main(int argc, const char **argv) {
    CommonOptionsParser parser(argc, argv, tool_category);
    ClangTool tool(parser.getCompilations(), parser.getSourcePathList());
    return tool.run(newFrontendActionFactory<clang::SyyntaxOnlyAction>().get());
}
