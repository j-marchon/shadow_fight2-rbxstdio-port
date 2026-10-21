// TypeDefIndex 482
// Namespace: 
// public class EIILGPAPGMJ : BMNKDDCJACM
// Fields:
//   private readonly Image IAKCIALILLN; // 0x10

// ===== public override void AHEDIEFFBMC(Vector2 CJNHFNHJHPE)  [RVA 0x3582288]
// EIILGPAPGMJ$$AHEDIEFFBMC @ RVA 0x3582288

void EIILGPAPGMJ__AHEDIEFFBMC
               (EIILGPAPGMJ_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o value;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    value.fields.x = CJNHFNHJHPE.fields.x;
    value.fields.y = (float)((ulong)CJNHFNHJHPE.fields >> 0x20);
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override float JLKDMMHCFDD()  [RVA 0x35822C8]
// EIILGPAPGMJ$$JLKDMMHCFDD @ RVA 0x35822C8

float EIILGPAPGMJ__JLKDMMHCFDD(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  float in_s3;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    return in_s3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Sprite DBHCDDAICPJ()  [RVA 0x35822F4]
// EIILGPAPGMJ$$DBHCDDAICPJ @ RVA 0x35822F4

UnityEngine_Sprite_o * EIILGPAPGMJ__DBHCDDAICPJ(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    return (UnityEngine_Sprite_o *)(pUVar1->fields).super.m_Corners;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override SpriteDrawMode PCLDIKNPONG()  [RVA 0x3582310]
// EIILGPAPGMJ$$PCLDIKNPONG @ RVA 0x3582310

int32_t EIILGPAPGMJ__PCLDIKNPONG(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_o *value;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Image_o *pUVar3;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_04568cda & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&UnityEngine_SpriteDrawMode_var);
    FUN_01bab630(&UnityEngine_SpriteDrawMode_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_Image_Type_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04568cda = 1;
    method = extraout_x1;
  }
  handle = UnityEngine_SpriteDrawMode_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).IAKCIALILLN;
  if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
    local_48.klass = (System_Enum_c *)UnityEngine_UI_Image_Type_TypeInfo;
    local_38 = *(undefined4 *)&(pUVar3->fields).m_OverrideSprite;
    local_48.monitor = (void *)0xffffffffffffffff;
    value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
                    /* try { // try from 036823f8 to 0378241f has its CatchHandler @ 03682894 */
    pIVar1 = System_Enum__Parse(enumType,value,true,(MethodInfo *)0x0);
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class ==
          (UnityEngine_SpriteDrawMode_TypeInfo->_1).element_class) {
        piVar2 = (int32_t *)thunk_FUN_01bda96c();
        return *piVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IFMPFHKICDM(Sprite CJNHFNHJHPE)  [RVA 0x3582454]
// EIILGPAPGMJ$$IFMPFHKICDM @ RVA 0x3582454

void EIILGPAPGMJ__IFMPFHKICDM
               (EIILGPAPGMJ_o *__this,UnityEngine_Sprite_o *CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  
                    /* try { // try from 03682454 to 0378247f has its CatchHandler @ 03682890 */
  __this_00 = (__this->fields).IAKCIALILLN;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_sprite(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Vector2 GGOLGLLAOEP()  [RVA 0x3582470]
// EIILGPAPGMJ$$GGOLGLLAOEP @ RVA 0x3582470

UnityEngine_Vector2_o EIILGPAPGMJ__GGOLGLLAOEP(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IIMBMIOOJGB(SpriteDrawMode CJNHFNHJHPE)  [RVA 0x3582498]
// EIILGPAPGMJ$$IIMBMIOOJGB @ RVA 0x3582498

void EIILGPAPGMJ__IIMBMIOOJGB(EIILGPAPGMJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_o *value;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  UnityEngine_UI_Image_o *__this_00;
  System_Enum_o local_48;
  int32_t local_38;
  
                    /* try { // try from 036824c8 to 037824d7 has its CatchHandler @ 036828a4 */
  if ((DAT_04568cdb & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&UnityEngine_SpriteDrawMode_TypeInfo);
                    /* try { // try from 036824e8 to 037824ef has its CatchHandler @ 03682870 */
    FUN_01bab630(&UnityEngine_UI_Image_Type_var);
    FUN_01bab630(&UnityEngine_UI_Image_Type_TypeInfo);
                    /* try { // try from 03682500 to 03782507 has its CatchHandler @ 03682884 */
    FUN_01bab630(&System_Type_TypeInfo);
                    /* try { // try from 0368250c to 03782527 has its CatchHandler @ 036828a0 */
    DAT_04568cdb = 1;
  }
  handle = UnityEngine_UI_Image_Type_var;
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03682534 to 0378253b has its CatchHandler @ 03682868 */
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_48.klass = (System_Enum_c *)UnityEngine_SpriteDrawMode_TypeInfo;
                    /* try { // try from 0368254c to 03782553 has its CatchHandler @ 0368286c */
                    /* try { // try from 03682558 to 0378257b has its CatchHandler @ 0368288c */
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = CJNHFNHJHPE;
  value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
                    /* try { // try from 0368257c to 03782587 has its CatchHandler @ 03682810 */
  pIVar1 = System_Enum__Parse(enumType,value,true,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
                    /* try { // try from 03682598 to 0378259f has its CatchHandler @ 0368282c */
                    /* try { // try from 036825b0 to 037825b7 has its CatchHandler @ 03682828 */
    if ((pIVar1->klass->_1).element_class == (UnityEngine_UI_Image_Type_TypeInfo->_1).element_class)
    {
      piVar2 = (int32_t *)thunk_FUN_01bda96c();
                    /* try { // try from 036825bc to 037825d3 has its CatchHandler @ 0368289c */
      UnityEngine_UI_Image__set_type(__this_00,*piVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036825e0 to 037825e7 has its CatchHandler @ 0368284c */
  FUN_01bab8c8();
}


// ===== public override void KDMBCCPCLAJ(float CJNHFNHJHPE)  [RVA 0x35825E8]
// EIILGPAPGMJ$$KDMBCCPCLAJ @ RVA 0x35825E8

void EIILGPAPGMJ__KDMBCCPCLAJ(EIILGPAPGMJ_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  MethodInfo *extraout_x1;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 036825f8 to 037825ff has its CatchHandler @ 03682864 */
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 03682600 to 0378260b has its CatchHandler @ 0368285c */
    (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    pUVar1 = (__this->fields).IAKCIALILLN;
    method = extraout_x1;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 03682620 to 03782627 has its CatchHandler @ 03682830 */
                    /* WARNING: Could not recover jumptable at 0x03682630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public override void ALNPMBFHOMO(Vector2 CJNHFNHJHPE)  [RVA 0x3582638]
// EIILGPAPGMJ$$ALNPMBFHOMO @ RVA 0x3582638

void EIILGPAPGMJ__ALNPMBFHOMO
               (EIILGPAPGMJ_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  
                    /* try { // try from 03682638 to 0378263f has its CatchHandler @ 03682814 */
  pUVar1 = (__this->fields).IAKCIALILLN;
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    value.fields.x = CJNHFNHJHPE.fields.x;
    value.fields.y = (float)((ulong)CJNHFNHJHPE.fields >> 0x20);
    UnityEngine_RectTransform__set_pivot(pUVar2,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).IAKCIALILLN;
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      value_00.fields.y = value.fields.y;
      value_00.fields.x = value.fields.x;
      UnityEngine_RectTransform__set_anchorMin(pUVar2,value_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).IAKCIALILLN;
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        value_01.fields.y = value.fields.y;
        value_01.fields.x = value.fields.x;
        UnityEngine_RectTransform__set_anchorMax(pUVar2,value_01,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).IAKCIALILLN;
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
          if (DAT_0455fa77 == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa77 = '\x01';
          }
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      ((UnityEngine_Transform_o *)pUVar2,
                       (UnityEngine_Vector3_o)
                       (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override Color NKCPPFNFDEO()  [RVA 0x358272C]
// EIILGPAPGMJ$$NKCPPFNFDEO @ RVA 0x358272C

UnityEngine_Color_o EIILGPAPGMJ__NKCPPFNFDEO(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03682748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r =
         (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IDBKLACIJIK(Color CJNHFNHJHPE)  [RVA 0x3582750]
// EIILGPAPGMJ$$IDBKLACIJIK @ RVA 0x3582750

void EIILGPAPGMJ__IDBKLACIJIK
               (EIILGPAPGMJ_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0368276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.r,CJNHFNHJHPE.fields.g,CJNHFNHJHPE.fields.b,CJNHFNHJHPE.fields.a);
}


// ===== public override Vector2 KKKNIFBPMFH()  [RVA 0x3582774]
// EIILGPAPGMJ$$KKKNIFBPMFH @ RVA 0x3582774

UnityEngine_Vector2_o EIILGPAPGMJ__KKKNIFBPMFH(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(GameObject CMMIJCJOBBF)  [RVA 0x358279C]
// EIILGPAPGMJ$$.ctor @ RVA 0x358279C

void EIILGPAPGMJ___ctor(EIILGPAPGMJ_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
                       MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04568cdc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Image>__);
                    /* try { // try from 036827c8 to 037827cf has its CatchHandler @ 03682888 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
                    /* try { // try from 036827d0 to 037827d3 has its CatchHandler @ 03682880 */
                    /* try { // try from 036827d4 to 037827d7 has its CatchHandler @ 0368287c */
    DAT_04568cdc = 1;
  }
                    /* try { // try from 036827d8 to 037827db has its CatchHandler @ 03682878 */
                    /* try { // try from 036827dc to 037827df has its CatchHandler @ 03682874 */
                    /* try { // try from 036827e0 to 037827e7 has its CatchHandler @ 03682898 */
  BMNKDDCJACM___ctor((BMNKDDCJACM_o *)__this,(MethodInfo *)0x0);
  if (CMMIJCJOBBF != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 036827e8 to 037827eb has its CatchHandler @ 03682844 */
                    /* try { // try from 036827ec to 037827ef has its CatchHandler @ 0368283c */
                    /* try { // try from 036827f0 to 037827f3 has its CatchHandler @ 03682838 */
                    /* try { // try from 036827f4 to 037827f7 has its CatchHandler @ 03682834 */
                    /* try { // try from 036827f8 to 037827fb has its CatchHandler @ 03682820 */
    pUVar1 = (UnityEngine_UI_Image_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (CMMIJCJOBBF,Method_UnityEngine_GameObject_AddComponent<Image>__);
                    /* try { // try from 036827fc to 037827ff has its CatchHandler @ 03682230 */
                    /* try { // try from 03682800 to 03782803 has its CatchHandler @ 0368280c */
                    /* try { // try from 03682804 to 037828c3 has its CatchHandler @ 03682230 */
    (__this->fields).IAKCIALILLN = pUVar1;
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03682800 with catch @ 0368280c */
                    /* catch() { ... } // from try @ 0368257c with catch @ 03682810 */
                    /* catch() { ... } // from try @ 03682638 with catch @ 03682814 */
                    /* catch() { ... } // from try @ 036826b0 with catch @ 03682818 */
    EIILGPAPGMJ__ONDOJMALJDE(__this,(UnityEngine_Vector2_o)0x3f0000003f000000,method_00);
                    /* catch() { ... } // from try @ 03682704 with catch @ 0368281c */
                    /* catch() { ... } // from try @ 036827f8 with catch @ 03682820 */
                    /* catch() { ... } // from try @ 03682674 with catch @ 03682824 */
    __this_00 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036825b0 with catch @ 03682828 */
                    /* catch() { ... } // from try @ 03682598 with catch @ 0368282c */
                    /* catch() { ... } // from try @ 03682620 with catch @ 03682830 */
                    /* catch() { ... } // from try @ 036827f4 with catch @ 03682834 */
                    /* catch() { ... } // from try @ 036827f0 with catch @ 03682838 */
                    /* catch() { ... } // from try @ 036827ec with catch @ 0368283c */
                    /* catch() { ... } // from try @ 03682684 with catch @ 03682840 */
                    /* catch() { ... } // from try @ 036827e8 with catch @ 03682844 */
                    /* catch() { ... } // from try @ 0368266c with catch @ 03682848 */
                    /* catch() { ... } // from try @ 036825e0 with catch @ 0368284c */
    if (((__this_00 != (UnityEngine_Transform_o *)0x0) &&
        (__this_01 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0),
        __this_01 != (UnityEngine_RectTransform_o *)0x0)) &&
       (__this_01->klass == UnityEngine_RectTransform_TypeInfo)) {
                    /* catch() { ... } // from try @ 036826a0 with catch @ 03682850 */
                    /* catch() { ... } // from try @ 03682640 with catch @ 03682854 */
      UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036826bc with catch @ 03682858 */
                    /* catch() { ... } // from try @ 03682600 with catch @ 0368285c */
                    /* catch() { ... } // from try @ 0368265c with catch @ 03682860 */
                    /* catch() { ... } // from try @ 036825f8 with catch @ 03682864 */
                    /* catch() { ... } // from try @ 03682534 with catch @ 03682868 */
                    /* catch() { ... } // from try @ 0368254c with catch @ 0368286c */
                    /* catch() { ... } // from try @ 036824e8 with catch @ 03682870 */
                    /* WARNING: Could not recover jumptable at 0x03682874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 036827dc with catch @ 03682874 */
      (*(__this->klass->vtable)._7_AHEDIEFFBMC.methodPtr)
                (CONCAT44(in_register_00005044,UVar2.fields.m_Width),
                 CONCAT44(in_register_00005064,UVar2.fields.m_Height),__this,
                 (__this->klass->vtable)._7_AHEDIEFFBMC.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036827d8 with catch @ 03682878 */
  FUN_01bab8c8();
}


// ===== private void ONDOJMALJDE(Vector2 POJKEOPHOAI)  [RVA 0x358263C]
// EIILGPAPGMJ$$ONDOJMALJDE @ RVA 0x358263C

void EIILGPAPGMJ__ONDOJMALJDE
               (EIILGPAPGMJ_o *__this,UnityEngine_Vector2_o POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  
                    /* try { // try from 03682640 to 0378264b has its CatchHandler @ 03682854 */
  pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 0368265c to 03782663 has its CatchHandler @ 03682860 */
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    value.fields.x = POJKEOPHOAI.fields.x;
    value.fields.y = (float)((ulong)POJKEOPHOAI.fields >> 0x20);
                    /* try { // try from 0368266c to 03782673 has its CatchHandler @ 03682848 */
                    /* try { // try from 03682674 to 0378267f has its CatchHandler @ 03682824 */
    UnityEngine_RectTransform__set_pivot(pUVar2,value,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 03682684 to 03782693 has its CatchHandler @ 03682840 */
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      value_00.fields.y = value.fields.y;
      value_00.fields.x = value.fields.x;
      UnityEngine_RectTransform__set_anchorMin(pUVar2,value_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 036826a0 to 037826a7 has its CatchHandler @ 03682850 */
      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        value_01.fields.y = value.fields.y;
        value_01.fields.x = value.fields.x;
                    /* try { // try from 036826b0 to 037826b7 has its CatchHandler @ 03682818 */
                    /* try { // try from 036826bc to 037826c3 has its CatchHandler @ 03682858 */
        UnityEngine_RectTransform__set_anchorMax(pUVar2,value_01,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).IAKCIALILLN;
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
          if (DAT_0455fa77 == '\0') {
            FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
            DAT_0455fa77 = '\x01';
          }
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 03682704 to 03782727 has its CatchHandler @ 0368281c */
            UnityEngine_Transform__set_localPosition
                      ((UnityEngine_Transform_o *)pUVar2,
                       (UnityEngine_Vector3_o)
                       (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03682728 to 037827c7 has its CatchHandler @ 03682230 */
  FUN_01bab8c8();
}

