// DBNIPENAEKO$$GetHashCode @ RVA 0x31C92A4

int32_t DBNIPENAEKO__GetHashCode(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  AFLJMCMKCIG_o *pAVar4;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  System_String_o *pSVar7;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).LCAENFFHHEI;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pAVar4 = (__this->fields).HBCNHAMIMGF;
  if (pAVar4 != (AFLJMCMKCIG_o *)0x0) {
    uVar3 = (*(pAVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar4,(pAVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).BMMFCMJLFKN;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    pSVar7 = (__this->fields).BHMHGIBMMMB;
    if (pSVar7 != (System_String_o *)0x0) {
      uVar3 = uVar3 ^ uVar2;
      if ((pSVar7->fields)._stringLength != 0) {
        uVar2 = (*(pSVar7->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._2_GetHashCode.method);
        uVar3 = uVar2 ^ uVar3;
      }
      pGVar6 = (__this->fields).CKFPENBPNML;
      if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
        uVar3 = uVar2 ^ uVar3;
      }
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

