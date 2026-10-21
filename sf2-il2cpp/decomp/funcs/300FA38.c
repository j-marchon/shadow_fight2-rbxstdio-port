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

