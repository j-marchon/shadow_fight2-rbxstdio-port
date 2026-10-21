// ADAHHFAPLLM$$EOHMFJFFFIN @ RVA 0x30C8690

void ADAHHFAPLLM__EOHMFJFFFIN(MethodInfo *method)

{
  ADAHHFAPLLM_o *pAVar1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_045662bd & 1) == 0) {
                    /* try { // try from 031c86ac to 032c86bf has its CatchHandler @ 031c87a0 */
    FUN_01bab630(&ADAHHFAPLLM_TypeInfo);
    DAT_045662bd = 1;
  }
                    /* try { // try from 031c86c4 to 032c86d3 has its CatchHandler @ 031c879c */
  if (ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK != (ADAHHFAPLLM_o *)0x0) {
    return;
  }
  auVar2 = thunk_FUN_01bda818();
  pAVar1 = auVar2._0_8_;
                    /* try { // try from 031c86e0 to 032c86ef has its CatchHandler @ 031c8798 */
  ADAHHFAPLLM___ctor(pAVar1,auVar2._8_8_);
  ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK = pAVar1;
                    /* try { // try from 031c86fc to 032c8703 has its CatchHandler @ 031c8790 */
  thunk_FUN_01c20e04(ADAHHFAPLLM_TypeInfo->static_fields,pAVar1);
                    /* try { // try from 031c8704 to 032c8787 has its CatchHandler @ 031c85f0 */
  pAVar1 = ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pAVar1 != (ADAHHFAPLLM_o *)0x0) {
    ADAHHFAPLLM__GIMAJOGGBHM(pAVar1,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

