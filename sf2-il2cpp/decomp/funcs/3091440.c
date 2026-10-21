// NODLJPNGNBG$$GetHashCode @ RVA 0x3091440

int32_t NODLJPNGNBG__GetHashCode(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ICBMOMGINFH_o *pIVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  long local_18;
  
  if ((DAT_045660a4 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_045660a4 = 1;
  }
  local_18 = 0;
  local_24 = 0;
  local_28[0] = 0;
  local_2c = 0;
  lVar6 = (__this->fields).ANAJGHJEEOC;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).LINGIJDCLLC;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).DMFDEJEDMPO != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).PFJPLCAIGJH;
  if (iVar1 != 0) {
    local_2c = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_2c,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pIVar4 = (__this->fields).PMMFPJJOPKE;
  if (pIVar4 != (ICBMOMGINFH_o *)0x0) {
    uVar3 = (*(pIVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pIVar4,(pIVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}

