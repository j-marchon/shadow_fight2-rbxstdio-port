// NLDPAHFABGL$$.ctor @ RVA 0x356FCC0

void NLDPAHFABGL___ctor(NLDPAHFABGL_o *__this,NLDPAHFABGL_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  int64_t iVar3;
  
                    /* try { // try from 0366fcc4 to 0376fccb has its CatchHandler @ 03672ae4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NLDPAHFABGL_o *)0x0) {
                    /* try { // try from 0366fcdc to 0376fce3 has its CatchHandler @ 03672ae0 */
    iVar3 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
    (__this->fields).IFDGNOKADMK = (IBKIPBJJCPG->fields).IFDGNOKADMK;
    (__this->fields).ADEIKPGDIPM = iVar3;
                    /* try { // try from 0366fce4 to 0376fcf7 has its CatchHandler @ 03672adc */
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366fcf8 to 0376fd03 has its CatchHandler @ 03672ad8 */
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
    thunk_FUN_01c20e04();
                    /* try { // try from 0366fd14 to 0376fd1b has its CatchHandler @ 03672a98 */
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
                    /* try { // try from 0366fd2c to 0376fd33 has its CatchHandler @ 03672a94 */
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

