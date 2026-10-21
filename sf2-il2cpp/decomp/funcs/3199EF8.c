// Nekki.SF2.GUI.Map.RaidToggleButton$$SetState @ RVA 0x3199EF8

void Nekki_SF2_GUI_Map_RaidToggleButton__SetState
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,int32_t FBEGCBIAPPK,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool value;
  
  pUVar1 = (__this->fields)._goToStoryBtn;
  (__this->fields).DFCJLLMHKLE = FBEGCBIAPPK;
  if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    if (FBEGCBIAPPK == 0) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._goToRaidBtn;
      if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03299f80;
      value = true;
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._goToRaidBtn;
      if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03299f80;
      value = false;
    }
    UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
LAB_03299f80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

