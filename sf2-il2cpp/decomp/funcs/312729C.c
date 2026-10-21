// IGFGOIGJEFE$$.ctor @ RVA 0x312729C

void IGFGOIGJEFE___ctor(IGFGOIGJEFE_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032272a4 to 033272ab has its CatchHandler @ 03227c60 */
  if ((DAT_04566660 & 1) == 0) {
                    /* try { // try from 032272bc to 033272c3 has its CatchHandler @ 03227c58 */
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
                    /* try { // try from 032272c8 to 033272cf has its CatchHandler @ 03227c48 */
    DAT_04566660 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
                    /* try { // try from 032272d8 to 033272df has its CatchHandler @ 03227c38 */
                    /* try { // try from 032272e0 to 033272ef has its CatchHandler @ 03227c3c */
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).PGLINMCHKGC;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
                    /* try { // try from 032272fc to 0332730b has its CatchHandler @ 03227c54 */
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).EBAHJECPAHA;
                    /* try { // try from 0322730c to 03327317 has its CatchHandler @ 03227c4c */
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
                    /* try { // try from 03227324 to 03327387 has its CatchHandler @ 03227ce0 */
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

