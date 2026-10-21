// HJNDPNIMBBG$$LAPNHIJGIGH @ RVA 0x35C55A0

/* WARNING: Type propagation algorithm not settling */

void HJNDPNIMBBG__LAPNHIJGIGH(HJNDPNIMBBG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Nullable_Color__o *pSVar1;
  bool bVar2;
  UnityEngine_Sprite_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Sprite_o **ppUVar4;
  System_Nullable_Color__Fields local_58;
  System_Nullable_Color__Fields local_40;
  
  bVar2 = System_String__op_Equality((__this->fields).NAAMEIBLICP,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar2) {
    (__this->fields).NAAMEIBLICP = CJNHFNHJHPE;
    thunk_FUN_01c20e04(&__this->fields,CJNHFNHJHPE);
    HJNDPNIMBBG__NDHNMCOKAEB((System_Nullable_Color__o *)&local_58,__this,method_00);
    local_40.value.fields.a = local_58.value.fields.a;
    local_40.value.fields.g = local_58.value.fields.g;
    local_40.value.fields.b = local_58.value.fields.b;
    local_40.hasValue = local_58.hasValue;
    local_40._1_3_ = local_58._1_3_;
    local_40.value.fields.r = local_58.value.fields.r;
    (__this->fields).GDJDEBNNDOO.fields.value.fields.a = local_58.value.fields.a;
    pSVar1 = &(__this->fields).GDJDEBNNDOO;
    (pSVar1->fields).value.fields.g = local_58.value.fields.g;
    (pSVar1->fields).value.fields.b = local_58.value.fields.b;
    (__this->fields).GDJDEBNNDOO.fields.hasValue = local_58.hasValue;
    *(undefined3 *)&(__this->fields).GDJDEBNNDOO.fields.field_0x1 = local_58._1_3_;
    (__this->fields).GDJDEBNNDOO.fields.value.fields.r = local_58.value.fields.r;
    pUVar3 = HJNDPNIMBBG__HEOBDIBNECE(__this,method_01);
    ppUVar4 = &(__this->fields).EDACJMBBGNF;
    *ppUVar4 = pUVar3;
    thunk_FUN_01c20e04(ppUVar4,pUVar3);
  }
  return;
}

