// TypeDefIndex 256
// Namespace: 
// public class DEKKGJNMFEB
// Fields:
//   private static Action<IGFGDDANEPE> BNKPDJFNJKP; // 0x0
//   private List<GGCMECLCOMJ> CGDCBPHBFDE; // 0x10
//   private List<GGLKHCAIGDI> OKIANCELJJF; // 0x18
//   private int CFFDDAOKBME; // 0x20
//   private static DEKKGJNMFEB KNOHKIKFEBL; // 0x8

// ===== public List<PKKLIJLIKGF> DNKMKLILMCH(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x322CDF4]
// DEKKGJNMFEB$$DNKMKLILMCH @ RVA 0x322CDF4

System_Collections_Generic_List_PKKLIJLIKGF__o *
DEKKGJNMFEB__DNKMKLILMCH(DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_01;
  System_Collections_Generic_List_PKKLIJLIKGF__o *collection;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fb6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_04566fb6 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  __this_01 = DEKKGJNMFEB__NFKLPHNDMNO(__this,ENHJPOHLMCL,method);
  if (__this_01 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
        return __this_00;
      }
      if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) break;
      collection = GGLKHCAIGDI__NPCHMJCMNDM
                             ((GGLKHCAIGDI_o *)local_48.fields._current,ENHJPOHLMCL,0,true,
                              (MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<GGLKHCAIGDI> LCJEEAKDMBL()  [RVA 0x322D204]
// DEKKGJNMFEB$$LCJEEAKDMBL @ RVA 0x322D204

System_Collections_Generic_List_GGLKHCAIGDI__o *
DEKKGJNMFEB__LCJEEAKDMBL(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  return (__this->fields).OKIANCELJJF;
}


// ===== public static void LMPMABKEFBE(Action<IGFGDDANEPE> CJNHFNHJHPE)  [RVA 0x322D20C]
// DEKKGJNMFEB$$LMPMABKEFBE @ RVA 0x322D20C

void DEKKGJNMFEB__LMPMABKEFBE(System_Action_IGFGDDANEPE__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IGFGDDANEPE__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_IGFGDDANEPE__o *source;
  
  if ((DAT_04566fb7 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_04566fb7 = 1;
    method = extraout_x1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo,method);
  }
  source = DEKKGJNMFEB_TypeInfo->static_fields->BNKPDJFNJKP;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IGFGDDANEPE>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IGFGDDANEPE>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_IGFGDDANEPE__o *)
             FUN_01c07368(DEKKGJNMFEB_TypeInfo->static_fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private static void .cctor()  [RVA 0x322D2FC]
// DEKKGJNMFEB$$.cctor @ RVA 0x322D2FC

void DEKKGJNMFEB___cctor(MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o *pSVar1;
  
  if ((DAT_04566fb8 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_DEKKGJNMFEB_<>c_GDNCHMNHBHE__);
    FUN_01bab630(&DEKKGJNMFEB_<>c_TypeInfo);
    DAT_04566fb8 = 1;
  }
  if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_IGFGDDANEPE__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
  System_Action<object>___ctor();
  DEKKGJNMFEB_TypeInfo->static_fields->BNKPDJFNJKP = pSVar1;
  thunk_FUN_01c20e04(DEKKGJNMFEB_TypeInfo->static_fields,pSVar1);
  return;
}


// ===== public BFBONKPKBNL NCFEMNMDBMJ(string JEPIGCLHAMI, string JNCMFLKJJMP)  [RVA 0x322D3CC]
// DEKKGJNMFEB$$NCFEMNMDBMJ @ RVA 0x322D3CC

BFBONKPKBNL_o *
DEKKGJNMFEB__NCFEMNMDBMJ
          (DEKKGJNMFEB_o *__this,System_String_o *JEPIGCLHAMI,System_String_o *JNCMFLKJJMP,
          MethodInfo *method)

{
  Item_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *NKCMBEFHFII;
  GGLKHCAIGDI_o *__this_02;
  BFBONKPKBNL_o *pBVar1;
  MethodInfo *method_00;
  Roster_o *pAVar2;
  
  if ((DAT_04566fb9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566fb9 = 1;
  }
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
    IKKAMAMLIKA = Item__CKKIPBAIEMN(__this_00,JEPIGCLHAMI,(MethodInfo *)0x0);
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (Roster_o *)0x0) ||
         (__this_01 = (pAVar2->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
      goto LAB_0332d518;
      method_00 = (MethodInfo *)0x0;
      NKCMBEFHFII = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
      if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) &&
         (__this_02 = DEKKGJNMFEB__LDGJEEGACHJ(__this,JNCMFLKJJMP,method_00),
         __this_02 != (GGLKHCAIGDI_o *)0x0)) {
        pBVar1 = GGLKHCAIGDI__GPGGNMAFOJD(__this_02,NKCMBEFHFII,(MethodInfo *)0x0);
        return pBVar1;
      }
    }
    return (BFBONKPKBNL_o *)0x0;
  }
LAB_0332d518:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x322D678]
// DEKKGJNMFEB$$.ctor @ RVA 0x322D678

void DEKKGJNMFEB___ctor(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GGCMECLCOMJ__o *__this_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_01;
  System_Collections_Generic_List_GGLKHCAIGDI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566fba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GGCMECLCOMJ>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
    DAT_04566fba = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GGCMECLCOMJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGCMECLCOMJ>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGCMECLCOMJ>__ctor__);
  (__this->fields).CGDCBPHBFDE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_GGLKHCAIGDI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
  ppSVar1 = &(__this->fields).OKIANCELJJF;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void DNIBODHMAJC(Action<IGFGDDANEPE> CJNHFNHJHPE)  [RVA 0x322D754]
// DEKKGJNMFEB$$DNIBODHMAJC @ RVA 0x322D754

void DEKKGJNMFEB__DNIBODHMAJC(System_Action_IGFGDDANEPE__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IGFGDDANEPE__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_IGFGDDANEPE__o *a;
  
  if ((DAT_04566fbb & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_04566fbb = 1;
    method = extraout_x1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo,method);
  }
  a = DEKKGJNMFEB_TypeInfo->static_fields->BNKPDJFNJKP;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<IGFGDDANEPE>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IGFGDDANEPE>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_IGFGDDANEPE__o *)
             FUN_01c07368(DEKKGJNMFEB_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool IPLAABHAGFM(string DAFCPNPODFD)  [RVA 0x322D844]
// DEKKGJNMFEB$$IPLAABHAGFM @ RVA 0x322D844

bool DEKKGJNMFEB__IPLAABHAGFM(DEKKGJNMFEB_o *__this,System_String_o *DAFCPNPODFD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fbc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    DAT_04566fbc = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OKIANCELJJF;
  if (__this_00 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0332d90c;
    }
    if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = GGLKHCAIGDI__FCBPFKMMBJD
                      ((GGLKHCAIGDI_o *)local_48.fields._current,DAFCPNPODFD,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_0332d90c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public int BMCDCFJHKCE(int EBDDELGICGB)  [RVA 0x322D9B4]
// DEKKGJNMFEB$$BMCDCFJHKCE @ RVA 0x322D9B4

int32_t DEKKGJNMFEB__BMCDCFJHKCE(DEKKGJNMFEB_o *__this,int32_t EBDDELGICGB,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  GGCMECLCOMJ_o *pGVar3;
  
  pGVar3 = DEKKGJNMFEB__HPIGDJLAKAG(__this,EBDDELGICGB,method);
  iVar2 = 0;
  if (pGVar3 != (GGCMECLCOMJ_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pGVar3->fields)._AJBLFMPFEIO_k__BackingField.fields,(MethodInfo *)0x0);
    iVar2 = (__this->fields).CFFDDAOKBME + iVar1;
  }
  return iVar2;
}


// ===== public void HNIHOIAMDPC()  [RVA 0x322DB40]
// DEKKGJNMFEB$$HNIHOIAMDPC @ RVA 0x322DB40

/* WARNING: Removing unreachable block (ram,0x0332e278) */
/* WARNING: Removing unreachable block (ram,0x0332dfa8) */

void DEKKGJNMFEB__HNIHOIAMDPC(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *pSVar8;
  GGCMECLCOMJ_o *__this_00;
  GGLKHCAIGDI_o *__this_01;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Collections_Generic_List_GGCMECLCOMJ__o *pSVar9;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar10;
  long lVar11;
  GGCMECLCOMJ_array *pGVar12;
  GGLKHCAIGDI_array *pGVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04566fbd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0332db7c to 0342dba7 has its CatchHandler @ 0332dc90 */
    FUN_01bab630(&GGCMECLCOMJ_TypeInfo);
    FUN_01bab630(&GGLKHCAIGDI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Clear__);
                    /* try { // try from 0332dbd8 to 0342dbeb has its CatchHandler @ 0332dc98 */
    FUN_01bab630(&SF2Paths_TypeInfo);
                    /* try { // try from 0332dbec to 0342dc73 has its CatchHandler @ 0332da78 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_18323/*"forge.xml"*/);
    FUN_01bab630(&StringLiteral_11108/*"Recipes"*/);
    FUN_01bab630(&StringLiteral_8880/*"MaxDeviation"*/);
    FUN_01bab630(&StringLiteral_6544/*"Forge"*/);
    FUN_01bab630(&StringLiteral_15468/*"[Forge]: can't parse file!"*/);
    FUN_01bab630(&StringLiteral_3116/*"AspectScale"*/);
    DAT_04566fbd = 1;
  }
  pSVar9 = (__this->fields).CGDCBPHBFDE;
  if (pSVar9 != (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
    iVar3 = (pSVar9->fields)._size;
    (pSVar9->fields)._size = 0;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    pSVar10 = (__this->fields).OKIANCELJJF;
    if (pSVar10 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* try { // try from 0332dc74 to 0342dc7b has its CatchHandler @ 0332dc9c */
      iVar3 = (pSVar10->fields)._size;
                    /* try { // try from 0332dc7c to 0342dc7f has its CatchHandler @ 0332da78 */
                    /* try { // try from 0332dc80 to 0342dc83 has its CatchHandler @ 0332dc8c */
                    /* try { // try from 0332dc84 to 0342dcab has its CatchHandler @ 0332da78 */
      (pSVar10->fields)._size = 0;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332dc80 with catch @ 0332dc8c
                        */
      if (0 < iVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332db7c with catch @ 0332dc90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332db20 with catch @ 0332dc94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332dbd8 with catch @ 0332dc98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332dc74 with catch @ 0332dc9c
                        */
        System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
                    /* try { // try from 0332dcac to 0342dcaf has its CatchHandler @ 0332dcc0 */
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EIJDDKJONFO = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0332dcac with catch @ 0332dcc0 */
                    /* try { // try from 0332dcc8 to 0342dd2f has its CatchHandler @ 0332dd44 */
      pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC
                         (EIJDDKJONFO,StringLiteral_18323/*"forge.xml"*/,1,true,true,false,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_15468/*"[Forge]: can't parse file!"*/,(MethodInfo *)0x0);
        return;
      }
      plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar4,StringLiteral_6544/*"Forge"*/,
                                  (pSVar4->klass->vtable)._51_get_Item.method);
                    /* try { // try from 0332dd30 to 0342dd3b has its CatchHandler @ 0332da78 */
      if (((plVar5 != (long *)0x0) &&
          (plVar6 = (long *)(**(code **)(*plVar5 + 0x468))
                                      (plVar5,StringLiteral_3116/*"AspectScale"*/,*(undefined8 *)(*plVar5 + 0x470)),
          plVar6 != (long *)0x0)) &&
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
         plVar6 != (long *)0x0)) {
                    /* try { // try from 0332dd3c to 0342dd43 has its CatchHandler @ 0332dd44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0332dcc8 with catch @ 0332dd44
                       catch(type#2 @ 00000000) { ... } // from try @ 0332dd3c with catch @ 0332dd44
                        */
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0332ddc0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0332ddc0:
          uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar14 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
            if (plVar6 == (long *)0x0) goto LAB_0332df9c;
            lVar11 = *plVar6;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 == 0) goto LAB_0332df2c;
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_0332df14;
          }
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_0332de20;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0332de20:
          pSVar8 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (pSVar8 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
               ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar8);
            }
          }
          pSVar9 = (__this->fields).CGDCBPHBFDE;
          __this_00 = (GGCMECLCOMJ_o *)thunk_FUN_01bda818(GGCMECLCOMJ_TypeInfo);
          GGCMECLCOMJ___ctor(__this_00,pSVar8,(MethodInfo *)0x0);
          lVar11 = Method_System_Collections_Generic_List<GGCMECLCOMJ>_Add__;
          if (pSVar9 == (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pGVar12 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pGVar12 == (GGCMECLCOMJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pGVar12->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pGVar12->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pGVar12->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
            ;
          }
        } while( true );
      }
    }
  }
  goto LAB_0332e274;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0332df14:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0332df90;
    }
  }
