// BECIPDJBAOG$$GetHashCode @ RVA 0x30D1514

int32_t BECIPDJBAOG__GetHashCode(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  undefined1 auVar8 [16];
  int local_14;
  
  local_14 = 0;
  pSVar4 = (__this->fields).JPHFGCIDDHE;
  uVar7 = 0;
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
    pGVar5 = (__this->fields).LEJBLHJFJHP;
    uVar7 = 0;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      auVar8 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                         (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      method = auVar8._8_8_;
      uVar7 = auVar8._0_8_;
      pGVar5 = (__this->fields).AKFPFIHIHOC;
      if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
        iVar1 = (__this->fields).EMOLIBOCKJK;
        uVar3 = auVar8._0_4_ ^ uVar2 ^ uVar3;
        if (iVar1 != 0) {
          local_14 = iVar1;
          uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
          uVar3 = uVar2 ^ uVar3;
        }
        iVar1 = (__this->fields).NLLKMEMKBAF;
        if (iVar1 != 0) {
          local_14 = iVar1;
          uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar7,method);
}

