// TypeDefIndex 2716
// Namespace: 
// public class BHOHBAAKHOJ : IEJKLPPLHMO
// Fields:

// ===== private void AILPAHLBOLD()  [RVA 0x33DBD2C]
// BHOHBAAKHOJ$$AILPAHLBOLD @ RVA 0x33DBD2C

void BHOHBAAKHOJ__AILPAHLBOLD(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  long lVar4;
  
  if ((DAT_04567e79 & 1) == 0) {
                    /* try { // try from 034dbd40 to 035dbd67 has its CatchHandler @ 034dbee4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04567e79 = 1;
  }
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 4) {
      lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                    /* try { // try from 034dbda0 to 035dbdc7 has its CatchHandler @ 034dbee0 */
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_034dbe64;
      Nekki_SF2_GUI_Shop_ShopScene__Refresh
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar4 + 0xb8),(MethodInfo *)0x0
                );
    }
    pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 034dbdd4 to 035dbddf has its CatchHandler @ 034dbed8 */
      if (iVar2 == 5) {
                    /* try { // try from 034dbde4 to 035dbdeb has its CatchHandler @ 034dbecc */
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 034dbdf0 to 035dbdff has its CatchHandler @ 034dbedc */
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                    /* try { // try from 034dbe00 to 035dbeaf has its CatchHandler @ 034dbc1c */
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_034dbe64;
        Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),(MethodInfo *)0x0
                  );
      }
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
        iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
        if ((iVar2 != 3) || (bVar1 = SceneManagerSF__HENGLKECBAC((MethodInfo *)0x0), !bVar1)) {
          return;
        }
        pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__ELJIPDIDPJD(pNVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034dbe64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string CHENJHPJCKE(string CNIELFLIKJB, string CDLPIMJKCHK)  [RVA 0x33DBE68]
// BHOHBAAKHOJ$$CHENJHPJCKE @ RVA 0x33DBE68

/* WARNING: Type propagation algorithm not settling */

System_String_o *
BHOHBAAKHOJ__CHENJHPJCKE
          (BHOHBAAKHOJ_o *__this,System_String_o *CNIELFLIKJB,System_String_o *CDLPIMJKCHK,
          MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t EBDDELGICGB;
  Item_o *__this_00;
  HOOAAGABMBL_o *__this_01;
  Roster_o *pAVar5;
  HOOAAGABMBL_o *pHVar6;
  GGHCLMEFIGO_o *pGVar7;
  IGFGDDANEPE_o *__this_02;
  HOOAAGABMBL_o *__this_03;
  RaidConfig_o *__this_04;
  RaidConfig_HJLEKMDIDPO_o *PCACCFOOGMK;
  RaidPaymentService_o *__this_05;
  PKKLIJLIKGF_o *__this_06;
  DEKKGJNMFEB_o *__this_07;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar12;
  PKKLIJLIKGF_array *pPVar13;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this_08;
  System_Collections_Generic_KeyValuePair_object__object__o __this_09;
  Il2CppObject local_78;
  int32_t local_64;
  
  if ((DAT_04567e7a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4881);
                    /* try { // try from 034dbeb0 to 035dbeb3 has its CatchHandler @ 034dbed4 */
                    /* try { // try from 034dbeb4 to 035dbeb7 has its CatchHandler @ 034dbed0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4882);
                    /* try { // try from 034dbeb8 to 035dbebb has its CatchHandler @ 034dbc1c */
                    /* try { // try from 034dbebc to 035dbebf has its CatchHandler @ 034dbec8 */
                    /* try { // try from 034dbec0 to 035dbefb has its CatchHandler @ 034dbc1c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4883);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbebc with catch @ 034dbec8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbde4 with catch @ 034dbecc
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4884);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbeb4 with catch @ 034dbed0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbeb0 with catch @ 034dbed4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbdd4 with catch @ 034dbed8
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4885);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbdf0 with catch @ 034dbedc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbda0 with catch @ 034dbee0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dbd40 with catch @ 034dbee4
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4886);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4887);
                    /* try { // try from 034dbefc to 035dbeff has its CatchHandler @ 034dbf14 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4888);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4889);
                    /* catch() { ... } // from try @ 034dbefc with catch @ 034dbf14 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4890);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4891);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4892);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
                    /* try { // try from 034dbf4c to 035dbf73 has its CatchHandler @ 034dbf88 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
                    /* try { // try from 034dbf74 to 035dbf7f has its CatchHandler @ 034dbc1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
                    /* try { // try from 034dbf80 to 035dbf87 has its CatchHandler @ 034dbf88 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034dbf4c with catch @ 034dbf88
                       catch(type#2 @ 00000000) { ... } // from try @ 034dbf80 with catch @ 034dbf88
                        */
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e7a = 1;
  }
  local_64 = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (Item_o *)0x0) {
    __this_01 = Item__CKKIPBAIEMN(__this_00,CNIELFLIKJB,(MethodInfo *)0x0);
    if (__this_01 == (HOOAAGABMBL_o *)0x0) {
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4881,
                 (MethodInfo *)0x0);
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4882,
                 (MethodInfo *)0x0);
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat(pSVar10,CNIELFLIKJB,(MethodInfo *)0x0);
      return pSVar10;
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
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar5 != (Roster_o *)0x0) {
      iVar4 = Roster__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
      pHVar6 = HOOAAGABMBL__CIBHICEHBJE(__this_01,iVar4,true,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (Roster_o *)0x0) &&
         (pGVar7 = (pAVar5->fields).OIDPLCLELEN, pGVar7 != (GGHCLMEFIGO_o *)0x0)) {
        __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar7,__this_01,(MethodInfo *)0x0);
        if (__this_02 == (IGFGDDANEPE_o *)0x0) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          in_x4 = (MethodInfo_2639E28 *)0x1;
          __this_02 = NLPJLHOEAOE__FIFBDNADAAL(__this_01,1,0,true,true,(MethodInfo *)0x0);
        }
        if (pHVar6 != (HOOAAGABMBL_o *)0x0) {
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4883,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar9,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4884,
                     (MethodInfo *)0x0);
          pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
          if (__this_02 == (IGFGDDANEPE_o *)0x0) goto LAB_034dc780;
          IGFGDDANEPE__CCOEOCPGJBG(__this_02,pSVar10,(MethodInfo *)0x0);
          IGFGDDANEPE__DJJHOOKLHHL
                    (__this_02,(pHVar6->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
          IGFGDDANEPE__GIIJHCLHFDK(__this_02,iVar4,(MethodInfo *)0x0);
          __this_03 = (__this_02->fields).PCBECBEFJOI;
          if (__this_03 == (HOOAAGABMBL_o *)0x0) goto LAB_034dc780;
          HOOAAGABMBL__GEBIJFANLGH(__this_03,true,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_04 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (__this_04 == (RaidConfig_o *)0x0) goto LAB_034dc780;
          PCACCFOOGMK = RaidConfig__FPPDGOEOJCH(__this_04,CNIELFLIKJB,(MethodInfo *)0x0);
          if (PCACCFOOGMK != (RaidConfig_HJLEKMDIDPO_o *)0x0) {
            pSVar11 = (PCACCFOOGMK->fields).BGHFADDGPAD;
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4885,
                       (MethodInfo *)0x0);
            pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar9,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4886,
                       (MethodInfo *)0x0);
            pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar11,pSVar10,(MethodInfo *)0x0);
            if (bVar3) {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_05 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
              if (__this_05 == (RaidPaymentService_o *)0x0) goto LAB_034dc780;
              uVar1 = (pHVar6->fields)._HCHGENFJLHA_k__BackingField;
              in_x4 = (MethodInfo_2639E28 *)(ulong)uVar1;
              RaidPaymentService__OLCPANFJOAA
                        (__this_05,__this_02,PCACCFOOGMK,pHVar6,uVar1,iVar4,(MethodInfo *)0x0);
            }
          }
        }
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CDLPIMJKCHK,(MethodInfo *)0x0);
                    /* try { // try from 034dc354 to 035dc3eb has its CatchHandler @ 034dc354
                       catch() { ... } // from try @ 034dc354 with catch @ 034dc354
                       catch() { ... } // from try @ 034dc408 with catch @ 034dc354
                       catch() { ... } // from try @ 034dc478 with catch @ 034dc354
                       catch() { ... } // from try @ 034dc4b8 with catch @ 034dc354 */
        if (!bVar3) {
          __this_06 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
          PKKLIJLIKGF___ctor(__this_06,CDLPIMJKCHK,(MethodInfo *)0x0);
          if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_07 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
          if ((__this_07 == (DEKKGJNMFEB_o *)0x0) ||
             (local_64 = DEKKGJNMFEB__BMCDCFJHKCE(__this_07,iVar4,(MethodInfo *)0x0),
             __this_06 == (PKKLIJLIKGF_o *)0x0)) goto LAB_034dc780;
          __this_08 = (__this_06->fields).NAPHDEGHDNP;
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4887,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034dc3ec to 035dc3f3 has its CatchHandler @ 034dc45c */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar9,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4888,
                     (MethodInfo *)0x0);
                    /* try { // try from 034dc3fc to 035dc407 has its CatchHandler @ 034dc458 */
                    /* try { // try from 034dc408 to 035dc473 has its CatchHandler @ 034dc354 */
          pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
          pSVar11 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          local_78.klass = (Il2CppClass *)0x0;
          local_78.monitor = (System_String_o *)0x0;
          __this_09.fields.value = (Il2CppObject *)pSVar10;
          __this_09.fields.key = &local_78;
          System_Collections_Generic_KeyValuePair<object,_object>___ctor
                    (__this_09,(Il2CppObject *)pSVar11,
                     Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
          lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
          if (__this_08 == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0)
          goto LAB_034dc780;
          item.fields.value = local_78.monitor;
          item.fields.key = (Il2CppObject *)local_78.klass;
          pSVar12 = (__this_08->fields)._items;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dc3fc with catch @ 034dc458
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034dc3ec with catch @ 034dc45c
                        */
          (__this_08->fields)._version = (__this_08->fields)._version + 1;
          if (pSVar12 == (System_Collections_Generic_KeyValuePair_string__string__array *)0x0)
          goto LAB_034dc780;
          uVar1 = (__this_08->fields)._size;
                    /* try { // try from 034dc474 to 035dc477 has its CatchHandler @ 034dc4a0 */
          if (uVar1 < (uint)pSVar12->max_length) {
                    /* try { // try from 034dc478 to 035dc4af has its CatchHandler @ 034dc354 */
            (__this_08->fields)._size = uVar1 + 1;
            pSVar12->m_Items[(int)uVar1].fields.key = (System_String_o *)local_78.klass;
            pSVar12->m_Items[(int)uVar1].fields.value = local_78.monitor;
            thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar1,0);
          }
          else {
                    /* catch() { ... } // from try @ 034dc474 with catch @ 034dc4a0 */
            System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)__this_08,item,
                       *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
                    /* try { // try from 034dc4b0 to 035dc4b7 has its CatchHandler @ 034dc4cc */
                    /* try { // try from 034dc4b8 to 035dc4c3 has its CatchHandler @ 034dc354 */
          AEFIPJLKAFI = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
                        thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
                    /* try { // try from 034dc4c4 to 035dc4cb has its CatchHandler @ 034dc4cc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034dc4b0 with catch @ 034dc4cc
                       catch(type#2 @ 00000000) { ... } // from try @ 034dc4c4 with catch @ 034dc4cc
                        */
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)AEFIPJLKAFI,
                     Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
          if (AEFIPJLKAFI == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)
          goto LAB_034dc780;
          pPVar13 = (AEFIPJLKAFI->fields)._items;
          (AEFIPJLKAFI->fields)._version = (AEFIPJLKAFI->fields)._version + 1;
          if (pPVar13 == (PKKLIJLIKGF_array *)0x0) goto LAB_034dc780;
          uVar1 = (AEFIPJLKAFI->fields)._size;
          if (uVar1 < (uint)pPVar13->max_length) {
            (AEFIPJLKAFI->fields)._size = uVar1 + 1;
            pPVar13->m_Items[(int)uVar1] = __this_06;
            thunk_FUN_01c20e04(pPVar13->m_Items + (int)uVar1,__this_06);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)AEFIPJLKAFI,
                       (Il2CppObject *)__this_06,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if ((__this_02 == (IGFGDDANEPE_o *)0x0) ||
             (pHVar6 = IGFGDDANEPE__JPNNODJPOCL(__this_02,false,(MethodInfo *)0x0),
             pHVar6 == (HOOAAGABMBL_o *)0x0)) goto LAB_034dc780;
          iVar4 = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar5 == (Roster_o *)0x0) goto LAB_034dc780;
          EBDDELGICGB = Roster__EOEAKGGDBFH(pAVar5,(MethodInfo *)0x0);
          IGFGDDANEPE__JJPJJDHOFLE(__this_02,AEFIPJLKAFI,iVar4,EBDDELGICGB,(MethodInfo *)0x0);
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar5 != (Roster_o *)0x0) &&
           (pGVar7 = (pAVar5->fields).OIDPLCLELEN, pGVar7 != (GGHCLMEFIGO_o *)0x0)) {
          GGHCLMEFIGO__BOEFGIBCIIL(pGVar7,__this_01,true,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar5 != (Roster_o *)0x0) {
            Roster__POEMPPEIGOM(pAVar5,(MethodInfo *)0x0);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4889,
                       (MethodInfo *)0x0);
            pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar9,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4890,
                       (MethodInfo *)0x0);
            pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
            bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(CDLPIMJKCHK,(MethodInfo *)0x0);
            pSVar10 = StringLiteral_1/*""*/;
            if (!bVar3) {
              pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar8,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4891,
                         (MethodInfo *)0x0);
              pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar9,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4892,
                         (MethodInfo *)0x0);
              pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
              pSVar10 = System_String__Concat(pSVar10,CDLPIMJKCHK,(MethodInfo *)0x0);
            }
            pSVar10 = System_String__Concat(pSVar11,CNIELFLIKJB,pSVar10,(MethodInfo *)0x0);
            return pSVar10;
          }
        }
      }
    }
  }
