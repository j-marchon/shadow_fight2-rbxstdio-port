// CBPENMDOJDB$$GetHashCode @ RVA 0x3103024

int32_t CBPENMDOJDB__GetHashCode(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar6 = (__this->fields).ADEIKPGDIPM;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).GJNOEAKNMOG;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).DIILCCNFMEB;
      if (iVar1 != 0) {
        local_24 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).GOBHKPNEJFN;
      if (iVar1 != 0) {
        local_24 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).NLLKMEMKBAF;
      if (iVar1 != 0) {
        local_24 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

