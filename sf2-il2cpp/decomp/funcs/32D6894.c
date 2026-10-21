// AGCDKMOOJGI$$KACMDIEPEMF @ RVA 0x32D6894

void AGCDKMOOJGI__KACMDIEPEMF(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar5;
  AJNNHGGLGIF_o *pAVar6;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Object_array *pSVar7;
  AJNNHGGLGIF_array *pAVar8;
  AJNNHGGLGIF_o **ppAVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567594 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&StringLiteral_11009);
    DAT_04567594 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  pSVar5 = (__this->fields).LGIIIFNKHHO;
  if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 033d69c0 to 034d69c7 has its CatchHandler @ 033d6af0 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
                    /* try { // try from 033d69d4 to 034d69df has its CatchHandler @ 033d6aec */
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                             ), item = local_70.fields._current, bVar3) {
      if ((AJNNHGGLGIF_o *)local_70.fields._current == (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = AJNNHGGLGIF__BNNIDPDMOIL((AJNNHGGLGIF_o *)local_70.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
      if (bVar3) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033d6a24 to 034d6a47 has its CatchHandler @ 033d6ae4 */
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = item;
                    /* try { // try from 033d6a48 to 034d6ad3 has its CatchHandler @ 033d6878 */
          thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar4 = (__this_00->fields)._size;
      if (iVar4 < 1) {
        pSVar5 = (__this->fields).IDNEPDGAJCK;
        if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 033d6b48 to 034d6b4f has its CatchHandler @ 033d6b50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033d6b34 with catch @ 033d6b50
                       catch(type#2 @ 00000000) { ... } // from try @ 033d6b48 with catch @ 033d6b50
                        */
          if (0 < (pSVar5->fields)._size) {
            AGCDKMOOJGI__EKFNBHMNHFA(__this,method_00);
            AGCDKMOOJGI__KACMDIEPEMF(__this,method_01);
            return;
          }
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_11009,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar4 = LIIFLGALGNK__HLMBDJOGONJ(iVar4,(MethodInfo *)0x0);
        pAVar6 = (AJNNHGGLGIF_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_00,iVar4,
                            Method_System_Collections_Generic_List<AJNNHGGLGIF>_get_Item__);
        ppAVar9 = &(__this->fields).EOKBEEIMNAF;
        *ppAVar9 = pAVar6;
        thunk_FUN_01c20e04(ppAVar9,pAVar6);
        if ((__this->fields).DEMMDPCLLKF == false) {
          return;
        }
                    /* try { // try from 033d6ad4 to 034d6ad7 has its CatchHandler @ 033d6ae8 */
        pSVar5 = (__this->fields).LGIIIFNKHHO;
                    /* try { // try from 033d6ad8 to 034d6adf has its CatchHandler @ 033d6af4 */
        if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 033d6ae0 to 034d6b03 has its CatchHandler @ 033d6878 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d6a24 with catch @ 033d6ae4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d6ad4 with catch @ 033d6ae8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d69d4 with catch @ 033d6aec
                        */
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar5,iVar4,
                     Method_System_Collections_Generic_List<AJNNHGGLGIF>_RemoveAt__);
          lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d69c0 with catch @ 033d6af0
                        */
          pSVar5 = (__this->fields).IDNEPDGAJCK;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d6ad8 with catch @ 033d6af4
                        */
          if (pSVar5 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
            pAVar6 = (__this->fields).EOKBEEIMNAF;
            pAVar8 = (pSVar5->fields)._items;
                    /* try { // try from 033d6b04 to 034d6b07 has its CatchHandler @ 033d6b2c */
                    /* try { // try from 033d6b08 to 034d6b33 has its CatchHandler @ 033d6878 */
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pAVar8 != (AJNNHGGLGIF_array *)0x0) {
              uVar1 = (pSVar5->fields)._size;
              if ((uint)pAVar8->max_length <= uVar1) {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)pAVar6,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
                    /* catch() { ... } // from try @ 033d6b04 with catch @ 033d6b2c */
              (pSVar5->fields)._size = uVar1 + 1;
              pAVar8->m_Items[(int)uVar1] = pAVar6;
                    /* try { // try from 033d6b34 to 034d6b3b has its CatchHandler @ 033d6b50 */
              thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar1);
              return;
                    /* try { // try from 033d6b3c to 034d6b47 has its CatchHandler @ 033d6878 */
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

