// TypeDefIndex 121
// Namespace: 
// public class AJOGJBFNELI
// Fields:
//   public const string HLEMEJEHGLB = "Settings";
//   public const string IGAKCLANLEP = "GUID";
//   private const string PMJCHNBKMLM = "LastRaidID";
//   private const string ILMGHCCDJIP = "ClanName";
//   private const string KPHMFFOGFID = "ClanRole";
//   private const string AMMJPKONLNO = "BeingLobby";
//   private const string CIJAOKFFLCF = "RPos";
//   private const string HHHLICKAEAG = "prk";
//   private const string MFLKGCFMJGK = "pbk";
//   private const string ANOAAADJDBF = "blamed";
//   private const string FNFKMAHFOKE = "raidID";
//   private const string BMHGKAKPHCD = ",";
//   private string MKKHHBEFNDL; // 0x10
//   private XmlDocument KGCDBPOBGFH; // 0x18
//   private XmlNode LDGGIOJMLLD; // 0x20
//   private bool JOBALMMDPAF; // 0x28
//   private MBICLFIBJLO EJCLIBKEICM; // 0x30

// ===== public void CNDLAIIHEHJ(long MMIOPIPLDJL, long MPMJDINCJNH)  [RVA 0x30119E8]
// AJOGJBFNELI$$CNDLAIIHEHJ @ RVA 0x30119E8

void AJOGJBFNELI__CNDLAIIHEHJ
               (AJOGJBFNELI_o *__this,int64_t MMIOPIPLDJL,int64_t MPMJDINCJNH,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_Char_array *separator;
  System_String_array *collection;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t local_58;
  
  method_00 = (MethodInfo *)MMIOPIPLDJL;
  local_58 = MPMJDINCJNH;
  if ((DAT_04565bb1 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<long>__);
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2907);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2908);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2909);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2910);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2911);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2912);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2913);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2914);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2915);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2916);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2917);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2918);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565bb1 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2907,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2908,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<long>(__this,pSVar3,MMIOPIPLDJL,Method_AJOGJBFNELI_MLDEHFFGJDP<long>__);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar4 = (__this->fields).LDGGIOJMLLD;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2909,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2910,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar5,pSVar3,(MethodInfo *)0x0);
      if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_03111d90:
        pSVar3 = System_Int64__ToString((int64_t)&local_58,(MethodInfo *)0x0);
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)__this_00,(Il2CppObject *)pSVar3,
                   Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2915,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2916,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2917,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2918,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar7 = System_String__Join(pSVar7,(System_Collections_Generic_IEnumerable_string__o *)
                                            __this_00,(MethodInfo *)0x0);
        AJOGJBFNELI__MLDEHFFGJDP<object>
                  (__this,pSVar3,(Il2CppObject *)pSVar7,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
        AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
        return;
      }
      pSVar4 = (__this->fields).LDGGIOJMLLD;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2911,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2912,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar5,pSVar3,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar1,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2913,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar2,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2914,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
          if (((pSVar7 != (System_String_o *)0x0) &&
              (separator = System_String__ToCharArray(pSVar7,(MethodInfo *)0x0),
              pSVar3 != (System_String_o *)0x0)) &&
             (collection = System_String__Split(pSVar3,separator,1,(MethodInfo *)0x0),
             __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
            System_Collections_Generic_List<object>__AddRange
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       Method_System_Collections_Generic_List<string>_AddRange__);
            goto LAB_03111d90;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIENGNEGHPJ()  [RVA 0x3011EBC]
// AJOGJBFNELI$$GIENGNEGHPJ @ RVA 0x3011EBC

void AJOGJBFNELI__GIENGNEGHPJ(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlDocument_o *pSVar6;
  System_Xml_XmlNode_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar8;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_01;
  MethodInfo *method_02;
  AJOGJBFNELI_Fields *pAVar9;
  System_Xml_XmlDocument_o **ppSVar10;
  
  if ((DAT_04565bb2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2919);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2920);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2921);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2922);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2923);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2924);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2925);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2926);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565bb2 = 1;
  }
  if ((__this->fields).JOBALMMDPAF != false) {
    return;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2919,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2920,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  (__this->fields).JOBALMMDPAF = true;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = NLPJLHOEAOE__BPEDDHLKDID((MethodInfo *)0x0);
  pAVar9 = &__this->fields;
  pAVar9->MKKHHBEFNDL = pSVar4;
  thunk_FUN_01c20e04(pAVar9,pSVar4);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pAVar9->MKKHHBEFNDL,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2921,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2922,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(bool_TypeInfo);
  }
  pSVar5 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  method_02 = (MethodInfo *)0x0;
  pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = NEHNBJKKABI__HOPOEALDDGI(pAVar9->MKKHHBEFNDL,(MethodInfo *)0x0);
    pSVar4 = AJOGJBFNELI__BAIJDPBFIOF(pSVar2,method_00);
    pSVar5 = pAVar9->MKKHHBEFNDL;
    if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
    }
    method_02 = (MethodInfo *)0x0;
    CFJANHACGMG__FNIHLBLMOBP(pSVar5,true,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (System_String_o *)0x0;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
  pMVar8 = extraout_x1;
  if (!bVar1) {
    pSVar6 = GIAMPEGMNHE__KGEKFIHAHLJ(pSVar4,true,false,(MethodInfo *)0x0);
    ppSVar10 = &(__this->fields).KGCDBPOBGFH;
    *ppSVar10 = pSVar6;
    thunk_FUN_01c20e04(ppSVar10,pSVar6);
    pSVar6 = *ppSVar10;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (pSVar6 != (System_Xml_XmlDocument_o *)0x0) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2925,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2926,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      method_02 = (pSVar6->klass->vtable)._51_get_Item.method;
      pSVar7 = (System_Xml_XmlNode_o *)
               (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)(pSVar6,pSVar4);
      (__this->fields).LDGGIOJMLLD = pSVar7;
      thunk_FUN_01c20e04();
      pMVar8 = extraout_x1_00;
      goto LAB_031122a4;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2923,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2924,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    method_02 = (MethodInfo *)0x0;
    pSVar4 = System_String__Concat(pSVar5,pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    pMVar8 = extraout_x1_01;
  }
  AJOGJBFNELI__IBGDJHCKHGK(__this,pMVar8);
  pMVar8 = extraout_x1_02;
LAB_031122a4:
  pSVar4 = AJOGJBFNELI__KKOFANPIDBI(__this,pMVar8);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
  pMVar8 = extraout_x1_03;
  if (bVar1) {
    pSVar4 = HLIDLFKDMHG__AAOMDIOOAGC((MethodInfo *)0x0);
    AJOGJBFNELI__IPAHDDFDFDK(__this,pSVar4,method_02);
    pMVar8 = extraout_x1_04;
  }
  pSVar4 = AJOGJBFNELI__NKGPBKKCLBH(__this,pMVar8);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    AJOGJBFNELI__CKMFEMGBNFC(__this,method_01);
  }
  return;
}


