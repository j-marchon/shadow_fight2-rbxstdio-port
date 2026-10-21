// Nekki.SF2.GUI.Fight.ViewerFight$$Play @ RVA 0x35BE050

void Nekki_SF2_GUI_Fight_ViewerFight__Play
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  JIMKCICMMIL_o *pJVar2;
  UnityEngine_UI_Button_o *pUVar3;
  
                    /* try { // try from 036be064 to 037be067 has its CatchHandler @ 036be088 */
  if ((DAT_04568efa & 1) == 0) {
                    /* try { // try from 036be068 to 037be08f has its CatchHandler @ 036bde30 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568efa = 1;
    method = extraout_x1;
  }
  pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (pJVar2 != (JIMKCICMMIL_o *)0x0) {
                    /* catch() { ... } // from try @ 036be064 with catch @ 036be088 */
                    /* try { // try from 036be090 to 037be0a3 has its CatchHandler @ 036be114 */
    (pJVar2->fields).BLGIPOEBHGA = true;
    (__this->fields)._BBIBLNIKJMG_k__BackingField = true;
    pUVar3 = (__this->fields).btnPause;
                    /* catch() { ... } // from try @ 036bdf78 with catch @ 036be0a4
                       try { // try from 036be0a4 to 037be0bb has its CatchHandler @ 036bde30 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
                    /* try { // try from 036be0bc to 037be0bf has its CatchHandler @ 036be0e8 */
    if (bVar1) {
                    /* try { // try from 036be0c0 to 037be0f7 has its CatchHandler @ 036bde30 */
      pUVar3 = (__this->fields).btnPause;
      if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto LAB_036be0e4;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar3,true,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
    }
    Nekki_SF2_GUI_Fight_ViewerFight__SetTimerForLastRaidRound(__this,method_00);
    return;
  }
LAB_036be0e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

