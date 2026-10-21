// LMEMJBOBHBE$$GetHashCode @ RVA 0x326D83C

int32_t LMEMJBOBHBE__GetHashCode(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = 0;
  iVar1 = (__this->fields).MOCOKGFIJFP;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
                    /* try { // try from 0336d86c to 0346d873 has its CatchHandler @ 0336ddc8 */
  }
  pSVar4 = (__this->fields).MAHGAIJBBHF;
                    /* try { // try from 0336d878 to 0346d87f has its CatchHandler @ 0336ddd0 */
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
                    /* try { // try from 0336d888 to 0346d893 has its CatchHandler @ 0336ddc0 */
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    lVar6 = (__this->fields).PHICOONBADJ;
    if (lVar6 != 0) {
                    /* try { // try from 0336d89c to 0346d8a7 has its CatchHandler @ 0336ddbc */
      local_28 = lVar6;
      uVar3 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
                    /* try { // try from 0336d8ac to 0346d8b7 has its CatchHandler @ 0336ddc4 */
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
                    /* try { // try from 0336d8c8 to 0346d8cf has its CatchHandler @ 0336dd98 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336d8dc to 0346d8df has its CatchHandler @ 0336dda4 */
  FUN_01bab8c8();
}

