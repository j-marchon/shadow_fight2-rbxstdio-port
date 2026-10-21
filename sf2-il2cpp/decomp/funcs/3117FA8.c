// Nekki.SF2.GUI.Shop.PerkProgressBar$$HNJLNPEEMOK @ RVA 0x3117FA8

ALJBCELIEHC_o *
Nekki_SF2_GUI_Shop_PerkProgressBar__HNJLNPEEMOK
          (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,System_String_o *AFKICLAFDKC,
          MethodInfo *method)

{
  DNICJALNLEB_o *pDVar1;
  ALJBCELIEHC_o *pAVar2;
  System_Collections_Generic_List_ALJBCELIEHC__o *pSVar3;
  
                    /* try { // try from 03217fb4 to 03317fbb has its CatchHandler @ 03218108 */
  if ((DAT_045665cb & 1) == 0) {
                    /* try { // try from 03217fc8 to 03317fcf has its CatchHandler @ 03218110 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045665cb = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
                    /* try { // try from 03218010 to 03318017 has its CatchHandler @ 032180e4 */
  if (pDVar1 != (DNICJALNLEB_o *)0x0) {
    pAVar2 = DNICJALNLEB__HNJLNPEEMOK(pDVar1,AFKICLAFDKC,(MethodInfo *)0x0);
    if (pAVar2 != (ALJBCELIEHC_o *)0x0) {
                    /* try { // try from 03218024 to 0331802f has its CatchHandler @ 032180e0 */
      return pAVar2;
    }
                    /* try { // try from 03218030 to 033180bb has its CatchHandler @ 03217e34 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
    if ((pDVar1 != (DNICJALNLEB_o *)0x0) &&
       (pSVar3 = (pDVar1->fields).HLEDPFGACOE,
       pSVar3 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0)) {
      if ((pSVar3->fields)._size < 1) {
        return (ALJBCELIEHC_o *)0x0;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pDVar1 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
        if (pDVar1 == (DNICJALNLEB_o *)0x0) goto LAB_032180ac;
      }
      pSVar3 = (pDVar1->fields).HLEDPFGACOE;
      if (pSVar3 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0) {
        pAVar2 = (ALJBCELIEHC_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,
                            Method_System_Collections_Generic_List<ALJBCELIEHC>_get_Item__);
        return pAVar2;
      }
    }
  }
LAB_032180ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