LAB_0332df2c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0332df90:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0332df9c:
  plVar6 = (long *)(**(code **)(*plVar5 + 0x468))
                             (plVar5,StringLiteral_11108/*"Recipes"*/,*(undefined8 *)(*plVar5 + 0x470));
  if ((plVar6 != (long *)0x0) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
     plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar11 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0332e064;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0332e064:
      uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) goto LAB_0332e1f4;
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_0332e1cc;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0332e1b4;
      }
      lVar11 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0332e0c4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0332e0c4:
      pSVar8 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (pSVar8 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
           ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar8);
        }
      }
      pSVar10 = (__this->fields).OKIANCELJJF;
      __this_01 = (GGLKHCAIGDI_o *)thunk_FUN_01bda818(GGLKHCAIGDI_TypeInfo);
      GGLKHCAIGDI___ctor(__this_01,pSVar8,(MethodInfo *)0x0);
      lVar11 = Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__;
      if (pSVar10 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pGVar13 = (pSVar10->fields)._items;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (pGVar13 == (GGLKHCAIGDI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar10->fields)._size;
      if (uVar2 < (uint)pGVar13->max_length) {
        (pSVar10->fields)._size = uVar2 + 1;
        pGVar13->m_Items[(int)uVar2] = __this_01;
        thunk_FUN_01c20e04(pGVar13->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_0332e274;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0332e1b4:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0332e1e8;
    }
  }
LAB_0332e1cc:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0332e1e8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0332e1f4:
  __this_02 = (System_Xml_XmlAttributeCollection_o *)
              (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if (__this_02 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_02,StringLiteral_8880/*"MaxDeviation"*/,(MethodInfo *)0x0);
    iVar3 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0x1e,(MethodInfo *)0x0);
    (__this->fields).CFFDDAOKBME = iVar3;
    return;
  }
LAB_0332e274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x322E404]
// DEKKGJNMFEB$$RandomizeObscuredVars @ RVA 0x322E404

