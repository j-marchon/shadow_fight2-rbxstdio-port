// TypeDefIndex 1932
// Namespace: 
// public class NLAJHFAOEDB : QuestAction
// Fields:
//   private List<string> DAKLKLLKLEA; // 0x68
//   private string GMILEGDKKPL; // 0x70
//   private string FGMNPHMOMFI; // 0x78
//   private string BNDDPDNJAGJ; // 0x80

// ===== protected override string OFPHPMGMCAL()  [RVA 0x326C560]
// NLAJHFAOEDB$$OFPHPMGMCAL @ RVA 0x326C560

System_String_o * NLAJHFAOEDB__OFPHPMGMCAL(NLAJHFAOEDB_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045671f0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4321/*"Checking Pack {0}"*/);
    DAT_045671f0 = 1;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_4321/*"Checking Pack {0}"*/,(Il2CppObject *)(__this->fields).GMILEGDKKPL,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x326C5AC]
// NLAJHFAOEDB$$.ctor @ RVA 0x326C5AC

void NLAJHFAOEDB___ctor(NLAJHFAOEDB_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x326C5B4]
// NLAJHFAOEDB$$MAHFCKJGBPP @ RVA 0x326C5B4

void NLAJHFAOEDB__MAHFCKJGBPP(NLAJHFAOEDB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  AAPGCAPGBLG_o *__this_00;
  HOOAAGABMBL_o *pHVar6;
  IGFGDDANEPE_o *pIVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  System_String_o *str1;
  System_String_o *str2;
  MethodInfo *pMVar9;
  Roster_o *pAVar10;
  Item_o *__this_01;
  int index;
  GGHCLMEFIGO_o *__this_02;
  
  if ((DAT_045671f1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_18);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3650);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3651);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3652);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3653);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3654);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3655);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3656);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3657);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3660);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045671f1 = 1;
  }
  pMVar9 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).GMILEGDKKPL,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3650,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3651,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0336c744 to 0346c7d3 has its CatchHandler @ 0336c744
                       catch() { ... } // from try @ 0336c744 with catch @ 0336c744
                       catch() { ... } // from try @ 0336c7dc with catch @ 0336c744
                       catch() { ... } // from try @ 0336c818 with catch @ 0336c744
                       catch() { ... } // from try @ 0336c83c with catch @ 0336c744
                       catch() { ... } // from try @ 0336c87c with catch @ 0336c744 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  }
  else {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).BNDDPDNJAGJ,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3652,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_18,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 0336c7d4 to 0346c7db has its CatchHandler @ 0336c820 */
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FGMNPHMOMFI,(MethodInfo *)0x0);
      if (!bVar1) {
                    /* try { // try from 0336c7dc to 0346c813 has its CatchHandler @ 0336c744 */
        __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (AAPGCAPGBLG_o *)0x0) goto LAB_0336cb50;
        bVar1 = AAPGCAPGBLG__LAAKLBPOMGP(__this_00,(__this->fields).FGMNPHMOMFI,pMVar9);
        if (!bVar1) goto LAB_0336ca2c;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
                    /* try { // try from 0336c814 to 0346c817 has its CatchHandler @ 0336c81c */
                    /* try { // try from 0336c818 to 0346c837 has its CatchHandler @ 0336c744 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336c814 with catch @ 0336c81c
                        */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336c7d4 with catch @ 0336c820
                        */
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 0336c838 to 0346c83b has its CatchHandler @ 0336c864 */
      }
                    /* try { // try from 0336c83c to 0346c873 has its CatchHandler @ 0336c744 */
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 0336c838 with catch @ 0336c864 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0336c874 to 0346c87b has its CatchHandler @ 0336c890 */
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0336c87c to 0346c887 has its CatchHandler @ 0336c744 */
      if ((pAVar10 == (Roster_o *)0x0) || (__this_01 == (Item_o *)0x0)) {
LAB_0336cb50:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336cb50 to 0346cb53 has its CatchHandler @ 0336cb6c */
        FUN_01bab8c8();
      }
                    /* try { // try from 0336c888 to 0346c88f has its CatchHandler @ 0336c890 */
      __this_02 = (pAVar10->fields).OIDPLCLELEN;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0336c874 with catch @ 0336c890
                       catch(type#2 @ 00000000) { ... } // from try @ 0336c888 with catch @ 0336c890
                        */
                    /* try { // try from 0336c894 to 0346c95b has its CatchHandler @ 0336c894
                       catch() { ... } // from try @ 0336c894 with catch @ 0336c894
                       catch() { ... } // from try @ 0336c998 with catch @ 0336c894
                       catch() { ... } // from try @ 0336cb24 with catch @ 0336c894
                       catch() { ... } // from try @ 0336cb54 with catch @ 0336c894
                       catch() { ... } // from try @ 0336cb98 with catch @ 0336c894
                       catch() { ... } // from try @ 0336cbc8 with catch @ 0336c894 */
      pHVar6 = Item__CKKIPBAIEMN(__this_01,(__this->fields).GMILEGDKKPL,(MethodInfo *)0x0);
      if (pHVar6 != (HOOAAGABMBL_o *)0x0) {
        if (__this_02 != (GGHCLMEFIGO_o *)0x0) {
          pIVar7 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,pHVar6,(MethodInfo *)0x0);
          if ((pIVar7 == (IGFGDDANEPE_o *)0x0) ||
             (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(pIVar7,(MethodInfo *)0x0), iVar2 < 1))
          goto LAB_0336ca2c;
          pSVar8 = (__this->fields).DAKLKLLKLEA;
          if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
            index = 0;
            do {
              if ((pSVar8->fields)._size <= index) goto LAB_0336ca2c;
              pSVar5 = (System_String_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar8,index,
                                  Method_System_Collections_Generic_List<string>_get_Item__);
              pHVar6 = Item__CKKIPBAIEMN(__this_01,pSVar5,(MethodInfo *)0x0);
              if (pHVar6 == (HOOAAGABMBL_o *)0x0) {
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3657,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3658,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                pSVar8 = (__this->fields).DAKLKLLKLEA;
                if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
                  str1 = (System_String_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,index,
                                    Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 0336cae8 to 0346caf3 has its CatchHandler @ 0336cb58 */
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0336caf8 to 0346cb03 has its CatchHandler @ 0336cb64 */
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3659,
                             (MethodInfo *)0x0);
                    /* try { // try from 0336cb0c to 0346cb13 has its CatchHandler @ 0336cb60 */
                    /* try { // try from 0336cb14 to 0346cb23 has its CatchHandler @ 0336cb5c */
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0336cb24 to 0346cb47 has its CatchHandler @ 0336c894 */
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3660,
                             (MethodInfo *)0x0);
                  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0336cb48 to 0346cb4b has its CatchHandler @ 0336cb74 */
                    /* try { // try from 0336cb4c to 0346cb4f has its CatchHandler @ 0336cb70 */
                  goto LAB_0336ca00;
                }
                break;
              }
              pMVar9 = (MethodInfo *)0x0;
              pIVar7 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,pHVar6,(MethodInfo *)0x0);
              if ((pIVar7 == (IGFGDDANEPE_o *)0x0) ||
                 (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(pIVar7,(MethodInfo *)0x0), iVar2 < 1)) {
                NLAJHFAOEDB__DGDBKPIHGNH(__this,AAJBIMFNMBB,pMVar9);
                return;
              }
              pSVar8 = (__this->fields).DAKLKLLKLEA;
              index = index + 1;
            } while (pSVar8 != (System_Collections_Generic_List_string__o *)0x0);
          }
        }
        goto LAB_0336cb50;
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3653,
                 (MethodInfo *)0x0);
                    /* try { // try from 0336c95c to 0346c963 has its CatchHandler @ 0336cb7c */
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3654,
                 (MethodInfo *)0x0);
                    /* try { // try from 0336c980 to 0346c987 has its CatchHandler @ 0336cb78 */
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0336c990 to 0346c997 has its CatchHandler @ 0336cb68 */
      str1 = (__this->fields).GMILEGDKKPL;
                    /* try { // try from 0336c998 to 0346cae7 has its CatchHandler @ 0336c894 */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3655,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3656,
                 (MethodInfo *)0x0);
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
LAB_0336ca00:
      pSVar5 = System_String__Concat(pSVar5,str1,str2,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  }
