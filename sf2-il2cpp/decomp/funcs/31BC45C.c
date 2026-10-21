// FAACNCKMEJM$$GetHashCode @ RVA 0x31BC45C

int32_t FAACNCKMEJM__GetHashCode(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bee & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04566bee = 1;
    method = extraout_x1;
  }
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
    if ((__this->fields).FAJBKFIAOPL != false) {
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      uVar2 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
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
  FUN_01bab8c8(0,method);
}

