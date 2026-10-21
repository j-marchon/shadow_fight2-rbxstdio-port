// Nekki.SF2.GUI.Fight.ViewerFight$$SetVisible @ RVA 0x35BE4E4

void Nekki_SF2_GUI_Fight_ViewerFight__SetVisible
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  
  if ((DAT_04568efc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568efc = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).btnPause;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pUVar3 = (__this->fields).btnPause;
    if ((pUVar3 != (UnityEngine_UI_Button_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive
                (pUVar2,(__this->fields)._NNPPLGMLHEK_k__BackingField != false && CJNHFNHJHPE,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

