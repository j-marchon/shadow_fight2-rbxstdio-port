// ELBBEAGGAOH$$GetHashCode @ RVA 0x324BF4C

int32_t ELBBEAGGAOH__GetHashCode(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int32_t iVar4;
  KAMBBJFPLGM_o *pKVar5;
  EKCGNICFDEO_o *pEVar6;
  GLPEFEEGCPM_o *pGVar7;
  PGICCMFLDPI_o *pPVar8;
  Google_Protobuf_ByteString_o *pGVar9;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *pGVar10;
  Google_Protobuf_UnknownFieldSet_o *pGVar11;
  int local_14;
  
  local_14 = 0;
  pKVar5 = (__this->fields).CBHDCHDBFGB;
  if (pKVar5 == (KAMBBJFPLGM_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pKVar5 = (__this->fields).IFDHENIKFKC;
  if (pKVar5 != (KAMBBJFPLGM_o *)0x0) {
    uVar3 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pEVar6 = (__this->fields).DNKENJFJOMD;
  if (pEVar6 != (EKCGNICFDEO_o *)0x0) {
    uVar3 = (*(pEVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pEVar6,(pEVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pEVar6 = (__this->fields).FFDNNGLMPJJ;
  if (pEVar6 != (EKCGNICFDEO_o *)0x0) {
    uVar3 = (*(pEVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pEVar6,(pEVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar7 = (__this->fields).KEIBPDJHHBB;
  if (pGVar7 != (GLPEFEEGCPM_o *)0x0) {
    uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pPVar8 = (__this->fields).MIINPPOCPCN;
  if (pPVar8 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar8->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar8,(pPVar8->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar9 = (__this->fields).DKOBFIICAFM;
  if (pGVar9 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar4 = Google_Protobuf_ByteString__get_Length(pGVar9,(MethodInfo *)0x0);
    if (iVar4 != 0) {
      pGVar9 = (__this->fields).DKOBFIICAFM;
      if (pGVar9 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_0334c080;
      uVar3 = (*(pGVar9->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar9,(pGVar9->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).EMNNAEAIMNH;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar10 = (__this->fields).OOPOHLJPBHE;
    if (pGVar10 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      uVar3 = (*(pGVar10->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar10,(pGVar10->klass->vtable)._2_GetHashCode.method);
      pGVar11 = (__this->fields).CKFPENBPNML;
      uVar3 = uVar3 ^ uVar2;
      if (pGVar11 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar11->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar11,(pGVar11->klass->vtable)._2_GetHashCode.method);
        uVar3 = uVar2 ^ uVar3;
      }
      return uVar3;
    }
  }
LAB_0334c080:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

