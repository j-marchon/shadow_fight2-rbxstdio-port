// Nekki.SF2.GUI.Common.SceneSwitchControls$$set_IsEnabled @ RVA 0x331F48C

void Nekki_SF2_GUI_Common_SceneSwitchControls__set_IsEnabled
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool value;
  
  if (CJNHFNHJHPE) {
    uVar1 = (__this->fields).DKJLOMNAEDI - 3;
    if (4 < uVar1) goto LAB_0341f4bc;
    value = (bool)((byte)(0x17 >> (ulong)(uVar1 & 0x1f)) & 1);
  }
  else {
    if (__this == (Nekki_SF2_GUI_Common_SceneSwitchControls_o *)0x0) goto LAB_0341f500;
LAB_0341f4bc:
    value = false;
  }
  pUVar2 = (__this->fields)._LeftHint;
  (__this->fields).CEPACCGIINO = value;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._RightHint;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CEPACCGIINO,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._SceneTitlePanel;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CEPACCGIINO,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0341f500:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