LAB_034dc780:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string PGFMFNKGIKF()  [RVA 0x33DC784]
// BHOHBAAKHOJ$$PGFMFNKGIKF @ RVA 0x33DC784

System_String_o * BHOHBAAKHOJ__PGFMFNKGIKF(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  GGHCLMEFIGO_o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  Il2CppObject *__this_03;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  Il2CppClass *CDLPIMJKCHK;
  MethodInfo *in_x3;
  Roster_o *pAVar4;
  Il2CppClass *CNIELFLIKJB;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567e7b & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567e7b = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar4 != (Roster_o *)0x0) &&
      (__this_01 = (pAVar4->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_02 = GGHCLMEFIGO__PDBBGCIHBFL(__this_01,(MethodInfo *)0x0),
     __this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      pIVar1 = local_70.fields._current;
      if (!bVar2) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CNIELFLIKJB = local_70.fields._current[1].klass;
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)local_70.fields._current[0xb].klass
                         ,Method_DJNBJHPDKDP_OBECCOPBADO<PerkInfoItem>__);
      __this_03 = (Il2CppObject *)(ulong)bVar2;
      if (bVar2) {
        CDLPIMJKCHK = (Il2CppClass *)0x0;
      }
      else {
        if (pIVar1[0xb].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pIVar1[0xb].klass,0,
                               Method_System_Collections_Generic_List<PerkInfoItem>_get_Item__);
        if (__this_03 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CDLPIMJKCHK = __this_03[4].klass;
      }
      if (__this == (BHOHBAAKHOJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar3 = BHOHBAAKHOJ__CHENJHPJCKE
                         ((BHOHBAAKHOJ_o *)__this_03,(System_String_o *)CNIELFLIKJB,
                          (System_String_o *)CDLPIMJKCHK,in_x3);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string KFKCDKMJCPI()  [RVA 0x33DCA38]
// BHOHBAAKHOJ$$KFKCDKMJCPI @ RVA 0x33DCA38

System_String_o * BHOHBAAKHOJ__KFKCDKMJCPI(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Item_o *pDVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567e7c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4893);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4894);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567e7c = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar3 != (Item_o *)0x0) &&
     (__this_00 = (pDVar3->fields).DIGBEFKAPHM,
     __this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4893,
                   (MethodInfo *)0x0);
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4894,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
        return pSVar2;
      }
      if (local_58.fields._current == (Il2CppObject *)0x0) break;
      *(undefined1 *)((long)&local_58.fields._current[0xd].klass + 1) = 1;
      local_58.fields._current[6].klass = (Il2CppClass *)string_TypeInfo->static_fields->Empty;
      thunk_FUN_01c20e04();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x33DCCA0]
