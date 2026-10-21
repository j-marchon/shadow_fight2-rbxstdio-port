// EOLFEKNCPLM$$GetHashCode @ RVA 0x357F968

int32_t EOLFEKNCPLM__GetHashCode(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int32_t iVar4;
  GKLPDMLELJF_o *pGVar5;
  OBCMNBDBNFO_o *pOVar6;
  Google_Protobuf_ByteString_o *pGVar7;
  Google_Protobuf_UnknownFieldSet_o *pGVar8;
  int local_14;
  
  local_14 = 0;
  pGVar5 = (__this->fields).MCOPPCNPAHF;
  if (pGVar5 == (GKLPDMLELJF_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pOVar6 = (__this->fields).PLJJCOHGICK;
  if (pOVar6 != (OBCMNBDBNFO_o *)0x0) {
    uVar3 = (*(pOVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pOVar6,(pOVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar7 = (__this->fields).OACFBJNMHCM;
  if (pGVar7 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar4 = Google_Protobuf_ByteString__get_Length(pGVar7,(MethodInfo *)0x0);
    if (iVar4 != 0) {
      pGVar7 = (__this->fields).OACFBJNMHCM;
      if (pGVar7 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_0367fa58;
      uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).LEEKCALJFJN;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).IINFDIJOFIG;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).ODDCBFOLIGB;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar8 = (__this->fields).CKFPENBPNML;
    if (pGVar8 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar8->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar8,(pGVar8->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
LAB_0367fa58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