// ===== public string PKAPCJACGOA()  [RVA 0x30132E4]
// AJOGJBFNELI$$PKAPCJACGOA @ RVA 0x30132E4

System_String_o * AJOGJBFNELI__PKAPCJACGOA(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031132fc to 032132ff has its CatchHandler @ 03113324 */
  if ((DAT_04565bb3 & 1) == 0) {
                    /* try { // try from 03113300 to 0321330b has its CatchHandler @ 03113328 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2927);
                    /* try { // try from 0311330c to 0321330f has its CatchHandler @ 03113314 */
                    /* try { // try from 03113310 to 03213343 has its CatchHandler @ 031130a0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0311330c with catch @ 03113314
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2928);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113214 with catch @ 03113318
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031132a0 with catch @ 0311331c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113290 with catch @ 03113320
                        */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031132fc with catch @ 03113324
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113300 with catch @ 03113328
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113258 with catch @ 0311332c
                        */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565bb3 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar1 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 03113344 to 03213347 has its CatchHandler @ 03113374 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03113348 to 03213383 has its CatchHandler @ 031130a0 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03113344 with catch @ 03113374 */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03113384 to 0321338f has its CatchHandler @ 031133a4 */
                    /* try { // try from 03113390 to 0321339b has its CatchHandler @ 031130a0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2927,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0311339c to 032133a3 has its CatchHandler @ 031133a4 */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03113384 with catch @ 031133a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0311339c with catch @ 031133a4
                        */
                    /* try { // try from 031133a8 to 032134eb has its CatchHandler @ 031133a8
                       catch() { ... } // from try @ 031133a8 with catch @ 031133a8
                       catch() { ... } // from try @ 0311357c with catch @ 031133a8
                       catch() { ... } // from try @ 031135e0 with catch @ 031133a8
                       catch() { ... } // from try @ 0311361c with catch @ 031133a8
                       catch() { ... } // from try @ 03113664 with catch @ 031133a8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2928,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IJIBBEFBCPJ(long MMIOPIPLDJL, long MPMJDINCJNH)  [RVA 0x30133F8]
// AJOGJBFNELI$$IJIBBEFBCPJ @ RVA 0x30133F8

bool AJOGJBFNELI__IJIBBEFBCPJ
               (AJOGJBFNELI_o *__this,int64_t MMIOPIPLDJL,int64_t MPMJDINCJNH,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *b;
  System_Collections_Generic_List_object__o *__this_00;
  System_Char_array *separator;
  System_String_array *collection;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  int64_t local_40;
  int64_t iStack_38;
  
  local_40 = MPMJDINCJNH;
  iStack_38 = MMIOPIPLDJL;
  if ((DAT_04565bb4 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20388/*"raidID"*/);
    FUN_01bab630(&StringLiteral_16713/*"blamed"*/);
    FUN_01bab630(&StringLiteral_1154/*","*/);
    DAT_04565bb4 = 1;
    MMIOPIPLDJL = (int64_t)extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,(MethodInfo *)MMIOPIPLDJL);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
     pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031136b8;
  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar3,StringLiteral_20388/*"raidID"*/,(MethodInfo *)0x0);
  pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031134ec to 032134ef has its CatchHandler @ 031135e8 */
  b = System_Int64__ToString((int64_t)&iStack_38,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(pSVar5,b,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
    pSVar2 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 0311352c to 0321353f has its CatchHandler @ 03113600 */
    if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031136b8;
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_16713/*"blamed"*/,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      pSVar5 = System_Int64__ToString((int64_t)&local_40,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031136b8;
    }
    else {
      pSVar2 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 03113560 to 0321356b has its CatchHandler @ 031135f4 */
                    /* try { // try from 03113570 to 0321357b has its CatchHandler @ 031135f0 */
      if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
         (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
         pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) {
LAB_031136b8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0311357c to 032135c7 has its CatchHandler @ 031133a8 */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_16713/*"blamed"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar4,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 031135c8 to 032135cb has its CatchHandler @ 031135f8 */
                    /* try { // try from 031135cc to 032135d7 has its CatchHandler @ 031135fc */
                    /* try { // try from 031135d8 to 032135db has its CatchHandler @ 031135ec */
      if ((StringLiteral_1154/*","*/ == (System_String_o *)0x0) ||
         ((separator = System_String__ToCharArray(StringLiteral_1154/*","*/,(MethodInfo *)0x0),
          pSVar5 == (System_String_o *)0x0 ||
          (collection = System_String__Split(pSVar5,separator,1,(MethodInfo *)0x0),
          __this_00 == (System_Collections_Generic_List_object__o *)0x0)))) goto LAB_031136b8;
                    /* try { // try from 031135dc to 032135df has its CatchHandler @ 031135e4 */
                    /* try { // try from 031135e0 to 03213617 has its CatchHandler @ 031133a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135dc with catch @ 031135e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031134ec with catch @ 031135e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135d8 with catch @ 031135ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113570 with catch @ 031135f0
                        */
      System_Collections_Generic_List<object>__AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>_AddRange__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113560 with catch @ 031135f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135c8 with catch @ 031135f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135cc with catch @ 031135fc
                        */
      pSVar5 = System_Int64__ToString((int64_t)&local_40,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0311352c with catch @ 03113600
                        */
    }
                    /* try { // try from 03113618 to 0321361b has its CatchHandler @ 03113648 */
                    /* try { // try from 0311361c to 03213657 has its CatchHandler @ 031133a8 */
    bVar1 = System_Collections_Generic_List<object>__Remove
                      (__this_00,(Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_List<string>_Remove__);
    if (bVar1) {
      pSVar5 = System_String__Join(StringLiteral_1154/*","*/,
                                   (System_Collections_Generic_IEnumerable_string__o *)__this_00,
                                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03113618 with catch @ 03113648 */
                    /* try { // try from 03113658 to 03213663 has its CatchHandler @ 03113678 */
      AJOGJBFNELI__MLDEHFFGJDP<object>
                (__this,StringLiteral_16713/*"blamed"*/,(Il2CppObject *)pSVar5,
                 Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
                    /* try { // try from 03113664 to 0321366f has its CatchHandler @ 031133a8 */
      method_00 = extraout_x1_00;
      if ((__this_00->fields)._size == 0) {
                    /* try { // try from 03113670 to 03213677 has its CatchHandler @ 03113678 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03113658 with catch @ 03113678
                       catch(type#2 @ 00000000) { ... } // from try @ 03113670 with catch @ 03113678
                        */
        AJOGJBFNELI__MLDEHFFGJDP<object>
                  (__this,StringLiteral_20388/*"raidID"*/,(Il2CppObject *)string_TypeInfo->static_fields->Empty,
                   Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
        method_00 = extraout_x1_01;
      }
      AJOGJBFNELI__CHLJMDILNBI(__this,method_00);
      return true;
    }
  }
  return false;
}


// ===== public void IPAHDDFDFDK(string FIPPKIEOBKE)  [RVA 0x3012CE4]
// AJOGJBFNELI$$IPAHDDFDFDK @ RVA 0x3012CE4

void AJOGJBFNELI__IPAHDDFDFDK(AJOGJBFNELI_o *__this,System_String_o *FIPPKIEOBKE,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)FIPPKIEOBKE;
  if ((DAT_04565bb5 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2929);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2930);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2931);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2932);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04565bb5 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2929,(MethodInfo *)0x0);
                    /* try { // try from 03112dc4 to 03212e0f has its CatchHandler @ 03112dc4
                       catch() { ... } // from try @ 03112dc4 with catch @ 03112dc4
                       catch() { ... } // from try @ 03112e70 with catch @ 03112dc4
                       catch() { ... } // from try @ 03112eac with catch @ 03112dc4
                       catch() { ... } // from try @ 03112ed0 with catch @ 03112dc4
                       catch() { ... } // from try @ 03112f08 with catch @ 03112dc4
                       catch() { ... } // from try @ 03112f3c with catch @ 03112dc4 */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2930,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,FIPPKIEOBKE,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03112e10 to 03212e17 has its CatchHandler @ 03112edc */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 03112e18 to 03212e1f has its CatchHandler @ 03112ed8 */
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2931,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2932,(MethodInfo *)0x0);
                    /* try { // try from 03112e58 to 03212e6f has its CatchHandler @ 03112ed4 */
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 03112e70 to 03212ea3 has its CatchHandler @ 03112dc4 */
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,(Il2CppObject *)FIPPKIEOBKE,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
  return;
}


// ===== public int OAHBPALGKGJ()  [RVA 0x30136BC]
// AJOGJBFNELI$$OAHBPALGKGJ @ RVA 0x30136BC

int32_t AJOGJBFNELI__OAHBPALGKGJ(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bb6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2933);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2934);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bb6 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2933,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2934,(MethodInfo *)0x0)
    ;
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,4,(MethodInfo *)0x0);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string GIEILHBFGHG()  [RVA 0x30137BC]
// AJOGJBFNELI$$GIEILHBFGHG @ RVA 0x30137BC