// BHOHBAAKHOJ$$IGMDDJFPIJL @ RVA 0x33DCCA0

System_String_o * BHOHBAAKHOJ__IGMDDJFPIJL(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04567e7d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy320___field_2);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4895);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567e7d = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4895,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x140);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy320___field_2,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x33DCD50]
// BHOHBAAKHOJ$$ECKDICODLME @ RVA 0x33DCD50

bool BHOHBAAKHOJ__ECKDICODLME(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x33DCD58]
// BHOHBAAKHOJ$$KCBILPIAPHN @ RVA 0x33DCD58

int32_t BHOHBAAKHOJ__KCBILPIAPHN(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x33DCD60]
// BHOHBAAKHOJ$$AJJLBBCJAAL @ RVA 0x33DCD60

/* WARNING: Type propagation algorithm not settling */

System_String_o *
BHOHBAAKHOJ__AJJLBBCJAAL(BHOHBAAKHOJ_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Nullable_bool__o SVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  RaidConfig_o *pJVar7;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *pGVar8;
  IGFGDDANEPE_o *item;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  NLPJLHOEAOE_c *pNVar9;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  long lVar10;
  RaidConfig_NOPCEDPNNKO_o *pJVar11;
  Roster_o *pAVar12;
  System_RuntimeFieldHandle_Fields *pSVar13;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar14;
  UnityEngine_Object_o *pUVar15;
  System_String_o *pSVar16;
  Item_o *__this_02;
  undefined1 auVar17 [16];
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  auVar17._8_8_ = OPAEPDIIOEB;
  auVar17._0_8_ = __this;
  if ((DAT_04567e7e & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4896);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4897);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4898);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4899);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4900);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4901);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4902);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4903);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4904);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4905);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4906);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4907);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4908);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4909);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4910);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4911);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4912);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4913);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4914);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4915);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4916);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4917);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4918);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4919);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4920);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4921);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4922);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4923);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4924);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4925);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4926);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4927);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4928);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4929);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    auVar17 = FUN_01bab630(&string_TypeInfo);
    DAT_04567e7e = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_034ddc4c;
  if ((int)OPAEPDIIOEB->max_length < 1) {
LAB_034dd074:
    pSVar6 = BHOHBAAKHOJ__IGMDDJFPIJL(auVar17._0_8_,auVar17._8_8_);
    return pSVar6;
  }
  pSVar16 = OPAEPDIIOEB->m_Items[0];
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4896,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4897,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
  iVar1 = (int)OPAEPDIIOEB->max_length;
  if (bVar2) {
    auVar17._8_8_ = extraout_x1;
    auVar17._0_8_ = 1;
    if (iVar1 < 2) goto LAB_034dd074;
    if (iVar1 == 2) {
      pSVar6 = (System_String_o *)0x0;
    }
    else {
      pSVar6 = OPAEPDIIOEB->m_Items[2];
    }
    pSVar6 = BHOHBAAKHOJ__CHENJHPJCKE((BHOHBAAKHOJ_o *)0x1,OPAEPDIIOEB->m_Items[1],pSVar6,in_x3);
    method_01 = extraout_x1_00;
    goto LAB_034dd230;
  }
  if (1 < iVar1) {
    pSVar16 = OPAEPDIIOEB->m_Items[0];
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4898,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4899,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
    if (bVar2) {
      if ((uint)OPAEPDIIOEB->max_length < 2) goto LAB_034ddc54;
      pSVar16 = OPAEPDIIOEB->m_Items[1];
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4900,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4901,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar6 = BHOHBAAKHOJ__KFKCDKMJCPI((BHOHBAAKHOJ_o *)0x1,method_00);
        lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620(lVar10);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        pUVar15 = (UnityEngine_Object_o *)**(undefined8 **)(lVar10 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          return pSVar6;
        }
        lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                     (MethodInfo *)0x0);
          return pSVar6;
        }
        goto LAB_034ddc4c;
      }
      if ((uint)OPAEPDIIOEB->max_length < 2) goto LAB_034ddc54;
      pSVar16 = OPAEPDIIOEB->m_Items[1];
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4902,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4903,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar6 = BHOHBAAKHOJ__EHGBFKKDEIE((BHOHBAAKHOJ_o *)0x1,method_02);
        lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620(lVar10);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                     (MethodInfo *)0x0);
          return pSVar6;
        }
        goto LAB_034ddc4c;
      }
    }
  }
  if ((int)OPAEPDIIOEB->max_length < 2) {
LAB_034dd47c:
    if (1 < (int)OPAEPDIIOEB->max_length) {
      pSVar16 = OPAEPDIIOEB->m_Items[0];
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4912,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4913,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
      if (bVar2) {
        if ((uint)OPAEPDIIOEB->max_length < 2) {
LAB_034ddc54:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar16 = OPAEPDIIOEB->m_Items[1];
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4914,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4915,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar6 = BHOHBAAKHOJ__PGFMFNKGIKF(__this,method_03);
          method_01 = extraout_x1_01;
LAB_034dd230:
          BHOHBAAKHOJ__AILPAHLBOLD((BHOHBAAKHOJ_o *)pSVar6,method_01);
          return pSVar6;
        }
      }
    }
    if (1 < (int)OPAEPDIIOEB->max_length) {
      pSVar16 = OPAEPDIIOEB->m_Items[0];
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4916,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4917,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
      if (bVar2) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4918,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4919,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if (__this_02 == (Item_o *)0x0) goto LAB_034ddc4c;
        IKKAMAMLIKA = Item__CKKIPBAIEMN(__this_02,pSVar6,(MethodInfo *)0x0);
        if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4920,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar13 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4921;
        }
        else {
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
          pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar12 == (Roster_o *)0x0) ||
             (pGVar8 = (pAVar12->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
          goto LAB_034ddc4c;
          item = GGHCLMEFIGO__JNFIBDBHNOA(pGVar8,IKKAMAMLIKA,(MethodInfo *)0x0);
          SVar3 = AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
          if ((((ushort)SVar3.fields & 0xff00) == 0) || (((ushort)SVar3.fields & 0xff) == 0)) {
            if (item == (IGFGDDANEPE_o *)0x0) {
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4928,
                         (MethodInfo *)0x0);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              pSVar13 = (System_RuntimeFieldHandle_Fields *)
                        &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4929;
            }
            else {
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
              pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (((pAVar12 == (Roster_o *)0x0) ||
                  (pGVar8 = (pAVar12->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0)) ||
                 (__this_01 = (pGVar8->fields).DPOPJKJLDEE,
                 __this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
LAB_034ddc4c:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item
                         ,Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pNVar9 = NLPJLHOEAOE_TypeInfo;
              pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar12 == (Roster_o *)0x0) goto LAB_034ddc4c;
              (pAVar12->fields).MMOJIJHAJJL = false;
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
                pNVar9 = NLPJLHOEAOE_TypeInfo;
              }
              if ((pNVar9->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pNVar9 = NLPJLHOEAOE_TypeInfo;
              }
              pAVar12 = pNVar9->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar12 == (Roster_o *)0x0) goto LAB_034ddc4c;
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar12,false,(MethodInfo *)0x0);
              if (DAT_04565b84 == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                DAT_04565b84 = '\x01';
              }
              pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                        _JPDNDPEAJAL_k__BackingField;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                if (DAT_04565b84 == '\0') {
                  FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                  DAT_04565b84 = '\x01';
                }
                pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                          _JPDNDPEAJAL_k__BackingField;
                if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_034ddc4c;
                Nekki_SF2_GUI_Menu_MainMenu__UpdateEnergyView(pNVar14,(MethodInfo *)0x0);
              }
              lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              pUVar15 = (UnityEngine_Object_o *)**(undefined8 **)(lVar10 + 0xb8);
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar2) {
                lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01b81620();
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01b81620();
                }
                if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) ==
                    (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_034ddc4c;
                Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh
                          ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                           (MethodInfo *)0x0);
              }
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4926,
                         (MethodInfo *)0x0);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              pSVar13 = (System_RuntimeFieldHandle_Fields *)
                        &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4927;
            }
          }
          else if (item == (IGFGDDANEPE_o *)0x0) {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            NLPJLHOEAOE__FIFBDNADAAL(IKKAMAMLIKA,1,0,false,false,(MethodInfo *)0x0);
            lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01b81620();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01b81620();
            }
            pUVar15 = (UnityEngine_Object_o *)**(undefined8 **)(lVar10 + 0xb8);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              (pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar2) {
              lVar10 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01b81620();
              }
              if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8) ==
                  (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) goto LAB_034ddc4c;
              Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh
                        ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar10 + 0xb8),
                         (MethodInfo *)0x0);
            }
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4922,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar13 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4923;
          }
          else {
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4924,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar13 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4925;
          }
        }
        goto LAB_034ddc0c;
      }
    }
    pSVar6 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  else {
    pSVar16 = OPAEPDIIOEB->m_Items[0];
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4904,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4905,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_034dd47c;
    if ((uint)OPAEPDIIOEB->max_length < 2) goto LAB_034ddc54;
    pSVar16 = OPAEPDIIOEB->m_Items[1];
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4906,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4907,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar16,pSVar6,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_034dd47c;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar7 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar7 == (RaidConfig_o *)0x0) ||
       (pJVar11 = (pJVar7->fields).OFMMMBIIDAE, pJVar11 == (RaidConfig_NOPCEDPNNKO_o *)0x0)) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4908,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar13 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4909;
    }
    else {
      __this_00 = (pJVar11->fields).NPGALOBDIHL;
      if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0)
      goto LAB_034ddc4c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_58,
                                Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                               ), bVar2) {
        if (local_58.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(undefined1 *)((long)&local_58.fields._current[4].monitor + 2) = 1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_58,
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4910,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar13 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4911;
    }
LAB_034ddc0c:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar13->value,
               (MethodInfo *)0x0);
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  }
  return pSVar6;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x33DDF50]
