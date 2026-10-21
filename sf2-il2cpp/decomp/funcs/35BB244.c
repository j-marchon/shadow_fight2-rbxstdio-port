// OLCBPIHLPEC$$GetHashCode @ RVA 0x35BB244

int32_t OLCBPIHLPEC__GetHashCode(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  PGICCMFLDPI_o *pPVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  long lVar7;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar7 = (__this->fields).NGODFBDEMLE;
  if (lVar7 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar7;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).IAEBJKOPDAO;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      local_24 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).EGELDFKMOCJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      pPVar5 = (__this->fields).MIINPPOCPCN;
      if (pPVar5 != (PGICCMFLDPI_o *)0x0) {
        uVar3 = (*(pPVar5->klass->vtable)._2_GetHashCode.methodPtr)
                          (pPVar5,(pPVar5->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      pGVar6 = (__this->fields).CKFPENBPNML;
      if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar3 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

