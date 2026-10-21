// Nekki.SF2.GUI.Scenes.GameLoaderScene$$HJLLJGIBCNC @ RVA 0x31D299C

void Nekki_SF2_GUI_Scenes_GameLoaderScene__HJLLJGIBCNC(MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_RaidBetaLogger_o *pNVar2;
  Nekki_SF2_GUI_Scenes_GameLoaderScene_StaticFields *pNVar3;
  
  if ((DAT_04566cba & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_16560);
    DAT_04566cba = 1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_Utils_RaidBetaLogger_o *)0x0) {
LAB_032d2aec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).FCLJIGKOBLI != false) {
      if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields;
      if (pNVar3->GKMKGHOCIPG == false) {
        if ((Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pNVar3 = Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields;
        }
        pNVar3->GKMKGHOCIPG = true;
        if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar2 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
          Nekki_Utils_RaidBetaLogger__TrySendDump
                    (pNVar2,StringLiteral_16560,false,(MethodInfo *)0x0);
          return;
        }
        goto LAB_032d2aec;
      }
    }
  }
  return;
}

