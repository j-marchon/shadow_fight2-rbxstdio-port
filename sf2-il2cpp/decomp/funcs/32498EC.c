// Nekki.SF2.GUI.Scripts.EditBox$$get_BGColor @ RVA 0x32498EC

UnityEngine_Color_o
Nekki_SF2_GUI_Scripts_EditBox__get_BGColor
          (Nekki_SF2_GUI_Scripts_EditBox_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Graphic_o *pUVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  
                    /* catch() { ... } // from try @ 033496e8 with catch @ 033498ec */
                    /* catch() { ... } // from try @ 033496f8 with catch @ 033498f0 */
                    /* catch() { ... } // from try @ 033498ac with catch @ 033498f4 */
                    /* catch() { ... } // from try @ 03349644 with catch @ 033498f8 */
                    /* catch() { ... } // from try @ 03349740 with catch @ 033498fc */
                    /* catch() { ... } // from try @ 033498a8 with catch @ 03349900 */
                    /* catch() { ... } // from try @ 033498a4 with catch @ 03349904 */
                    /* catch() { ... } // from try @ 033495f4 with catch @ 03349908 */
  if ((DAT_045670e3 & 1) == 0) {
                    /* catch() { ... } // from try @ 033495e0 with catch @ 0334990c */
                    /* catch() { ... } // from try @ 033498a0 with catch @ 03349910 */
                    /* catch() { ... } // from try @ 0334989c with catch @ 03349914 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 03349898 with catch @ 03349918 */
                    /* catch() { ... } // from try @ 033497fc with catch @ 0334991c */
    DAT_045670e3 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03349894 with catch @ 03349920 */
  pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 033495c0 with catch @ 03349928 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 0334993c to 0344993f has its CatchHandler @ 03349968 */
                    /* try { // try from 03349940 to 03449977 has its CatchHandler @ 03349364 */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    UVar3.fields.g = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.b = 1.0;
    return (UnityEngine_Color_o)UVar3.fields;
  }
  pUVar2 = (__this->fields).super.super.m_TargetGraphic;
                    /* catch() { ... } // from try @ 0334993c with catch @ 03349968 */
  if (pUVar2 != (UnityEngine_UI_Graphic_o *)0x0) {
                    /* try { // try from 03349978 to 0344998b has its CatchHandler @ 03349a70 */
                    /* WARNING: Could not recover jumptable at 0x03349980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar4.fields.r =
         (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                   (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
    UVar4.fields.g = (float)in_s1;
    UVar4.fields.a = (float)in_s3;
    UVar4.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar4.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