System_String_o * AJOGJBFNELI__GIEILHBFGHG(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bb7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2935);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2936);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bb7 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar1 = (__this->fields).LDGGIOJMLLD;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2935,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2936,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30138BC]
// AJOGJBFNELI$$.ctor @ RVA 0x30138BC

void AJOGJBFNELI___ctor(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JOBALMMDPAF = false;
  return;
}


// ===== public static string BAIJDPBFIOF(byte[] CJNHFNHJHPE)  [RVA 0x301240C]
// AJOGJBFNELI$$BAIJDPBFIOF @ RVA 0x301240C

System_String_o * AJOGJBFNELI__BAIJDPBFIOF(System_Byte_array *CJNHFNHJHPE,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bb8 & 1) == 0) {
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_04565bb8 = 1;
    method = extraout_x1;
  }
  if ((CJNHFNHJHPE == (System_Byte_array *)0x0) || (CJNHFNHJHPE->max_length == 0)) {
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo,method);
    }
    EGFFLEKJFGN__LGAJPKLKGCM(CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar1 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(pSVar1->klass->vtable)._37_GetString.methodPtr)
                       (pSVar1,CJNHFNHJHPE,(pSVar1->klass->vtable)._37_GetString.method);
  }
  return pSVar2;
}


// ===== public void JMMFCMIIDHL(string BKJJFPJOCGP)  [RVA 0x30138D8]
// AJOGJBFNELI$$JMMFCMIIDHL @ RVA 0x30138D8

