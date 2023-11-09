#include "LanguageMap.h"

// Map to define filetype extensions
std::map<std::string, std::string> languageMap = {
	{".c", "C"},
	{".h", "C"},
	{".cpp", "C++"},
	{".hpp", "C++"},
	{".cc", "C++"},
	{".hh", "C++"},
	{".cxx", "C++"},
	{".hxx", "C++"},
	{".cs", "C#"},
	{".java", "Java"},
	{".py", "Python"},
	{".js", "JavaScript"},
	{".ts", "TypeScript"},
	{".html", "HTML"},
	{".css", "CSS"},
	{".php", "PHP"},
	{".ruby", "Ruby"},
	{".pl", "Perl"},
	{".swift", "Swift"},
	{".go", "Go"},
	{".rs", "Rust"},
	{".kt", "Kotlin"},
	{".scala", "Scala"},
	{".vb", "Visual Basic"},
	{".php", "PHP"},
	{".lua", "Lua"},
	{".sh", "Shell Script"},
	{".r", "R"},
	// Add more extensions and languages as needed

	// Source Control File Extensions
	{".gitignore", "Git"},
	{".hgignore", "Mercurial"},
	{".bzrignore", "Bazaar"},
	{".svnignore", "Subversion"},
	{".cvsignore", "CVS"},
	{".p4ignore", "Perforce"},
	{".tfignore", "Team Foundation Version Control (TFVC)"},
	// Add more source control file extensions and their respective programs as needed

	// Binary File Extensions
	{".exe", "Binary (Executable)"},
	{".dll", "Binary (Dynamic Link Library)"},
	{".so", "Binary (Shared Object)"},
	{".o", "Binary (Object)"},
	// Add more binary file extensions as needed

	// Text File Extensions
	{".txt", "Text"},
	{".md", "Markdown"},
	{".csv", "CSV (Comma-Separated Values)"},
	{".json", "JSON (JavaScript Object Notation)"},
	{".xml", "XML (Extensible Markup Language)"},
	// Add more text file extensions as needed

	// Code Editor File Extensions
    {".vscode", "Visual Studio Code Settings"},
    {".sublime-settings", "Sublime Text Settings"},
    {".vimrc", "Vim Configuration"},
    {".emacs", "Emacs Configuration"},
    {".atom", "Atom Configuration"},
    {".nano", "Nano Editor Configuration"},
    {".notepadpp", "Notepad++ Configuration"},
    {".gedit", "Gedit Configuration"},
    {".eclipse", "Eclipse IDE Configuration"},
    {".intellij", "IntelliJ IDEA Configuration"},
    {".pycharm", "PyCharm Configuration"},
    {".netbeans", "NetBeans IDE Configuration"},
    {".visualstudio", "Visual Studio Configuration"},
    {".brackets", "Brackets Configuration"},
    {".geany", "Geany Configuration"},
    {".kate", "Kate Editor Configuration"},
    {".bluej", "BlueJ IDE Configuration"},
    {".jupyter", "Jupyter Notebook Configuration"},
    {".codeblocks", "Code::Blocks Configuration"},
    {".sublimetext", "Sublime Text Configuration"},
    {".textmate", "TextMate Configuration"},
    {".gedit", "Gedit Configuration"},
    {".emacs", "Emacs Configuration"},
    {".nano", "Nano Editor Configuration"},
    {".notepadpp", "Notepad++ Configuration"},
    {".gedit", "Gedit Configuration"},
    {".eclipse", "Eclipse IDE Configuration"},
    {".intellij", "IntelliJ IDEA Configuration"},
    {".pycharm", "PyCharm Configuration"},
    {".netbeans", "NetBeans IDE Configuration"},
    {".visualstudio", "Visual Studio Configuration"},
    {".brackets", "Brackets Configuration"},
    {".geany", "Geany Configuration"},
    {".kate", "Kate Editor Configuration"},
    {".bluej", "BlueJ IDE Configuration"},
    {".jupyter", "Jupyter Notebook Configuration"},
    {".codeblocks", "Code::Blocks Configuration"},
    {".sublimetext", "Sublime Text Configuration"},
    {".textmate", "TextMate Configuration"},
    {".geany", "Geany Configuration"},
	// Add more code editor-specific file extensions as needed

	// Asset File Extensions
	{".jpg", "Image (JPEG)"},
	{".jpeg", "Image (JPEG)"},
	{".png", "Image (PNG)"},
	{".gif", "Image (GIF)"},
	{".bmp", "Image (BMP)"},
	{".tiff", "Image (TIFF)"},
	{".svg", "Image (Scalable Vector Graphics)"},
	{".mp4", "Video (MP4)"},
	{".avi", "Video (AVI)"},
	{".mkv", "Video (Matroska)"},
	{".mp3", "Audio (MP3)"},
	{".wav", "Audio (WAV)"},
	{".ogg", "Audio (Ogg Vorbis)"},
	{".flac", "Audio (FLAC)"},
	{".aac", "Audio (AAC)"},
	{".3ds", "3D Model (3DS)"},
	{".obj", "3D Model (OBJ)"},
	{".fbx", "3D Model (FBX)"},
	{".png", "Texture (PNG)"},
	{".jpg", "Texture (JPEG)"},
	{".tga", "Texture (TGA)"},
	{".psd", "Texture (Adobe Photoshop)"},
	{".fx", "Shader/Effect"},
	{".frag", "Shader/Effect (Fragment)"},
	{".vert", "Shader/Effect (Vertex)"},
	{".glsl", "Shader/Effect (GLSL)"},
	{".hlsl", "Shader/Effect (HLSL)"},
	{".ttf", "Font (TrueType)"},
	{".otf", "Font (OpenType)"},
	// Add more asset file extensions as needed

	// Game Editor File Extensions
	{".gd", "Godot Script"},
	{".gds", "Godot Shader"},
	{".tscn", "Godot Scene"},
	{".tres", "Godot Resource"},
	{".blender", "Blender File"},
	{".unity", "Unity File"},
	{".uproject", "Unreal Engine Project"},
	{".uplugin", "Unreal Engine Plugin"},
	{".uasset", "Unreal Engine Asset"},
	{".umap", "Unreal Engine Map"},
	{".ue4", "Unreal Engine 4"},
	{".gamemakerproject", "GameMaker Studio Project"},
	{".gmx", "GameMaker Studio Project"},
	{".rpgproject", "RPG Maker Project"},
	{".rmproj", "RPG Maker Project"},
	{".defold", "Defold Project"},
	{".construct", "Construct Project"},
	{".c3p", "Construct 3 Project"},
	{".wad", "DOOM WAD File"},
	{".map", "Linker Map File"},
	{".pk3", "DOOM 3 PK3 Archive"},
	{".w3m", "Warcraft III Map"},
	{".j2e", "J2ME Mobile Game"},
	{".sol", "Flash Game Save File"},
	{".mfa", "Multimedia Fusion Project"},
	{".ggr", "Game Maker 6 Project"},
	{".gmx", "GameMaker Project"},
	{".gml", "GameMaker Language"},
	// Add more game editor file extensions as needed

	// Shader File Extensions
	{".vs", "Vertex Shader"},
	{".fs", "Fragment Shader"},
	{".gs", "Geometry Shader"},
	{".hs", "Hull Shader"},
	{".ds", "Domain Shader"},
	{".compute", "Compute Shader"},
	{".glsl", "GLSL Shader"},
	{".hlsl", "HLSL Shader"},
	{".cg", "Cg Shader"},
	{".shader", "Shader Code"},
	{".shadergraph", "Shader Graph"},
	{".usf", "Unreal Shader File"},
	{".vsh", "Vertex Shader"},
	{".fsh", "Fragment Shader"},
	{".psh", "Pixel Shader"},
	// Add more shader file extensions as needed

	// Option for unknown file extensions
	{"", "Unknown"},
};
