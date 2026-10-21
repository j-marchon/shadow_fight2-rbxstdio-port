// Nekki.SF2.GUI.Pvp.PvpScene.NLCMLINJAMC$$MoveNext @ RVA 0x321DAB8

bool Nekki_SF2_GUI_Pvp_PvpScene_NLCMLINJAMC__MoveNext
               (Nekki_SF2_GUI_Pvp_PvpScene_NLCMLINJAMC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar3;
  long lVar4;
  long lVar5;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Pvp_PvpScene_o *__this_02;
  
  if ((DAT_04566f1c & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    FUN_01bab630(&StringLiteral_20433);
    DAT_04566f1c = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar3 = &(__this->fields).__2__current;
    *ppIVar3 = __this_00;
    thunk_FUN_01c20e04(ppIVar3,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  (__this->fields).__1__state = -1;
  __this_02 = (__this->fields).__4__this;
  lVar4 = FUN_01bab718(string___TypeInfo,1);
  if (lVar4 == 0) {
LAB_0331dc64:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(System_String_o **)(lVar4 + 0x20) = StringLiteral_20433;
    thunk_FUN_01c20e04();
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    if (lVar5 == 0) goto LAB_0331dc64;
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(System_String_o **)(lVar5 + 0x20) = StringLiteral_20433;
      thunk_FUN_01c20e04();
      if ((__this_02 == (Nekki_SF2_GUI_Pvp_PvpScene_o *)0x0) ||
         (__this_01 = (__this_02->fields).IIBLCIFHCCF,
         __this_01 == (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0)) goto LAB_0331dc64;
      Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)__this_01,(MethodInfo *)0x0);
      (__this_02->fields).GOGMCKIMHDH = StringLiteral_20433;
      thunk_FUN_01c20e04();
      uVar2 = UnityEngine_Random__Range(0,*(int32_t *)(lVar4 + 0x18),(MethodInfo *)0x0);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        (__this_02->fields).JANJPDGLLNE = *(System_String_o **)(lVar4 + (long)(int)uVar2 * 8 + 0x20)
        ;
        thunk_FUN_01c20e04();
        uVar2 = UnityEngine_Random__Range(0,*(int32_t *)(lVar5 + 0x18),(MethodInfo *)0x0);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          (__this_02->fields).IDPEJMKPFNA =
               *(System_String_o **)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          thunk_FUN_01c20e04();
          Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ(__this_02,method_00);
          return false;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

