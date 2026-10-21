// OJKCDJCBOBL$$GetHashCode @ RVA 0x35C28A4

int32_t OJKCDJCBOBL__GetHashCode(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c27b0 with catch @ 036c28a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c285c with catch @ 036c28a8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 036c2864 with catch @ 036c28a8
                        */
  pGVar3 = (__this->fields).OHMDCKEDOGH;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 036c28b8 to 037c28bb has its CatchHandler @ 036c28e0 */
                    /* try { // try from 036c28bc to 037c28e7 has its CatchHandler @ 036c26a4 */
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar1 = uVar1 ^ 1;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
                    /* catch() { ... } // from try @ 036c28b8 with catch @ 036c28e0 */
                    /* try { // try from 036c28e8 to 037c28ef has its CatchHandler @ 036c2904 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

