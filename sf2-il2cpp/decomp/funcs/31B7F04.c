// ClanLogoImage$$Refresh @ RVA 0x31B7F04

void ClanLogoImage__Refresh
               (ClanLogoImage_o *__this,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
               MethodInfo *method)

{
  System_Nullable_Color__o *pSVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  MethodInfo *method_00;
  System_Nullable_Color__o *pSVar3;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o value;
  System_Nullable_Color__Fields local_48;
  
  method_00 = (MethodInfo *)(ulong)(uint)OHLDDIANEPE;
  if ((DAT_04566bc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    DAT_04566bc4 = 1;
  }
  pSVar3 = &(__this->fields).OPPFHPEPLOO;
  if ((pSVar3->fields).hasValue == false) {
    pNVar2 = (__this->fields)._layerLevelBottom;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value.fields.r =
         (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                   (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value.fields.r = 0.0;
    local_48.value.fields.g = 0.0;
    local_48.value.fields.b = 0.0;
    local_48.value.fields.a = 0.0;
    value.fields.g = (float)in_s1;
    value.fields.a = (float)in_s3;
    value.fields.b = (float)in_s2;
    System_Nullable<Color>___ctor
              ((System_Nullable_Color__o *)&local_48,value,Method_System_Nullable<Color>__ctor__);
    (__this->fields).OPPFHPEPLOO.fields.value.fields.a = local_48.value.fields.a;
    pSVar1 = &(__this->fields).OPPFHPEPLOO;
    (pSVar1->fields).value.fields.g = local_48.value.fields.g;
    (pSVar1->fields).value.fields.b = local_48.value.fields.b;
    (pSVar3->fields).hasValue = local_48.hasValue;
    *(undefined3 *)&(pSVar3->fields).field_0x1 = local_48._1_3_;
    (pSVar3->fields).value.fields.r = local_48.value.fields.r;
  }
  ClanLogoImage__FKFPKOGCLFP(__this,NEJHIEOHMCF,method_00);
  ClanLogoImage__BNLMMGGEPAN(__this,OHLDDIANEPE,method_00);
  return;
}