void AJOGJBFNELI__JMMFCMIIDHL(AJOGJBFNELI_o *__this,System_String_o *BKJJFPJOCGP,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)BKJJFPJOCGP;
  if ((DAT_04565bb9 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2938);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2939);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bb9 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2938,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2939,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,KGLJICLJHEL,(Il2CppObject *)BKJJFPJOCGP,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__
            );
  AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
  return;
}


// ===== public int OAACOOCKAHA()  [RVA 0x30139D0]
// AJOGJBFNELI$$OAACOOCKAHA @ RVA 0x30139D0

int32_t AJOGJBFNELI__OAACOOCKAHA(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2940);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2941);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bba = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2940,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2941,(MethodInfo *)0x0)
    ;
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string ONHDKNBGCLC()  [RVA 0x3013AD0]
// AJOGJBFNELI$$ONHDKNBGCLC @ RVA 0x3013AD0

System_String_o * AJOGJBFNELI__ONHDKNBGCLC(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKLJIDJBFEI_o *__this_00;
  System_String_o *pSVar2;
  System_Text_Encoding_o *pSVar3;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  MBICLFIBJLO_c *pMVar6;
  ulong uVar7;
  int32_t *piVar8;
  MBICLFIBJLO_o **ppMVar9;
  MBICLFIBJLO_o *pMVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_04565bbb & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&MBICLFIBJLO_TypeInfo);
    FUN_01bab630(&PAEMDELNPAD_TypeInfo);
    DAT_04565bbb = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    pSVar2 = KDPDBGNOFEN__ONKNEALNBBB((KDPDBGNOFEN_o *)__this_00,(MethodInfo *)0x0);
    pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar3 != (System_Text_Encoding_o *)0x0) {
      auVar11 = (*(pSVar3->klass->vtable)._19_GetBytes.methodPtr)
                          (pSVar3,pSVar2,(pSVar3->klass->vtable)._19_GetBytes.method);
      pSVar2 = AJOGJBFNELI__GIEILHBFGHG(__this,auVar11._8_8_);
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
      pSVar4 = System_Convert__FromBase64String(pSVar2,(MethodInfo *)0x0);
      ppMVar9 = &(__this->fields).EJCLIBKEICM;
      pMVar10 = *ppMVar9;
      if (pMVar10 == (MBICLFIBJLO_o *)0x0) {
        pMVar10 = (MBICLFIBJLO_o *)thunk_FUN_01bda818(PAEMDELNPAD_TypeInfo);
        PAEMDELNPAD___ctor((PAEMDELNPAD_o *)pMVar10,(MethodInfo *)0x0);
        *ppMVar9 = pMVar10;
        thunk_FUN_01c20e04(ppMVar9,pMVar10);
        pMVar10 = *ppMVar9;
        if (pMVar10 == (MBICLFIBJLO_o *)0x0) goto LAB_03113c60;
      }
      pMVar6 = pMVar10->klass;
      uVar1._0_1_ = (pMVar6->_2).rank;
      uVar1._1_1_ = (pMVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pMVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)MBICLFIBJLO_TypeInfo) {
            pVVar5 = pMVar6->vtable + *piVar8;
            goto LAB_03113c1c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar10,MBICLFIBJLO_TypeInfo,0);
