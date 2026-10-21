// Nekki.SF2.GUI.ItemsScroll$$JCANALKPKAB @ RVA 0x30D10F8

UnityEngine_Vector2_o
Nekki_SF2_GUI_ItemsScroll__JCANALKPKAB(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((DAT_04566302 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566302 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar4 = 0.0;
  fVar3 = 0.0;
  if (bVar1) {
    pNVar2 = (__this->fields).scrollContent;
    if ((pNVar2 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar6 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    fVar4 = UVar6.fields.y;
    fVar3 = UVar6.fields.x;
  }
  UVar5.fields.y = fVar4;
  UVar5.fields.x = fVar3;
  return (UnityEngine_Vector2_o)UVar5.fields;
}

