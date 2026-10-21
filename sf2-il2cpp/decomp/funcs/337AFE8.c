// NIGMCJIMBHO$$GetHashCode @ RVA 0x337AFE8

int32_t NIGMCJIMBHO__GetHashCode(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_ByteString_o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pGVar4 = (__this->fields).DKOBFIICAFM;
  if (pGVar4 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar4,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      pGVar4 = (__this->fields).DKOBFIICAFM;
      if (pGVar4 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_0347b050;
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
LAB_0347b050:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

