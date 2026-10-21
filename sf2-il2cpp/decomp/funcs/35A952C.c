// KEGDLHPEJBG$$GetHashCode @ RVA 0x35A952C

int32_t KEGDLHPEJBG__GetHashCode(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_18;
  
  local_18 = 0;
  pSVar3 = (__this->fields).GJNOEAKNMOG;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
    }
    lVar5 = (__this->fields).HFHGCALGKHH;
    if (lVar5 != 0) {
      local_18 = lVar5;
      uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

