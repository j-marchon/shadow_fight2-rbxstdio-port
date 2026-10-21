// GALHNMPIEHA$$IDLJMOJKHKF @ RVA 0x31661DC

void GALHNMPIEHA__IDLJMOJKHKF(GALHNMPIEHA_o *__this,BDMABHJEEGD_o *CNNEPEHMINA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_BDMABHJEEGD__o *pSVar8;
  EGMONPGHHDP_o *__this_01;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar9;
  ACHLOMELAJE_o *pAVar10;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar11;
  BPBGAAHBFKH_o *pBVar12;
  BDMABHJEEGD_array *pBVar13;
  PGICCMFLDPI_o *pPVar14;
  PGICCMFLDPI_o *pPVar15;
  int index;
  float __this_02;
  int32_t local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((DAT_045668bf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    FUN_01bab630(&StringLiteral_15924);
    FUN_01bab630(&StringLiteral_15925);
    FUN_01bab630(&StringLiteral_11105);
    FUN_01bab630(&StringLiteral_3316);
    FUN_01bab630(&StringLiteral_21840);
    FUN_01bab630(&StringLiteral_17510);
    FUN_01bab630(&StringLiteral_3317);
    FUN_01bab630(&StringLiteral_11095);
    DAT_045668bf = 1;
  }
  _local_38 = (Il2CppMethodPointer)0x0;
  pBVar12 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
  if (pBVar12 == (BPBGAAHBFKH_o *)0x0) {
                    /* try { // try from 032667e0 to 033667e3 has its CatchHandler @ 0326681c */
                    /* try { // try from 032667e4 to 033667e7 has its CatchHandler @ 03266818 */
                    /* try { // try from 032667e8 to 033667eb has its CatchHandler @ 03266814 */
                    /* try { // try from 032667ec to 033667ef has its CatchHandler @ 03266810 */
    return;
  }
  index = 0;
  while (__this_00 = (pBVar12->fields).IGPJEDLPAGI,
        __this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    if ((__this_00->fields).count <= index) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_11105,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__;
      pSVar8 = (__this->fields).MBGDIKJNDMJ;
      if (pSVar8 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
        pBVar13 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pBVar13 != (BDMABHJEEGD_array *)0x0) {
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pBVar13->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pBVar13->m_Items[(int)uVar1] = CNNEPEHMINA;
            thunk_FUN_01c20e04(pBVar13->m_Items + (int)uVar1,CNNEPEHMINA);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)CNNEPEHMINA
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
      break;
    }
    pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                        Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    if ((CNNEPEHMINA == (BDMABHJEEGD_o *)0x0) || (pIVar4 == (Il2CppObject *)0x0)) break;
    local_3c = (CNNEPEHMINA->fields).OHMDCKEDOGH;
    if (local_3c == *(int *)&pIVar4[1].monitor) {
      if ((pIVar4[2].monitor != (void *)0x0) ||
         ((CNNEPEHMINA->fields).IMNALGKNMNP == (PGICCMFLDPI_o *)0x0)) {
        pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
        pSVar6 = System_String__Format(StringLiteral_21840,pIVar5,(MethodInfo *)0x0);
        local_40 = *(undefined4 *)&pIVar4[3].klass;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_40);
        local_44 = (CNNEPEHMINA->fields).OOCPIHHNOBO;
        pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
        pSVar7 = System_String__Format(StringLiteral_17510,pIVar4,pIVar5,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__Log(StringLiteral_11095,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__;
      pSVar8 = (__this->fields)._LGNMHMIHFAF_k__BackingField;
      if (pSVar8 != (System_Collections_Generic_List_BDMABHJEEGD__o *)0x0) {
        pBVar13 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pBVar13 != (BDMABHJEEGD_array *)0x0) {
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pBVar13->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pBVar13->m_Items[(int)uVar1] = CNNEPEHMINA;
            thunk_FUN_01c20e04(pBVar13->m_Items + (int)uVar1,CNNEPEHMINA);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,
                       (Il2CppObject *)CNNEPEHMINA,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if (__this_01 != (EGMONPGHHDP_o *)0x0) {
            pJVar9 = EGMONPGHHDP__OKBKFJKEAAG(__this_01,(MethodInfo *)0x0);
            if (pJVar9 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
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
            pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar10 != (ACHLOMELAJE_o *)0x0) {
              pMVar11 = ACHLOMELAJE__HKIEGNBOFCD(pAVar10,StringLiteral_15924,0,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar6 = StringLiteral_3316;
              pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pMVar11 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                pSVar7 = (System_String_o *)0x0;
              }
              else {
                pSVar7 = (pMVar11->fields).JAICMIMBIOA;
              }
              iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar7,0,(MethodInfo *)0x0);
              _local_38 = (Il2CppMethodPointer)CONCAT44(iVar3 + 1,local_38);
              pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffffcc,(MethodInfo *)0x0);
              if (pAVar10 != (ACHLOMELAJE_o *)0x0) {
                ACHLOMELAJE__LMJFPPDAPBF(pAVar10,pSVar6,pSVar7,0,(MethodInfo *)0x0);
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
                pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar10 != (ACHLOMELAJE_o *)0x0) {
                  pMVar11 = ACHLOMELAJE__HKIEGNBOFCD
                                      (pAVar10,StringLiteral_15925,0,(MethodInfo *)0x0);
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar6 = StringLiteral_3317;
                  if (pMVar11 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                    pSVar7 = (System_String_o *)0x0;
                  }
                  else {
                    pSVar7 = (pMVar11->fields).JAICMIMBIOA;
                  }
                  pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar7,0,(MethodInfo *)0x0);
                  pPVar14 = (CNNEPEHMINA->fields).IMNALGKNMNP;
                  if ((pPVar14 != (PGICCMFLDPI_o *)0x0) &&
                     (pPVar15 = (CNNEPEHMINA->fields).LBKLNIPHGMM, pPVar15 != (PGICCMFLDPI_o *)0x0))
                  {
                    __this_02 = (float)((pPVar14->fields).GDKPGIBMFPA -
                                       (pPVar15->fields).GDKPGIBMFPA) / 60000.0 + (float)iVar3;
                    _local_38 = (Il2CppMethodPointer)CONCAT44(uStack_34,__this_02);
                    pSVar7 = System_Single__ToString
                                       (__this_02,(MethodInfo *)&stack0xffffffffffffffc8);
                    if (pAVar10 != (ACHLOMELAJE_o *)0x0) {
                      ACHLOMELAJE__LMJFPPDAPBF(pAVar10,pSVar6,pSVar7,0,(MethodInfo *)0x0);
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0326679c to 033667a3 has its CatchHandler @ 03266c04 */
                    /* try { // try from 032667a4 to 033667a7 has its CatchHandler @ 03266c00 */
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032667a8 to 033667ab has its CatchHandler @ 03266a90 */
                    /* try { // try from 032667ac to 033667b3 has its CatchHandler @ 03266a84 */
                        DAT_04565b7d = '\x01';
                      }
                    /* try { // try from 032667b4 to 033667b7 has its CatchHandler @ 032669d4 */
                    /* try { // try from 032667b8 to 033667bb has its CatchHandler @ 032669bc */
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032667bc to 033667bf has its CatchHandler @ 032669b4 */
                        thunk_FUN_01ba7564();
                    /* try { // try from 032667c0 to 033667c3 has its CatchHandler @ 032668e8 */
                      }
                    /* try { // try from 032667c4 to 033667c7 has its CatchHandler @ 032668e0 */
                    /* try { // try from 032667c8 to 033667cf has its CatchHandler @ 0326682c */
                      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (pAVar10 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 032667d0 to 033667d7 has its CatchHandler @ 03266824 */
                    /* try { // try from 032667d8 to 033667df has its CatchHandler @ 03263c08 */
                        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar10,false,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    pBVar12 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
    index = index + 1;
    if (pBVar12 == (BPBGAAHBFKH_o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032667f0 to 033667f7 has its CatchHandler @ 03263c08 */
  FUN_01bab8c8();
}