LAB_03113c1c:
      pSVar4 = (System_Byte_array *)
               (*pVVar5->methodPtr)(pMVar10,auVar11._0_8_,pSVar4,pVVar5->method);
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
      pSVar2 = System_Convert__ToBase64String(pSVar4,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
LAB_03113c60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NADKOHFMNLK(int MMIOPIPLDJL)  [RVA 0x3013C64]
// AJOGJBFNELI$$NADKOHFMNLK @ RVA 0x3013C64

void AJOGJBFNELI__NADKOHFMNLK(AJOGJBFNELI_o *__this,int32_t MMIOPIPLDJL,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)MMIOPIPLDJL;
  if ((DAT_04565bbc & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2942);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2943);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bbc = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2942,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2943,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<int>
            (__this,KGLJICLJHEL,MMIOPIPLDJL,Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
  return;
}


// ===== public static void CCEJNLLMNOF()  [RVA 0x3013D5C]
// AJOGJBFNELI$$CCEJNLLMNOF @ RVA 0x3013D5C

void AJOGJBFNELI__CCEJNLLMNOF(MethodInfo *method)

{
  return;
}


// ===== private void IBGDJHCKHGK()  [RVA 0x30125C8]
// AJOGJBFNELI$$IBGDJHCKHGK @ RVA 0x30125C8

void AJOGJBFNELI__IBGDJHCKHGK(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Xml_XmlDocument_o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Xml_XmlDocument_o **ppSVar6;
  
  if ((DAT_04565bbd & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2944);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2945);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2946);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2947);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2948);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2949);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2950);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2951);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2952);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2953);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2954);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2955);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2956);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2957);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2958);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2959);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2960);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2961);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2962);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2963);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565bbd = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2944,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2945,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pSVar4 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(pSVar4,(MethodInfo *)0x0);
  ppSVar6 = &(__this->fields).KGCDBPOBGFH;
  *ppSVar6 = pSVar4;
  thunk_FUN_01c20e04(ppSVar6,pSVar4);
  pSVar4 = *ppSVar6;
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2946,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2947,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar5 = EIABCPKDEBD__KPODFFHOHGK(pSVar4,pSVar3,(MethodInfo *)0x0);
  (__this->fields).LDGGIOJMLLD = pSVar5;
  thunk_FUN_01c20e04();
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2948,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2949,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2950,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2951,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2952,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2953,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2954,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2955,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2956,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2957,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2958,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2959,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2960,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2961,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2962,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2963,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,StringLiteral_1/*""*/,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  return;
}


// ===== public string KKOFANPIDBI()  [RVA 0x3012BE4]
// AJOGJBFNELI$$KKOFANPIDBI @ RVA 0x3012BE4

