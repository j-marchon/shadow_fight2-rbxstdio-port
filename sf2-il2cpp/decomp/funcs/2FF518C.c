// Nekki.SF2.GUI.Scenes.LoaderScreen$$FNOJFNCGHHJ @ RVA 0x2FF518C

void Nekki_SF2_GUI_Scenes_LoaderScreen__FNOJFNCGHHJ
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar2;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar3;
  
  if ((DAT_04565a94 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a94 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).LIDCNGFPOOI;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = *ppNVar2;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField == false) {
      Util__ONIDAJMNLHG((UnityEngine_MonoBehaviour_o *)pNVar3,false,(MethodInfo *)0x0);
    }
  }
  (__this->fields).LIDCNGFPOOI = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  Nekki_SF2_GUI_Scenes_LoaderScreen__DKNNDNIGMIM(__this,method_00);
  return;
}

