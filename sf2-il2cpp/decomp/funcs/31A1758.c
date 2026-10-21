// LDHBHPILNMA$$EOEKFLFBGDF @ RVA 0x31A1758

/* WARNING: Removing unreachable block (ram,0x032a1b88) */
/* WARNING: Removing unreachable block (ram,0x032a1acc) */
/* WARNING: Removing unreachable block (ram,0x032a19a4) */
/* WARNING: Removing unreachable block (ram,0x032a1a2c) */

void LDHBHPILNMA__EOEKFLFBGDF
               (ECENNHNBAME_o *NLEBDPHNIDI,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_GBKCLIFGIFN__o *__this_00;
  System_Collections_Generic_List_GBKCLIFGIFN__o *__this_01;
  NKOIBKNPICN_o *__this_02;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_03;
  ECENNHNBAME_DNGAEDAAIJE_o *pEVar7;
  ECENNHNBAME_array *pEVar8;
  NKOIBKNPICN_o *JOIIFEDGBGK;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566ae2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBKCLIFGIFN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBKCLIFGIFN>_get_Count__);
    DAT_04566ae2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  if ((NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) &&
     (__this_00 = ECENNHNBAME__NAPDMHMCLML(NLEBDPHNIDI,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) goto LAB_032a1b90;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_d8,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
                 Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
      local_80.fields._index = local_d8.fields._index;
      local_80.fields._version = local_d8.fields._version;
      local_80.fields._list = local_d8.fields._list;
      local_80.fields._current = local_d8.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                               ), __this = local_80.fields._current, bVar3) {
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields,(MethodInfo *)0x0);
        if ((ECENNHNBAME_o *)__this == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (((ECENNHNBAME_Fields *)((long)__this + 0x10))->EAFPDFHFBOM).fields,
                           (MethodInfo *)0x0);
        if (iVar5 < iVar6) {
          __this_01 = ECENNHNBAME__NAPDMHMCLML((ECENNHNBAME_o *)__this,(MethodInfo *)0x0);
          if (__this_01 == (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (0 < (__this_01->fields)._size) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_d8,(System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<GBKCLIFGIFN>_GetEnumerator__);
            local_a0.fields._index = local_d8.fields._index;
            local_a0.fields._version = local_d8.fields._version;
            local_a0.fields._list = local_d8.fields._list;
                    /* try { // try from 032a1910 to 033a1a43 has its CatchHandler @ 032a1910
                       catch() { ... } // from try @ 032a1910 with catch @ 032a1910
                       catch() { ... } // from try @ 032a1b0c with catch @ 032a1910
                       catch() { ... } // from try @ 032a1ba0 with catch @ 032a1910
                       catch() { ... } // from try @ 032a1ba8 with catch @ 032a1910
                       catch() { ... } // from try @ 032a1c54 with catch @ 032a1910 */
            local_a0.fields._current = local_d8.fields._current;
            do {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_a0,
                                 Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_MoveNext__
                                );
              if (!bVar3) {
                bVar3 = false;
                goto LAB_032a1a08;
              }
              if ((ECENNHNBAME_o *)local_a0.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              JOIIFEDGBGK = *(NKOIBKNPICN_o **)
                             &(((ECENNHNBAME_Fields *)((long)local_a0.fields._current + 0x10))->
                              FECCBIOBKAF).fields.hiddenValue;
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_d8,(System_Collections_Generic_List_object__o *)__this_01,
                         Method_System_Collections_Generic_List<GBKCLIFGIFN>_GetEnumerator__);
              local_c0.fields._index = local_d8.fields._index;
              local_c0.fields._version = local_d8.fields._version;
              local_c0.fields._list = local_d8.fields._list;
              local_c0.fields._current = local_d8.fields._current;
              do {
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_c0,
                                   Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_MoveNext__
                                  );
                if (!bVar3) break;
                if ((ECENNHNBAME_o *)local_c0.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_02 = *(NKOIBKNPICN_o **)
                             &(((ECENNHNBAME_Fields *)((long)local_c0.fields._current + 0x10))->
                              FECCBIOBKAF).fields.hiddenValue;
                if (__this_02 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar4 = NKOIBKNPICN__CENALFGNMKJ(__this_02,JOIIFEDGBGK,(MethodInfo *)0x0);
              } while (!bVar4);
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_c0,
                         Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_Dispose__);
            } while (!bVar3);
            bVar3 = true;
LAB_032a1a08:
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<GBKCLIFGIFN>_Dispose__);
            lVar2 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
            if (bVar3) {
              pEVar7 = (NLEBDPHNIDI->fields).ANMFJDOLEKO;
              if (pEVar7 == (ECENNHNBAME_DNGAEDAAIJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032a1b98 to 033a1b9f has its CatchHandler @ 032a1bb8 */
                FUN_01bab8c8();
              }
              __this_03 = (pEVar7->fields).PCGACGNHJHF;
              if (__this_03 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 032a1a44 to 033a1a6b has its CatchHandler @ 032a1bc0 */
              pEVar8 = (__this_03->fields)._items;
              (__this_03->fields)._version = (__this_03->fields)._version + 1;
              if (pEVar8 == (ECENNHNBAME_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (__this_03->fields)._size;
              if (uVar1 < (uint)pEVar8->max_length) {
                (__this_03->fields)._size = uVar1 + 1;
                pEVar8->m_Items[(int)uVar1] = (ECENNHNBAME_o *)__this;
                thunk_FUN_01c20e04(pEVar8->m_Items + (int)uVar1,__this);
              }
              else {
                    /* try { // try from 032a1aa0 to 033a1acb has its CatchHandler @ 032a1bbc */
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,__this,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__)
      ;
    }
    return;
  }
LAB_032a1b90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

