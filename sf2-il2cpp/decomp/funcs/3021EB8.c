// OKKPDLAJBFD$$MergeFrom @ RVA 0x3021EB8

void OKKPDLAJBFD__MergeFrom
               (OKKPDLAJBFD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  PGICCMFLDPI_o **ppPVar2;
  OKKPDLAJBFD_Fields *pOVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04565c56 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04565c56 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).IPIKAEDIBOD;
  ppPVar2 = &(__this->fields).LGHDNNJIJGO;
  pOVar3 = &__this->fields;
LAB_03121f08:
  do {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03121f14 to 03221f17 has its CatchHandler @ 03121f70 */
                    /* try { // try from 03121f18 to 03221f1b has its CatchHandler @ 03121f6c */
    if (uVar4 == 10) {
      pPVar6 = *ppPVar2;
      if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 03121f88 to 03221f8b has its CatchHandler @ 03121fa0 */
        pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03121f88 with catch @ 03121fa0 */
        *ppPVar2 = pPVar6;
        thunk_FUN_01c20e04(ppPVar2,pPVar6);
        pPVar6 = *ppPVar2;
      }
    }
    else {
                    /* try { // try from 03121f1c to 03221f1f has its CatchHandler @ 03121f68 */
                    /* try { // try from 03121f20 to 03221f23 has its CatchHandler @ 03121f5c */
      if (uVar4 != 0x12) {
                    /* try { // try from 03121f24 to 03221f2f has its CatchHandler @ 03121f58 */
        if (uVar4 == 0) {
          return;
        }
                    /* try { // try from 03121f30 to 03221f33 has its CatchHandler @ 03121bac */
                    /* try { // try from 03121f34 to 03221f37 has its CatchHandler @ 03121f50 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03121f38 to 03221f3f has its CatchHandler @ 03121bac */
        pOVar3->CKFPENBPNML = pGVar5;
                    /* try { // try from 03121f40 to 03221f43 has its CatchHandler @ 03121f4c */
                    /* try { // try from 03121f44 to 03221f4b has its CatchHandler @ 03121f54 */
        thunk_FUN_01c20e04(pOVar3,pGVar5);
        goto LAB_03121f08;
      }
                    /* catch() { ... } // from try @ 03121f40 with catch @ 03121f4c
                       try { // try from 03121f4c to 03221f87 has its CatchHandler @ 03121bac */
      pPVar6 = *ppPVar1;
                    /* catch() { ... } // from try @ 03121f34 with catch @ 03121f50 */
      if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
                    /* catch() { ... } // from try @ 03121e24 with catch @ 03121f54
                       catch() { ... } // from try @ 03121f44 with catch @ 03121f54 */
                    /* catch() { ... } // from try @ 03121f24 with catch @ 03121f58 */
        pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* catch() { ... } // from try @ 03121f20 with catch @ 03121f5c */
                    /* catch() { ... } // from try @ 03121cf8 with catch @ 03121f60 */
                    /* catch() { ... } // from try @ 03121d54 with catch @ 03121f64 */
        PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03121f1c with catch @ 03121f68 */
                    /* catch() { ... } // from try @ 03121f18 with catch @ 03121f6c */
                    /* catch() { ... } // from try @ 03121f14 with catch @ 03121f70 */
        *ppPVar1 = pPVar6;
        thunk_FUN_01c20e04(ppPVar1,pPVar6);
        pPVar6 = *ppPVar1;
      }
    }
                    /* try { // try from 03121fb0 to 0322201f has its CatchHandler @ 03122034 */
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar6,(MethodInfo *)0x0);
  } while( true );
}

