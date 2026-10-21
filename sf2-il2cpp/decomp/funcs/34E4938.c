// Nekki.SF2.GUI.ResolutionImage$$SetNativeSize @ RVA 0x34E4938

void Nekki_SF2_GUI_ResolutionImage__SetNativeSize
               (Nekki_SF2_GUI_ResolutionImage_o *__this,float DCIDOOPHJDG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *x;
  float fVar3;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  float fVar4;
  
  if ((DAT_04568751 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568751 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 035e499c to 036e49a3 has its CatchHandler @ 035e49ec */
  if (bVar1) {
                    /* try { // try from 035e49b0 to 036e49bb has its CatchHandler @ 035e49e8 */
    return;
  }
                    /* try { // try from 035e49bc to 036e49db has its CatchHandler @ 035e4908 */
  UnityEngine_UI_Image__SetNativeSize((UnityEngine_UI_Image_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar6.fields.y;
    fVar3 = UVar6.fields.x;
                    /* try { // try from 035e49dc to 036e49df has its CatchHandler @ 035e49e4 */
                    /* try { // try from 035e49e0 to 036e4a03 has its CatchHandler @ 035e4908 */
    fVar5 = fVar3;
    if (fVar3 <= fVar4) {
      fVar5 = fVar4;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e49dc with catch @ 035e49e4
                        */
    fVar5 = DCIDOOPHJDG / fVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e49b0 with catch @ 035e49e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e499c with catch @ 035e49ec
                        */
    if (fVar5 < 1.0) {
      pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 035e4a04 to 036e4a07 has its CatchHandler @ 035e4a30 */
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_035e4a3c;
                    /* try { // try from 035e4a08 to 036e4a3f has its CatchHandler @ 035e4908 */
      UVar6.fields.y = fVar4 * fVar5;
      UVar6.fields.x = fVar3 * fVar5;
      UnityEngine_RectTransform__set_sizeDelta(pUVar2,UVar6,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 035e4a04 with catch @ 035e4a30 */
                    /* WARNING: Could not recover jumptable at 0x035e4a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._90_GPCBFKCHEOB.methodPtr)
              (__this,(__this->klass->vtable)._90_GPCBFKCHEOB.method);
    return;
  }
LAB_035e4a3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

