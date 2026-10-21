// EEOMEMBBGNA$$MCDBOKFCGNK @ RVA 0x32F6874

void EEOMEMBBGNA__MCDBOKFCGNK(EEOMEMBBGNA_o *__this,int64_t PEJIFIIDFMM,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *extraout_x1;
  Il2CppObject *extraout_x1_00;
  MethodInfo *method_00;
  Il2CppObject *extraout_x1_01;
  int index;
  OJEHKJHEBID_o *pOVar4;
  
  pIVar3 = (Il2CppObject *)PEJIFIIDFMM;
  if ((DAT_0456769d & 1) == 0) {
                    /* try { // try from 033f689c to 034f68a3 has its CatchHandler @ 033f68fc */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_RemoveAt__);
                    /* try { // try from 033f68a4 to 034f68e7 has its CatchHandler @ 033f66f8 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__);
    DAT_0456769d = 1;
    pIVar3 = extraout_x1;
  }
  pOVar4 = (__this->fields).MICFEIBNOLM;
  if (pOVar4 == (OJEHKJHEBID_o *)0x0) {
LAB_033f6944:
                    /* catch() { ... } // from try @ 033f68ec with catch @ 033f6954
                       try { // try from 033f6954 to 034f696f has its CatchHandler @ 033f66f8 */
                    /* catch() { ... } // from try @ 033f6830 with catch @ 033f6958 */
    EEOMEMBBGNA__CBPJBDDLNFI(__this,pIVar3,method);
    return;
  }
  pGVar2 = (pOVar4->fields).MABPCBMOECE;
  if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
    iVar1 = (pGVar2->fields).count;
    if (iVar1 < 1) goto LAB_033f6944;
                    /* try { // try from 033f68e8 to 034f68eb has its CatchHandler @ 033f69ac */
    index = 0;
    do {
                    /* try { // try from 033f68ec to 034f68ef has its CatchHandler @ 033f6954 */
      method = Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__;
                    /* try { // try from 033f68f0 to 034f68f3 has its CatchHandler @ 033f68f8 */
                    /* try { // try from 033f68f4 to 034f6913 has its CatchHandler @ 033f66f8 */
      pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                          (MethodInfo_295F6AC *)
                          Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Item__);
                    /* catch() { ... } // from try @ 033f68f0 with catch @ 033f68f8 */
      if (pIVar3 == (Il2CppObject *)0x0) break;
                    /* catch() { ... } // from try @ 033f689c with catch @ 033f68fc */
      if (pIVar3[1].monitor == (void *)PEJIFIIDFMM) {
        pGVar2 = (pOVar4->fields).MABPCBMOECE;
        if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
          method = Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_RemoveAt__;
                    /* catch() { ... } // from try @ 033f6914 with catch @ 033f6938 */
          Google_Protobuf_Collections_RepeatedField<object>__RemoveAt
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                     (MethodInfo_295F50C *)
                     Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_RemoveAt__);
                    /* try { // try from 033f6940 to 034f6953 has its CatchHandler @ 033f6a10 */
          EEOMEMBBGNA__LGLJPEHHFAO(__this,method_00);
          pIVar3 = extraout_x1_01;
          goto LAB_033f6944;
        }
        break;
      }
      pIVar3 = extraout_x1_00;
      if (iVar1 + -1 == index) goto LAB_033f6944;
      pGVar2 = (pOVar4->fields).MABPCBMOECE;
                    /* try { // try from 033f6914 to 034f6917 has its CatchHandler @ 033f6938 */
      index = index + 1;
                    /* try { // try from 033f6918 to 034f693f has its CatchHandler @ 033f66f8 */
    } while (pGVar2 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