LAB_0336ca2c:
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x326CC94]
// NLAJHFAOEDB$$HNIHOIAMDPC @ RVA 0x326CC94

/* WARNING: Removing unreachable block (ram,0x0336d15c) */

void NLAJHFAOEDB__HNIHOIAMDPC
               (NLAJHFAOEDB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int32_t capacity;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  undefined8 *puVar12;
  System_Collections_IEnumerator_c *pSVar13;
  System_String_array *pSVar14;
  long lVar15;
  ulong uVar16;
  int32_t *piVar17;
  int *piVar18;
  System_Collections_Generic_List_string__o **ppSVar19;
  
  if ((DAT_045671f2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 0336cd04 to 0346cd97 has its CatchHandler @ 0336cd04
                       catch() { ... } // from try @ 0336cd04 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336cda0 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336cdf4 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336ce18 with catch @ 0336cd04
                       catch() { ... } // from try @ 0336ce48 with catch @ 0336cd04 */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10431/*"PremiumPack"*/);
    FUN_01bab630(&StringLiteral_10069/*"PackAssert"*/);
    FUN_01bab630(&StringLiteral_11340/*"RestoreQuest"*/);
    FUN_01bab630(&StringLiteral_8110/*"ItemName"*/);
    DAT_045671f2 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_10431/*"PremiumPack"*/,(MethodInfo *)0x0);
                    /* try { // try from 0336cd98 to 0346cd9f has its CatchHandler @ 0336cdfc */
                    /* try { // try from 0336cda0 to 0346cdef has its CatchHandler @ 0336cd04 */
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                       (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    (__this->fields).GMILEGDKKPL = pSVar7;
    thunk_FUN_01c20e04();
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_10069/*"PackAssert"*/,(MethodInfo *)0x0);
                    /* try { // try from 0336cdf0 to 0346cdf3 has its CatchHandler @ 0336cdf8 */
                    /* try { // try from 0336cdf4 to 0346ce13 has its CatchHandler @ 0336cd04 */
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336cdf0 with catch @ 0336cdf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336cd98 with catch @ 0336cdfc
                        */
      (__this->fields).FGMNPHMOMFI = pSVar7;
      thunk_FUN_01c20e04();
                    /* try { // try from 0336ce14 to 0346ce17 has its CatchHandler @ 0336ce38 */
                    /* try { // try from 0336ce18 to 0346ce3f has its CatchHandler @ 0336cd04 */
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_11340/*"RestoreQuest"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0336ce14 with catch @ 0336ce38 */
                    /* try { // try from 0336ce40 to 0346ce47 has its CatchHandler @ 0336ce5c */
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 0336ce48 to 0346ce53 has its CatchHandler @ 0336cd04 */
        (__this->fields).BNDDPDNJAGJ = pSVar7;
                    /* try { // try from 0336ce54 to 0346ce5b has its CatchHandler @ 0336ce5c */
        thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0336ce40 with catch @ 0336ce5c
                       catch(type#2 @ 00000000) { ... } // from try @ 0336ce54 with catch @ 0336ce5c
                        */
                    /* try { // try from 0336ce60 to 0346cfa3 has its CatchHandler @ 0336ce60
                       catch() { ... } // from try @ 0336ce60 with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d0fc with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d1a4 with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d1ac with catch @ 0336ce60
                       catch() { ... } // from try @ 0336d26c with catch @ 0336ce60 */
        plVar8 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (JHMENEKPIBO,
                                    (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
        if (plVar8 != (long *)0x0) {
          capacity = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          pSVar9 = (System_Collections_Generic_List_string__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar9,capacity,
                     Method_System_Collections_Generic_List<string>__ctor__);
          ppSVar19 = &(__this->fields).DAKLKLLKLEA;
          *ppSVar19 = pSVar9;
          thunk_FUN_01c20e04(ppSVar19,pSVar9);
          pSVar10 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
          if (pSVar10 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar13 = pSVar10->klass;
            uVar2._0_1_ = (pSVar13->_2).rank;
            uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
            uVar16 = (ulong)uVar2;
            if (uVar16 != 0) {
              piVar17 = &((pSVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar11 = pSVar13->vtable + *piVar17;
                  goto LAB_0336cf44;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar11 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_0336cf44:
            uVar16 = (*pVVar11->methodPtr)(pSVar10,pVVar11->method);
            if ((uVar16 & 1) == 0) {
              plVar8 = (long *)thunk_FUN_01bda71c(pSVar10,System_IDisposable_TypeInfo);
              if (plVar8 == (long *)0x0) {
                return;
              }
              lVar15 = *plVar8;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 == 0) goto LAB_0336d0f0;
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_0336d0d8;
            }
            pSVar13 = pSVar10->klass;
            uVar3._0_1_ = (pSVar13->_2).rank;
            uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
            uVar16 = (ulong)uVar3;
            if (uVar16 != 0) {
              piVar17 = &((pSVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar11 = pSVar13->vtable + (*piVar17 + 1);
                  goto LAB_0336cfa4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            pVVar11 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_0336cfa4:
                    /* try { // try from 0336cfa4 to 0346cfcb has its CatchHandler @ 0336d1d4 */
            plVar8 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(plVar8);
            }
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0336d000 to 0346d02b has its CatchHandler @ 0336d1d0 */
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_8110/*"ItemName"*/,(MethodInfo *)0x0);
            if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar9 = *ppSVar19;
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_8110/*"ItemName"*/,(MethodInfo *)0x0);
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              lVar15 = Method_System_Collections_Generic_List<string>_Add__;
              if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar14 = (pSVar9->fields)._items;
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pSVar14 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 0336d068 to 0346d06f has its CatchHandler @ 0336d1c4 */
              uVar4 = (pSVar9->fields)._size;
                    /* try { // try from 0336d074 to 0346d07b has its CatchHandler @ 0336d1cc */
              if (uVar4 < (uint)pSVar14->max_length) {
                (pSVar9->fields)._size = uVar4 + 1;
                    /* try { // try from 0336d084 to 0346d097 has its CatchHandler @ 0336d1bc */
                pSVar14->m_Items[(int)uVar4] = pSVar7;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,
                           (Il2CppObject *)pSVar7,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_0336d0d8:
                    /* try { // try from 0336d0d8 to 0346d0fb has its CatchHandler @ 0336d1b8 */
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0336d10c;
    }
  }
LAB_0336d0f0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
                    /* try { // try from 0336d0fc to 0346d18f has its CatchHandler @ 0336ce60 */
LAB_0336d10c:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
  return;
}


// ===== private void DGDBKPIHGNH(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x326CB54]
// NLAJHFAOEDB$$DGDBKPIHGNH @ RVA 0x326CB54

void NLAJHFAOEDB__DGDBKPIHGNH(NLAJHFAOEDB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  FPPKHNNABAD_o *__this_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  
                    /* try { // try from 0336cb54 to 0346cb93 has its CatchHandler @ 0336c894 */
                    /* catch() { ... } // from try @ 0336cae8 with catch @ 0336cb58 */
                    /* catch() { ... } // from try @ 0336cb14 with catch @ 0336cb5c */
                    /* catch() { ... } // from try @ 0336cb0c with catch @ 0336cb60 */
                    /* catch() { ... } // from try @ 0336caf8 with catch @ 0336cb64 */
                    /* catch() { ... } // from try @ 0336c990 with catch @ 0336cb68 */
                    /* catch() { ... } // from try @ 0336cb50 with catch @ 0336cb6c */
  if ((DAT_045671f3 & 1) == 0) {
                    /* catch() { ... } // from try @ 0336cb4c with catch @ 0336cb70 */
                    /* catch() { ... } // from try @ 0336cb48 with catch @ 0336cb74 */
                    /* catch() { ... } // from try @ 0336c980 with catch @ 0336cb78 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 0336c95c with catch @ 0336cb7c */
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4174/*"Cant find restoration quest with name {0}"*/);
                    /* try { // try from 0336cb94 to 0346cb97 has its CatchHandler @ 0336cbb8 */
                    /* try { // try from 0336cb98 to 0346cbbf has its CatchHandler @ 0336c894 */
    DAT_045671f3 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                          (pNVar2,(__this->fields).BNDDPDNJAGJ,(MethodInfo *)0x0);
    if (__this_00 == (FPPKHNNABAD_o *)0x0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_0336cc80;
      pSVar5 = (__this->fields).BNDDPDNJAGJ;
      if ((pSVar5 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pSVar5;
      thunk_FUN_01c20e04(args->m_Items,pSVar5);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4174/*"Cant find restoration quest with name {0}"*/,args,(MethodInfo *)0x0);
    }
    else {
                    /* catch() { ... } // from try @ 0336cb94 with catch @ 0336cbb8 */
                    /* try { // try from 0336cbc0 to 0346cbc7 has its CatchHandler @ 0336cbdc */
      bVar1 = FPPKHNNABAD__DGCODECJJCC(__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* try { // try from 0336cbc8 to 0346cbd3 has its CatchHandler @ 0336c894 */
      if (bVar1) {
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 0336cbd4 to 0346cbdb has its CatchHandler @ 0336cbdc */
        if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0336cc80;
                    /* catch() { ... } // from try @ 0336cbc0 with catch @ 0336cbdc
                       catch() { ... } // from try @ 0336cbd4 with catch @ 0336cbdc */
        Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack
                  (pNVar2,__this_00,false,(MethodInfo *)0x0);
      }
    }
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0336cc80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

