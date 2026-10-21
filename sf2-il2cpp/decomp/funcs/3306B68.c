// Nekki.SF2.Core.Quests.QuestsManager$$LFENGGKOJDO @ RVA 0x3306B68

void Nekki_SF2_Core_Quests_QuestsManager__LFENGGKOJDO
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar4;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_00;
  NDPMLPGANCI_o *__this_01;
  FPPKHNNABAD_array *pFVar5;
  
  if ((DAT_04567765 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3629);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    DAT_04567765 = 1;
  }
  if (NDBPOFMECGL == (FPPKHNNABAD_o *)0x0) {
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3628,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3629,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat
                     (pSVar4,(NDBPOFMECGL->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
  __this_00 = (__this->fields).GOAJEJNPDFA;
  if (__this_00 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    pFVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pFVar5 != (FPPKHNNABAD_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pFVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pFVar5->m_Items[(int)uVar1] = NDBPOFMECGL;
        thunk_FUN_01c20e04(pFVar5->m_Items + (int)uVar1,NDBPOFMECGL);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)NDBPOFMECGL,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
        iVar3 = NDPMLPGANCI__FFIOCEOHPEM(__this_01,(MethodInfo *)0x0);
        if ((__this->fields).HFOJKJFILDB != false) {
          return;
        }
        if (iVar3 == 6) {
          return;
        }
        if ((__this->fields)._isRunActions != false) {
          return;
        }
        (__this->fields).HFOJKJFILDB = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

