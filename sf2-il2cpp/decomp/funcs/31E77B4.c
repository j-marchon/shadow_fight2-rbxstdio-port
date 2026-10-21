// MNLIBPAOCLG$$HKFCHIGNFHM @ RVA 0x31E77B4

void MNLIBPAOCLG__HKFCHIGNFHM
               (MNLIBPAOCLG_o *__this,UnityEngine_SpriteRenderer_o *EDGOPONEKCB,float KEFILECBPMF,
               float BHOOMCEABGH,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o value_00;
  
  if ((DAT_04566d74 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04566d74 = 1;
  }
  iVar1 = (__this->fields).DOGMHNFPALG;
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566e50 == '\0') {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    DAT_04566e50 = '\x01';
  }
  if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DLAFGNMCMFA_TypeInfo->static_fields->IIEEJEFADFL < iVar1) {
    (__this->fields).DOGMHNFPALG = 0;
  }
  if (EDGOPONEKCB != (UnityEngine_SpriteRenderer_o *)0x0) {
    UVar3 = UnityEngine_SpriteRenderer__get_color(EDGOPONEKCB,(MethodInfo *)0x0);
    value_00.fields.b = UVar3.fields.b;
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566e50 == '\0') {
      FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
      DAT_04566e50 = '\x01';
    }
    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar2 = sinf((3.1415927 / (float)DLAFGNMCMFA_TypeInfo->static_fields->IIEEJEFADFL) *
                 (float)(__this->fields).DOGMHNFPALG);
    value_00.fields.a = fVar2 * 0.5 + 0.5;
    value_00.fields.r = (float)(int)UVar3.fields._0_8_;
    value_00.fields.g = (float)(int)((ulong)UVar3.fields._0_8_ >> 0x20);
    UnityEngine_SpriteRenderer__set_color(EDGOPONEKCB,value_00,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)EDGOPONEKCB,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      value.fields.y = BHOOMCEABGH;
      value.fields.x = KEFILECBPMF;
      value.fields.z = -40.0;
      UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
      (__this->fields).DOGMHNFPALG = (__this->fields).DOGMHNFPALG + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

