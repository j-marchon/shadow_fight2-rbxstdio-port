// Nekki.SF2.GUI.Common.Hints.HintList$$JODPCNMCILH @ RVA 0x3514550

void Nekki_SF2_GUI_Common_Hints_HintList__JODPCNMCILH
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_LayoutGroup_o *pUVar2;
  UnityEngine_RectOffset_o *pUVar3;
  
  pUVar2 = (__this->fields)._Layout;
  if ((pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) &&
     (pUVar3 = (pUVar2->fields).m_Padding, pUVar3 != (UnityEngine_RectOffset_o *)0x0)) {
    UnityEngine_RectOffset__set_right(pUVar3,0,(MethodInfo *)0x0);
    UnityEngine_RectOffset__set_left(pUVar3,0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._Layout;
    if (pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      uVar1 = (pUVar2->fields).m_ChildAlignment;
      if (8 < uVar1) {
        return;
      }
      uVar1 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar1 & 0x49) == 0) {
        if ((uVar1 & 0x124) == 0) {
          return;
        }
        pUVar3 = (pUVar2->fields).m_Padding;
        if (pUVar3 != (UnityEngine_RectOffset_o *)0x0) {
          UnityEngine_RectOffset__set_right(pUVar3,(__this->fields).JJOBECCEMMI,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar3 = (pUVar2->fields).m_Padding;
        if (pUVar3 != (UnityEngine_RectOffset_o *)0x0) {
          UnityEngine_RectOffset__set_left(pUVar3,(__this->fields).JJOBECCEMMI,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

