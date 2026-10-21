// TypeDefIndex 652
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanLogoMakerWidget : MonoBehaviour
// Fields:
//   private static bool OAABDANOODA; // 0x0
//   private LabelAlias _title; // 0x20
//   private RectTransform _clanLogoMount; // 0x28
//   private List<ClanLogoAttributeContainer> _containers; // 0x30
//   private const float AKOJCLKIFBI = 2;
//   private Action<string> MGDFLOOAIIC; // 0x38
//   private Dictionary<DFHAHEOKHFA, ClanLogoAttributeContainer> PEIHFKHLGMO; // 0x40
//   private ClanLogoImage FDOKACGMDHB; // 0x48

// ===== private void CKKHBODNDAD(List<IILNJJJFGLL> GHAAKPDHIJJ)  [RVA 0x35CE3C4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$CKKHBODNDAD @ RVA 0x35CE3C4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__CKKHBODNDAD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  GJKKGBIAPFL_o *__this_00;
  System_String_o *pSVar5;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  IILNJJJFGLL_array *pIVar8;
  int index;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar9;
  
  if ((DAT_04568fc1 & 1) == 0) {
    FUN_01bab630(&GJKKGBIAPFL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568fc1 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
      (pJVar9 = (pJVar6->fields).OOFDKPAOGFA, pJVar9 != (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0)) &&
     (pSVar7 = (pJVar9->fields).MHLCLANFAAO,
     pSVar7 != (System_Collections_Generic_List_string__o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        __this_00 = (GJKKGBIAPFL_o *)thunk_FUN_01bda818(GJKKGBIAPFL_TypeInfo);
        GJKKGBIAPFL___ctor(__this_00,(MethodInfo *)0x0);
        pSVar7 = (pJVar9->fields).MHLCLANFAAO;
        if ((pSVar7 == (System_Collections_Generic_List_string__o *)0x0) ||
           (pSVar5 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           __this_00 == (GJKKGBIAPFL_o *)0x0)) goto LAB_036ce550;
        (__this_00->fields).NLEIEAICLKM = pSVar5;
        thunk_FUN_01c20e04();
        lVar3 = Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__;
        if (GHAAKPDHIJJ == (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) goto LAB_036ce550;
        pIVar8 = (GHAAKPDHIJJ->fields)._items;
        (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
        if (pIVar8 == (IILNJJJFGLL_array *)0x0) goto LAB_036ce550;
        uVar2 = (GHAAKPDHIJJ->fields)._size;
                    /* try { // try from 036ce4f0 to 037ce4f7 has its CatchHandler @ 036ce67c */
        if (uVar2 < (uint)pIVar8->max_length) {
                    /* try { // try from 036ce4f8 to 037ce66f has its CatchHandler @ 036ce2ec */
          (GHAAKPDHIJJ->fields)._size = uVar2 + 1;
          pIVar8->m_Items[(int)uVar2] = (IILNJJJFGLL_o *)__this_00;
          thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
LAB_036ce550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetEditEnabled(bool CJNHFNHJHPE)  [RVA 0x35CE554]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$SetEditEnabled @ RVA 0x35CE554

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetEditEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04568fc2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Value__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fc2 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEIHFKHLGMO;
  if (__this_01 !=
      (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
              );
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                          );
        __this_00 = local_60.fields._current.fields.value;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                    );
                    /* try { // try from 036ce670 to 037ce673 has its CatchHandler @ 036ce678 */
                    /* try { // try from 036ce674 to 037ce693 has its CatchHandler @ 036ce2ec */
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0)
        ;
      } while (!bVar1);
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) break;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetEnabled
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00,
                 CJNHFNHJHPE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ce670 with catch @ 036ce678
                        */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ce4f0 with catch @ 036ce67c
                        */
  FUN_01bab8c8();
}


// ===== protected virtual void OnDestroy()  [RVA 0x35CE6F4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$OnDestroy @ RVA 0x35CE6F4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  System_Action_string__o **ppSVar1;
  
  ppSVar1 = &(__this->fields).MGDFLOOAIIC;
  *ppSVar1 = (System_Action_string__o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public void Init(Action<string> JFMGOBJICBG)  [RVA 0x35CE700]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$Init @ RVA 0x35CE700

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Action_string__o *JFMGOBJICBG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_Action_string__o **ppSVar2;
  System_Collections_Generic_List_ClanLogoAttributeContainer__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this_01;
  System_Action_DFHAHEOKHFA__o *DHIFOFDENGG;
  Il2CppObject *value;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_StaticFields *pNVar4;
  int index;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  
  if ((DAT_04568fc3 & 1) == 0) {
    FUN_01bab630(&System_Action<DFHAHEOKHFA>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_EHKNJIHNOGA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_set_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_get_Item__);
    FUN_01bab630(&StringLiteral_19343/*"labelClanLogo"*/);
    DAT_04568fc3 = 1;
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._title;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_19343/*"labelClanLogo"*/,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields).MGDFLOOAIIC;
    *ppSVar2 = JFMGOBJICBG;
    thunk_FUN_01c20e04(ppSVar2,JFMGOBJICBG);
    index = 0;
    do {
      pSVar3 = (__this->fields)._containers;
      if (pSVar3 == (System_Collections_Generic_List_ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar3,index,
                             Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_get_Item__
                            );
      DHIFOFDENGG = (System_Action_DFHAHEOKHFA__o *)
                    thunk_FUN_01bda818(System_Action<DFHAHEOKHFA>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0)
      goto LAB_036ce958;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__Init
                (__this_01,index,DHIFOFDENGG,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._containers;
      if (pSVar3 == (System_Collections_Generic_List_ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      __this_02 = (__this->fields).PEIHFKHLGMO;
      value = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar3,index,
                         Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_get_Item__
                        );
      if (__this_02 ==
          (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      System_Collections_Generic_Dictionary<Int32Enum,_object>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,index,value,
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_set_Item__
                );
      index = index + 1;
    } while (index != 3);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__MHCOALIEGPE(__this,method_00);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->static_fields;
    if (pNVar4->OAABDANOODA != false) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
        pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->static_fields;
      }
      pNVar4->OAABDANOODA = false;
      pSVar3 = (__this->fields)._containers;
      if (pSVar3 == (System_Collections_Generic_List_ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_GetEnumerator__)
      ;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_78,
                                Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_MoveNext__
                               ), bVar1) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
            local_78.fields._current ==
            (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ForceInvokeOnScroll
                  ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                   local_78.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_78,
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_Dispose__
                );
    }
    return;
  }
LAB_036ce958:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDEMAGDMIEB(List<IILNJJJFGLL> GHAAKPDHIJJ)  [RVA 0x35CEC54]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$NDEMAGDMIEB @ RVA 0x35CEC54

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__NDEMAGDMIEB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  AAFFHLFBLFN_o *__this_00;
  Il2CppObject *pIVar5;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *pSVar7;
  IILNJJJFGLL_array *pIVar8;
  int index;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar9;
  Il2CppClass *pIVar10;
  
  if ((DAT_04568fc4 & 1) == 0) {
    FUN_01bab630(&AAFFHLFBLFN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__);
    DAT_04568fc4 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
      (pJVar9 = (pJVar6->fields).OOFDKPAOGFA, pJVar9 != (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0)) &&
     (pSVar7 = (pJVar9->fields).DFIBIHHGIPG,
     pSVar7 != (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        __this_00 = (AAFFHLFBLFN_o *)thunk_FUN_01bda818(AAFFHLFBLFN_TypeInfo);
        AAFFHLFBLFN___ctor(__this_00,(MethodInfo *)0x0);
        pSVar7 = (pJVar9->fields).DFIBIHHGIPG;
        if ((pSVar7 == (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0) ||
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                               ), pIVar5 == (Il2CppObject *)0x0)) goto LAB_036cee0c;
        pIVar10 = pIVar5[1].klass;
        if (__this_00 == (AAFFHLFBLFN_o *)0x0) goto LAB_036cee0c;
        *(void **)&(__this_00->fields).EPLJHNBLKKI.fields.b = pIVar5[1].monitor;
        *(Il2CppClass **)&(__this_00->fields).EPLJHNBLKKI.fields = pIVar10;
        pSVar7 = (pJVar9->fields).DFIBIHHGIPG;
        if ((pSVar7 == (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0) ||
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                               ), pIVar5 == (Il2CppObject *)0x0)) goto LAB_036cee0c;
        pIVar10 = pIVar5[2].klass;
        *(void **)&(__this_00->fields).GKKDMAOLODL.fields.b = pIVar5[2].monitor;
        *(Il2CppClass **)&(__this_00->fields).GKKDMAOLODL.fields = pIVar10;
        lVar3 = Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__;
        if (GHAAKPDHIJJ == (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) goto LAB_036cee0c;
        pIVar8 = (GHAAKPDHIJJ->fields)._items;
        (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
        if (pIVar8 == (IILNJJJFGLL_array *)0x0) goto LAB_036cee0c;
        uVar2 = (GHAAKPDHIJJ->fields)._size;
        if (uVar2 < (uint)pIVar8->max_length) {
          (GHAAKPDHIJJ->fields)._size = uVar2 + 1;
          pIVar8->m_Items[(int)uVar2] = (IILNJJJFGLL_o *)__this_00;
          thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
LAB_036cee0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnLogoChanged(Action<string> CJNHFNHJHPE)  [RVA 0x35CEE10]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$remove_OnLogoChanged @ RVA 0x35CEE10

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__remove_OnLogoChanged
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_04568fc5 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04568fc5 = 1;
  }
  ppSVar6 = &(__this->fields).MGDFLOOAIIC;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void MHCOALIEGPE()  [RVA 0x35CE9DC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$MHCOALIEGPE @ RVA 0x35CE9DC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__MHCOALIEGPE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  float DCJJPCIHILE;
  float LOJINJPNGHH;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a0;
  
  if ((DAT_04568fc6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo);
    DAT_04568fc6 = 1;
    method = extraout_x1;
  }
  local_a0.fields._getEnumeratorRetType = 0;
  local_a0.fields._36_4_ = 0;
  local_a0.fields._version = 0;
  local_a0.fields._index = 0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a0.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEIHFKHLGMO;
  if (__this_01 !=
      (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_c8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
              );
    local_a0.fields._version = local_c8.fields._version;
    local_a0.fields._index = local_c8.fields._index;
    local_a0.fields._dictionary = local_c8.fields._dictionary;
    local_a0.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_a0.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_a0.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_a0.fields._36_4_ = local_c8.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                        );
      __this_00 = local_a0.fields._current.fields.value;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                  );
        return;
      }
      iVar1 = (int)local_a0.fields._current.fields.key;
      __this_02 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_02,Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
      LOJINJPNGHH = 1.0;
      if (iVar1 == 0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__CKKHBODNDAD
                  (__this_03,(System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,in_x2);
        DCJJPCIHILE = 0.62;
      }
      else if (iVar1 == 1) {
        LOJINJPNGHH = 1.25;
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__DDBNGGDJOPK
                  (__this_03,(System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,in_x2);
        DCJJPCIHILE = 0.7;
      }
      else {
        LOJINJPNGHH = 1.0;
        DCJJPCIHILE = 0.6;
        if (iVar1 == 2) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__NDEMAGDMIEB
                    (__this_03,(System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,in_x2);
          LOJINJPNGHH = 0.81;
          DCJJPCIHILE = 0.59;
        }
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) break;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetFocusesScales
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00,
                 LOJINJPNGHH,DCJJPCIHILE,(MethodInfo *)0x0);
      in_x2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetItems
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00,
                 (System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void add_OnLogoChanged(Action<string> CJNHFNHJHPE)  [RVA 0x35CF050]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$add_OnLogoChanged @ RVA 0x35CF050

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__add_OnLogoChanged
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04568fc7 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04568fc7 = 1;
  }
  ppSVar6 = &(__this->fields).MGDFLOOAIIC;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void EHKNJIHNOGA(DFHAHEOKHFA NFIICLCMEHI)  [RVA 0x35CF100]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$EHKNJIHNOGA @ RVA 0x35CF100

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__EHKNJIHNOGA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,int32_t NFIICLCMEHI,
               MethodInfo *method)

{
  int32_t value;
  int32_t iVar1;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this_02;
  System_String_o *NEJHIEOHMCF;
  MethodInfo *method_00;
  System_Action_string__o *pSVar2;
  int key;
  
  if ((DAT_04568fc8 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                 ,NFIICLCMEHI);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1154/*","*/);
    DAT_04568fc8 = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,0x10,(MethodInfo *)0x0);
  key = 0;
  while ((__this_01 = (__this->fields).PEIHFKHLGMO,
         __this_01 !=
         (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0 &&
         (__this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                      System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                 key,
                                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                                ),
         __this_02 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0))) {
    value = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetCurrentItemLogicIndex
                      (__this_02,(MethodInfo *)0x0);
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) break;
    iVar1 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
    if (0 < iVar1) {
      System_Text_StringBuilder__Append(__this_00,StringLiteral_1154/*","*/,(MethodInfo *)0x0);
    }
    method_00 = (MethodInfo *)0x0;
    System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
    key = key + 1;
    if (key == 3) {
      NEJHIEOHMCF = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__FKFPKOGCLFP
                (__this,NEJHIEOHMCF,method_00);
      pSVar2 = (__this->fields).MGDFLOOAIIC;
      if (pSVar2 != (System_Action_string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036cf230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,NEJHIEOHMCF,
                   (pSVar2->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKFPKOGCLFP(string NEJHIEOHMCF)  [RVA 0x35CF24C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$FKFPKOGCLFP @ RVA 0x35CF24C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__FKFPKOGCLFP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *ODNJEHJPBGA;
  ClanLogoImage_o **ppCVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04568fc9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fc9 = 1;
  }
  ppCVar2 = &(__this->fields).FDOKACGMDHB;
  pCVar3 = *ppCVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._clanLogoMount;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      ODNJEHJPBGA = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pCVar3 = KFCFGKEHPNK__LEIGOOFFFPE(ODNJEHJPBGA,NEJHIEOHMCF,0,2.0,(MethodInfo *)0x0);
      *ppCVar2 = pCVar3;
      thunk_FUN_01c20e04(ppCVar2,pCVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar2,NEJHIEOHMCF,0,2.0,(MethodInfo *)0x0);
  return;
}


// ===== private string KBKOLEJMGAB()  [RVA 0x35CF31C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$KBKOLEJMGAB @ RVA 0x35CF31C

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__KBKOLEJMGAB
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  System_Text_StringBuilder_o *__this_01;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04568fca & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_1154/*","*/);
    DAT_04568fca = 1;
    method = extraout_x1;
  }
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._currentValue = (Il2CppObject *)0x0;
  __this_01 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_01,0x10,(MethodInfo *)0x0);
  __this_02 = (__this->fields).PEIHFKHLGMO;
  if ((__this_02 !=
       (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0) &&
     (__this_03 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                             Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Values__
                            ),
     __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<Int32Enum,_object>__GetEnumerator
              (&local_68,__this_03,
               Method_System_Collections_Generic_Dictionary_ValueCollection<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
              );
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._dictionary = local_68.fields._dictionary;
    local_50.fields._currentValue = local_68.fields._currentValue;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                        );
      __this_00 = local_50.fields._currentValue;
      if (!bVar1) break;
      if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = System_Text_StringBuilder__get_Length(__this_01,(MethodInfo *)0x0);
      if (0 < iVar2) {
        System_Text_StringBuilder__Append(__this_01,StringLiteral_1154/*","*/,(MethodInfo *)0x0);
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetItemsCount
                        ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00
                         ,(MethodInfo *)0x0);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      System_Text_StringBuilder__Append(__this_01,iVar3 >> 1,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
              );
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                         (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetIcon(string NEJHIEOHMCF)  [RVA 0x35CF538]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$SetIcon @ RVA 0x35CF538

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetIcon
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar7;
  ulong uVar8;
  
  if ((DAT_04568fcb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fcb = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pMVar7 = extraout_x1;
  if (bVar3) {
LAB_036cf5ac:
    NEJHIEOHMCF = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__KBKOLEJMGAB(__this,pMVar7);
    if (NEJHIEOHMCF == (System_String_o *)0x0) goto LAB_036cf6d8;
  }
  else {
    if (NEJHIEOHMCF == (System_String_o *)0x0) goto LAB_036cf6d8;
    bVar3 = System_String__Contains(NEJHIEOHMCF,0x2c,(MethodInfo *)0x0);
    pMVar7 = extraout_x1_00;
    if (!bVar3) goto LAB_036cf5ac;
  }
  pMVar7 = (MethodInfo *)0x0;
  pSVar6 = System_String__Split(NEJHIEOHMCF,0x2c,0,(MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    uVar4 = (uint)pSVar6->max_length;
    uVar2 = uVar4;
    if (2 < (int)uVar4) {
      uVar2 = 3;
    }
    if (0 < (int)uVar4) {
      uVar8 = 0;
      if ((int)uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        __this_00 = (__this->fields).PEIHFKHLGMO;
        if (__this_00 ==
            (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0)
        goto LAB_036cf6d8;
        __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                    System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (int32_t)uVar8,
                               Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                              );
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        pMVar7 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          if ((uint)pSVar6->max_length <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar4 = PCOEHCPGBBG__JBGCINPPLAC(pSVar6->m_Items[uVar8],0,(MethodInfo *)0x0);
          if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0)
          goto LAB_036cf6d8;
          iVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetItemsCount
                            (__this_01,(MethodInfo *)0x0);
          iVar1 = iVar5;
          if (iVar5 < 0) {
            iVar1 = iVar5 + 1;
          }
          if (iVar5 <= (int)uVar4 || 0x7fffffff < uVar4) {
            uVar4 = iVar1 >> 1;
          }
          pMVar7 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ScrollToItem
                    (__this_01,uVar4,(MethodInfo *)0x0);
        }
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__FKFPKOGCLFP(__this,NEJHIEOHMCF,pMVar7);
    return;
  }
LAB_036cf6d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35CF6E0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$.cctor @ RVA 0x35CF6E0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget___cctor(MethodInfo *method)

{
  if ((DAT_04568fcc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo);
    DAT_04568fcc = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->static_fields->OAABDANOODA = true;
  return;
}


// ===== public void .ctor()  [RVA 0x35CF72C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$.ctor @ RVA 0x35CF72C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_00;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fcd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_TypeInfo
                );
    DAT_04568fcd = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>__ctor__
            );
  ppSVar1 = &(__this->fields).PEIHFKHLGMO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void DDBNGGDJOPK(List<IILNJJJFGLL> GHAAKPDHIJJ)  [RVA 0x35CEEC0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$DDBNGGDJOPK @ RVA 0x35CEEC0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__DDBNGGDJOPK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  GJKKGBIAPFL_o *__this_00;
  System_String_o *pSVar5;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  IILNJJJFGLL_array *pIVar8;
  int index;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar9;
  
  if ((DAT_04568fce & 1) == 0) {
    FUN_01bab630(&GJKKGBIAPFL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568fce = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
      (pJVar9 = (pJVar6->fields).OOFDKPAOGFA, pJVar9 != (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0)) &&
     (pSVar7 = (pJVar9->fields).KCDBFFCLCOG,
     pSVar7 != (System_Collections_Generic_List_string__o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        __this_00 = (GJKKGBIAPFL_o *)thunk_FUN_01bda818(GJKKGBIAPFL_TypeInfo);
        GJKKGBIAPFL___ctor(__this_00,(MethodInfo *)0x0);
        pSVar7 = (pJVar9->fields).KCDBFFCLCOG;
        if ((pSVar7 == (System_Collections_Generic_List_string__o *)0x0) ||
           (pSVar5 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           __this_00 == (GJKKGBIAPFL_o *)0x0)) goto LAB_036cf04c;
        (__this_00->fields).NLEIEAICLKM = pSVar5;
        thunk_FUN_01c20e04();
        lVar3 = Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__;
        if (GHAAKPDHIJJ == (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) goto LAB_036cf04c;
        pIVar8 = (GHAAKPDHIJJ->fields)._items;
        (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
        if (pIVar8 == (IILNJJJFGLL_array *)0x0) goto LAB_036cf04c;
        uVar2 = (GHAAKPDHIJJ->fields)._size;
        if (uVar2 < (uint)pIVar8->max_length) {
          (GHAAKPDHIJJ->fields)._size = uVar2 + 1;
          pIVar8->m_Items[(int)uVar2] = (IILNJJJFGLL_o *)__this_00;
          thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
LAB_036cf04c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

