// Nekki.SF2.GUI.Fight.ScreenFight$$.ctor @ RVA 0x30A7914

void Nekki_SF2_GUI_Fight_ScreenFight___ctor
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *pNVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o **ppNVar2;
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o **ppNVar3;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_0456617e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456617e = 1;
    method = extraout_x1;
  }
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo,method);
  pNVar1 = auVar4._0_8_;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD___ctor(pNVar1,auVar4._8_8_);
  ppNVar2 = &(__this->fields).OnStartScreen;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_TypeInfo);
  pNVar1 = auVar4._0_8_;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD___ctor(pNVar1,auVar4._8_8_);
  ppNVar2 = &(__this->fields).OnStopScreen;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  __this_00 = (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  ppNVar3 = &(__this->fields).MPMMEGJACCD;
  *ppNVar3 = __this_00;
  thunk_FUN_01c20e04(ppNVar3,__this_00);
  (__this->fields).NLKCBHLEEDA = StringLiteral_1;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

