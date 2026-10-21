// IHMIMECHIAN$$GetHashCode @ RVA 0x343CA40

int32_t IHMIMECHIAN__GetHashCode(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_Collections_Generic_EqualityComparer_float__o *pSVar4;
  Google_Protobuf_Collections_RepeatedField_int__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  undefined1 local_28 [4];
  int local_24;
  
  if ((DAT_045681e6 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
    DAT_045681e6 = 1;
  }
  local_24 = 0;
  local_28[0] = 0;
  iVar1 = (__this->fields).CHLCOKOBIHN;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_24 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).KFBIHGFDAOL;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).POHDGAPDBGK != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).PJMOADBJNKH != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).NNCLFDMPFHP != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).HOFAHGOCDCE != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).KLOGBBKOLFL != 0.0) {
    if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045612b6 == '\0') {
      FUN_01bab630(&Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo);
      DAT_045612b6 = '\x01';
    }
    if ((Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Google_Protobuf_Collections_ProtobufEqualityComparers_TypeInfo->static_fields->
             _BitwiseSingleEqualityComparer_k__BackingField;
    if (pSVar4 == (System_Collections_Generic_EqualityComparer_float__o *)0x0) goto LAB_0353cc64;
    uVar3 = (*(pSVar4->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                      ((__this->fields).KLOGBBKOLFL,pSVar4,
                       (pSVar4->klass->vtable)._9_HNIHOIAMDPC.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).IKCCLDMOOKP;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    iVar1 = (__this->fields).LADINGEOKCK;
    uVar3 = uVar3 ^ uVar2;
    if (iVar1 != 0) {
      local_24 = iVar1;
      uVar2 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
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
LAB_0353cc64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

