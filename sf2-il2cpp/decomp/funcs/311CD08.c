// HDDKPFAHBBN$$GetHashCode @ RVA 0x311CD08

int32_t HDDKPFAHBBN__GetHashCode(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  
  pSVar3 = (__this->fields).PFCHOEFIMPF;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
      method = extraout_x1;
    }
    pSVar3 = (__this->fields).BEBCICLILLB;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        uVar2 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

