// Nekki.SF2.GUI.Fight.ValueLine$$FinishAnimation @ RVA 0x30DF3B4

void Nekki_SF2_GUI_Fight_ValueLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_NumberFormatInfo_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  int64_t *__this_03;
  DG_Tweening_Sequence_o **ppDVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar4;
  UnityEngine_Vector3_o value;
  
                    /* try { // try from 031df3b4 to 032df3b7 has its CatchHandler @ 031df3d4 */
                    /* try { // try from 031df3b8 to 032df3bf has its CatchHandler @ 031df3e0 */
                    /* try { // try from 031df3c0 to 032df3c3 has its CatchHandler @ 031df058 */
                    /* try { // try from 031df3c4 to 032df3c7 has its CatchHandler @ 031df3d0 */
                    /* try { // try from 031df3c8 to 032df3fb has its CatchHandler @ 031df058 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df3c4 with catch @ 031df3d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df3b4 with catch @ 031df3d4
                        */
  if ((DAT_0456638d & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df228 with catch @ 031df3d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df1cc with catch @ 031df3dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df3b8 with catch @ 031df3e0
                        */
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031df288 with catch @ 031df3e4
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
                    /* try { // try from 031df3fc to 032df3ff has its CatchHandler @ 031df40c */
    FUN_01bab630(&StringLiteral_9281);
                    /* catch() { ... } // from try @ 031df3fc with catch @ 031df40c */
    DAT_0456638d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Globalization_NumberFormatInfo_o *)
              thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo,method);
                    /* try { // try from 031df41c to 032df483 has its CatchHandler @ 031df498 */
  System_Globalization_NumberFormatInfo___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (__this_00,StringLiteral_167,(MethodInfo *)0x0);
    ppDVar2 = &(__this->fields).NPGLPGLADBF;
    if (*ppDVar2 != (DG_Tweening_Sequence_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,false,(MethodInfo *)0x0);
      *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
      thunk_FUN_01c20e04(ppDVar2,0);
    }
    ppDVar2 = &(__this->fields).FNMDIKCCJAN;
    if (*ppDVar2 != (DG_Tweening_Sequence_o *)0x0) {
                    /* try { // try from 031df484 to 032df48f has its CatchHandler @ 031df058 */
      DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 031df490 to 032df497 has its CatchHandler @ 031df498 */
      *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
      thunk_FUN_01c20e04(ppDVar2,0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031df41c with catch @ 031df498
                       catch(type#2 @ 00000000) { ... } // from try @ 031df490 with catch @ 031df498
                        */
    pNVar3 = (__this->fields).textLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).textLabel;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_031df584;
      value.fields.z = 0.0;
      value.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
      UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields).valueLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar4 = (__this->fields).valueLabel;
    if ((pNVar4 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
      __this_03 = &(__this->fields).MCFPIEOBLLM;
      *__this_03 = (__this->fields).CFJPINKJPOD;
      pNVar4 = (__this->fields).valueLabel;
      CJNHFNHJHPE = System_Int64__ToString
                              ((int64_t)__this_03,StringLiteral_9281,
                               (System_IFormatProvider_o *)__this_00,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
        Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_031df584:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

