// TypeDefIndex 1827
// Namespace: 
// public class FPPKHNNABAD : IComparable<FPPKHNNABAD>
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private string <GPEFIOMJHNN>k__BackingField; // 0x18
//   private MEMHEPBAJJA <FIEEJDGCLKH>k__BackingField; // 0x20
//   private FPPKHNNABAD.KLPGOGDHDEJ <GJKDJKAKJAP>k__BackingField; // 0x28
//   private Action<FPPKHNNABAD> BHHLJDLBINB; // 0x30
//   private Action<FPPKHNNABAD> PGLCKHPHLLG; // 0x38
//   public readonly List<KFKFNDEJLKK> AFFIHBMACFF; // 0x40
//   public readonly List<LEGDPJHPEOB> KPFGHBEKJIM; // 0x48
//   private readonly Dictionary<string, MEMHEPBAJJA.HIAEDCDJJDJ> KCIMMPDKPME; // 0x50
//   private readonly List<IBNHAGICAJF> HABPKHKCKLH; // 0x58
//   private readonly List<string> OOOHAAJIABL; // 0x60
//   private readonly List<string> CFJKNPOBAEF; // 0x68
//   private LCKCDEKNLOA LBCPFBBIBCL; // 0x70
//   private IBNHAGICAJF PNLEGFKJAAC; // 0x78
//   private int FOLGBCADEPP; // 0x80
//   public int EAFPDFHFBOM; // 0x84
//   public int BMOEBMJAGAF; // 0x88
//   public bool JEEOCBMEBND; // 0x8C
//   public CHMHHMKEBIP FBCOPFLPMED; // 0x90

// ===== public List<MEMHEPBAJJA.HIAEDCDJJDJ.DebugReport> HELILNPCOFA()  [RVA 0x321E9A4]
// FPPKHNNABAD$$HELILNPCOFA @ RVA 0x321E9A4

