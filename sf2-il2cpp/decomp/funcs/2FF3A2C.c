// Nekki.SF2.GUI.Scenes.LoaderScreen$$NEJJBIDOKGN @ RVA 0x2FF3A2C

void Nekki_SF2_GUI_Scenes_LoaderScreen__NEJJBIDOKGN
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o **ppNVar2;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_Fight_EnemiesScreen_o *pNVar5;
  Nekki_SF2_GUI_Fight_VsScreen_o *x;
  
  if ((DAT_04565a81 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565a81 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).LIDCNGFPOOI;
  pNVar5 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = *ppNVar2;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0) goto LAB_030f3bac;
    if ((pNVar5->fields)._BOGAKJOFOEK_k__BackingField == false) {
      Util__ONIDAJMNLHG((UnityEngine_MonoBehaviour_o *)pNVar5,false,(MethodInfo *)0x0);
    }
  }
  (__this->fields).LIDCNGFPOOI = (Nekki_SF2_GUI_Fight_EnemiesScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  ppNVar3 = &(__this->fields).PNGEFADJKCH;
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar3 == (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) goto LAB_030f3bac;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject
                    ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    *ppNVar3 = (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
  }
  pNVar4 = (__this->fields)._LoaderHint;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._LoaderHint;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_030f3bac;
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,StringLiteral_1,(pNVar4->klass->vtable)._75_set_text.method);
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
LAB_030f3bac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