System_String_o * AJOGJBFNELI__KKOFANPIDBI(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bbe & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2964);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2965);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bbe = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar1 = (__this->fields).LDGGIOJMLLD;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2964,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2965,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CHLJMDILNBI()  [RVA 0x30122FC]
// AJOGJBFNELI$$CHLJMDILNBI @ RVA 0x30122FC

void AJOGJBFNELI__CHLJMDILNBI(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  undefined8 uVar2;
  System_Byte_array *MMEEMFOLKPP;
  System_Xml_XmlDocument_o *pSVar3;
  System_String_o *EIJDDKJONFO;
  
  if ((DAT_04565bbf & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_04565bbf = 1;
  }
  if ((__this->fields).JOBALMMDPAF != false) {
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    pSVar3 = (__this->fields).KGCDBPOBGFH;
    if ((pSVar3 != (System_Xml_XmlDocument_o *)0x0) &&
       (uVar2 = (*(pSVar3->klass->vtable)._43_get_OuterXml.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._43_get_OuterXml.method),
       pSVar1 != (System_Text_Encoding_o *)0x0)) {
      MMEEMFOLKPP = (System_Byte_array *)
                    (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                              (pSVar1,uVar2,(pSVar1->klass->vtable)._19_GetBytes.method);
      if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
      }
      EGFFLEKJFGN__BJDAKJJGDLE(MMEEMFOLKPP,(MethodInfo *)0x0);
      NEHNBJKKABI__HEPJLJJMBML((__this->fields).MKKHHBEFNDL,MMEEMFOLKPP,(MethodInfo *)0x0);
      EIJDDKJONFO = (__this->fields).MKKHHBEFNDL;
      if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CFJANHACGMG__GCBGEBGFNHI(EIJDDKJONFO,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void IEFEHKIGBFG()  [RVA 0x3013D60]
// AJOGJBFNELI$$IEFEHKIGBFG @ RVA 0x3013D60

void AJOGJBFNELI__IEFEHKIGBFG(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04565bc0 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2966);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2967);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2968);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2969);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565bc0 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2966,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2967,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,(Il2CppObject *)string_TypeInfo->static_fields->Empty,
             Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2968,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2969,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,(Il2CppObject *)string_TypeInfo->static_fields->Empty,
             Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_00);
  return;
}


// ===== public bool EKIGAHIBDAG()  [RVA 0x3013F04]
// AJOGJBFNELI$$EKIGAHIBDAG @ RVA 0x3013F04

bool AJOGJBFNELI__EKIGAHIBDAG(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bc1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2970);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2971);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc1 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2970,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2971,(MethodInfo *)0x0)
    ;
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string NKGPBKKCLBH()  [RVA 0x3012E98]
// AJOGJBFNELI$$NKGPBKKCLBH @ RVA 0x3012E98