// BHOHBAAKHOJ$$DLKKPFHKIPB @ RVA 0x33DDF50

System_Collections_Generic_IEnumerable_string__o *
BHOHBAAKHOJ__DLKKPFHKIPB(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567e7f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4930);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4931);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567e7f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4930,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4931,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string EHGBFKKDEIE()  [RVA 0x33DDCD0]
// BHOHBAAKHOJ$$EHGBFKKDEIE @ RVA 0x33DDCD0

System_String_o * BHOHBAAKHOJ__EHGBFKKDEIE(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  RaidConfig_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  System_RuntimeFieldHandle_o fldHandle;
  RaidConfig_NOPCEDPNNKO_o *pJVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567e80 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4932);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4933);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4934);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4935);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567e80 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar2 == (RaidConfig_o *)0x0) ||
     (pJVar4 = (pJVar2->fields).OFMMMBIIDAE, pJVar4 == (RaidConfig_NOPCEDPNNKO_o *)0x0)) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4932,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4933.value;
  }
  else {
    __this_00 = (pJVar4->fields).NPGALOBDIHL;
    if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_MoveNext__
                             ), bVar1) {
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined1 *)((long)&local_38.fields._current[4].monitor + 1) = 0;
      local_38.fields._current[0xc].klass = (Il2CppClass *)string_TypeInfo->static_fields->Empty;
      thunk_FUN_01c20e04();
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<RaidConfig_ENBCJNLAHAC>_Dispose__)
    ;
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4934,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    fldHandle.fields.value =
         (System_RuntimeFieldHandle_Fields)
         (System_RuntimeFieldHandle_Fields)
         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4935.value;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,fldHandle,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar3;
}


// ===== public void .ctor()  [RVA 0x33DE0C0]
// BHOHBAAKHOJ$$.ctor @ RVA 0x33DE0C0

void BHOHBAAKHOJ___ctor(BHOHBAAKHOJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

