PC
11 12 AM 
12 July 2024
```json
{
  "editor.fontSize": 20,
  "security.workspace.trust.startupPrompt": "always",
  "security.workspace.trust.untrustedFiles": "open",
  "editor.mouseWheelZoom": true,
  "security.workspace.trust.banner": "always",
  "[python]": {
    "diffEditor.ignoreTrimWhitespace": false
  },
  "editor.renderWhitespace": "all",
  "workbench.colorTheme": "Solarized Dark",
  "workbench.iconTheme": "material-icon-theme",
  "workbench.productIconTheme": "fluent-icons",
  "git.enableSmartCommit": true,
  "git.autofetch": true,
  "editor.formatOnSave": true,
  "editor.formatOnPaste": true,
  "editor.formatOnType": true,
  "editor.defaultFormatter": "mblode.pretty-formatter",
  "[c]": {
    "editor.defaultFormatter": "llvm-vs-code-extensions.vscode-clangd"
  },
  "explorer.confirmDelete": false,
  "git.confirmSync": false,
  "C_Cpp.intelliSenseEngine": "disabled",
  "[cpp]": {
    "editor.defaultFormatter": "llvm-vs-code-extensions.vscode-clangd"
  },
  "vsicons.dontShowNewVersionMessage": true,
  "editor.wordWrap": "on",
  "files.autoSave": "onFocusChange",
  "CPcodeforces.userHandle": "Blast_Kazi",
  "CPcodeforces.difficultySortOrder": "RatingAsc",
  "codestream.serverUrl": "https://codestream-us1.service.newrelic.com",
  "cSpell.userWords": [
    "endnode",
    "glfw",
    "Kazi",
    "আসবে",
    "এখানে",
    "করছি",
    "করাই",
    "করেছি",
    "কস্ট",
    "কাউন্ট",
    "কারেন্ট",
    "গ্লোবালি",
    "ডিক্লিয়ার",
    "দিয়েছি"
  ],
  "codeium.enableConfig": {
    "*": false
  },
  "redhat.telemetry.enabled": true,
  "[java]": {
    "editor.defaultFormatter": "redhat.java"
  },
  "[html]": {
    "editor.defaultFormatter": "vscode.html-language-features"
  },
  "terminal.integrated.enableMultiLinePasteWarning": false,
  "[cuda-cpp]": {
    "editor.defaultFormatter": "llvm-vs-code-extensions.vscode-clangd"
  },
  "[rust]": {
    "editor.defaultFormatter": "rust-lang.rust-analyzer"
  },
  "cph.language.java.Command": "/usr/lib/jvm/java-22-openjdk/bin/java",
  "cph.language.java.Args": "",
  "[shellscript]": {
    "editor.defaultFormatter": "foxundermoon.shell-format"
  },
  "clangd.path": "/home/noobcoder_rtx/.config/Code - OSS/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/18.1.3/clangd_18.1.3/bin/clangd",
  "code-runner.executorMapByFileExtension": {
    ".vb": "cd $dir && vbc /nologo $fileName && $dir$fileNameWithoutExt",
    ".vbs": "cscript //Nologo",
    ".scala": "scala",
    ".jl": "julia",
    ".cr": "crystal",
    ".ml": "ocaml",
    ".zig": "zig run",
    ".exs": "elixir",
    ".hx": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
    ".rkt": "racket",
    ".scm": "csi -script",
    ".ahk": "autohotkey",
    ".au3": "autoit3",
    ".kt": "cd $dir && kotlinc $fileName -include-runtime -d $fileNameWithoutExt.jar && java -jar $fileNameWithoutExt.jar",
    ".kts": "kotlinc -script",
    ".dart": "dart",
    ".pas": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
    ".pp": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
    ".d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
    ".hs": "runhaskell",
    ".nim": "nim compile --verbosity:0 --hints:off --run",
    ".csproj": "dotnet run --project",
    ".fsproj": "dotnet run --project",
    ".lisp": "sbcl --script",
    ".kit": "kitc --run",
    ".v": "v run",
    ".vsh": "v run",
    ".sass": "sass --style expanded",
    ".cu": "cd $dir && nvcc $fileName -o ./output/$fileNameWithoutExt -arch=sm_86 && ./output/$dir$fileNameWithoutExt",
    // ".cu": "cd $dir && nvcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    ".ring": "ring",
    ".sml": "cd $dir && sml $fileName",
    ".mojo": "mojo run",
    ".erl": "escript",
    ".spwn": "spwn build",
    ".pkl": "cd $dir && pkl eval -f yaml $fileName -o $fileNameWithoutExt.yaml",
    ".gleam": "gleam run -m $fileNameWithoutExt"
  },
  "[jsonc]": {
    "editor.defaultFormatter": "vscode.json-language-features"
  },
  "c-cpp-compile-run.c-compiler": "clang",
  "c-cpp-compile-run.cpp-compiler": "clang++",
  "code-runner.executorMap": {
    "javascript": "node",
    "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
    // "c": "cd $dir && gcc $fileName -o ./output/$fileNameWithoutExt && ./output/$dir$fileNameWithoutExt",
    "c": "cd $dir && gcc $fileName -o ./output/$fileNameWithoutExt && ./output/$dir$fileNameWithoutExt",
    "zig": "zig run",
    "cpp": "cd $dir && gcc++ $fileName -o ./output/$fileNameWithoutExt && ./output/$dir$fileNameWithoutExt",
    "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    "php": "php",
    "python": "python -u",
    "perl": "perl",
    "perl6": "perl6",
    "ruby": "ruby",
    "go": "go run",
    "lua": "lua",
    "groovy": "groovy",
    "powershell": "powershell -ExecutionPolicy ByPass -File",
    "bat": "cmd /c",
    "shellscript": "bash",
    "fsharp": "fsi",
    "csharp": "scriptcs",
    "vbscript": "cscript //Nologo",
    "typescript": "ts-node",
    "coffeescript": "coffee",
    "scala": "scala",
    "swift": "swift",
    "julia": "julia",
    "crystal": "crystal",
    "ocaml": "ocaml",
    "r": "Rscript",
    "applescript": "osascript",
    "clojure": "lein exec",
    "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
    "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
    "racket": "racket",
    "scheme": "csi -script",
    "ahk": "autohotkey",
    "autoit": "autoit3",
    "dart": "dart",
    "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
    "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
    "haskell": "runghc",
    "nim": "nim compile --verbosity:0 --hints:off --run",
    "lisp": "sbcl --script",
    "kit": "kitc --run",
    "v": "v run",
    "sass": "sass --style expanded",
    "scss": "scss --style expanded",
    "less": "cd $dir && lessc $fileName $fileNameWithoutExt.css",
    "FortranFreeForm": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    "fortran-modern": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    "fortran_fixed-form": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    "fortran": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
    "sml": "cd $dir && sml $fileName",
    "mojo": "mojo run",
    "erlang": "escript",
    "spwn": "spwn build",
    "pkl": "cd $dir && pkl eval -f yaml $fileName -o $fileNameWithoutExt.yaml",
    "gleam": "gleam run -m $fileNameWithoutExt"
  },
  "code-runner.runInTerminal": true,
  "code-runner.languageIdToFileExtensionMap": {
    "bat": ".bat",
    "powershell": ".ps1",
    "typescript": ".ts"
  },
  "[markdown]": {
    "editor.defaultFormatter": "esbenp.prettier-vscode"
  },
  "indentRainbow.colorOnWhiteSpaceOnly": true,
  "indentRainbow.colors": [
    // "rgba(255,255,64,0.07)",
    // "rgba(127,255,127,0.07)",
    // "rgba(255,127,255,0.07)",
    // "rgba(79,236,236,0.07)"
    "#ED248133",
    "#AE169933",
    "#6D09AF33",
    "#530BA533",
    "#450CA133",
    "#380C9D33",
    "#3D35C233",
    "#415CE633"
  ],
  "liveServer.settings.donotShowInfoMsg": true,
  "[css]": {
    "editor.defaultFormatter": "vscode.css-language-features"
  },
  "workbench.list.smoothScrolling": true,
  "editor.cursorSmoothCaretAnimation": "on",
  "editor.suggest.showWords": false,
  "C_Cpp_Runner.cCompilerPath": "clang",
  "C_Cpp_Runner.cppCompilerPath": "clang++"
}
```