// Nekki.SF2.GUI.Fight.ScreenModel$$Render @ RVA 0x355F4E4

void Nekki_SF2_GUI_Fight_ScreenModel__Render
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool GKJDNBFJOJE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar3;
  Nekki_SF2_GUI_Fight_StylePanel_o *pNVar4;
  
  if ((DAT_04568bbc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568bbc = 1;
  }
  pNVar3 = (__this->fields)._lifeBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar2 = extraout_x1;
  if (bVar1) {
    pNVar3 = (__this->fields)._lifeBar;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) goto LAB_0365f5c8;
    (*(pNVar3->klass->vtable)._4_Render.methodPtr)(pNVar3,(pNVar3->klass->vtable)._4_Render.method);
    pMVar2 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD(__this,pMVar2);
  pNVar4 = (__this->fields)._stylePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) || (!GKJDNBFJOJE)) {
    return;
  }
  pNVar4 = (__this->fields)._stylePanel;
  if (pNVar4 != (Nekki_SF2_GUI_Fight_StylePanel_o *)0x0) {
    Nekki_SF2_GUI_Fight_StylePanel__Render(pNVar4,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH(__this,false,pMVar2);
    return;
  }
LAB_0365f5c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

