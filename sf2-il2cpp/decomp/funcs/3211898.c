// NGCBNMBJMOE$$NDNPGAKJLHM @ RVA 0x3211898

void NGCBNMBJMOE__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
                    /* try { // try from 03311898 to 0341189f has its CatchHandler @ 03311998 */
                    /* try { // try from 033118a0 to 034118c3 has its CatchHandler @ 033119b0 */
  if ((DAT_04566e92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>_Clear__);
                    /* try { // try from 033118c4 to 0341195f has its CatchHandler @ 03311564 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04566e92 = 1;
  }
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar1,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             NGCBNMBJMOE_TypeInfo->static_fields->DKNBHLFHKNH;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar1,Method_System_Collections_Generic_Dictionary<string,_Sprite>_Clear__);
      if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03311960 to 03411967 has its CatchHandler @ 033119d0 */
      JHHFDBLANPH__NECODEBPGNE((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

