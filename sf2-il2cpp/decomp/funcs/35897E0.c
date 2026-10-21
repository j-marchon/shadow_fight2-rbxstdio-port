// Nekki.SF2.GUI.Map.MapScene.<>c$$EFNKANEGAOF @ RVA 0x35897E0

void Nekki_SF2_GUI_Map_MapScene_<>c__EFNKANEGAOF
               (Nekki_SF2_GUI_Map_MapScene___c_o *__this,MEJIKMPNBNL_o *zone,MethodInfo *method)

{
  System_String_o *message;
  
  if ((DAT_04568d2a & 1) == 0) {
    __this = (Nekki_SF2_GUI_Map_MapScene___c_o *)FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04568d2a = 1;
  }
  if (zone != (MEJIKMPNBNL_o *)0x0) {
    message = (zone->fields).DEKCPPOJFEH;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

