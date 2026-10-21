// Nekki.SF2.GUI.Common.HintCanvas$$NPJLDEDLLCE @ RVA 0x32338B4

bool Nekki_SF2_GUI_Common_HintCanvas__NPJLDEDLLCE
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,UnityEngine_Vector2_o BLEOKMIDGIK,
               UnityEngine_Vector2_o MJBMLNKAPGC,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_HintBox_o *pNVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((DAT_04566ffd & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ffd = 1;
  }
  __this_00 = (__this->fields).EMFLDKEFCLG;
                    /* try { // try from 03333924 to 0343394b has its CatchHandler @ 03333ad8 */
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
                    /* try { // try from 033339e4 to 034339eb has its CatchHandler @ 03333acc */
      return false;
    }
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03333980 to 034339ab has its CatchHandler @ 03333ad4 */
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar7.fields.y = BLEOKMIDGIK.fields.y + MJBMLNKAPGC.fields.y;
        UVar7.fields.x = BLEOKMIDGIK.fields.x + MJBMLNKAPGC.fields.x;
        UVar7.fields.z = 0.0;
        UVar7 = UnityEngine_Transform__InverseTransformPoint(pUVar2,UVar7,(MethodInfo *)0x0);
        pNVar4 = (__this->fields).DMKLEIPIGKO;
        if ((pNVar4 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
           (pUVar3 = (pNVar4->fields)._RectTransform, pUVar3 != (UnityEngine_RectTransform_o *)0x0))
        {
          UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          return ABS(UVar5.fields.y * -0.5 - UVar7.fields.y) < UVar6.fields.y;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033339f0 to 034339fb has its CatchHandler @ 03333ad0 */
  FUN_01bab8c8();
}