void DEKKGJNMFEB__RandomizeObscuredVars(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  System_Action_GGCMECLCOMJ__o **ppSVar1;
  System_Action_GGLKHCAIGDI__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  System_Collections_Generic_List_GGCMECLCOMJ__o *__this_01;
  System_Action_GGLKHCAIGDI__o *action;
  System_Action_GGCMECLCOMJ__o *action_00;
  
  if ((DAT_04566fbe & 1) == 0) {
    FUN_01bab630(&System_Action<GGCMECLCOMJ>_TypeInfo);
    FUN_01bab630(&System_Action<GGLKHCAIGDI>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_ForEach__);
    FUN_01bab630(&Method_DEKKGJNMFEB_<>c_CEOPGMFFAAE__);
    FUN_01bab630(&Method_DEKKGJNMFEB_<>c_MILKNFHIGIM__);
    FUN_01bab630(&DEKKGJNMFEB_<>c_TypeInfo);
    DAT_04566fbe = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).CGDCBPHBFDE;
  if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action_00 = DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_0;
  if (action_00 == (System_Action_GGCMECLCOMJ__o *)0x0) {
    if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DEKKGJNMFEB_<>c_TypeInfo,method);
    }
    action_00 = (System_Action_GGCMECLCOMJ__o *)
                thunk_FUN_01bda818(System_Action<GGCMECLCOMJ>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<GGCMECLCOMJ>_ForEach__);
    __this_00 = (__this->fields).OKIANCELJJF;
    if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_1;
    if (action == (System_Action_GGLKHCAIGDI__o *)0x0) {
      if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_GGLKHCAIGDI__o *)
               thunk_FUN_01bda818(System_Action<GGLKHCAIGDI>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_1;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_00 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<GGLKHCAIGDI>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GGLKHCAIGDI LDGJEEGACHJ(string AFKICLAFDKC)  [RVA 0x322D51C]
// DEKKGJNMFEB$$LDGJEEGACHJ @ RVA 0x322D51C

GGLKHCAIGDI_o *
DEKKGJNMFEB__LDGJEEGACHJ(DEKKGJNMFEB_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  GGLKHCAIGDI_o *pGVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fbf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    DAT_04566fbf = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OKIANCELJJF;
  if (__this_00 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    pGVar2 = (GGLKHCAIGDI_o *)local_48.fields._current;
    if (!bVar1) {
      pGVar2 = (GGLKHCAIGDI_o *)0x0;
      break;
    }
    if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((GGLKHCAIGDI_Fields *)((long)local_48.fields._current + 0x10))->
                       _COIPKAKHDFP_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
  return pGVar2;
}


// ===== public List<GGLKHCAIGDI> NFKLPHNDMNO(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x322CFD4]
// DEKKGJNMFEB$$NFKLPHNDMNO @ RVA 0x322CFD4

System_Collections_Generic_List_GGLKHCAIGDI__o *
DEKKGJNMFEB__NFKLPHNDMNO(DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_01;
  GGLKHCAIGDI_array *pGVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566fc0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
    DAT_04566fc0 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_GGLKHCAIGDI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
  __this_01 = (__this->fields).OKIANCELJJF;
  if (__this_01 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
      item = local_60.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
        return __this_00;
      }
      if ((GGLKHCAIGDI_o *)local_60.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = GGLKHCAIGDI__ODLAALGANOO
                        ((GGLKHCAIGDI_o *)local_60.fields._current,NKCMBEFHFII,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__;
    } while (!bVar3);
    if (__this_00 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pGVar4 == (GGLKHCAIGDI_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pGVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pGVar4->m_Items[(int)uVar1] = (GGLKHCAIGDI_o *)item;
      thunk_FUN_01c20e04(pGVar4->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static DEKKGJNMFEB AIHNLLGNBLC()  [RVA 0x322E5C4]
// DEKKGJNMFEB$$AIHNLLGNBLC @ RVA 0x322E5C4

DEKKGJNMFEB_o * DEKKGJNMFEB__AIHNLLGNBLC(MethodInfo *method)

{
  DEKKGJNMFEB_o *__this;
  DEKKGJNMFEB_o **ppDVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04566fc1 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_04566fc1 = 1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DEKKGJNMFEB_TypeInfo->static_fields->KNOHKIKFEBL == (DEKKGJNMFEB_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    __this = auVar2._0_8_;
    DEKKGJNMFEB___ctor(__this,auVar2._8_8_);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppDVar1 = &DEKKGJNMFEB_TypeInfo->static_fields->KNOHKIKFEBL;
    *ppDVar1 = __this;
    thunk_FUN_01c20e04(ppDVar1,__this);
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DEKKGJNMFEB_TypeInfo->static_fields->KNOHKIKFEBL;
}


// ===== public int HNBCOIJFCCA(int EBDDELGICGB)  [RVA 0x322E66C]
// DEKKGJNMFEB$$HNBCOIJFCCA @ RVA 0x322E66C

int32_t DEKKGJNMFEB__HNBCOIJFCCA(DEKKGJNMFEB_o *__this,int32_t EBDDELGICGB,MethodInfo *method)

{
  int32_t iVar1;
  GGCMECLCOMJ_o *pGVar2;
  
  pGVar2 = DEKKGJNMFEB__HPIGDJLAKAG(__this,EBDDELGICGB,method);
  if (pGVar2 != (GGCMECLCOMJ_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pGVar2->fields)._AJBLFMPFEIO_k__BackingField.fields,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


// ===== public AMJMGFCCAKN BEENALLFOCN(string AFKICLAFDKC)  [RVA 0x322E694]
// DEKKGJNMFEB$$BEENALLFOCN @ RVA 0x322E694

AMJMGFCCAKN_o *
DEKKGJNMFEB__BEENALLFOCN(DEKKGJNMFEB_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_array *pSVar3;
  GGHCLMEFIGO_o *__this_00;
  Roster_o *pAVar4;
  GGLKHCAIGDI_o *pGVar5;
  int iVar6;
  System_String_o *b;
  System_String_o *KGLJICLJHEL;
  AMJMGFCCAKN_o *pAVar7;
  
  if ((DAT_04566fc2 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (DEKKGJNMFEB_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566fc2 = 1;
  }
  if (AFKICLAFDKC != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(AFKICLAFDKC,0x7c,0,(MethodInfo *)0x0);
    __this = (DEKKGJNMFEB_o *)(NLPJLHOEAOE_c *)0x0;
    if (pSVar3 != (System_String_array *)0x0) {
      if (pSVar3->max_length == 0) {
        return (AMJMGFCCAKN_o *)0x0;
      }
      iVar6 = (int)pSVar3->max_length;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      ppSVar1 = pSVar3->m_Items + 1;
      if (iVar6 < 2) {
        ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      KGLJICLJHEL = pSVar3->m_Items[0];
      b = *ppSVar1;
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (DEKKGJNMFEB_o *)NLPJLHOEAOE_TypeInfo;
      if (pAVar4 != (Roster_o *)0x0) {
        __this_00 = (pAVar4->fields).OIDPLCLELEN;
        __this = (DEKKGJNMFEB_o *)0x0;
        if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
          __this = (DEKKGJNMFEB_o *)
                   GGHCLMEFIGO__JNFIBDBHNOA(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_c *)__this == (NLPJLHOEAOE_c *)0x0) {
            return (AMJMGFCCAKN_o *)0x0;
          }
          pAVar7 = (((NLPJLHOEAOE_c *)__this)->_1).events;
          if (pAVar7 == (AMJMGFCCAKN_o *)0x0) {
            return (AMJMGFCCAKN_o *)0x0;
          }
          pGVar5 = (pAVar7->fields).PHAGOJCOMPN;
          if (pGVar5 != (GGLKHCAIGDI_o *)0x0) {
            bVar2 = System_String__op_Inequality
                              ((pGVar5->fields)._COIPKAKHDFP_k__BackingField,b,(MethodInfo *)0x0);
            if (!bVar2) {
              return pAVar7;
            }
            return (AMJMGFCCAKN_o *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public bool IKBILKIMBCB(AMJMGFCCAKN LIMHKIDICNM)  [RVA 0x322E7D0]
// DEKKGJNMFEB$$IKBILKIMBCB @ RVA 0x322E7D0

bool DEKKGJNMFEB__IKBILKIMBCB(DEKKGJNMFEB_o *__this,AMJMGFCCAKN_o *LIMHKIDICNM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x5;
  
  if (LIMHKIDICNM != (AMJMGFCCAKN_o *)0x0) {
    bVar1 = DEKKGJNMFEB__IKBILKIMBCB
                      (__this,(LIMHKIDICNM->fields).MNELBNHIKGH,(LIMHKIDICNM->fields).PHAGOJCOMPN,
                       (LIMHKIDICNM->fields).PFNIFGEBIAC,(LIMHKIDICNM->fields).BMPFHIJEDOD,in_x5);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IKBILKIMBCB(IGFGDDANEPE NKCMBEFHFII, GGLKHCAIGDI NDLOGJOGFCA, int DPCEFBCDHPA, int DLNKPJMDPJI)  [RVA 0x322E7F8]
// DEKKGJNMFEB$$IKBILKIMBCB @ RVA 0x322E7F8

bool DEKKGJNMFEB__IKBILKIMBCB
               (DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,GGLKHCAIGDI_o *NDLOGJOGFCA,
               int32_t DPCEFBCDHPA,int32_t DLNKPJMDPJI,MethodInfo *method)

{
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  System_Collections_Generic_List_object__o *__this_00;
  Roster_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Action_IGFGDDANEPE__o *pSVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar2;
  
  if ((DAT_04566fc3 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_18029/*"ench_before"*/);
    FUN_01bab630(&StringLiteral_20464/*"recipe"*/);
    FUN_01bab630(&StringLiteral_21887/*"user_item"*/);
    FUN_01bab630(&StringLiteral_18028/*"ench_after"*/);
    DAT_04566fc3 = 1;
  }
  if ((NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) || (NDLOGJOGFCA == (GGLKHCAIGDI_o *)0x0)) {
    return false;
  }
  AEFIPJLKAFI = GGLKHCAIGDI__KALLJLOAGJN(NDLOGJOGFCA,NKCMBEFHFII,DPCEFBCDHPA,(MethodInfo *)0x0);
  if (AEFIPJLKAFI != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
    if ((AEFIPJLKAFI->fields)._size == 0) {
      return false;
    }
    pSVar2 = (NKCMBEFHFII->fields).PAPANCDPPIF;
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar2,
               Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    IGFGDDANEPE__JJPJJDHOFLE(NKCMBEFHFII,AEFIPJLKAFI,DPCEFBCDHPA,DLNKPJMDPJI,(MethodInfo *)0x0);
    pSVar2 = (NKCMBEFHFII->fields).PAPANCDPPIF;
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                  thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
      MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_02,(MethodInfo *)0x0);
      if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_21887/*"user_item"*/,(Il2CppObject *)NKCMBEFHFII,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_20464/*"recipe"*/,(Il2CppObject *)NDLOGJOGFCA,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_18029/*"ench_before"*/,(Il2CppObject *)__this_00,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_02,StringLiteral_18028/*"ench_after"*/,(Il2CppObject *)pSVar2,
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        NFNBHPOJFNJ__NOJIAJPLOKB(0xd,(MDNLIFLBFNO_o *)__this_02,false,(MethodInfo *)0x0);
        if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar1 = DEKKGJNMFEB_TypeInfo->static_fields->BNKPDJFNJKP;
        if (pSVar1 != (System_Action_IGFGDDANEPE__o *)0x0) {
          (*(code *)(pSVar1->fields).super.super.invoke_impl)
                    ((pSVar1->fields).super.super.method_code,NKCMBEFHFII,
                     (pSVar1->fields).super.super.method);
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private GGCMECLCOMJ HPIGDJLAKAG(int DLNKPJMDPJI)  [RVA 0x322D9E4]
// DEKKGJNMFEB$$HPIGDJLAKAG @ RVA 0x322D9E4

GGCMECLCOMJ_o *
DEKKGJNMFEB__HPIGDJLAKAG(DEKKGJNMFEB_o *__this,int32_t DLNKPJMDPJI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GGCMECLCOMJ__o *__this_00;
  GGCMECLCOMJ_o *pGVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_GetEnumerator__);
    DAT_04566fc4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).CGDCBPHBFDE;
  if (__this_00 == (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGCMECLCOMJ>_GetEnumerator__);
  do {
                    /* try { // try from 0332da78 to 0342db1f has its CatchHandler @ 0332da78
                       catch() { ... } // from try @ 0332da78 with catch @ 0332da78
                       catch() { ... } // from try @ 0332dbec with catch @ 0332da78
                       catch() { ... } // from try @ 0332dc7c with catch @ 0332da78
                       catch() { ... } // from try @ 0332dc84 with catch @ 0332da78
                       catch() { ... } // from try @ 0332dd30 with catch @ 0332da78 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_MoveNext__);
    pGVar2 = (GGCMECLCOMJ_o *)local_48.fields._current;
    if (!bVar1) {
      pGVar2 = (GGCMECLCOMJ_o *)0x0;
      break;
    }
    if ((GGCMECLCOMJ_o *)local_48.fields._current == (GGCMECLCOMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = GGCMECLCOMJ__CBPCNDJFEGO
                      ((GGCMECLCOMJ_o *)local_48.fields._current,DLNKPJMDPJI,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_Dispose__);
  return pGVar2;
}


// ===== public bool OFPFCKJCHNF(IGFGDDANEPE NKCMBEFHFII, GGLKHCAIGDI NDLOGJOGFCA, int DPCEFBCDHPA, int DLNKPJMDPJI)  [RVA 0x322EA98]
// DEKKGJNMFEB$$OFPFCKJCHNF @ RVA 0x322EA98

bool DEKKGJNMFEB__OFPFCKJCHNF
               (DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,GGLKHCAIGDI_o *NDLOGJOGFCA,
               int32_t DPCEFBCDHPA,int32_t DLNKPJMDPJI,MethodInfo *method)

{
  bool bVar1;
  
  if (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0) {
    bVar1 = GGLKHCAIGDI__MBCCHBNAJKA(NDLOGJOGFCA,NKCMBEFHFII,DPCEFBCDHPA,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

