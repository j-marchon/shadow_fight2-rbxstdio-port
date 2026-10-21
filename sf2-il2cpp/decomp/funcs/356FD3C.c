// NLDPAHFABGL$$MergeFrom @ RVA 0x356FD3C

void NLDPAHFABGL__MergeFrom(NLDPAHFABGL_o *__this,NLDPAHFABGL_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  NLDPAHFABGL_Fields *pNVar4;
  PGICCMFLDPI_o **ppPVar5;
  
                    /* try { // try from 0366fd40 to 0376fd47 has its CatchHandler @ 03672a90 */
                    /* try { // try from 0366fd58 to 0376fd5f has its CatchHandler @ 03672a8c */
  if ((DAT_04568c57 & 1) == 0) {
                    /* try { // try from 0366fd60 to 0376fd73 has its CatchHandler @ 03672a88 */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568c57 = 1;
  }
  if (IBKIPBJJCPG != (NLDPAHFABGL_o *)0x0) {
                    /* try { // try from 0366fd74 to 0376fd7f has its CatchHandler @ 03672a84 */
    lVar3 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
    if (lVar3 != 0) {
      (__this->fields).ADEIKPGDIPM = lVar3;
    }
    lVar3 = (IBKIPBJJCPG->fields).IFDGNOKADMK;
    if (lVar3 != 0) {
      (__this->fields).IFDGNOKADMK = lVar3;
    }
                    /* try { // try from 0366fd90 to 0376fd97 has its CatchHandler @ 03672a4c */
    if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).MIINPPOCPCN;
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 0366fda8 to 0376fdaf has its CatchHandler @ 03672a48 */
        pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366fdbc to 0376fdc3 has its CatchHandler @ 03672a44 */
        *ppPVar5 = pPVar1;
        thunk_FUN_01c20e04(ppPVar5,pPVar1);
        pPVar1 = *ppPVar5;
        if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
                    /* try { // try from 0366fdd4 to 0376fddb has its CatchHandler @ 03672a40 */
                    /* try { // try from 0366fddc to 0376fdef has its CatchHandler @ 03672a3c */
      PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    }
    pNVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 0366fdf0 to 0376fdfb has its CatchHandler @ 03672a38 */
    pNVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pNVar4,pGVar2);
    return;
  }
                    /* try { // try from 0366fe14 to 0376fe17 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366fe18 to 0376fe1b has its CatchHandler @ 03672ad0 */
  return;
}

