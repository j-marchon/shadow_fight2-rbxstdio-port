// KFOPKHPGAAK$$.ctor @ RVA 0x34A53B0

void KFOPKHPGAAK___ctor(KFOPKHPGAAK_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  int32_t *piVar2;
  LCKCDEKNLOA_o **ppLVar3;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 035a53a8 with catch @ 035a53d4 */
  if ((DAT_045684e4 & 1) == 0) {
                    /* try { // try from 035a53e4 to 036a53eb has its CatchHandler @ 035a5400 */
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
                    /* try { // try from 035a53ec to 036a53f7 has its CatchHandler @ 035a5268 */
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
                    /* try { // try from 035a53f8 to 036a53ff has its CatchHandler @ 035a5400 */
    DAT_045684e4 = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a53e4 with catch @ 035a5400
                       catch(type#2 @ 00000000) { ... } // from try @ 035a53f8 with catch @ 035a5400
                        */
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  piVar2 = &(__this->fields).ACCIHBHMFPN;
  *(LCKCDEKNLOA_o **)piVar2 = pLVar1;
  thunk_FUN_01c20e04(piVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).FNOJIPMNDPJ;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor((UniRx_SerialDisposable_o *)pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).FNGNIKNIEMM;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

