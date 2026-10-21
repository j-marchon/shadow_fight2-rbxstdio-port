// MGNPHCAAEIO$$MDBHECKGNBO @ RVA 0x3400AAC

void MGNPHCAAEIO__MDBHECKGNBO
               (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *CIADJOAENAM,
               MethodInfo *method)

{
  int32_t PCNEDMAJMOJ;
  int32_t PLFJHJFNMNC;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_NFKLEEPNELA__o *CIADJOAENAM_00;
  System_Collections_Generic_List_string__o *NOCALFGICHO;
  Il2CppObject *pIVar4;
  NFKLEEPNELA_o *__this;
  FEPPOONJCGI_o *pFVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  NFKLEEPNELA_array *pNVar6;
  System_String_array *pSVar7;
  int index;
  Il2CppClass *LFOOJOJHDFM;
  System_String_o *pSVar8;
  ACHLOMELAJE_o *pAVar9;
  
  if ((DAT_04567fed & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NFKLEEPNELA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NFKLEEPNELA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NFKLEEPNELA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NFKLEEPNELA_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fed = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 03500bb0 to 03600bb7 has its CatchHandler @ 03500bf8 */
                    /* try { // try from 03500bb8 to 03600c0f has its CatchHandler @ 03500a8c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  CIADJOAENAM_00 =
       (System_Collections_Generic_List_NFKLEEPNELA__o *)
       thunk_FUN_01bda818(System_Collections_Generic_List<NFKLEEPNELA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)CIADJOAENAM_00,
             Method_System_Collections_Generic_List<NFKLEEPNELA>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03500bb0 with catch @ 03500bf8
                        */
  NOCALFGICHO = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)NOCALFGICHO,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (CIADJOAENAM != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
                    /* try { // try from 03500c10 to 03600c13 has its CatchHandler @ 03500c44 */
                    /* try { // try from 03500c14 to 03600c53 has its CatchHandler @ 03500a8c */
    if (0 < (CIADJOAENAM->fields)._size) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)CIADJOAENAM,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03500eb8;
        LFOOJOJHDFM = pIVar4[1].klass;
                    /* catch() { ... } // from try @ 03500c10 with catch @ 03500c44 */
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)CIADJOAENAM,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                           );
        if ((pIVar4 == (Il2CppObject *)0x0) || (LFOOJOJHDFM == (Il2CppClass *)0x0))
        goto LAB_03500eb8;
                    /* try { // try from 03500c54 to 03600c5b has its CatchHandler @ 03500c70 */
        PCNEDMAJMOJ = *(int32_t *)&pIVar4[1].monitor;
                    /* try { // try from 03500c5c to 03600c67 has its CatchHandler @ 03500a8c */
        pSVar8 = *(System_String_o **)&(LFOOJOJHDFM->_1).this_arg.bits;
        PLFJHJFNMNC = *(int32_t *)((long)&(LFOOJOJHDFM->_1).name + 4);
                    /* try { // try from 03500c68 to 03600c6f has its CatchHandler @ 03500c70 */
        __this = (NFKLEEPNELA_o *)thunk_FUN_01bda818(NFKLEEPNELA_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03500c54 with catch @ 03500c70
                       catch(type#2 @ 00000000) { ... } // from try @ 03500c68 with catch @ 03500c70
                        */
        NFKLEEPNELA___ctor(__this,pSVar8,PCNEDMAJMOJ,PLFJHJFNMNC,(MethodInfo *)0x0);
        if (*(int *)((long)&(LFOOJOJHDFM->_1).name + 4) <= PCNEDMAJMOJ) {
          if (((pAVar9 == (ACHLOMELAJE_o *)0x0) ||
              (pFVar5 = (pAVar9->fields).IMJJJJJMMHL, pFVar5 == (FEPPOONJCGI_o *)0x0)) ||
             (FEPPOONJCGI__IMHHMPMNGKB
                        (pFVar5,(KMJDCOABCCG_o *)LFOOJOJHDFM,false,true,(MethodInfo *)0x0),
             __this == (NFKLEEPNELA_o *)0x0)) goto LAB_03500eb8;
          (__this->fields).CJNHFNHJHPE = *(int32_t *)((long)&(LFOOJOJHDFM->_1).name + 4);
        }
        lVar2 = Method_System_Collections_Generic_List<NFKLEEPNELA>_Add__;
        if (CIADJOAENAM_00 == (System_Collections_Generic_List_NFKLEEPNELA__o *)0x0)
        goto LAB_03500eb8;
        pNVar6 = (CIADJOAENAM_00->fields)._items;
        (CIADJOAENAM_00->fields)._version = (CIADJOAENAM_00->fields)._version + 1;
        if (pNVar6 == (NFKLEEPNELA_array *)0x0) goto LAB_03500eb8;
        uVar1 = (CIADJOAENAM_00->fields)._size;
        if (uVar1 < (uint)pNVar6->max_length) {
          (CIADJOAENAM_00->fields)._size = uVar1 + 1;
          pNVar6->m_Items[(int)uVar1] = __this;
          thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,__this);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)CIADJOAENAM_00,
                     (Il2CppObject *)__this,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        if (NOCALFGICHO == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03500eb8;
        pSVar8 = (LFOOJOJHDFM->_1).byval_arg.data;
        pSVar7 = (NOCALFGICHO->fields)._items;
        (NOCALFGICHO->fields)._version = (NOCALFGICHO->fields)._version + 1;
        if (pSVar7 == (System_String_array *)0x0) goto LAB_03500eb8;
        uVar1 = (NOCALFGICHO->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (NOCALFGICHO->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = pSVar8;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)NOCALFGICHO,(Il2CppObject *)pSVar8
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (index < (CIADJOAENAM->fields)._size);
    }
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar3 = Core_Configs_Models_BuildSettingsExtension__GetPostAchievements
                        (pIVar4[9].monitor,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      bVar3 = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0);
      if ((bVar3) && (bVar3 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar3)) {
        IMAPABEJECG__MHKLAIFGNCN(CIADJOAENAM_00,true,(MethodInfo *)0x0);
        return;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
         (pFVar5 = (pAVar9->fields).IMJJJJJMMHL, pFVar5 != (FEPPOONJCGI_o *)0x0)) {
        FEPPOONJCGI__JLPKMGNPINP(pFVar5,NOCALFGICHO,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03500eb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