System_String_o * AJOGJBFNELI__NKGPBKKCLBH(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03112ea4 to 03212eab has its CatchHandler @ 03112ee8 */
                    /* try { // try from 03112eac to 03212eb3 has its CatchHandler @ 03112dc4 */
  if ((DAT_04565bc2 & 1) == 0) {
                    /* try { // try from 03112eb4 to 03212eb7 has its CatchHandler @ 03112ee8 */
                    /* try { // try from 03112eb8 to 03212ecf has its CatchHandler @ 03112ed0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2972);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2973);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112eb8 with catch @ 03112ed0
                       try { // try from 03112ed0 to 03212f03 has its CatchHandler @ 03112dc4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112e58 with catch @ 03112ed4
                        */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112e18 with catch @ 03112ed8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112e10 with catch @ 03112edc
                        */
    DAT_04565bc2 = 1;
    method = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03112ea4 with catch @ 03112ee8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03112eb4 with catch @ 03112ee8
                        */
  pSVar1 = (__this->fields).LDGGIOJMLLD;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03112f04 to 03212f07 has its CatchHandler @ 03112f28 */
                    /* try { // try from 03112f08 to 03212f2b has its CatchHandler @ 03112dc4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03112f04 with catch @ 03112f28 */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03112f2c to 03212f3b has its CatchHandler @ 03112f50 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2972,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03112f3c to 03212f47 has its CatchHandler @ 03112dc4 */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03112f48 to 03212f4f has its CatchHandler @ 03112f50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03112f2c with catch @ 03112f50
                       catch(type#2 @ 00000000) { ... } // from try @ 03112f48 with catch @ 03112f50
                        */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2973,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool PMLFNFMEKDO(long MMIOPIPLDJL, long MPMJDINCJNH)  [RVA 0x3014004]
// AJOGJBFNELI$$PMLFNFMEKDO @ RVA 0x3014004

bool AJOGJBFNELI__PMLFNFMEKDO
               (AJOGJBFNELI_o *__this,int64_t MMIOPIPLDJL,int64_t MPMJDINCJNH,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_Char_array *separator;
  System_String_array *collection;
  Il2CppClass *pIVar10;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  int64_t local_50;
  int64_t iStack_48;
  
  local_50 = MPMJDINCJNH;
  iStack_48 = MMIOPIPLDJL;
  if ((DAT_04565bc3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2974);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2975);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2976);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2977);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2978);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2979);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2980);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2981);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_AJOGJBFNELI_CLBCJDNKJJC_LAALEIEAMOL__);
    FUN_01bab630(&AJOGJBFNELI_CLBCJDNKJJC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Predicate<string>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565bc3 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(AJOGJBFNELI_CLBCJDNKJJC_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  pSVar3 = (__this->fields).LDGGIOJMLLD;
  if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2974,(MethodInfo *)0x0)
    ;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2975,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar7,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
      pSVar9 = System_Int64__ToString((int64_t)&iStack_48,(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality(pSVar7,pSVar9,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
      pSVar3 = (__this->fields).LDGGIOJMLLD;
      if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2976,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2977,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar7,(MethodInfo *)0x0);
          if (pSVar8 != (System_Xml_XmlAttribute_o *)0x0) {
            pSVar3 = (__this->fields).LDGGIOJMLLD;
            if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_03114474;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2978,
                       (MethodInfo *)0x0);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2979,
                       (MethodInfo *)0x0);
            pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03114474;
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar7,(MethodInfo *)0x0);
            pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2980,
                       (MethodInfo *)0x0);
            pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar6,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2981,
                       (MethodInfo *)0x0);
            pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
            if (((pSVar9 == (System_String_o *)0x0) ||
                (separator = System_String__ToCharArray(pSVar9,(MethodInfo *)0x0),
                pSVar7 == (System_String_o *)0x0)) ||
               (collection = System_String__Split(pSVar7,separator,1,(MethodInfo *)0x0),
               __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03114474;
            System_Collections_Generic_List<object>__AddRange
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       Method_System_Collections_Generic_List<string>_AddRange__);
          }
          pIVar10 = (Il2CppClass *)System_Int64__ToString((int64_t)&local_50,(MethodInfo *)0x0);
          if (pIVar2 != (Il2CppObject *)0x0) {
            pIVar2[1].klass = pIVar10;
            thunk_FUN_01c20e04();
            match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<string>_TypeInfo);
            System_Predicate<object>___ctor();
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              pIVar2 = System_Collections_Generic_List<object>__Find
                                 (__this_00,match,
                                  Method_System_Collections_Generic_List<string>_Find__);
              return pIVar2 != (Il2CppObject *)0x0;
            }
          }
        }
      }
    }
  }
LAB_03114474:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BBOPDEOHOAI()  [RVA 0x3014480]
// AJOGJBFNELI$$BBOPDEOHOAI @ RVA 0x3014480

int32_t AJOGJBFNELI__BBOPDEOHOAI(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bc4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2982);
                    /* try { // try from 031144ac to 032144c7 has its CatchHandler @ 031144ac
                       catch() { ... } // from try @ 031144ac with catch @ 031144ac
                       catch() { ... } // from try @ 031144d8 with catch @ 031144ac
                       catch() { ... } // from try @ 03114524 with catch @ 031144ac
                       catch() { ... } // from try @ 03114558 with catch @ 031144ac */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2983);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc4 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031144c8 to 032144d3 has its CatchHandler @ 03114508 */
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 031144d4 to 032144d7 has its CatchHandler @ 03114504 */
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031144d8 to 0321451f has its CatchHandler @ 031144ac */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031144d4 with catch @ 03114504
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031144c8 with catch @ 03114508
                        */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03114520 to 03214523 has its CatchHandler @ 03114548 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2982,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03114524 to 0321454b has its CatchHandler @ 031144ac */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2983,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 03114520 with catch @ 03114548 */
                    /* try { // try from 0311454c to 03214557 has its CatchHandler @ 0311456c */
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03114558 to 03214563 has its CatchHandler @ 031144ac */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
                    /* try { // try from 03114564 to 0321456b has its CatchHandler @ 0311456c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0311454c with catch @ 0311456c
                       catch(type#2 @ 00000000) { ... } // from try @ 03114564 with catch @ 0311456c
                        */
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,-1,(MethodInfo *)0x0);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IJIJACHHPBO(int EFJNKONCKNF)  [RVA 0x3014580]
// AJOGJBFNELI$$IJIJACHHPBO @ RVA 0x3014580

void AJOGJBFNELI__IJIJACHHPBO(AJOGJBFNELI_o *__this,int32_t EFJNKONCKNF,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)EFJNKONCKNF;
  if ((DAT_04565bc5 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2984);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2985);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc5 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2984,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2985,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<int>
            (__this,KGLJICLJHEL,EFJNKONCKNF,Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
  return;
}


