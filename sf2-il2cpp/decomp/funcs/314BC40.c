// HCFOFHGNBKP$$GetHashCode @ RVA 0x314BC40

int32_t HCFOFHGNBKP__GetHashCode(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  BECIPDJBAOG_o *pBVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_045667c4 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_045667c4 = 1;
    method = extraout_x1;
  }
  pBVar3 = (__this->fields).MJIIHOLHNCK;
  if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pBVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar3,(pBVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1_00;
  }
  if ((__this->fields).MKEPFPAHEFK != false) {
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar2 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
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

