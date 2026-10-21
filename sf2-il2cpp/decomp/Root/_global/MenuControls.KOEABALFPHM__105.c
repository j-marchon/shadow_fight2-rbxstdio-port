// TypeDefIndex 105
// Namespace: 
// private class MenuControls.KOEABALFPHM
// Fields:
//   public FBBNEILNOKK LCDNJBFAOHM; // 0x10
//   public KeyCode[] FKGFFHPFKHH; // 0x18

// ===== public void .ctor(FBBNEILNOKK AAJGEHHPMGH, KeyCode[] INDHDPBAGFK)  [RVA 0x300ECA4]
// Nekki.SF2.GUI.Common.MenuControls.KOEABALFPHM$$.ctor @ RVA 0x300ECA4

void Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM___ctor
               (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this,int32_t AAJGEHHPMGH,
               UnityEngine_KeyCode_array *INDHDPBAGFK,MethodInfo *method)

{
  UnityEngine_KeyCode_array **ppUVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).FKGFFHPFKHH;
  *ppUVar1 = INDHDPBAGFK;
  (__this->fields).LCDNJBFAOHM = AAJGEHHPMGH;
  thunk_FUN_01c20e04(ppUVar1,INDHDPBAGFK);
  return;
}


// ===== public bool HBJIAILBIBE()  [RVA 0x300FA38]
// Nekki.SF2.GUI.Common.MenuControls.KOEABALFPHM$$HBJIAILBIBE @ RVA 0x300FA38

bool Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__HBJIAILBIBE
               (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  int iVar2;
  UnityEngine_KeyCode_array *pUVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  pUVar3 = (__this->fields).FKGFFHPFKHH;
  if (pUVar3 != (UnityEngine_KeyCode_array *)0x0) {
    uVar4 = pUVar3->max_length;
    iVar2 = (int)uVar4;
    if (iVar2 < 1) {
      bVar6 = false;
    }
    else {
      uVar5 = 0;
      bVar6 = true;
      do {
        __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current
                              ((MethodInfo *)0x0);
        pUVar3 = (__this->fields).FKGFFHPFKHH;
        if (pUVar3 == (UnityEngine_KeyCode_array *)0x0) goto LAB_0310fad0;
        if ((uint)pUVar3->max_length <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_00 == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0)
        goto LAB_0310fad0;
        bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyUp
                          (__this_00,pUVar3->m_Items[uVar5],(MethodInfo *)0x0);
        if (bVar1) {
          return bVar6;
        }
        uVar5 = uVar5 + 1;
        bVar6 = (long)uVar5 < (long)iVar2;
      } while ((uVar4 & 0xffffffff) != uVar5);
    }
    return bVar6;
  }
LAB_0310fad0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BHHIIBFHBFK()  [RVA 0x300EF48]
// Nekki.SF2.GUI.Common.MenuControls.KOEABALFPHM$$BHHIIBFHBFK @ RVA 0x300EF48

bool Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__BHHIIBFHBFK
               (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *pNVar2;
  UnityEngine_KeyCode_array *pUVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  bVar1 = DANCCJHADOA__NBEOBEKPHMN((__this->fields).LCDNJBFAOHM,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).FKGFFHPFKHH;
  if (pUVar3 == (UnityEngine_KeyCode_array *)0x0) {
LAB_0310f02c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar6 = pUVar3->max_length;
  uVar4 = uVar6 & 0xffffffff;
  iVar5 = (int)uVar6;
  if (bVar1) {
    if (0 < iVar5) {
      uVar6 = 0;
      while( true ) {
        pNVar2 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
        pUVar3 = (__this->fields).FKGFFHPFKHH;
        if (pUVar3 == (UnityEngine_KeyCode_array *)0x0) break;
        if ((uint)pUVar3->max_length <= uVar6) {
LAB_0310f030:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (pNVar2 == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) break;
        bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKey
                          (pNVar2,pUVar3->m_Items[uVar6],(MethodInfo *)0x0);
        if (bVar1) {
          return true;
        }
        bVar1 = uVar4 - 1 == uVar6;
        uVar6 = uVar6 + 1;
        if (bVar1) {
          return false;
        }
      }
      goto LAB_0310f02c;
    }
  }
  else if (0 < iVar5) {
    uVar6 = 0;
    while( true ) {
      pNVar2 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
      pUVar3 = (__this->fields).FKGFFHPFKHH;
      if (pUVar3 == (UnityEngine_KeyCode_array *)0x0) break;
      if ((uint)pUVar3->max_length <= uVar6) goto LAB_0310f030;
      if (pNVar2 == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) break;
      bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyDown
                        (pNVar2,pUVar3->m_Items[uVar6],(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      bVar1 = uVar4 - 1 == uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        return false;
      }
    }
    goto LAB_0310f02c;
  }
  return false;
}

