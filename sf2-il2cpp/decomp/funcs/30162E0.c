// ECENNHNBAME$$MIKAOEFOCHO @ RVA 0x30162E0

/* WARNING: Removing unreachable block (ram,0x031164a0) */
/* WARNING: Removing unreachable block (ram,0x03116624) */

bool ECENNHNBAME__MIKAOEFOCHO
               (ECENNHNBAME_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               int32_t PKDBOMAHGHC,bool MKFHNCKMNDJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o *pSVar7;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar8;
  undefined8 *puVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565bd7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04565bd7 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (MKFHNCKMNDJ) {
    if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
LAB_0311662c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_70.fields._index = local_a8.fields._index;
    local_70.fields._version = local_a8.fields._version;
    local_70.fields._list = local_a8.fields._list;
    local_70.fields._current = local_a8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      pIVar2 = local_70.fields._current;
      if (!bVar3) {
        puVar9 = &Method_System_Collections_Generic_List_Enumerator<string>_Dispose__;
        pSVar7 = &local_70;
        goto LAB_031165b0;
      }
      pEVar8 = (__this->fields).DMGLMCBIAGL;
      if (pEVar8 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (pEVar8->fields).GLFJDDHEMNO;
      if (pSVar6 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                          );
        pIVar1 = local_90.fields._current;
        if (!bVar3) break;
        if ((System_String_o *)local_90.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_String__op_Equality
                          (((System_String_o *)((long)local_90.fields._current + 0x48))->monitor,
                           (System_String_o *)pIVar2,(MethodInfo *)0x0);
      } while (((!bVar4) ||
               (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                    ((long)pIVar1 + 0x30),(MethodInfo *)0x0), PKDBOMAHGHC < iVar5))
              || (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                      &((System_String_o *)((long)pIVar1 + 0x30))->fields,
                                     (MethodInfo *)0x0), iVar5 < PKDBOMAHGHC));
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__)
      ;
    } while (bVar3);
    puVar9 = &Method_System_Collections_Generic_List_Enumerator<string>_Dispose__;
    pSVar7 = &local_70;
LAB_031165cc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (pSVar7,(MethodInfo_23F71B0 *)*puVar9);
                    /* try { // try from 031165d4 to 032165e3 has its CatchHandler @ 031165e4 */
    bVar3 = false;
  }
  else {
    pEVar8 = (__this->fields).DMGLMCBIAGL;
    if ((pEVar8 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
       (pSVar6 = (pEVar8->fields).GLFJDDHEMNO,
       pSVar6 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) goto LAB_0311662c;
                    /* try { // try from 031164f8 to 0321651f has its CatchHandler @ 0311655c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
                    /* try { // try from 03116534 to 03216543 has its CatchHandler @ 03116558 */
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
      pIVar2 = local_90.fields._current;
      if (!bVar3) {
        puVar9 = &Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__;
        pSVar7 = &local_90;
        goto LAB_031165cc;
      }
      if ((System_String_o *)local_90.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03116544 to 03216573 has its CatchHandler @ 031164a8 */
      if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
                         ((System_String_o *)((long)local_90.fields._current + 0x48))->monitor,
                         Method_System_Collections_Generic_List<string>_Contains__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03116534 with catch @ 03116558
                        */
    } while (((!bVar3) ||
             (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                  ((long)pIVar2 + 0x30),(MethodInfo *)0x0), PKDBOMAHGHC < iVar5
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031164f8 with catch @ 0311655c
                        */)) ||
            (iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                               ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                                 &((System_String_o *)((long)pIVar2 + 0x30))->fields,
                                (MethodInfo *)0x0), iVar5 < PKDBOMAHGHC
                    /* try { // try from 03116574 to 0321658b has its CatchHandler @ 031165e4 */));
    puVar9 = &Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__;
                    /* try { // try from 0311658c to 032165d3 has its CatchHandler @ 031164a8 */
    pSVar7 = &local_90;
LAB_031165b0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (pSVar7,(MethodInfo_23F71B0 *)*puVar9);
    bVar3 = true;
  }
                    /* catch() { ... } // from try @ 03116574 with catch @ 031165e4
                       catch() { ... } // from try @ 031165d4 with catch @ 031165e4 */
                    /* try { // try from 031165e8 to 032165eb has its CatchHandler @ 031165f4 */
                    /* try { // try from 031165ec to 032165f7 has its CatchHandler @ 031164a8 */
  return bVar3;
}

