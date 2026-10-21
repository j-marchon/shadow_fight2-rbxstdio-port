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

