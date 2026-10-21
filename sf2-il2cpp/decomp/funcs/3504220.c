// JGELBDHDHAO$$GetHashCode @ RVA 0x3504220

int32_t JGELBDHDHAO__GetHashCode(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
                    /* try { // try from 03604224 to 0370422f has its CatchHandler @ 03603edc */
                    /* try { // try from 03604230 to 03704237 has its CatchHandler @ 03604238 */
  if ((DAT_04568881 & 1) == 0) {
                    /* catch() { ... } // from try @ 03604184 with catch @ 03604238
                       catch() { ... } // from try @ 0360421c with catch @ 03604238
                       catch() { ... } // from try @ 03604230 with catch @ 03604238 */
    FUN_01bab630(&bool_TypeInfo);
    DAT_04568881 = 1;
    method = extraout_x1;
  }
  uVar1 = 1;
  if ((__this->fields).IFBHDAMCHNM != false) {
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar1 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  pGVar3 = (__this->fields).DDEAFMPDPBJ;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar2 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

