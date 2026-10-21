// GGLKHCAIGDI$$KALLJLOAGJN @ RVA 0x33A6128

System_Collections_Generic_List_PKKLIJLIKGF__o *
GGLKHCAIGDI__KALLJLOAGJN
          (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  MethodInfo *EGBBHPHAHAC;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  MethodInfo *EGBBHPHAHAC_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  MethodInfo *in_x4;
  HEFOANCOHDC_array *pHVar7;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  pMVar6 = (MethodInfo *)(ulong)(uint)DPCEFBCDHPA;
  if ((DAT_04567cf0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_LIIFLGALGNK_NIAJINLEHOO<PKKLIJLIKGF>__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567cf0 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  EGBBHPHAHAC = (MethodInfo *)
                thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  if (((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) &&
      ((NKCMBEFHFII->fields).PCBECBEFJOI != (HOOAAGABMBL_o *)0x0)) &&
     (iVar5 = GGLKHCAIGDI__ICMIMIOJPMK(__this,NKCMBEFHFII,pMVar6), 0 < iVar5)) {
    pMVar6 = (MethodInfo *)0x0;
    __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,false,in_x4);
    CNDPGGAFHEA = (NKCMBEFHFII->fields).PCBECBEFJOI;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    EGBBHPHAHAC_00 = (MethodInfo *)NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    LIIFLGALGNK__NIAJINLEHOO<object>
              ((System_Collections_Generic_List_T__o *)__this_00,
               Method_LIIFLGALGNK_NIAJINLEHOO<PKKLIJLIKGF>__);
    if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                            );
          item = local_60.fields._current;
          if (!bVar3) goto LAB_034a639c;
          bVar3 = GGLKHCAIGDI__EJJDCEMBFPK
                            ((GGLKHCAIGDI_o *)(ulong)bVar3,(PKKLIJLIKGF_o *)local_60.fields._current
                             ,method_00);
          if ((HEFOANCOHDC_o *)item == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = EGBBHPHAHAC;
          bVar4 = GGLKHCAIGDI__JMGPKBNPLBI
                            ((GGLKHCAIGDI_o *)(ulong)bVar3,
                             *(System_String_o **)
                              &(((HEFOANCOHDC_Fields *)((long)item + 0x10))->ICCBEPAFBFI).fields,
                             (System_Collections_Generic_List_PKKLIJLIKGF__o *)EGBBHPHAHAC,pMVar6);
        } while (bVar4);
        method_00 = EGBBHPHAHAC_00;
        bVar4 = GGLKHCAIGDI__JMGPKBNPLBI
                          ((GGLKHCAIGDI_o *)0x0,
                           *(System_String_o **)
                            &(((HEFOANCOHDC_Fields *)((long)item + 0x10))->ICCBEPAFBFI).fields,
                           (System_Collections_Generic_List_HEFOANCOHDC__o *)EGBBHPHAHAC_00,pMVar6);
        lVar2 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
      } while ((bVar3 & (bVar4 ^ 0xffU)) == 0);
      if (EGBBHPHAHAC == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar7 = ((System_Collections_Generic_List_HEFOANCOHDC__Fields *)&EGBBHPHAHAC->invoker_method)
               ->_items;
      *(int32_t *)((long)&EGBBHPHAHAC->name + 4) = *(int32_t *)((long)&EGBBHPHAHAC->name + 4) + 1;
      if (pHVar7 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = *(uint *)&EGBBHPHAHAC->name;
      if (uVar1 < (uint)pHVar7->max_length) {
        *(uint *)&EGBBHPHAHAC->name = uVar1 + 1;
        pHVar7->m_Items[(int)uVar1] = (HEFOANCOHDC_o *)item;
        thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar1,item);
      }
      else {
        method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)EGBBHPHAHAC,item,
                   (MethodInfo_26E4DAC *)method_00);
      }
    } while (*(int *)&EGBBHPHAHAC->name < iVar5);
LAB_034a639c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  }
  return (System_Collections_Generic_List_PKKLIJLIKGF__o *)EGBBHPHAHAC;
}

