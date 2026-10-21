// OLKKAIFGGAK$$MMKPNCNBAJJ @ RVA 0x34E6E38

System_String_o *
OLKKAIFGGAK__MMKPNCNBAJJ
          (MDAPDLLMOMF_o *LEAMIBIAIIN,bool JECKCMKCNCH,GEBHIBIEAJE_o *KFMDKGFNINM,MethodInfo *method
          )

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar2;
  
                    /* try { // try from 035e6e38 to 036e6e3f has its CatchHandler @ 035e6e54 */
                    /* try { // try from 035e6e40 to 036e6e4b has its CatchHandler @ 035e6b78 */
                    /* try { // try from 035e6e4c to 036e6e53 has its CatchHandler @ 035e6e54 */
                    /* catch() { ... } // from try @ 035e6e38 with catch @ 035e6e54
                       catch() { ... } // from try @ 035e6e4c with catch @ 035e6e54 */
  if ((DAT_045687ab & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045687ab = 1;
  }
  if ((LEAMIBIAIIN != (MDAPDLLMOMF_o *)0x0) &&
     (__this = (LEAMIBIAIIN->fields).NMNPMFBJBPK,
     __this != (System_Collections_Generic_List_string__o *)0x0)) {
    if (0 < (__this->fields)._size) {
      pSVar2 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this,0,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      return pSVar2;
    }
    if (JECKCMKCNCH) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04568808 == '\0') {
        FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
        DAT_04568808 = '\x01';
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = MGNPHCAAEIO_TypeInfo->static_fields->_NJLJAAEIDBE_k__BackingField;
    }
    else if ((KFMDKGFNINM == (GEBHIBIEAJE_o *)0x0) ||
            (bVar1 = System_String__IsNullOrEmpty
                               ((KFMDKGFNINM->fields).DBJKFCGNMIE,(MethodInfo *)0x0), bVar1)) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04568809 == '\0') {
        FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
        DAT_04568809 = '\x01';
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = MGNPHCAAEIO_TypeInfo->static_fields->_NNOAHGCFLOM_k__BackingField;
    }
    else {
      pSVar2 = (KFMDKGFNINM->fields).DBJKFCGNMIE;
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

