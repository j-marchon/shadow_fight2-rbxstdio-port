// HOOAAGABMBL$$HCMOFJHAKJH @ RVA 0x30EF9B8

HOOAAGABMBL_o *
HOOAAGABMBL__HCMOFJHAKJH(HOOAAGABMBL_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  Il2CppObject *JGANIDFNOAF;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  HOOAAGABMBL_o *pHVar3;
  PONNKDFAMFM_o *JGANIDFNOAF_00;
  MethodInfo *pMVar4;
  MethodInfo *in_x3;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566414 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<PONNKDFAMFM>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Count__);
                    /* try { // try from 031efa28 to 032efadb has its CatchHandler @ 031efa28
                       catch() { ... } // from try @ 031efa28 with catch @ 031efa28
                       catch() { ... } // from try @ 031efb1c with catch @ 031efa28
                       catch() { ... } // from try @ 031efb68 with catch @ 031efa28
                       catch() { ... } // from try @ 031efb9c with catch @ 031efa28
                       catch() { ... } // from try @ 031efbe8 with catch @ 031efa28 */
    DAT_04566414 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this,false,0x7fffffff,in_x3);
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
    if ((__this_00->fields)._size == 0) {
LAB_031efb44:
      pHVar3 = (HOOAAGABMBL_o *)0x0;
    }
    else {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__
                          );
        JGANIDFNOAF = local_50.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
          JGANIDFNOAF_00 =
               (PONNKDFAMFM_o *)
               DJNBJHPDKDP__KIKGKKGDCKK<object>
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          Method_DJNBJHPDKDP_KIKGKKGDCKK<PONNKDFAMFM>__);
          if (JGANIDFNOAF_00 == (PONNKDFAMFM_o *)0x0) goto LAB_031efb44;
          pPVar5 = (JGANIDFNOAF_00->fields).JDHAHDALAOA;
                    /* try { // try from 031efb10 to 032efb1b has its CatchHandler @ 031efb6c */
          if (pPVar5 != (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* try { // try from 031efb1c to 032efb57 has its CatchHandler @ 031efa28 */
            pMVar4 = (MethodInfo *)0x0;
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (pPVar5->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
            if (JLAFGLDIFOC <= iVar2) {
              return (HOOAAGABMBL_o *)0x0;
            }
            pHVar3 = HOOAAGABMBL__KGJLMGPGJEI(__this,JGANIDFNOAF_00,pMVar4);
            return pHVar3;
          }
          goto LAB_031efb68;
        }
        if ((PONNKDFAMFM_o *)local_50.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031efb60 to 032efb63 has its CatchHandler @ 031efb74 */
          FUN_01bab8c8();
        }
        pPVar5 = ((PONNKDFAMFM_Fields *)((long)local_50.fields._current + 0x10))->JDHAHDALAOA;
        if (pPVar5 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031efb64 to 032efb67 has its CatchHandler @ 031efb70 */
          FUN_01bab8c8();
        }
        pMVar4 = (MethodInfo *)0x0;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar5->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
      } while (iVar2 < JLAFGLDIFOC);
      pHVar3 = HOOAAGABMBL__KGJLMGPGJEI(__this,(PONNKDFAMFM_o *)JGANIDFNOAF,pMVar4);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__)
      ;
                    /* try { // try from 031efadc to 032efae3 has its CatchHandler @ 031efb80 */
    }
                    /* try { // try from 031efb58 to 032efb5b has its CatchHandler @ 031efb7c */
                    /* try { // try from 031efb5c to 032efb5f has its CatchHandler @ 031efb78 */
    return pHVar3;
  }
LAB_031efb68:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031efb68 to 032efb97 has its CatchHandler @ 031efa28 */
  FUN_01bab8c8();
}