// ===== public void LIAFPDDOGIH(bool LEPLBDODFFA)  [RVA 0x3014678]
// AJOGJBFNELI$$LIAFPDDOGIH @ RVA 0x3014678

void AJOGJBFNELI__LIAFPDDOGIH(AJOGJBFNELI_o *__this,bool LEPLBDODFFA,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  
  if ((DAT_04565bc6 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<bool>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2986);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2987);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc6 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2986,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2987,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<bool>
            (__this,KGLJICLJHEL,LEPLBDODFFA,Method_AJOGJBFNELI_MLDEHFFGJDP<bool>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_00);
  return;
}


// ===== public void ILNDICIHADK()  [RVA 0x3014768]
// AJOGJBFNELI$$ILNDICIHADK @ RVA 0x3014768

void AJOGJBFNELI__ILNDICIHADK(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if ((DAT_04565bc7 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2988);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2989);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2990);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2991);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565bc7 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2988,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2989,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,(Il2CppObject *)string_TypeInfo->static_fields->Empty,
             Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2990,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2991,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar3,(Il2CppObject *)string_TypeInfo->static_fields->Empty,
             Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_00);
  return;
}


// ===== public void EPFNGHLFCDC(int JKKCLILCBKN)  [RVA 0x3014904]
// AJOGJBFNELI$$EPFNGHLFCDC @ RVA 0x3014904

void AJOGJBFNELI__EPFNGHLFCDC(AJOGJBFNELI_o *__this,int32_t JKKCLILCBKN,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)JKKCLILCBKN;
  if ((DAT_04565bc8 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2992);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2993);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc8 = 1;
    method_00 = extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,method_00);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2992,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2993,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<int>
            (__this,KGLJICLJHEL,JKKCLILCBKN,Method_AJOGJBFNELI_MLDEHFFGJDP<int>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_01);
  return;
}


// ===== private void CKMFEMGBNFC()  [RVA 0x3012F98]
// AJOGJBFNELI$$CKMFEMGBNFC @ RVA 0x3012F98

void AJOGJBFNELI__CKMFEMGBNFC(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  bool bVar1;
  HCHMNEMNOBK_o *__this_00;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_ValueTuple_byte____byte____o SVar6;
  
  if ((DAT_04565bc9 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2994);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2995);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2996);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2997);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2998);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2999);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<byte>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HCHMNEMNOBK_TypeInfo);
    DAT_04565bc9 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCHMNEMNOBK_o *)thunk_FUN_01bda818(HCHMNEMNOBK_TypeInfo,method);
  HCHMNEMNOBK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (HCHMNEMNOBK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 031130a0 to 03213213 has its CatchHandler @ 031130a0
                       catch() { ... } // from try @ 031130a0 with catch @ 031130a0
                       catch() { ... } // from try @ 031132ac with catch @ 031130a0
                       catch() { ... } // from try @ 03113310 with catch @ 031130a0
                       catch() { ... } // from try @ 03113348 with catch @ 031130a0
                       catch() { ... } // from try @ 03113390 with catch @ 031130a0 */
  SVar6 = HCHMNEMNOBK__OBEAPJAPHCE(__this_00,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2994,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2995,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar5 = System_Convert__ToBase64String(SVar6.fields.Item1,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar4,(Il2CppObject *)pSVar5,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2996,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2997,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar5 = System_Convert__ToBase64String(SVar6.fields.Item2,(MethodInfo *)0x0);
  AJOGJBFNELI__MLDEHFFGJDP<object>
            (__this,pSVar4,(Il2CppObject *)pSVar5,Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
  AJOGJBFNELI__CHLJMDILNBI(__this,method_00);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2998,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03113214 to 0321321b has its CatchHandler @ 03113318 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2999,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<byte>
                    ((System_Collections_Generic_IList_T__o *)SVar6.fields.Item1,
                     Method_DJNBJHPDKDP_OBECCOPBADO<byte>__);
  if (!bVar1) {
                    /* try { // try from 03113258 to 0321326f has its CatchHandler @ 0311332c */
    DJNBJHPDKDP__OBECCOPBADO<byte>
              ((System_Collections_Generic_IList_T__o *)SVar6.fields.Item2,
               Method_DJNBJHPDKDP_OBECCOPBADO<byte>__);
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = System_Boolean__ToString(true,(MethodInfo *)0x0);
                    /* try { // try from 03113290 to 0321329b has its CatchHandler @ 03113320 */
  pSVar4 = System_String__Concat(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 031132a0 to 032132ab has its CatchHandler @ 0311331c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031132ac to 032132fb has its CatchHandler @ 031130a0 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  return;
}

