// OMFJHNMDIBF$$GetHashCode @ RVA 0x343F8E8

int32_t OMFJHNMDIBF__GetHashCode(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PIADCKMDDAK_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_0456820e & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetHashCode__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_0456820e = 1;
  }
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value = 0;
  if ((__this->fields).EMOLIBOCKJK.fields.hasValue == false) {
    uVar1 = 1;
  }
  else {
    local_28 = (__this->fields).EMOLIBOCKJK.fields;
    uVar1 = System_Nullable<int>__GetHashCode
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_GetHashCode__);
    uVar1 = uVar1 ^ 1;
  }
  pPVar3 = (__this->fields).JMACIOLHEOF;
  if (pPVar3 != (PIADCKMDDAK_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar3 = (__this->fields).IEDLACLJJOK;
  if (pPVar3 != (PIADCKMDDAK_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  if ((__this->fields).NLLKMEMKBAF.fields.hasValue != false) {
    local_28 = (__this->fields).NLLKMEMKBAF.fields;
    uVar2 = System_Nullable<int>__GetHashCode
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_GetHashCode__);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

