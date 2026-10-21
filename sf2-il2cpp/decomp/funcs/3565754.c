// CADIGFIBFEN$$GetHashCode @ RVA 0x3565754

int32_t CADIGFIBFEN__GetHashCode(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  int local_28;
  undefined1 local_24 [4];
  
  if ((DAT_04568bec & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04568bec = 1;
    method = extraout_x1;
  }
  local_24[0] = 0;
  local_28 = 0;
  uVar2 = 1;
  if ((__this->fields).PCKJAOOKJKK != false) {
    local_24[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar2 = System_Boolean__GetHashCode(SUB81(local_24,0),(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pPVar4 = (__this->fields).MIINPPOCPCN;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).PLIIOMEEPLO != false) {
    local_24[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_24,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).BLGKCOLNMCK;
  if (iVar1 != 0) {
    local_28 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_28,(MethodInfo *)0x0);
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

