call SetConfig.cmd
msbuild /p:configuration=Release
copy %lib_path%\x64\Release\SandboxWinLib.lib %DEST_LIB_PATH%
copy %h_path%\SandboxWinLib\Domain\process.h %DEST_H_PATH%