// NLFLMJPNOLF$$GetHashCode @ RVA 0x32A754C

int32_t NLFLMJPNOLF__GetHashCode(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  undefined1 local_28 [4];
  int local_24;
  long local_18;
  
                    /* try { // try from 033a7550 to 034a755b has its CatchHandler @ 033a7808 */
  if ((DAT_04567402 & 1) == 0) {
                    /* try { // try from 033a7570 to 034a7577 has its CatchHandler @ 033a77c0 */
    FUN_01bab630(&bool_TypeInfo);
    DAT_04567402 = 1;
  }
  local_18 = 0;
  local_24 = 0;
  local_28[0] = 0;
                    /* try { // try from 033a7588 to 034a7593 has its CatchHandler @ 033a77bc */
  lVar6 = (__this->fields).OHMDCKEDOGH;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
                    /* try { // try from 033a75ac to 034a75b7 has its CatchHandler @ 033a7824 */
  iVar1 = (__this->fields).IILCHFKCEEH;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).MABPCBMOECE;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 033a75d0 to 034a75d7 has its CatchHandler @ 033a782c */
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 033a75dc to 034a75e3 has its CatchHandler @ 033a7800 */
    uVar3 = uVar3 ^ uVar2;
    if ((__this->fields).BHAOPCFDKCG != false) {
                    /* try { // try from 033a75f0 to 034a75f7 has its CatchHandler @ 033a77f8 */
      local_28[0] = 1;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a7604 to 034a760b has its CatchHandler @ 033a77f0 */
        thunk_FUN_01ba7564();
      }
      uVar2 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 033a7628 to 034a765b has its CatchHandler @ 033a7848 */
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar3 = uVar2 ^ uVar3;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

