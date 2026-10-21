// Nekki.SF2.GUI.Fight.ViewerFight$$JDGDBEGKHPD @ RVA 0x35BE708

void Nekki_SF2_GUI_Fight_ViewerFight__JDGDBEGKHPD
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Button_o *pUVar2;
  
                    /* try { // try from 036be710 to 037be717 has its CatchHandler @ 036be72c */
                    /* try { // try from 036be718 to 037be723 has its CatchHandler @ 036be5b8 */
                    /* try { // try from 036be724 to 037be72b has its CatchHandler @ 036be72c */
  if ((DAT_04568f0a & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036be710 with catch @ 036be72c
                       catch(type#2 @ 00000000) { ... } // from try @ 036be724 with catch @ 036be72c
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0a = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).btnPause;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).btnPause;
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar2,true,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

