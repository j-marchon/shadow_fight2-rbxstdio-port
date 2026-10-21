// Nekki.SF2.GUI.Scenes.GameLoaderScene$$.ctor @ RVA 0x31D267C

void Nekki_SF2_GUI_Scenes_GameLoaderScene___ctor
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  IGFJINHNIBB_o *__this_00;
  IGFJINHNIBB_o **ppIVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb6 & 1) == 0) {
    FUN_01bab630(&IGFJINHNIBB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>__ctor__);
    DAT_04566cb6 = 1;
    method = extraout_x1;
  }
  __this_00 = (IGFJINHNIBB_o *)thunk_FUN_01bda818(IGFJINHNIBB_TypeInfo,method);
  IGFJINHNIBB___ctor(__this_00,(MethodInfo *)0x0);
  ppIVar1 = &(__this->fields).ECJIJIFLMBK;
  *ppIVar1 = __this_00;
  thunk_FUN_01c20e04(ppIVar1,__this_00);
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<GameLoaderScene>__ctor__)
  ;
  return;
}

