// EnterScreen$$ExistsAnyEnterScreen @ RVA 0x358A91C

bool EnterScreen__ExistsAnyEnterScreen(MethodInfo *method)

{
  bool bVar1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a840 with catch @ 0368a91c
                        */
                    /* try { // try from 0368a92c to 0378a92f has its CatchHandler @ 0368a940 */
  if ((DAT_04568d37 & 1) == 0) {
                    /* catch() { ... } // from try @ 0368a92c with catch @ 0368a940 */
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<EnterScreen>__);
    FUN_01bab630(&EnterScreen_TypeInfo);
    DAT_04568d37 = 1;
  }
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0368a978 to 0378a99f has its CatchHandler @ 0368a9b4 */
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)
                     EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA,
                     Method_DJNBJHPDKDP_OBECCOPBADO<EnterScreen>__);
  return (bool)(~bVar1 & 1);
}

