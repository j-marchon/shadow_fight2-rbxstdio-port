// FPLCEOJCPOD$$FOOHBJNHOKK @ RVA 0x31C6888

void FPLCEOJCPOD__FOOHBJNHOKK
               (FPLCEOJCPOD_o *__this,System_String_o *PMACBPAMPJA,int32_t CJNHFNHJHPE,
               bool MJINKNBHFAC,MethodInfo *method)

{
  MNKGBNEMPCI_o *pMVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value;
  
                    /* try { // try from 032c688c to 033c6897 has its CatchHandler @ 032c5f4c */
                    /* try { // try from 032c6898 to 033c689f has its CatchHandler @ 032c68a0 */
                    /* catch() { ... } // from try @ 032c6864 with catch @ 032c68a0
                       catch() { ... } // from try @ 032c6898 with catch @ 032c68a0 */
                    /* try { // try from 032c68a4 to 033c6bdb has its CatchHandler @ 032c68a4
                       catch() { ... } // from try @ 032c68a4 with catch @ 032c68a4
                       catch() { ... } // from try @ 032c70e0 with catch @ 032c68a4
                       catch() { ... } // from try @ 032c71b4 with catch @ 032c68a4
                       catch() { ... } // from try @ 032c71bc with catch @ 032c68a4
                       catch() { ... } // from try @ 032c72ec with catch @ 032c68a4
                       catch() { ... } // from try @ 032c732c with catch @ 032c68a4 */
  if ((DAT_04566c34 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566c34 = 1;
  }
  if (MJINKNBHFAC) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = MGNPHCAAEIO__CNMOHIPAEPD(PMACBPAMPJA,(MethodInfo *)0x0);
    if (pMVar1 != (MNKGBNEMPCI_o *)0x0) {
      PMACBPAMPJA = (pMVar1->fields).NEFMLODIKPE;
    }
  }
  __this_00 = (__this->fields).BJJAPALEEBD;
  value = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)PMACBPAMPJA,value,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

