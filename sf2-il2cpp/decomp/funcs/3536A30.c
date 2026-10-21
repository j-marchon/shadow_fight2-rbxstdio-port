// EPFMFHDGMCE$$KLFKIMPHFCG @ RVA 0x3536A30

EPFMFHDGMCE_JGKNDMCIPBN_o *
EPFMFHDGMCE__KLFKIMPHFCG(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  EPFMFHDGMCE_JGKNDMCIPBN_o *pEVar1;
  int index;
  
  if ((DAT_04568a93 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__);
    DAT_04568a93 = 1;
  }
  __this_00 = (__this->fields).IMFGEOBBNNA;
  if (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0;
      }
      pEVar1 = (EPFMFHDGMCE_JGKNDMCIPBN_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_get_Item__
                         );
      if (pEVar1 == (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) break;
      if (JLAFGLDIFOC < (pEVar1->fields).NOPGBJNLFHM) {
        return pEVar1;
      }
      __this_00 = (__this->fields).IMFGEOBBNNA;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

