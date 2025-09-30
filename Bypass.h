// Bypass.h - Online Bypass System
#ifndef BYPASS_H
#define BYPASS_H

void ApplyBypassPatches() {
    if (Байпасс) {
PATCH_LIB("libUE4.so","0x4f2bfd8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so","0x4e66b44","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so","0x46447cc","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so","0x2453bf8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so","0x4f6a27c","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so","0x510e1f0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so","0x46b7b38","00 00 A0 E3 1E FF 2F E1");//CoronaLa

PATCH_LIB("libanogs.so","0x13ead0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so","0x13f7da","00 00 A0 E3 1E FF 2F E1");

// printf
PATCH_LIB("libanogs.so", "0x6F8FC1", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0xB86FC1", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libanogs.so", "0xB86C5F", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libanogs.so", "0x6F92A3", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x30F619", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libanogs.so", "0xB8710D", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libanogs.so", "0x6F910D", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F94F5", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F9673", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F8C5F", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libanogs.so", "0xB86CBF", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F8CBF", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x30F642", "01 00 A0 E3 1E FF 2F E1");

// fprintf
PATCH_LIB("libanogs.so", "0xB86CBE", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F8CBE", "00 00 A0 E3 1E FF 2F E1");

// sprintf
PATCH_LIB("libanogs.so", "0xB86FC0", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F8FC0", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x6F8C5E", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libanogs.so", "0xB86C5E", "00 00 A0 E3 1E FF 2F E1");

// snprintf
PATCH_LIB("libanogs.so", "0x6F92A1", "1E FF 2F E1 00 00 A0 E3");

// memset
PATCH_LIB("libanogs.so", "0x6F91AF", "1E FF 2F E1 00 00 A0 E3");


// ptrace - 3 из 3 патчей
PATCH_LIB("libUE4.so", "0x861F90", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3FB1671", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x7F03580", "00 00 A0 E3 1E FF 2F E1");

// printf - 17 из 17 патчей
PATCH_LIB("libUE4.so", "0x15D9D7E", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x1D6FDDC", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3381AE1", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x351DDEF", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3643B05", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x36F5A63", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x37BFAE4", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libUE4.so", "0x37F584B", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x38CBA95", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3917B86", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libUE4.so", "0x394D6E1", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libUE4.so", "0x395B525", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3A5F9D4", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3B6542E", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3CC735E", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x3D772BF", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libUE4.so", "0x3E6775A", "00 00 A0 E3 1E FF 2F E1");

// calloc - 5 из 5 патчей
PATCH_LIB("libUE4.so", "0x316B851", "1E FF 2F E1 00 00 A0 E3");//тоже ебу  просто строки бп
PATCH_LIB("libUE4.so", "0x37194EA", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x386FC45", "01 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x38CFD1A", "1E FF 2F E1 00 00 A0 E3");
PATCH_LIB("libUE4.so", "0x390173D", "00 00 A0 E3 1E FF 2F E1");

// sprintf - 5 из 5 патчей
PATCH_LIB("libUE4.so", "0x36F5A62", "01 00 A0 E3 1E FF 2F E1");//хуй знает, просто 5 строк бп
PATCH_LIB("libUE4.so", "0x37BFAE3", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x37F584A", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x394D6E0", "00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libUE4.so", "0x395B524", "01 00 A0 E3 1E FF 2F E1");

// realloc - 6 из 6 патчей
PATCH_LIB("libUE4.so", "0x371F70A", "1E FF 2F E1 00 00 A0 E3"); //1d Ban Fix
PATCH_LIB("libUE4.so", "0x396F814", "00 00 A0 E3 1E FF 2F E1");//1d Ban Fix
PATCH_LIB("libUE4.so", "0x3DC3F4D", "00 00 A0 E3 1E FF 2F E1");//1d Ban Fix
PATCH_LIB("libUE4.so", "0x3E2DC97", "00 00 A0 E3 1E FF 2F E1");//1d Ban Fix
PATCH_LIB("libUE4.so", "0x3E4BB63", "01 00 A0 E3 1E FF 2F E1");//1d Ban Fix
PATCH_LIB("libUE4.so", "0x3FD5BAC", "01 00 A0 E3 1E FF 2F E1");//1d Ban Fix

// malloc - 3 из 3 патчей
PATCH_LIB("libUE4.so", "0x3855A35", "00 00 A0 E3 1E FF 2F E1"); //1d Ban Fix
PATCH_LIB("libUE4.so", "0x3F574BA", "00 00 A0 E3 1E FF 2F E1"); //1d Ban Fix
PATCH_LIB("libUE4.so", "0x698555B", "00 00 A0 E3 1E FF 2F E1"); //1d Ban Fix


PATCH_LIB("libRoosterNN.so","0x10055C","00 00 A0 E3 1E FF 2F E1"); //Flag Ban + Observation Ban Fix
PATCH_LIB("libRoosterNN.so","0xFF778","00 00 A0 E3 1E FF 2F E1"); //Flag Ban + Observation Ban Fix
PATCH_LIB("libRoosterNN.so","0x100580","00 00 A0 E3 1E FF 2F E1"); //Flag Ban + Observation Ban Fix
PATCH_LIB("libRoosterNN.so","0x10056C","00 00 A0 E3 1E FF 2F E1"); //Flag Ban + Observation Ban Fix
PATCH_LIB("libRoosterNN.so","0x100568","00 00 A0 E3 1E FF 2F E1"); //Flag Ban + Observation Ban Fix
PATCH_LIB("libGCloudVoice.so","0x6B251C","00 00 A0 E3 1E FF 2F E1"); //Report Block
PATCH_LIB("libGCloudVoice.so","0x6B2534","00 00 A0 E3 1E FF 2F E1"); //Report Block
PATCH_LIB("libGCloudVoice.so","0x24F94","00 00 A0 E3 1E FF 2F E1"); //Report Block
PATCH_LIB("libGCloudVoice.so","0x64F28","00 00 A0 E3 1E FF 2F E1"); //Report Block
PATCH_LIB("libGCloudVoice.so","0x64FA4","00 00 A0 E3 1E FF 2F E1"); //Report Block
PATCH_LIB("libGCloudVoice.so","0x65024","00 00 A0 E3 1E FF 2F E1"); //Report Block
PATCH_LIB("libGCloudVoice.so","0x6728C","00 00 A0 E3 1E FF 2F E1"); //Report Block
        
        const char* bypassText = "Online Bypass Work";
        ImVec2 textSize = ImGui::CalcTextSize(bypassText);
        ImGui::GetForegroundDrawList()->AddText(
            {20.0f, (float)glHeight - textSize.y - 20.0f},
            ImColor(0, 255, 0, 180),
            bypassText      
    }
}



#endif
