// NLDPAHFABGL$$MergeFrom @ RVA 0x3570178

void NLDPAHFABGL__MergeFrom
               (NLDPAHFABGL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  NLDPAHFABGL_Fields *pNVar2;
  uint32_t uVar3;
  int64_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04568c5b & 1) == 0) {
                    /* try { // try from 0367019c to 0377019f has its CatchHandler @ 03673328 */
                    /* try { // try from 036701a0 to 037701c3 has its CatchHandler @ 03673254 */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568c5b = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03670294 to 0377029b has its CatchHandler @ 03672ffc */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).MIINPPOCPCN;
  pNVar2 = &__this->fields;
  do {
                    /* try { // try from 036701d4 to 037701db has its CatchHandler @ 03672c6c */
    while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0xf < (int)uVar3) {
      if (uVar3 == 0x10) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IFDGNOKADMK = iVar4;
                    /* try { // try from 03670254 to 0377025b has its CatchHandler @ 03672ff8 */
      }
      else if (uVar3 == 0x1a) {
        pPVar6 = *ppPVar1;
                    /* try { // try from 036701ec to 037701f3 has its CatchHandler @ 03672c68 */
        if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
          pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* try { // try from 03670200 to 03770207 has its CatchHandler @ 03672c64 */
          PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
          *ppPVar1 = pPVar6;
          thunk_FUN_01c20e04(ppPVar1,pPVar6);
          pPVar6 = *ppPVar1;
        }
                    /* try { // try from 03670218 to 0377021f has its CatchHandler @ 03672c60 */
                    /* try { // try from 03670220 to 03770233 has its CatchHandler @ 03672c5c */
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar6,(MethodInfo *)0x0);
      }
      else {
LAB_0367025c:
                    /* try { // try from 03670268 to 0377026f has its CatchHandler @ 03673004 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pNVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pNVar2->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pNVar2,pGVar5);
      }
    }
    if (uVar3 != 8) {
      if (uVar3 == 0) {
                    /* try { // try from 03670280 to 03770287 has its CatchHandler @ 03673000 */
        return;
      }
      goto LAB_0367025c;
    }
    iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 0367023c to 03770243 has its CatchHandler @ 03672c58 */
    (__this->fields).ADEIKPGDIPM = iVar4;
  } while( true );
}

