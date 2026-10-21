// PJKHAJKEHEL$$PBBDMKKNFCA @ RVA 0x3041244

void PJKHAJKEHEL__PBBDMKKNFCA
               (PJKHAJKEHEL_o *__this,HOOAAGABMBL_o *HLDGJJFGDAP,HOOAAGABMBL_o *DANAPCCCHPI,
               IGFGDDANEPE_o *BMGHAHAFEHD,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *EIKFGOCCOIE;
  bool bVar2;
  System_String_o *format;
  long lVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  long lVar5;
  HEFOANCOHDC_array *pHVar6;
  System_Object_array *args;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 03141248 to 03241253 has its CatchHandler @ 031412e8 */
                    /* try { // try from 03141254 to 03241303 has its CatchHandler @ 031411c0 */
  if ((DAT_04565db3 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314122c with catch @ 031412e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03141248 with catch @ 031412e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031411f0 with catch @ 031412ec
                        */
    FUN_01bab630(&StringLiteral_4176);
    FUN_01bab630(&StringLiteral_306);
    DAT_04565db3 = 1;
  }
                    /* try { // try from 03141304 to 03241307 has its CatchHandler @ 0314131c */
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (DANAPCCCHPI == (HOOAAGABMBL_o *)0x0) {
    if (HLDGJJFGDAP == (HOOAAGABMBL_o *)0x0) goto LAB_031415c4;
                    /* catch() { ... } // from try @ 03141304 with catch @ 0314131c */
    DANAPCCCHPI = (HOOAAGABMBL_o *)
                  (*(HLDGJJFGDAP->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                            (HLDGJJFGDAP,(HLDGJJFGDAP->klass->vtable)._7_FAOBHLCDKJI.method);
                    /* try { // try from 03141328 to 03241333 has its CatchHandler @ 03141348 */
                    /* try { // try from 03141334 to 0324133f has its CatchHandler @ 031411c0 */
                    /* try { // try from 03141340 to 03241347 has its CatchHandler @ 03141348 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03141328 with catch @ 03141348
                       catch(type#2 @ 00000000) { ... } // from try @ 03141340 with catch @ 03141348
                        */
    format = System_String__Concat
                       (StringLiteral_4176,(HLDGJJFGDAP->fields)._COIPKAKHDFP_k__BackingField,
                        StringLiteral_306,(MethodInfo *)0x0);
    lVar3 = Method_System_Array_Empty<object>__;
    lVar5 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
    if (lVar5 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<object>__);
      lVar5 = *(long *)(lVar3 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    args = (System_Object_array *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarningFormat(format,args,(MethodInfo *)0x0);
    if (DANAPCCCHPI == (HOOAAGABMBL_o *)0x0) goto LAB_031415c4;
  }
  (DANAPCCCHPI->fields)._GCKGEAKMKCP_k__BackingField = true;
  if ((BMGHAHAFEHD != (IGFGDDANEPE_o *)0x0) &&
     (pSVar4 = (BMGHAHAFEHD->fields).PAPANCDPPIF,
     pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
      EIKFGOCCOIE = local_70.fields._current;
      lVar3 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
      if (!bVar2) break;
      if ((HEFOANCOHDC_o *)local_70.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((HEFOANCOHDC_Fields *)((long)local_70.fields._current + 0x10))->OCABLLPNEGL == 0) {
        bVar2 = System_String__op_Equality
                          ((DANAPCCCHPI->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_14870,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = MGNPHCAAEIO__DODJBGHCIHD((HEFOANCOHDC_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
          if (bVar2) {
            CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              (true,(MethodInfo *)0x0);
            (((HEFOANCOHDC_Fields *)((long)EIKFGOCCOIE + 0x10))->ICCBEPAFBFI).fields = CVar7;
            lVar3 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
            pSVar4 = (DANAPCCCHPI->fields)._BPHPMGBCNOO_k__BackingField;
            if (pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar6 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pHVar6 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar4->fields)._size;
            if (uVar1 < (uint)pHVar6->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pHVar6->m_Items[(int)uVar1] = (HEFOANCOHDC_o *)EIKFGOCCOIE;
              thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,EIKFGOCCOIE);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,EIKFGOCCOIE,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
      else {
        pSVar4 = (DANAPCCCHPI->fields)._BPHPMGBCNOO_k__BackingField;
        if (pSVar4 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar6 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pHVar6 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pHVar6->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pHVar6->m_Items[(int)uVar1] = (HEFOANCOHDC_o *)local_70.fields._current;
          thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,local_70.fields._current);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,local_70.fields._current,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
                    /* try { // try from 0314157c to 032415d3 has its CatchHandler @ 0314157c
                       catch() { ... } // from try @ 0314157c with catch @ 0314157c
                       catch() { ... } // from try @ 031415fc with catch @ 0314157c
                       catch() { ... } // from try @ 0314163c with catch @ 0314157c
                       catch() { ... } // from try @ 03141660 with catch @ 0314157c
                       catch() { ... } // from try @ 03141694 with catch @ 0314157c */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    if (HLDGJJFGDAP != (HOOAAGABMBL_o *)0x0) {
      (*(__this->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                (__this,(HLDGJJFGDAP->fields)._GMPAEDFIIHF_k__BackingField,DANAPCCCHPI,
                 (__this->klass->vtable)._9_CGNPHPDFKJG.method);
      return;
    }
  }
LAB_031415c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