System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *
FPPKHNNABAD__HELILNPCOFA(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *item;
  MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_array *pMVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04566f1f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_Add__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
                    /* try { // try from 0331ea28 to 0341eabb has its CatchHandler @ 0331ea28
                       catch() { ... } // from try @ 0331ea28 with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eac4 with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eb0c with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eb30 with catch @ 0331ea28
                       catch() { ... } // from try @ 0331eb68 with catch @ 0331ea28 */
    FUN_01bab630(&System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_GetEnumerator__
                );
    DAT_04566f1f = 1;
  }
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._currentValue = (Il2CppObject *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME;
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                      (pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Count__
                      );
    if (iVar4 < 1) {
      pSVar6 = (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo
                                 );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
      return pSVar6;
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME
    ;
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      iVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                        (pSVar5,
                         Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Count__
                        );
      pSVar6 = (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo
                                 );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar6,iVar4,
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).KCIMMPDKPME;
                    /* try { // try from 0331eabc to 0341eac3 has its CatchHandler @ 0331eb14 */
                    /* try { // try from 0331eac4 to 0341eb07 has its CatchHandler @ 0331ea28 */
      if ((pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                                (pSVar5,
                                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Values__
                                ),
         __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
      {
        System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_GetEnumerator__
                  );
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._dictionary = local_68.fields._dictionary;
        local_50.fields._currentValue = local_68.fields._currentValue;
        while( true ) {
                    /* try { // try from 0331eb08 to 0341eb0b has its CatchHandler @ 0331eb10 */
                    /* try { // try from 0331eb0c to 0341eb2b has its CatchHandler @ 0331ea28 */
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_MoveNext__
                            );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331eb08 with catch @ 0331eb10
                        */
          if (!bVar3) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Dispose__
                      );
            return pSVar6;
          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331eabc with catch @ 0331eb14
                        */
          if ((MEMHEPBAJJA_HIAEDCDJJDJ_o *)local_50.fields._currentValue ==
              (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item = MEMHEPBAJJA_HIAEDCDJJDJ__OIOHNFFMGLE
                           ((MEMHEPBAJJA_HIAEDCDJJDJ_o *)local_50.fields._currentValue,
                            (MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_Add__;
          if (pSVar6 == (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
                        0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0331eb2c to 0341eb2f has its CatchHandler @ 0331eb58 */
                    /* try { // try from 0331eb30 to 0341eb5f has its CatchHandler @ 0331ea28 */
          pMVar7 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pMVar7 == (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_array *)0x0) break;
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pMVar7->max_length) {
                    /* catch() { ... } // from try @ 0331eb2c with catch @ 0331eb58 */
            (pSVar6->fields)._size = uVar1 + 1;
                    /* try { // try from 0331eb60 to 0341eb67 has its CatchHandler @ 0331eb7c */
            pMVar7->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
                    /* try { // try from 0331eb68 to 0341eb73 has its CatchHandler @ 0331ea28 */
          }
          else {
                    /* try { // try from 0331eb74 to 0341eb7b has its CatchHandler @ 0331eb7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0331eb60 with catch @ 0331eb7c
                       catch(type#2 @ 00000000) { ... } // from try @ 0331eb74 with catch @ 0331eb7c
                        */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FPPKHNNABAD.KLPGOGDHDEJ GLODHPEBMPA()  [RVA 0x321EC58]
// FPPKHNNABAD$$GLODHPEBMPA @ RVA 0x321EC58

int32_t FPPKHNNABAD__GLODHPEBMPA(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GJKDJKAKJAP_k__BackingField;
}


// ===== public static bool LFHPFJOAJIO(FPPKHNNABAD OFBDKKMPCMI, FPPKHNNABAD LINAFPMIPBM)  [RVA 0x321EC60]
// FPPKHNNABAD$$LFHPFJOAJIO @ RVA 0x321EC60

bool FPPKHNNABAD__LFHPFJOAJIO
               (FPPKHNNABAD_o *OFBDKKMPCMI,FPPKHNNABAD_o *LINAFPMIPBM,MethodInfo *method)

{
  bool bVar1;
  
  if (OFBDKKMPCMI == LINAFPMIPBM) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((OFBDKKMPCMI != (FPPKHNNABAD_o *)0x0) && (LINAFPMIPBM != (FPPKHNNABAD_o *)0x0)) {
      bVar1 = System_String__op_Equality
                        ((OFBDKKMPCMI->fields)._COIPKAKHDFP_k__BackingField,
                         (LINAFPMIPBM->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__op_Equality
                          ((OFBDKKMPCMI->fields)._GPEFIOMJHNN_k__BackingField,
                           (LINAFPMIPBM->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== public MEMHEPBAJJA.HIAEDCDJJDJ FDBCKDLEGEH(string FDHGPAPAPDF)  [RVA 0x321ECC8]
// FPPKHNNABAD$$FDBCKDLEGEH @ RVA 0x321ECC8

MEMHEPBAJJA_HIAEDCDJJDJ_o *
FPPKHNNABAD__FDBCKDLEGEH(FPPKHNNABAD_o *__this,System_String_o *FDHGPAPAPDF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar3;
  
  if ((DAT_04566f20 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                );
    DAT_04566f20 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)FDHGPAPAPDF,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar3 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)FDHGPAPAPDF,
                          Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_get_Item__
                         );
      return pMVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IKDPMKOIDMP(PKHMIGFEJCL AAJBIMFNMBB, bool PKAHIAJELCG)  [RVA 0x321ED5C]
// FPPKHNNABAD$$IKDPMKOIDMP @ RVA 0x321ED5C

void FPPKHNNABAD__IKDPMKOIDMP
               (FPPKHNNABAD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,bool PKAHIAJELCG,MethodInfo *method
               )

{
  int32_t iVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *message;
  MEMHEPBAJJA_o *__this_02;
  LCKCDEKNLOA_o *pLVar2;
  
  if ((DAT_04566f21 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
    FUN_01bab630(&StringLiteral_534/*" started"*/);
    FUN_01bab630(&StringLiteral_10643/*"Quest "*/);
                    /* try { // try from 0331edb8 to 0341eef3 has its CatchHandler @ 0331edb8
                       catch() { ... } // from try @ 0331edb8 with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f0ac with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f1a4 with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f1ac with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f298 with catch @ 0331edb8 */
    DAT_04566f21 = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageStartedToRun
              (__this_00,__this,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).KCIMMPDKPME;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (__this_01,
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
      message = System_String__Concat
                          (StringLiteral_10643/*"Quest "*/,(__this->fields)._COIPKAKHDFP_k__BackingField,
                           StringLiteral_534/*" started"*/,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).LBCPFBBIBCL;
      (__this->fields)._GJKDJKAKJAP_k__BackingField = 1;
      if (PKAHIAJELCG) {
        __this_02 = (__this->fields)._FIEEJDGCLKH_k__BackingField;
        iVar1 = 0;
        if (__this_02 != (MEMHEPBAJJA_o *)0x0) {
          iVar1 = MEMHEPBAJJA__OJBDPLCMPFA(__this_02,(MethodInfo *)0x0);
        }
      }
      else {
        iVar1 = 0;
      }
      if (pLVar2 != (LCKCDEKNLOA_o *)0x0) {
        (pLVar2->fields).KMCAGKMDGBB = iVar1;
        pLVar2 = (__this->fields).LBCPFBBIBCL;
        if (pLVar2 != (LCKCDEKNLOA_o *)0x0) {
          LCKCDEKNLOA__MAHFCKJGBPP(pLVar2,AAJBIMFNMBB,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PKHMIGFEJCL EMPPAJLALBO()  [RVA 0x321EE94]
// FPPKHNNABAD$$EMPPAJLALBO @ RVA 0x321EE94

PKHMIGFEJCL_o * FPPKHNNABAD__EMPPAJLALBO(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  PKHMIGFEJCL_o *pPVar1;
  MethodInfo *in_x2;
  MEMHEPBAJJA_o *pMVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566f22 & 1) == 0) {
    auVar3 = FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    DAT_04566f22 = 1;
  }
  pMVar2 = (__this->fields)._FIEEJDGCLKH_k__BackingField;
  if (pMVar2 != (MEMHEPBAJJA_o *)0x0) {
    pPVar1 = FPPKHNNABAD__LGJMJMJJGIM
                       (auVar3._0_8_,(pMVar2->fields)._JNLLKNHOBDG_k__BackingField,in_x2);
    return pPVar1;
  }
  pPVar1 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo,auVar3._8_8_);
  PKHMIGFEJCL___ctor(pPVar1,(MethodInfo *)0x0);
                    /* try { // try from 0331eef4 to 0341ef1b has its CatchHandler @ 0331f1dc */
  return pPVar1;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x321EFF4]
// FPPKHNNABAD$$HCOCAAIGNNL @ RVA 0x321EFF4

void FPPKHNNABAD__HCOCAAIGNNL(FPPKHNNABAD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 0331eff8 to 0341efff has its CatchHandler @ 0331f1d4 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public void CCHEJCDCGFE(MEMHEPBAJJA.HIAEDCDJJDJ ECGIMBNBIMM, string FDHGPAPAPDF)  [RVA 0x321EFFC]
// FPPKHNNABAD$$CCHEJCDCGFE @ RVA 0x321EFFC

void FPPKHNNABAD__CCHEJCDCGFE
               (FPPKHNNABAD_o *__this,MEMHEPBAJJA_HIAEDCDJJDJ_o *ECGIMBNBIMM,
               System_String_o *FDHGPAPAPDF,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_o *message;
  
                    /* try { // try from 0331f008 to 0341f00f has its CatchHandler @ 0331f1c4 */
                    /* try { // try from 0331f010 to 0341f01b has its CatchHandler @ 0331f1c8 */
  if ((DAT_04566f23 & 1) == 0) {
                    /* try { // try from 0331f028 to 0341f0ab has its CatchHandler @ 0331f1e8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                );
    FUN_01bab630(&StringLiteral_2836/*"Already registered LocalVariable.Name = "*/);
    DAT_04566f23 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)FDHGPAPAPDF,
                       Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_ContainsKey__
                      );
    if (bVar1) {
      message = System_String__Concat(StringLiteral_2836/*"Already registered LocalVariable.Name = "*/,FDHGPAPAPDF,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0331f0ac to 0341f187 has its CatchHandler @ 0331edb8 */
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KCIMMPDKPME
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)FDHGPAPAPDF,(Il2CppObject *)ECGIMBNBIMM,
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Add__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KFKFNDEJLKK INCPDCLNGNJ(string HIHCBMNGGEO)  [RVA 0x321F0F8]
// FPPKHNNABAD$$INCPDCLNGNJ @ RVA 0x321F0F8

KFKFNDEJLKK_o *
FPPKHNNABAD__INCPDCLNGNJ(FPPKHNNABAD_o *__this,System_String_o *HIHCBMNGGEO,MethodInfo *method)

{
  int32_t HIHCBMNGGEO_00;
  KFKFNDEJLKK_o *pKVar1;
  
  HIHCBMNGGEO_00 = KFKFNDEJLKK__PLKDFGDHJKE(HIHCBMNGGEO,(MethodInfo *)0x0);
  pKVar1 = FPPKHNNABAD__INCPDCLNGNJ(__this,HIHCBMNGGEO_00,method);
  return pKVar1;
}


// ===== public override string ToString()  [RVA 0x321F274]
// FPPKHNNABAD$$ToString @ RVA 0x321F274

System_String_o * FPPKHNNABAD__ToString(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  
  if ((DAT_04566f24 & 1) == 0) {
                    /* try { // try from 0331f298 to 0341f2a3 has its CatchHandler @ 0331edb8 */
    FUN_01bab630(&StringLiteral_167/*" "*/);
                    /* try { // try from 0331f2a4 to 0341f2ab has its CatchHandler @ 0331f2ac */
    DAT_04566f24 = 1;
  }
  str0 = (__this->fields)._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 0331f228 with catch @ 0331f2ac
                       catch() { ... } // from try @ 0331f2a4 with catch @ 0331f2ac */
  pSVar1 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(str0,StringLiteral_167/*" "*/,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void GHPJIHEBELJ(XmlNode FNCCDFGKLAN)  [RVA 0x321F2D4]
// FPPKHNNABAD$$GHPJIHEBELJ @ RVA 0x321F2D4

void FPPKHNNABAD__GHPJIHEBELJ
               (FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *FNCCDFGKLAN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  KFKFNDEJLKK_o *__this_00;
  KFKFNDEJLKK_array *pKVar5;
  int iVar6;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_01;
  
  if ((DAT_04566f25 & 1) == 0) {
    FUN_01bab630(&KFKFNDEJLKK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_TrimExcess__);
    DAT_04566f25 = 1;
  }
  if (FNCCDFGKLAN == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (FNCCDFGKLAN,(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 != (long *)0x0) {
    iVar6 = 0;
    do {
      iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      __this_01 = (__this->fields).AFFIHBMACFF;
      if (iVar3 <= iVar6) {
        if (__this_01 != (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) {
          System_Collections_Generic_List<object>__TrimExcess
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     Method_System_Collections_Generic_List<KFKFNDEJLKK>_TrimExcess__);
          return;
        }
        break;
      }
      plVar4 = (long *)(*(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (FNCCDFGKLAN,(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 == (long *)0x0) break;
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar4 + 0x1c8))(plVar4,iVar6,*(undefined8 *)(*plVar4 + 0x1d0));
      __this_00 = (KFKFNDEJLKK_o *)thunk_FUN_01bda818(KFKFNDEJLKK_TypeInfo);
      KFKFNDEJLKK___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<KFKFNDEJLKK>_Add__;
      if (__this_01 == (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) break;
      pKVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pKVar5 == (KFKFNDEJLKK_array *)0x0) break;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pKVar5->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pKVar5->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar6 + 1;
      plVar4 = (long *)(*(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (FNCCDFGKLAN,(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.method
                                 );
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool LOAEDHBBCFC()  [RVA 0x321F480]
// FPPKHNNABAD$$LOAEDHBBCFC @ RVA 0x321F480

bool FPPKHNNABAD__LOAEDHBBCFC(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  ACHLOMELAJE_o *__this_02;
  MEMHEPBAJJA_o *__this_03;
  
  if ((DAT_04566f26 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f26 = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageEndedToRun(__this_00,__this,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).KCIMMPDKPME;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (__this_01,
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
      __this_03 = (__this->fields)._FIEEJDGCLKH_k__BackingField;
      (__this->fields)._GJKDJKAKJAP_k__BackingField = 2;
      if (__this_03 != (MEMHEPBAJJA_o *)0x0) {
        MEMHEPBAJJA__MAMEMHEFIKB(__this_03,(MethodInfo *)0x0);
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
        __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_02 == (ACHLOMELAJE_o *)0x0) goto LAB_0331f57c;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
      }
      return __this_03 != (MEMHEPBAJJA_o *)0x0;
    }
  }
LAB_0331f57c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HAFNHPBMIBI(Action<FPPKHNNABAD> CJNHFNHJHPE)  [RVA 0x321F580]
// FPPKHNNABAD$$HAFNHPBMIBI @ RVA 0x321F580

void FPPKHNNABAD__HAFNHPBMIBI
               (FPPKHNNABAD_o *__this,System_Action_FPPKHNNABAD__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FPPKHNNABAD__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FPPKHNNABAD__o *pSVar5;
  System_Action_FPPKHNNABAD__o **ppSVar6;
  System_Action_FPPKHNNABAD__o *source;
  
  if ((DAT_04566f27 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    DAT_04566f27 = 1;
  }
  ppSVar6 = &(__this->fields).BHHLJDLBINB;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FPPKHNNABAD>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FPPKHNNABAD>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FPPKHNNABAD__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool CMPFBCCGBGK(string HIHCBMNGGEO)  [RVA 0x321F630]
// FPPKHNNABAD$$CMPFBCCGBGK @ RVA 0x321F630

bool FPPKHNNABAD__CMPFBCCGBGK(FPPKHNNABAD_o *__this,System_String_o *HIHCBMNGGEO,MethodInfo *method)

{
  int32_t HIHCBMNGGEO_00;
  KFKFNDEJLKK_o *pKVar1;
  
  HIHCBMNGGEO_00 = KFKFNDEJLKK__PLKDFGDHJKE(HIHCBMNGGEO,(MethodInfo *)0x0);
  pKVar1 = FPPKHNNABAD__INCPDCLNGNJ(__this,HIHCBMNGGEO_00,method);
  return pKVar1 != (KFKFNDEJLKK_o *)0x0;
}


// ===== public bool KEAKFNDNBGH()  [RVA 0x321F678]
// FPPKHNNABAD$$KEAKFNDNBGH @ RVA 0x321F678

bool FPPKHNNABAD__KEAKFNDNBGH(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).BMOEBMJAGAF;
}


// ===== private void OPECGOMJLLP(XmlNode NPLGCIFGFOK)  [RVA 0x321F688]
// FPPKHNNABAD$$OPECGOMJLLP @ RVA 0x321F688

void FPPKHNNABAD__OPECGOMJLLP
               (FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  IBNHAGICAJF_o **ppIVar1;
  byte bVar2;
  uint uVar3;
  System_Action_c *pSVar4;
  IBNHAGICAJF_c *pIVar5;
  int32_t iVar6;
  int iVar7;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar8;
  long *plVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Action_o *pSVar10;
  IBNHAGICAJF_o *pIVar11;
  System_Delegate_o *pSVar12;
  long lVar13;
  System_Collections_Generic_List_IBNHAGICAJF__o *pSVar14;
  ACHLOMELAJE_o *__this_01;
  MEMHEPBAJJA_o *pMVar15;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  IBNHAGICAJF_array *pIVar16;
  MEMHEPBAJJA_o **ppMVar17;
  LCKCDEKNLOA_o *pLVar18;
  System_Action_o **ppSVar19;
  int DPJIDNBJIBG;
  System_Action_MEMHEPBAJJA__o **ppSVar20;
  System_Action_MEMHEPBAJJA__o *pSVar21;
  System_Action_MEMHEPBAJJA__c *pSVar22;
  
  if ((DAT_04566f28 & 1) == 0) {
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FPPKHNNABAD_EKJDIBEOCDF__);
    FUN_01bab630(&Method_FPPKHNNABAD_NBHELNKAKNN__);
    FUN_01bab630(&IBNHAGICAJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IBNHAGICAJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IBNHAGICAJF>_TrimExcess__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8819/*"Map"*/);
    FUN_01bab630(&StringLiteral_10280/*"Place"*/);
    DAT_04566f28 = 1;
  }
  if (NPLGCIFGFOK == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  __this_00 = (System_Xml_XmlAttributeCollection_o *)
              (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                        (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
  if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_10280/*"Place"*/,(MethodInfo *)0x0);
    pSVar8 = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,StringLiteral_8819/*"Map"*/,(MethodInfo *)0x0);
    iVar6 = FPPKHNNABAD__KBMJOICLEHN(pSVar8,method_00);
    (__this->fields).FOLGBCADEPP = iVar6;
    plVar9 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
    if (plVar9 != (long *)0x0) {
      DPJIDNBJIBG = 0;
      ppIVar1 = &(__this->fields).PNLEGFKJAAC;
      do {
        iVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        if (iVar7 <= DPJIDNBJIBG) {
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
          if (__this_01 != (ACHLOMELAJE_o *)0x0) {
            pMVar15 = ACHLOMELAJE__ECALNOBINKI
                                (__this_01,(__this->fields)._COIPKAKHDFP_k__BackingField,
                                 (MethodInfo *)0x0);
            ppMVar17 = &(__this->fields)._FIEEJDGCLKH_k__BackingField;
            *ppMVar17 = pMVar15;
            thunk_FUN_01c20e04(ppMVar17,pMVar15);
            pLVar18 = (__this->fields).LBCPFBBIBCL;
            if (pLVar18 != (LCKCDEKNLOA_o *)0x0) {
              ppSVar19 = &(pLVar18->fields).BHHLJDLBINB;
              pSVar10 = *ppSVar19;
              pSVar12 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              pSVar10 = (System_Action_o *)
                        System_Delegate__Combine
                                  ((System_Delegate_o *)pSVar10,pSVar12,(MethodInfo *)0x0);
              pSVar4 = System_Action_TypeInfo;
              if (pSVar10 == (System_Action_o *)0x0) {
                *ppSVar19 = (System_Action_o *)0x0;
              }
              else if ((pSVar10->klass != System_Action_TypeInfo) ||
                      (*ppSVar19 = pSVar10, pSVar10->klass != pSVar4)) goto LAB_0331fabc;
              thunk_FUN_01c20e04(ppSVar19,pSVar10);
              pLVar18 = (__this->fields).LBCPFBBIBCL;
              if (pLVar18 != (LCKCDEKNLOA_o *)0x0) {
                LCKCDEKNLOA__LEOHNCOCKCI(pLVar18,(MethodInfo *)0x0);
                pSVar14 = (__this->fields).HABPKHKCKLH;
                if (pSVar14 != (System_Collections_Generic_List_IBNHAGICAJF__o *)0x0) {
                  System_Collections_Generic_List<object>__TrimExcess
                            ((System_Collections_Generic_List_object__o *)pSVar14,
                             Method_System_Collections_Generic_List<IBNHAGICAJF>_TrimExcess__);
                  return;
                }
              }
            }
          }
          break;
        }
        plVar9 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (NPLGCIFGFOK,
                                    (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
        if (plVar9 == (long *)0x0) break;
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar9 + 0x1c8))
                                (plVar9,DPJIDNBJIBG,*(undefined8 *)(*plVar9 + 0x1d0));
        if (DPJIDNBJIBG == 0) {
          pSVar10 = (System_Action_o *)
                    PFLBGCPNEIM__EOHMFJFFFIN
                              (5,(__this->fields)._COIPKAKHDFP_k__BackingField,__this,AHDGNOJPPIB,
                               (MethodInfo *)0x0);
          pIVar5 = IBNHAGICAJF_TypeInfo;
          if (pSVar10 == (System_Action_o *)0x0) {
            *ppIVar1 = (IBNHAGICAJF_o *)0x0;
          }
          else {
            bVar2 = (IBNHAGICAJF_TypeInfo->_2).naturalAligment;
            if (((pSVar10->klass->_2).naturalAligment < bVar2) ||
               ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)IBNHAGICAJF_TypeInfo)) {
LAB_0331fabc:
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar10);
            }
            *ppIVar1 = (IBNHAGICAJF_o *)pSVar10;
            if (((pSVar10->klass->_2).naturalAligment < bVar2) ||
               ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pIVar5))
            goto LAB_0331fabc;
          }
          thunk_FUN_01c20e04(ppIVar1,pSVar10);
          pIVar11 = (__this->fields).PNLEGFKJAAC;
          if (pIVar11 == (IBNHAGICAJF_o *)0x0) break;
          (pIVar11->fields).super.JPCLFPPBNNN = (__this->fields)._GPEFIOMJHNN_k__BackingField;
          thunk_FUN_01c20e04();
          pIVar11 = *ppIVar1;
          if (pIVar11 == (IBNHAGICAJF_o *)0x0) break;
          ppSVar20 = &(pIVar11->fields).super.EKJDIBEOCDF;
          pSVar21 = *ppSVar20;
          (pIVar11->fields).super.HLFBMBHOPMI = 0;
          (pIVar11->fields).super.EAJHGODFKID = (__this->fields).FOLGBCADEPP;
          pSVar12 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo);
          System_Action<object>___ctor();
          pSVar12 = System_Delegate__Combine((System_Delegate_o *)pSVar21,pSVar12,(MethodInfo *)0x0)
          ;
          pSVar22 = System_Action<MEMHEPBAJJA>_TypeInfo;
          if (pSVar12 == (System_Delegate_o *)0x0) {
            lVar13 = 0;
            *ppSVar20 = (System_Action_MEMHEPBAJJA__o *)0x0;
          }
          else {
            pSVar21 = (System_Action_MEMHEPBAJJA__o *)
                      thunk_FUN_01bda71c(pSVar12,System_Action<MEMHEPBAJJA>_TypeInfo);
            if (pSVar21 == (System_Action_MEMHEPBAJJA__o *)0x0) {
LAB_0331fb30:
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar12,pSVar22);
            }
            *ppSVar20 = pSVar21;
            pSVar22 = System_Action<MEMHEPBAJJA>_TypeInfo;
            lVar13 = thunk_FUN_01bda71c(pSVar12,System_Action<MEMHEPBAJJA>_TypeInfo);
            if (lVar13 == 0) goto LAB_0331fb30;
          }
          thunk_FUN_01c20e04(ppSVar20,lVar13);
          lVar13 = Method_System_Collections_Generic_List<IBNHAGICAJF>_Add__;
          pSVar14 = (__this->fields).HABPKHKCKLH;
          if (pSVar14 == (System_Collections_Generic_List_IBNHAGICAJF__o *)0x0) break;
          pIVar11 = (__this->fields).PNLEGFKJAAC;
          pIVar16 = (pSVar14->fields)._items;
          (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
          if (pIVar16 == (IBNHAGICAJF_array *)0x0) break;
          uVar3 = (pSVar14->fields)._size;
          if (uVar3 < (uint)pIVar16->max_length) {
            (pSVar14->fields)._size = uVar3 + 1;
            pIVar16->m_Items[(int)uVar3] = pIVar11;
            thunk_FUN_01c20e04(pIVar16->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pIVar11,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) break;
        pSVar8 = (System_String_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        FPPKHNNABAD__IBDGPMDNGNG
                  (__this,pSVar8,AHDGNOJPPIB,(__this->fields).LBCPFBBIBCL,DPJIDNBJIBG,in_x5);
        DPJIDNBJIBG = DPJIDNBJIBG + 1;
        plVar9 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (NPLGCIFGFOK,
                                    (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
      } while (plVar9 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<KFKFNDEJLKK> MMBNFGNNPCC()  [RVA 0x321FC80]
// FPPKHNNABAD$$MMBNFGNNPCC @ RVA 0x321FC80

System_Collections_Generic_List_KFKFNDEJLKK__o *
FPPKHNNABAD__MMBNFGNNPCC(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0;
}


// ===== public KFKFNDEJLKK INCPDCLNGNJ(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x321F11C]
// FPPKHNNABAD$$INCPDCLNGNJ @ RVA 0x321F11C

KFKFNDEJLKK_o *
FPPKHNNABAD__INCPDCLNGNJ(FPPKHNNABAD_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_00;
  KFKFNDEJLKK_o *pKVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566f29 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_GetEnumerator__);
    DAT_04566f29 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AFFIHBMACFF;
  if (__this_00 == (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0331f200 to 0341f203 has its CatchHandler @ 0331f218 */
    FUN_01bab8c8();
  }
                    /* try { // try from 0331f188 to 0341f18f has its CatchHandler @ 0331f1e4 */
                    /* try { // try from 0331f190 to 0341f193 has its CatchHandler @ 0331f1cc */
                    /* try { // try from 0331f194 to 0341f197 has its CatchHandler @ 0331f1e4 */
                    /* try { // try from 0331f198 to 0341f19b has its CatchHandler @ 0331f1bc */
                    /* try { // try from 0331f19c to 0341f1a3 has its CatchHandler @ 0331f1e0 */
                    /* try { // try from 0331f1a4 to 0341f1a7 has its CatchHandler @ 0331edb8 */
                    /* try { // try from 0331f1a8 to 0341f1ab has its CatchHandler @ 0331f1b4 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFKFNDEJLKK>_GetEnumerator__);
  do {
                    /* try { // try from 0331f1ac to 0341f1ff has its CatchHandler @ 0331edb8 */
                    /* catch() { ... } // from try @ 0331f1a8 with catch @ 0331f1b4 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_MoveNext__);
                    /* catch() { ... } // from try @ 0331efdc with catch @ 0331f1b8 */
    if (!bVar1) {
                    /* catch() { ... } // from try @ 0331eff8 with catch @ 0331f1d4 */
      pKVar2 = (KFKFNDEJLKK_o *)0x0;
      break;
    }
                    /* catch() { ... } // from try @ 0331f198 with catch @ 0331f1bc */
                    /* catch() { ... } // from try @ 0331efd4 with catch @ 0331f1c0 */
    if ((KFKFNDEJLKK_o *)local_48.fields._current == (KFKFNDEJLKK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0331f008 with catch @ 0331f1c4 */
                    /* catch() { ... } // from try @ 0331f010 with catch @ 0331f1c8 */
    pKVar2 = (KFKFNDEJLKK_o *)local_48.fields._current;
                    /* catch() { ... } // from try @ 0331f190 with catch @ 0331f1cc */
  } while (((KFKFNDEJLKK_Fields *)((long)local_48.fields._current + 0x10))->BGHFADDGPAD !=
           HIHCBMNGGEO);
                    /* catch() { ... } // from try @ 0331ef50 with catch @ 0331f1d8 */
                    /* catch() { ... } // from try @ 0331eef4 with catch @ 0331f1dc */
                    /* catch() { ... } // from try @ 0331f19c with catch @ 0331f1e0 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<KFKFNDEJLKK>_Dispose__);
                    /* catch() { ... } // from try @ 0331f188 with catch @ 0331f1e4
                       catch() { ... } // from try @ 0331f194 with catch @ 0331f1e4 */
                    /* catch() { ... } // from try @ 0331f028 with catch @ 0331f1e8 */
  return pKVar2;
}


// ===== private void JNGPANGKBCF(FPPKHNNABAD.KLPGOGDHDEJ CJNHFNHJHPE)  [RVA 0x321FC88]
// FPPKHNNABAD$$JNGPANGKBCF @ RVA 0x321FC88

void FPPKHNNABAD__JNGPANGKBCF(FPPKHNNABAD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GJKDJKAKJAP_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool GAKCJNGGBFC(List<string> DECKEOBBCMP)  [RVA 0x321FC90]
// FPPKHNNABAD$$GAKCJNGGBFC @ RVA 0x321FC90

/* WARNING: Removing unreachable block (ram,0x0331fe68) */

bool FPPKHNNABAD__GAKCJNGGBFC
               (FPPKHNNABAD_o *__this,System_Collections_Generic_List_string__o *DECKEOBBCMP,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_01;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566f2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04566f2a = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (DECKEOBBCMP == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)DECKEOBBCMP,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    __this_00 = local_60.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    __this_01 = (__this->fields).CFJKNPOBAEF;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_0331fdb8;
      }
      if ((System_String_o *)__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__Equals
                        ((System_String_o *)__this_00,(System_String_o *)local_80.fields._current,
                         (MethodInfo *)0x0);
    } while (!bVar1);
    bVar2 = 1;
    uVar3 = 6;
LAB_0331fdb8:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}


// ===== public static int KBMJOICLEHN(string CJNHFNHJHPE)  [RVA 0x321FB3C]
// FPPKHNNABAD$$KBMJOICLEHN @ RVA 0x321FB3C

int32_t FPPKHNNABAD__KBMJOICLEHN(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = CJNHFNHJHPE;
  if ((DAT_04566f2b & 1) == 0) {
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_5455/*"Dojo"*/);
    auVar3 = FUN_01bab630(&StringLiteral_8819/*"Map"*/);
    DAT_04566f2b = 1;
  }
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  bVar1 = System_String__Equals(CJNHFNHJHPE,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 6;
  }
  else {
    bVar1 = System_String__Equals(CJNHFNHJHPE,StringLiteral_5455/*"Dojo"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 3;
    }
    else {
      bVar1 = System_String__Equals(CJNHFNHJHPE,StringLiteral_8819/*"Map"*/,(MethodInfo *)0x0);
      iVar2 = 5;
      if (!bVar1) {
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}


// ===== public bool ICLGDHGNCBP(Type ELBMPDIHAHA)  [RVA 0x321FEF8]
// FPPKHNNABAD$$ICLGDHGNCBP @ RVA 0x321FEF8

bool FPPKHNNABAD__ICLGDHGNCBP(FPPKHNNABAD_o *__this,System_Type_o *ELBMPDIHAHA,MethodInfo *method)

{
  void **ppvVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  System_Func_TSource__bool__o *pSVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  FPPKHNNABAD_o *pFVar7;
  LCKCDEKNLOA_o *pLVar8;
  int iVar9;
  System_Collections_Generic_List_BOFEMGGNODC__o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566f2c & 1) == 0) {
    FUN_01bab630(&AEFLBOOACFE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<BOFEMGGNODC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_get_Current__);
    FUN_01bab630(&System_Func<BOFEMGGNODC,_bool>_TypeInfo);
    FUN_01bab630(&Method_FPPKHNNABAD_KEBLPKFOJNI_HBCPAGHAAAJ__);
    FUN_01bab630(&Method_FPPKHNNABAD_KEBLPKFOJNI_OAHPGDEEAMB__);
    FUN_01bab630(&FPPKHNNABAD_KEBLPKFOJNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
    DAT_04566f2c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(FPPKHNNABAD_KEBLPKFOJNI_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[1].klass = (Il2CppClass *)ELBMPDIHAHA;
    thunk_FUN_01c20e04(pIVar5 + 1,ELBMPDIHAHA);
    pLVar8 = (__this->fields).LBCPFBBIBCL;
    if (pLVar8 != (LCKCDEKNLOA_o *)0x0) {
      pSVar10 = (pLVar8->fields).NEIJJHEFLHP;
      pSVar6 = (System_Func_TSource__bool__o *)
               thunk_FUN_01bda818(System_Func<BOFEMGGNODC,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      bVar3 = System_Linq_Enumerable__Any<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar6,
                         Method_System_Linq_Enumerable_Any<BOFEMGGNODC>__);
      if (bVar3) {
        bVar3 = true;
      }
      else {
        pLVar8 = (__this->fields).LBCPFBBIBCL;
        if ((pLVar8 == (LCKCDEKNLOA_o *)0x0) ||
           (pSVar10 = (pLVar8->fields).NEIJJHEFLHP,
           pSVar10 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_03320190;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar10,
                   Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        ppvVar1 = &pIVar5[1].monitor;
        do {
          do {
            do {
              do {
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_80,
                                   Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__
                                  );
                pIVar5 = local_80.fields._current;
                if (!bVar3) {
                  iVar9 = 7;
                  goto LAB_03320150;
                }
              } while (local_80.fields._current == (Il2CppObject *)0x0);
              bVar2 = (AEFLBOOACFE_TypeInfo->_2).naturalAligment;
            } while ((((local_80.fields._current)->klass->_2).naturalAligment < bVar2) ||
                    (((local_80.fields._current)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                     (Il2CppClass *)AEFLBOOACFE_TypeInfo));
            __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pFVar7 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                               (__this_00,pIVar5[6].monitor,(MethodInfo *)0x0);
          } while (pFVar7 == (FPPKHNNABAD_o *)0x0);
          pLVar8 = (pFVar7->fields).LBCPFBBIBCL;
          if (pLVar8 == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = *ppvVar1;
          pSVar10 = (pLVar8->fields).NEIJJHEFLHP;
          if (pSVar6 == (System_Func_TSource__bool__o *)0x0) {
            pSVar6 = (System_Func_TSource__bool__o *)
                     thunk_FUN_01bda818(System_Func<BOFEMGGNODC,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            *ppvVar1 = pSVar6;
            thunk_FUN_01c20e04(ppvVar1,pSVar6);
          }
          bVar4 = System_Linq_Enumerable__Any<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar6,
                             Method_System_Linq_Enumerable_Any<BOFEMGGNODC>__);
        } while (!bVar4);
        iVar9 = 6;
LAB_03320150:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
        bVar3 = bVar3 && iVar9 == 6;
      }
      return bVar3;
    }
  }
LAB_03320190:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void MLJDPILPJDE(XmlNode IIBFFEPEHPF, List<LEGDPJHPEOB> HPACPFLKHPK)  [RVA 0x322023C]
// FPPKHNNABAD$$MLJDPILPJDE @ RVA 0x322023C

/* WARNING: Removing unreachable block (ram,0x0332066c) */

void FPPKHNNABAD__MLJDPILPJDE
               (System_Xml_XmlNode_o *IIBFFEPEHPF,
               System_Collections_Generic_List_LEGDPJHPEOB__o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  LEGDPJHPEOB_o *pLVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *IIBFFEPEHPF_00;
  MethodInfo *method_00;
  LEGDPJHPEOB_array *pLVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04566f2d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrimExcess__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566f2d = 1;
  }
  if (IIBFFEPEHPF == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (iVar3 == 1) {
      plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._18_get_FirstChild.methodPtr)
                                 (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._18_get_FirstChild.method
                                 );
      if (plVar4 == (long *)0x0) goto LAB_03320664;
      iVar3 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if (iVar3 == 3) {
        pLVar5 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
        LEGDPJHPEOB___ctor(pLVar5,(MethodInfo *)0x0);
        if ((pLVar5 != (LEGDPJHPEOB_o *)0x0) &&
           ((*(pLVar5->klass->vtable)._6_HNIHOIAMDPC.methodPtr)
                      (pLVar5,IIBFFEPEHPF,(pLVar5->klass->vtable)._6_HNIHOIAMDPC.method),
           lVar8 = Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__,
           HPACPFLKHPK != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0)) {
          pLVar7 = (HPACPFLKHPK->fields)._items;
          (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
          if (pLVar7 != (LEGDPJHPEOB_array *)0x0) {
            uVar2 = (HPACPFLKHPK->fields)._size;
            if (uVar2 < (uint)pLVar7->max_length) {
              (HPACPFLKHPK->fields)._size = uVar2 + 1;
              pLVar7->m_Items[(int)uVar2] = pLVar5;
              thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar2,pLVar5);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                         (Il2CppObject *)pLVar5,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_0332060c;
          }
        }
        goto LAB_03320664;
      }
    }
    plVar4 = (long *)(*(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0332042c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0332042c:
        uVar9 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_03320604;
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_033205c4;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_033205ac;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0332048c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0332048c:
        IIBFFEPEHPF_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (IIBFFEPEHPF_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((IIBFFEPEHPF_00->klass->_2).naturalAligment < bVar1) ||
             ((IIBFFEPEHPF_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(IIBFFEPEHPF_00);
          }
        }
        pLVar5 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
        LEGDPJHPEOB___ctor(pLVar5,(MethodInfo *)0x0);
        if (pLVar5 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (pLVar5->klass->vtable)._6_HNIHOIAMDPC.method;
        (*(pLVar5->klass->vtable)._6_HNIHOIAMDPC.methodPtr)(pLVar5,IIBFFEPEHPF_00);
        if ((pLVar5->fields).ACCIHBHMFPN == 6) {
          FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF_00,(pLVar5->fields).AHEFOIOKDOK,method_00);
        }
        lVar8 = Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__;
        if (HPACPFLKHPK == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pLVar7 = (HPACPFLKHPK->fields)._items;
        (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
        if (pLVar7 == (LEGDPJHPEOB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (HPACPFLKHPK->fields)._size;
        if (uVar2 < (uint)pLVar7->max_length) {
          (HPACPFLKHPK->fields)._size = uVar2 + 1;
          pLVar7->m_Items[(int)uVar2] = pLVar5;
          thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar2,pLVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,(Il2CppObject *)pLVar5
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  goto LAB_03320664;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_033205ac:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_033205f8;
    }
  }
LAB_033205c4:
  puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033205f8:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_03320604:
  if (HPACPFLKHPK != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
LAB_0332060c:
    System_Collections_Generic_List<object>__TrimExcess
              ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
               Method_System_Collections_Generic_List<LEGDPJHPEOB>_TrimExcess__);
    return;
  }
LAB_03320664:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<LEGDPJHPEOB> EDELKHPPNCM()  [RVA 0x322074C]
// FPPKHNNABAD$$EDELKHPPNCM @ RVA 0x322074C

System_Collections_Generic_List_LEGDPJHPEOB__o *
FPPKHNNABAD__EDELKHPPNCM(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0;
}


// ===== private void IBDGPMDNGNG(string DCBFDDELGMI, XmlNode AHDGNOJPPIB, LCKCDEKNLOA HPACPFLKHPK, int DPJIDNBJIBG)  [RVA 0x321FC00]
// FPPKHNNABAD$$IBDGPMDNGNG @ RVA 0x321FC00

void FPPKHNNABAD__IBDGPMDNGNG
               (FPPKHNNABAD_o *__this,System_String_o *DCBFDDELGMI,System_Xml_XmlNode_o *AHDGNOJPPIB
               ,LCKCDEKNLOA_o *HPACPFLKHPK,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  BOFEMGGNODC_o *CPECAEHDDDB;
  System_String_o **ppSVar1;
  
  CPECAEHDDDB = PFLBGCPNEIM__EOHMFJFFFIN
                          (DCBFDDELGMI,(__this->fields)._COIPKAKHDFP_k__BackingField,__this,
                           AHDGNOJPPIB,(MethodInfo *)0x0);
  if (CPECAEHDDDB != (BOFEMGGNODC_o *)0x0) {
    ppSVar1 = &(CPECAEHDDDB->fields).JPCLFPPBNNN;
    *ppSVar1 = (__this->fields)._GPEFIOMJHNN_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    (CPECAEHDDDB->fields).HLFBMBHOPMI = DPJIDNBJIBG;
    (CPECAEHDDDB->fields).EAJHGODFKID = (__this->fields).FOLGBCADEPP;
    if (HPACPFLKHPK != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__IEFEBMICIHN(HPACPFLKHPK,CPECAEHDDDB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CNCNKEOHACM(XmlNode IMDMDPMLEKD)  [RVA 0x3220754]
// FPPKHNNABAD$$CNCNKEOHACM @ RVA 0x3220754

void FPPKHNNABAD__CNCNKEOHACM
               (FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *IMDMDPMLEKD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *item;
  System_String_array *pSVar5;
  int iVar6;
  System_Collections_Generic_List_string__o *__this_01;
  
  if ((DAT_04566f2e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_TrimExcess__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04566f2e = 1;
  }
  if (IMDMDPMLEKD == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (IMDMDPMLEKD,(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 != (long *)0x0) {
    iVar6 = 0;
    while( true ) {
      iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      __this_01 = (__this->fields).OOOHAAJIABL;
      if (iVar3 <= iVar6) break;
      plVar4 = (long *)(*(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (IMDMDPMLEKD,(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (((plVar4 == (long *)0x0) ||
          (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                      (plVar4,iVar6,*(undefined8 *)(*plVar4 + 0x1d0)),
          plVar4 == (long *)0x0)) ||
         (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
         __this_00 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_033208fc;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      item = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033208fc;
      pSVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar5 == (System_String_array *)0x0) goto LAB_033208fc;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar6 + 1;
      plVar4 = (long *)(*(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (IMDMDPMLEKD,(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 == (long *)0x0) goto LAB_033208fc;
    }
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__TrimExcess
                ((System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<string>_TrimExcess__);
      return;
    }
  }
LAB_033208fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EEKKKOODDLI(string CJNHFNHJHPE)  [RVA 0x3220900]
// FPPKHNNABAD$$EEKKKOODDLI @ RVA 0x3220900

void FPPKHNNABAD__EEKKKOODDLI(FPPKHNNABAD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GPEFIOMJHNN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int CompareTo(FPPKHNNABAD IBKIPBJJCPG)  [RVA 0x3220908]
// FPPKHNNABAD$$CompareTo @ RVA 0x3220908

int32_t FPPKHNNABAD__CompareTo(FPPKHNNABAD_o *__this,FPPKHNNABAD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((__this->fields)._GJKDJKAKJAP_k__BackingField == 1) {
    if (IBKIPBJJCPG == (FPPKHNNABAD_o *)0x0) {
LAB_03320964:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((IBKIPBJJCPG->fields)._GJKDJKAKJAP_k__BackingField == 1) {
LAB_0332094c:
      iVar1 = System_Int32__CompareTo
                        ((int)IBKIPBJJCPG + 0x84,(__this->fields).EAFPDFHFBOM,(MethodInfo *)0x0);
      return iVar1;
    }
    iVar1 = 1;
  }
  else {
    if (IBKIPBJJCPG == (FPPKHNNABAD_o *)0x0) goto LAB_03320964;
    if ((IBKIPBJJCPG->fields)._GJKDJKAKJAP_k__BackingField != 1) goto LAB_0332094c;
    iVar1 = -1;
  }
  return iVar1;
}


// ===== public void MLKGFGDCLIF(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3220968]
// FPPKHNNABAD$$MLKGFGDCLIF @ RVA 0x3220968

void FPPKHNNABAD__MLKGFGDCLIF(FPPKHNNABAD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  IBNHAGICAJF_o *__this_00;
  
  __this_00 = (__this->fields).PNLEGFKJAAC;
  if (__this_00 != (IBNHAGICAJF_o *)0x0) {
    IBNHAGICAJF__FNAIOKENLCA(__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public FPPKHNNABAD.KLPGOGDHDEJ IFJOLFPNNJF(string CJNHFNHJHPE)  [RVA 0x322097C]
// FPPKHNNABAD$$IFJOLFPNNJF @ RVA 0x322097C

int32_t FPPKHNNABAD__IFJOLFPNNJF
                  (FPPKHNNABAD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566f2f & 1) == 0) {
    FUN_01bab630(&StringLiteral_3697/*"COMPLETE"*/);
    FUN_01bab630(&StringLiteral_2616/*"ACTIONS"*/);
    FUN_01bab630(&StringLiteral_14167/*"UNCOMPLETE"*/);
    DAT_04566f2f = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_14167/*"UNCOMPLETE"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_2616/*"ACTIONS"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_3697/*"COMPLETE"*/,(MethodInfo *)0x0);
      iVar2 = 2;
      if (!bVar1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


// ===== public MEMHEPBAJJA DCKENKLEGFN()  [RVA 0x3220A38]
// FPPKHNNABAD$$DCKENKLEGFN @ RVA 0x3220A38

MEMHEPBAJJA_o * FPPKHNNABAD__DCKENKLEGFN(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (__this->fields)._FIEEJDGCLKH_k__BackingField;
}


// ===== public string JCPIPEJAIAC()  [RVA 0x3220A40]
// FPPKHNNABAD$$JCPIPEJAIAC @ RVA 0x3220A40

System_String_o * FPPKHNNABAD__JCPIPEJAIAC(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (__this->fields)._GPEFIOMJHNN_k__BackingField;
}


// ===== public string GPCLEGELKIL(FPPKHNNABAD.KLPGOGDHDEJ CJNHFNHJHPE)  [RVA 0x3220A48]
// FPPKHNNABAD$$GPCLEGELKIL @ RVA 0x3220A48

System_String_o *
FPPKHNNABAD__GPCLEGELKIL(FPPKHNNABAD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566f30 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3697/*"COMPLETE"*/);
    FUN_01bab630(&StringLiteral_2616/*"ACTIONS"*/);
    FUN_01bab630(&StringLiteral_14167/*"UNCOMPLETE"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566f30 = 1;
  }
  if ((uint)CJNHFNHJHPE < 3) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_14167/*"UNCOMPLETE"*/_03fc6568)[CJNHFNHJHPE];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public LCKCDEKNLOA HELIKPINEIM()  [RVA 0x3220AC8]
// FPPKHNNABAD$$HELIKPINEIM @ RVA 0x3220AC8

LCKCDEKNLOA_o * FPPKHNNABAD__HELIKPINEIM(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (LCKCDEKNLOA_o *)0x0;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, string LFGKEPCBPKF)  [RVA 0x3220AD0]
// FPPKHNNABAD$$.ctor @ RVA 0x3220AD0

void FPPKHNNABAD___ctor(FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Action_FPPKHNNABAD__o **ppSVar5;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_00;
  System_Collections_Generic_List_KFKFNDEJLKK__o **ppSVar6;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_01;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_string__MEMHEPBAJJA_HIAEDCDJJDJ__o **ppSVar8;
  System_Collections_Generic_List_IBNHAGICAJF__o *__this_03;
  System_Collections_Generic_List_IBNHAGICAJF__o **ppSVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  System_Collections_Generic_List_string__o **ppSVar11;
  LCKCDEKNLOA_o *__this_04;
  LCKCDEKNLOA_o **ppLVar12;
  System_Xml_XmlAttributeCollection_o *pSVar13;
  System_Xml_XmlAttribute_o *pSVar14;
  System_String_o *pSVar15;
  System_Xml_XmlNode_o *pSVar16;
  MethodInfo *pMVar17;
  System_String_array *pSVar18;
  System_Action_FPPKHNNABAD__o *pSVar19;
  
  if ((DAT_04566f31 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_TypeInfo);
    FUN_01bab630(&Method_GIAMPEGMNHE_OFNFLPIIAAD<CHMHHMKEBIP>__);
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_TrimExcess__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IBNHAGICAJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IBNHAGICAJF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KFKFNDEJLKK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_FPPKHNNABAD_<>c_AACKEMPJLGA__);
    FUN_01bab630(&Method_FPPKHNNABAD_<>c_EPCFMPGEDGE__);
    FUN_01bab630(&FPPKHNNABAD_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_2731/*"Actions"*/);
    FUN_01bab630(&StringLiteral_6684/*"GameMode"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_6922/*"Group"*/);
    FUN_01bab630(&StringLiteral_14541/*"Unresumable"*/);
    FUN_01bab630(&StringLiteral_2824/*"AllowDoubles"*/);
    FUN_01bab630(&StringLiteral_8853/*"Marks"*/);
    FUN_01bab630(&StringLiteral_10470/*"Priority"*/);
    FUN_01bab630(&StringLiteral_5995/*"Events"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566f31 = 1;
  }
  if ((FPPKHNNABAD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar19 = FPPKHNNABAD_<>c_TypeInfo->static_fields->__9__35_0;
  if (pSVar19 == (System_Action_FPPKHNNABAD__o *)0x0) {
    if ((FPPKHNNABAD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar19 = (System_Action_FPPKHNNABAD__o *)
              thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar5 = &FPPKHNNABAD_<>c_TypeInfo->static_fields->__9__35_0;
    *ppSVar5 = pSVar19;
    thunk_FUN_01c20e04(ppSVar5,pSVar19);
  }
  if (__this != (FPPKHNNABAD_o *)0x0) {
    ppSVar5 = &(__this->fields).BHHLJDLBINB;
    *ppSVar5 = pSVar19;
    thunk_FUN_01c20e04(ppSVar5,pSVar19);
    if ((FPPKHNNABAD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar19 = FPPKHNNABAD_<>c_TypeInfo->static_fields->__9__35_1;
    if (pSVar19 == (System_Action_FPPKHNNABAD__o *)0x0) {
      if ((FPPKHNNABAD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar19 = (System_Action_FPPKHNNABAD__o *)
                thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar5 = &FPPKHNNABAD_<>c_TypeInfo->static_fields->__9__35_1;
      *ppSVar5 = pSVar19;
      thunk_FUN_01c20e04(ppSVar5,pSVar19);
    }
    ppSVar5 = &(__this->fields).PGLCKHPHLLG;
    *ppSVar5 = pSVar19;
    thunk_FUN_01c20e04(ppSVar5,pSVar19);
    __this_00 = (System_Collections_Generic_List_KFKFNDEJLKK__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<KFKFNDEJLKK>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<KFKFNDEJLKK>__ctor__);
    ppSVar6 = &(__this->fields).AFFIHBMACFF;
    *ppSVar6 = __this_00;
    thunk_FUN_01c20e04(ppSVar6,__this_00);
    __this_01 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    ppSVar7 = &(__this->fields).KPFGHBEKJIM;
    *ppSVar7 = __this_01;
    thunk_FUN_01c20e04(ppSVar7,__this_01);
    __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this_02,
               Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>__ctor__
              );
    ppSVar8 = &(__this->fields).KCIMMPDKPME;
    *ppSVar8 = (System_Collections_Generic_Dictionary_string__MEMHEPBAJJA_HIAEDCDJJDJ__o *)__this_02
    ;
    thunk_FUN_01c20e04(ppSVar8,__this_02);
    __this_03 = (System_Collections_Generic_List_IBNHAGICAJF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IBNHAGICAJF>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_03,
               Method_System_Collections_Generic_List<IBNHAGICAJF>__ctor__);
    ppSVar9 = &(__this->fields).HABPKHKCKLH;
    *ppSVar9 = __this_03;
    thunk_FUN_01c20e04(ppSVar9,__this_03);
    pSVar10 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar10,
               Method_System_Collections_Generic_List<string>__ctor__);
    ppSVar11 = &(__this->fields).OOOHAAJIABL;
    *ppSVar11 = pSVar10;
    thunk_FUN_01c20e04(ppSVar11,pSVar10);
    pSVar10 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar10,
               Method_System_Collections_Generic_List<string>__ctor__);
    ppSVar11 = &(__this->fields).CFJKNPOBAEF;
    *ppSVar11 = pSVar10;
    thunk_FUN_01c20e04(ppSVar11,pSVar10);
    __this_04 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
    LCKCDEKNLOA___ctor(__this_04,(MethodInfo *)0x0);
    ppLVar12 = &(__this->fields).LBCPFBBIBCL;
    *ppLVar12 = __this_04;
    thunk_FUN_01c20e04(ppLVar12,__this_04);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._GPEFIOMJHNN_k__BackingField = LFGKEPCBPKF;
    thunk_FUN_01c20e04();
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar13 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
       pSVar13 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar13,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar15 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar14,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar15;
      thunk_FUN_01c20e04(&__this->fields,pSVar15);
      (__this->fields)._GJKDJKAKJAP_k__BackingField = 0;
      pSVar13 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar13 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar13,StringLiteral_10470/*"Priority"*/,(MethodInfo *)0x0);
        iVar4 = GIAMPEGMNHE__NANCFCIGNEE(pSVar14,0,(MethodInfo *)0x0);
        (__this->fields).EAFPDFHFBOM = iVar4;
        pSVar13 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar13 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar13,StringLiteral_14541/*"Unresumable"*/,(MethodInfo *)0x0);
          iVar4 = GIAMPEGMNHE__NANCFCIGNEE(pSVar14,0,(MethodInfo *)0x0);
          (__this->fields).BMOEBMJAGAF = iVar4;
          pSVar13 = (System_Xml_XmlAttributeCollection_o *)
                    (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                              (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar13 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar13,StringLiteral_2824/*"AllowDoubles"*/,(MethodInfo *)0x0);
            bVar3 = GIAMPEGMNHE__FAEBPLENEGK(pSVar14,false,(MethodInfo *)0x0);
            (__this->fields).JEEOCBMEBND = bVar3;
            pSVar13 = (System_Xml_XmlAttributeCollection_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method)
            ;
            if (pSVar13 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar13,StringLiteral_6684/*"GameMode"*/,(MethodInfo *)0x0);
              iVar4 = GIAMPEGMNHE__OFNFLPIIAAD<Int32Enum>
                                (pSVar14,1,Method_GIAMPEGMNHE_OFNFLPIIAAD<CHMHHMKEBIP>__);
              pSVar10 = (__this->fields).CFJKNPOBAEF;
              (__this->fields).FBCOPFLPMED = iVar4;
              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
              if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
                pSVar15 = (__this->fields)._COIPKAKHDFP_k__BackingField;
                pSVar18 = (pSVar10->fields)._items;
                (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
                if (pSVar18 != (System_String_array *)0x0) {
                  uVar1 = (pSVar10->fields)._size;
                  if (uVar1 < (uint)pSVar18->max_length) {
                    (pSVar10->fields)._size = uVar1 + 1;
                    pSVar18->m_Items[(int)uVar1] = pSVar15;
                    thunk_FUN_01c20e04();
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar10,
                               (Il2CppObject *)pSVar15,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar10 = *ppSVar11;
                  pSVar13 = (System_Xml_XmlAttributeCollection_o *)
                            (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                      (AHDGNOJPPIB,
                                       (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar13 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar14 = System_Xml_XmlAttributeCollection__get_ItemOf
                                        (pSVar13,StringLiteral_6922/*"Group"*/,(MethodInfo *)0x0);
                    pSVar15 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar14,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    if ((pSVar15 != (System_String_o *)0x0) &&
                       (pSVar18 = System_String__Split(pSVar15,0x7c,0,(MethodInfo *)0x0),
                       pSVar10 != (System_Collections_Generic_List_string__o *)0x0)) {
                      System_Collections_Generic_List<object>__AddRange
                                ((System_Collections_Generic_List_object__o *)pSVar10,
                                 (System_Collections_Generic_IEnumerable_T__o *)pSVar18,
                                 Method_System_Collections_Generic_List<string>_AddRange__);
                      if (*ppSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
                        System_Collections_Generic_List<object>__TrimExcess
                                  ((System_Collections_Generic_List_object__o *)*ppSVar11,
                                   Method_System_Collections_Generic_List<string>_TrimExcess__);
                        pMVar17 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
                        pSVar16 = (System_Xml_XmlNode_o *)
                                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                            (AHDGNOJPPIB,StringLiteral_5995/*"Events"*/);
                        FPPKHNNABAD__GHPJIHEBELJ(__this,pSVar16,pMVar17);
                        pMVar17 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
                        pSVar16 = (System_Xml_XmlNode_o *)
                                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                            (AHDGNOJPPIB,StringLiteral_4577/*"Conditions"*/);
                        FPPKHNNABAD__MLJDPILPJDE(pSVar16,(__this->fields).KPFGHBEKJIM,pMVar17);
                        pMVar17 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
                        pSVar16 = (System_Xml_XmlNode_o *)
                                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                            (AHDGNOJPPIB,StringLiteral_2731/*"Actions"*/);
                        FPPKHNNABAD__OPECGOMJLLP(__this,pSVar16,pMVar17);
                        pMVar17 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
                        pSVar16 = (System_Xml_XmlNode_o *)
                                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                            (AHDGNOJPPIB,StringLiteral_8853/*"Marks"*/);
                        FPPKHNNABAD__CNCNKEOHACM(__this,pSVar16,pMVar17);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OKLHPLEGCOA(Action<FPPKHNNABAD> CJNHFNHJHPE)  [RVA 0x3221250]
// FPPKHNNABAD$$OKLHPLEGCOA @ RVA 0x3221250

void FPPKHNNABAD__OKLHPLEGCOA
               (FPPKHNNABAD_o *__this,System_Action_FPPKHNNABAD__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FPPKHNNABAD__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FPPKHNNABAD__o *pSVar5;
  System_Action_FPPKHNNABAD__o **ppSVar6;
  System_Action_FPPKHNNABAD__o *source;
  
  if ((DAT_04566f32 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    DAT_04566f32 = 1;
  }
  ppSVar6 = &(__this->fields).PGLCKHPHLLG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FPPKHNNABAD>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FPPKHNNABAD>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FPPKHNNABAD__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool CMPFBCCGBGK(KFKFNDEJLKK.PCJFAKMBHCE HIHCBMNGGEO)  [RVA 0x321F660]
// FPPKHNNABAD$$CMPFBCCGBGK @ RVA 0x321F660

bool FPPKHNNABAD__CMPFBCCGBGK(FPPKHNNABAD_o *__this,int32_t HIHCBMNGGEO,MethodInfo *method)

{
  KFKFNDEJLKK_o *pKVar1;
  
  pKVar1 = FPPKHNNABAD__INCPDCLNGNJ(__this,HIHCBMNGGEO,method);
  return pKVar1 != (KFKFNDEJLKK_o *)0x0;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3221300]
// FPPKHNNABAD$$KCHJCGEMCGE @ RVA 0x3221300

System_String_o * FPPKHNNABAD__KCHJCGEMCGE(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== private void IIENPNGAFCF(MEMHEPBAJJA CJNHFNHJHPE)  [RVA 0x3221308]
// FPPKHNNABAD$$IIENPNGAFCF @ RVA 0x3221308

void FPPKHNNABAD__IIENPNGAFCF(FPPKHNNABAD_o *__this,MEMHEPBAJJA_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FIEEJDGCLKH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool AAOKDJMOBPE()  [RVA 0x3221310]
// FPPKHNNABAD$$AAOKDJMOBPE @ RVA 0x3221310

bool FPPKHNNABAD__AAOKDJMOBPE(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  int32_t KEMDLBKINAD;
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f33 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f33 = 1;
    method = extraout_x1;
  }
  KEMDLBKINAD = (__this->fields).FBCOPFLPMED;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  bVar1 = NLPJLHOEAOE__PEJHLCBNOFP(KEMDLBKINAD,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public PKHMIGFEJCL LGJMJMJJGIM(KCFIOKDFHIB JMCEAKJCJLH)  [RVA 0x321EF04]
// FPPKHNNABAD$$LGJMJMJJGIM @ RVA 0x321EF04

PKHMIGFEJCL_o *
FPPKHNNABAD__LGJMJMJJGIM(FPPKHNNABAD_o *__this,KCFIOKDFHIB_o *JMCEAKJCJLH,MethodInfo *method)

{
  PKHMIGFEJCL_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  AFFHKININGD_o *pAVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o **ppSVar3;
  undefined8 uVar4;
  
  if ((DAT_04566f34 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    DAT_04566f34 = 1;
  }
  __this_00 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo);
                    /* try { // try from 0331ef50 to 0341ef7b has its CatchHandler @ 0331f1d8 */
  PKHMIGFEJCL___ctor(__this_00,(MethodInfo *)0x0);
  if (JMCEAKJCJLH == (KCFIOKDFHIB_o *)0x0) {
                    /* try { // try from 0331efd4 to 0341efdb has its CatchHandler @ 0331f1c0 */
                    /* try { // try from 0331efdc to 0341efe7 has its CatchHandler @ 0331f1b8 */
    return __this_00;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
    pAVar1 = NLPJLHOEAOE__POGAPHAJGBC(__this_01,(JMCEAKJCJLH->fields).NPFHCGIADBL,(MethodInfo *)0x0)
    ;
    if (pAVar1 == (AFFHKININGD_o *)0x0) {
      pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    }
    else {
      pDVar2 = (pAVar1->fields).KOILJHHCIEE;
    }
    if (__this_00 != (PKHMIGFEJCL_o *)0x0) {
      (__this_00->fields).NMHCLFFOMJH = pDVar2;
      thunk_FUN_01c20e04();
      (__this_00->fields).PNPKEKHEMCD = (JMCEAKJCJLH->fields).CIKGADOJJMG;
      thunk_FUN_01c20e04();
      ppSVar3 = &(__this_00->fields).LOLFFJGLKLD;
      *ppSVar3 = (JMCEAKJCJLH->fields).LCHHKBLIBMM;
                    /* try { // try from 0331efc4 to 0341efcb has its CatchHandler @ 0331f1d0 */
      thunk_FUN_01c20e04(ppSVar3);
      uVar4._0_4_ = (JMCEAKJCJLH->fields).MJJBDELFBOM;
      uVar4._4_4_ = (JMCEAKJCJLH->fields).GMCNKDKMHII;
      uVar4 = NEON_rev64(uVar4,4);
      (__this_00->fields).CJKGLOMEOBO = (int)uVar4;
      (__this_00->fields).KADCKFHODOE = (int)((ulong)uVar4 >> 0x20);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EKJDIBEOCDF(MEMHEPBAJJA HGOFEAEOGFG)  [RVA 0x322136C]
// FPPKHNNABAD$$EKJDIBEOCDF @ RVA 0x322136C

void FPPKHNNABAD__EKJDIBEOCDF(FPPKHNNABAD_o *__this,MEMHEPBAJJA_o *HGOFEAEOGFG,MethodInfo *method)

{
  if (HGOFEAEOGFG == (MEMHEPBAJJA_o *)0x0) {
    HGOFEAEOGFG = (__this->fields)._FIEEJDGCLKH_k__BackingField;
  }
  else if (__this == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields)._FIEEJDGCLKH_k__BackingField = HGOFEAEOGFG;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void GFMODBKIPGL(Action<FPPKHNNABAD> CJNHFNHJHPE)  [RVA 0x322138C]
// FPPKHNNABAD$$GFMODBKIPGL @ RVA 0x322138C

void FPPKHNNABAD__GFMODBKIPGL
               (FPPKHNNABAD_o *__this,System_Action_FPPKHNNABAD__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FPPKHNNABAD__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FPPKHNNABAD__o *pSVar5;
  System_Action_FPPKHNNABAD__o **ppSVar6;
  System_Action_FPPKHNNABAD__o *a;
  
  if ((DAT_04566f35 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    DAT_04566f35 = 1;
  }
  ppSVar6 = &(__this->fields).PGLCKHPHLLG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FPPKHNNABAD>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FPPKHNNABAD>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FPPKHNNABAD__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool DGCODECJJCC(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x322143C]
// FPPKHNNABAD$$DGCODECJJCC @ RVA 0x322143C

bool FPPKHNNABAD__DGCODECJJCC(FPPKHNNABAD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566f36 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    DAT_04566f36 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KPFGHBEKJIM;
  if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_033214fc;
    }
    if ((LEGDPJHPEOB_o *)local_38.fields._current == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = LEGDPJHPEOB__DGCODECJJCC
                      ((LEGDPJHPEOB_o *)local_38.fields._current,AAJBIMFNMBB,(MethodInfo *)0x0);
  } while (bVar1);
  iVar2 = 4;
LAB_033214fc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
  return iVar2 != 4;
}


// ===== public void NBHELNKAKNN()  [RVA 0x32215AC]
// FPPKHNNABAD$$NBHELNKAKNN @ RVA 0x32215AC

void FPPKHNNABAD__NBHELNKAKNN(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *message;
  MethodInfo *extraout_x1;
  char *pcVar3;
  System_Action_FPPKHNNABAD__o *pSVar4;
  
  if ((DAT_04566f37 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10643/*"Quest "*/);
    FUN_01bab630(&StringLiteral_375/*" completed"*/);
    DAT_04566f37 = 1;
    method = extraout_x1;
  }
  bVar1 = FPPKHNNABAD__LOAEDHBBCFC(__this,method);
  if (bVar1) {
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    if (((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[9].klass == (Il2CppClass *)0x0)) ||
       (pcVar3 = ((pIVar2[9].klass)->_1).namespaze, pcVar3 == (char *)0x0)) goto LAB_033216e8;
    if (pcVar3[0x10] != '\0') {
      message = System_String__Concat
                          (StringLiteral_10643/*"Quest "*/,(__this->fields)._COIPKAKHDFP_k__BackingField,
                           StringLiteral_375/*" completed"*/,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).BHHLJDLBINB;
    if (pSVar4 == (System_Action_FPPKHNNABAD__o *)0x0) goto LAB_033216e8;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,__this,(pSVar4->fields).super.super.method);
  }
  pSVar4 = (__this->fields).PGLCKHPHLLG;
  if (pSVar4 != (System_Action_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033216e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,__this,(pSVar4->fields).super.super.method);
    return;
  }
LAB_033216e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EIAAJACOKDP(Action<FPPKHNNABAD> CJNHFNHJHPE)  [RVA 0x32216EC]
// FPPKHNNABAD$$EIAAJACOKDP @ RVA 0x32216EC

void FPPKHNNABAD__EIAAJACOKDP
               (FPPKHNNABAD_o *__this,System_Action_FPPKHNNABAD__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FPPKHNNABAD__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FPPKHNNABAD__o *pSVar5;
  System_Action_FPPKHNNABAD__o **ppSVar6;
  System_Action_FPPKHNNABAD__o *a;
  
  if ((DAT_04566f38 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    DAT_04566f38 = 1;
  }
  ppSVar6 = &(__this->fields).BHHLJDLBINB;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FPPKHNNABAD>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FPPKHNNABAD>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FPPKHNNABAD__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

