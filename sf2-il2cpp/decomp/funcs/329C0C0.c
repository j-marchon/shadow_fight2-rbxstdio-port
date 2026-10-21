// EEHFEPPDBHL$$GetHashCode @ RVA 0x329C0C0

int32_t EEHFEPPDBHL__GetHashCode(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  undefined8 local_18;
  
  local_18 = 0;
  pSVar4 = (__this->fields).KKMDFLKPNNJ;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
      method = extraout_x1;
    }
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).JODJOLBBJNI;
      if (iVar1 != 0) {
        local_18 = CONCAT44(iVar1,(undefined4)local_18);
        uVar3 = System_Int32__GetHashCode((int)&local_18 + 4,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).IFICKDAKCHN;
      if (iVar1 != 0) {
        local_18 = CONCAT44(local_18._4_4_,iVar1);
        uVar3 = System_Int32__GetHashCode((int32_t)&local_18,(MethodInfo *)0x0);
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
  FUN_01bab8c8(0,method);
}

