// TypeDefIndex 2012
// Namespace: Nekki.SF2.GUI.Profile
// public class PerkContent : MonoBehaviour
// Fields:
//   private GameObject _Keys; // 0x20
//   private LabelAlias _DescriptionLabel; // 0x28
//   private LabelAlias _ImprovedLabel; // 0x30
//   private LabelButton _ImproveButton; // 0x38
//   private GameObject _KeyIconPrefab; // 0x40
//   private List<KeyIcon> CHKIKLICNBL; // 0x48
//   private JLGNBOILFLN OFLJEENFLDG; // 0x50
//   private bool PABIMIFJJKF; // 0x58
//   private ECENNHNBAME GGGJLIBFAOI; // 0x60

// ===== private void IEFEHKIGBFG()  [RVA 0x329703C]
// Nekki.SF2.GUI.Profile.PerkContent$$IEFEHKIGBFG @ RVA 0x329703C

void Nekki_SF2_GUI_Profile_PerkContent__IEFEHKIGBFG
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_KeyIcon__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456736e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_GetEnumerator__);
    DAT_0456736e = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).CHKIKLICNBL;
  if (pSVar2 != (System_Collections_Generic_List_KeyIcon__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<KeyIcon>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<KeyIcon>_MoveNext__)
          , bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<KeyIcon>_Dispose__);
    pSVar2 = (__this->fields).CHKIKLICNBL;
    if (pSVar2 != (System_Collections_Generic_List_KeyIcon__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton get_ImproveButton()  [RVA 0x32971CC]
// Nekki.SF2.GUI.Profile.PerkContent$$get_ImproveButton @ RVA 0x32971CC

LabelButton_o *
Nekki_SF2_GUI_Profile_PerkContent__get_ImproveButton
          (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._ImproveButton;
}


// ===== private void Update()  [RVA 0x32971D4]
// Nekki.SF2.GUI.Profile.PerkContent$$Update @ RVA 0x32971D4

void Nekki_SF2_GUI_Profile_PerkContent__Update
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar2;
  JLGNBOILFLN_o *pJVar3;
  
  if ((DAT_04567370 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567370 = 1;
  }
  pJVar3 = (__this->fields).OFLJEENFLDG;
  if (pJVar3 != (JLGNBOILFLN_o *)0x0) {
    if ((pJVar3->fields).OIKLOAGFFGO - 1U < 3) {
      bVar1 = true;
    }
    else {
      bVar1 = (__this->fields).PABIMIFJJKF != false;
    }
    __this_00 = (__this->fields)._ImproveButton;
    if (__this_00 != (LabelButton_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = false;
      }
      else {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
            (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) goto LAB_033972b0;
        bVar1 = Nekki_SF2_GUI_Profile_ProfileScene__CanStartImprovePerk
                          ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                           (MethodInfo *)0x0);
      }
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_033972b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(JLGNBOILFLN CDEABOAKDEJ, bool LOBGCBPLKFJ)  [RVA 0x32972B4]
// Nekki.SF2.GUI.Profile.PerkContent$$Refresh @ RVA 0x32972B4

void Nekki_SF2_GUI_Profile_PerkContent__Refresh
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
               bool LOBGCBPLKFJ,MethodInfo *method)

{
  bool bVar1;
  ECENNHNBAME_o *pEVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  JLGNBOILFLN_o *pJVar6;
  JLGNBOILFLN_o **ppJVar7;
  
  ppJVar7 = &(__this->fields).OFLJEENFLDG;
  *ppJVar7 = CDEABOAKDEJ;
  thunk_FUN_01c20e04(ppJVar7);
  (__this->fields).PABIMIFJJKF = LOBGCBPLKFJ;
  if (CDEABOAKDEJ == (JLGNBOILFLN_o *)0x0) goto LAB_033973f8;
  pEVar2 = JLGNBOILFLN__MJKINAHFKIG(CDEABOAKDEJ,(MethodInfo *)0x0);
  (__this->fields).GGGJLIBFAOI = pEVar2;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Profile_PerkContent__KBMNKDPMMPE(__this,method_00);
  Nekki_SF2_GUI_Profile_PerkContent__BDIDKFGDFIL(__this,method_01);
  pNVar3 = (__this->fields)._DescriptionLabel;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033973f8;
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
  if (*ppJVar7 == (JLGNBOILFLN_o *)0x0) goto LAB_033973f8;
  if (((*ppJVar7)->fields).OIKLOAGFFGO == 3) {
LAB_03397358:
    bVar1 = false;
  }
  else {
    pUVar5 = (__this->fields)._Keys;
    if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033973f8;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03397358;
    bVar1 = (__this->fields).PABIMIFJJKF == false;
  }
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,bVar1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._DescriptionLabel;
    if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pJVar6 = (__this->fields).OFLJEENFLDG;
        if ((pJVar6 == (JLGNBOILFLN_o *)0x0) ||
           (pNVar3 = (__this->fields)._DescriptionLabel, pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0
           )) goto LAB_033973f8;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(pJVar6->fields).BJMHBMDFFPA,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields)._ImprovedLabel;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        if ((*ppJVar7 != (JLGNBOILFLN_o *)0x0) && (pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (pUVar4,((*ppJVar7)->fields).OIKLOAGFFGO == 2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033973f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x329744C]
// Nekki.SF2.GUI.Profile.PerkContent$$.ctor @ RVA 0x329744C

void Nekki_SF2_GUI_Profile_PerkContent___ctor
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyIcon__o *__this_00;
  System_Collections_Generic_List_KeyIcon__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456736f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyIcon>_TypeInfo);
    DAT_0456736f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KeyIcon__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyIcon>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KeyIcon>__ctor__);
  ppSVar1 = &(__this->fields).CHKIKLICNBL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KBMNKDPMMPE()  [RVA 0x32971D8]
// Nekki.SF2.GUI.Profile.PerkContent$$KBMNKDPMMPE @ RVA 0x32971D8

void Nekki_SF2_GUI_Profile_PerkContent__KBMNKDPMMPE
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar2;
  JLGNBOILFLN_o *pJVar3;
  
  if ((DAT_04567370 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567370 = 1;
  }
  pJVar3 = (__this->fields).OFLJEENFLDG;
  if (pJVar3 != (JLGNBOILFLN_o *)0x0) {
    if ((pJVar3->fields).OIKLOAGFFGO - 1U < 3) {
      bVar1 = true;
    }
    else {
      bVar1 = (__this->fields).PABIMIFJJKF != false;
    }
    __this_00 = (__this->fields)._ImproveButton;
    if (__this_00 != (LabelButton_o *)0x0) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = false;
      }
      else {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
            (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) goto LAB_033972b0;
        bVar1 = Nekki_SF2_GUI_Profile_ProfileScene__CanStartImprovePerk
                          ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                           (MethodInfo *)0x0);
      }
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_033972b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnImproveButtonClick()  [RVA 0x32974D4]
// Nekki.SF2.GUI.Profile.PerkContent$$OnImproveButtonClick @ RVA 0x32974D4

void Nekki_SF2_GUI_Profile_PerkContent__OnImproveButtonClick
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_04567371 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04567371 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar4._8_8_ = method;
  auVar4._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar4 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar4._8_8_);
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Profile_ProfileScene__ImprovePerk
                      ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                       (__this->fields).OFLJEENFLDG,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this_00 = (__this->fields)._ImproveButton;
    if ((__this_00 != (LabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._ImprovedLabel;
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDBCBFBCBLL()  [RVA 0x32975A4]
// Nekki.SF2.GUI.Profile.PerkContent$$GDBCBFBCBLL @ RVA 0x32975A4

void Nekki_SF2_GUI_Profile_PerkContent__GDBCBFBCBLL
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  bool bVar4;
  ECENNHNBAME_o *__this_00;
  GBKCLIFGIFN_o *pGVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Nekki_SF2_GUI_Profile_KeyIcon_o *pNVar9;
  System_Collections_Generic_List_KeyIcon__o *pSVar10;
  Nekki_SF2_GUI_Profile_KeyIcon_array *pNVar11;
  UnityEngine_GameObject_o *pUVar12;
  NKOIBKNPICN_o *pNVar13;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  
  if ((DAT_04567372 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4510/*"ComboButtons.icon_plus"*/);
    DAT_04567372 = 1;
  }
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GGGJLIBFAOI;
  if ((((__this_00 != (ECENNHNBAME_o *)0x0) &&
       (pGVar5 = ECENNHNBAME__OCLGKBPDEBI(__this_00,(MethodInfo *)0x0),
       pGVar5 != (GBKCLIFGIFN_o *)0x0)) &&
      (pNVar13 = (pGVar5->fields).LCDJLCMFMEO, pNVar13 != (NKOIBKNPICN_o *)0x0)) &&
     (pSVar6 = (pNVar13->fields).KJNPENJKBKD,
     pSVar6 != (System_Collections_Generic_List_int__o *)0x0)) {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,pSVar6,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_80._8_4_ = local_98.fields._index;
    local_80._12_4_ = local_98.fields._version;
    local_80._0_8_ = local_98.fields._list;
    local_70 = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                             ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                              Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
          bVar4) {
      pUVar7 = (__this->fields)._Keys;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_70;
      pUVar12 = (__this->fields)._KeyIconPrefab;
      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate(iVar3,pUVar12,pUVar8,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
      if (bVar4) {
        pSVar10 = (__this->fields).CHKIKLICNBL;
        if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pNVar11 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar11 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar10->fields)._size;
        if (uVar1 < (uint)pNVar11->max_length) {
          (pSVar10->fields)._size = uVar1 + 1;
          pNVar11->m_Items[(int)uVar1] = pNVar9;
          thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,pNVar9);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    pSVar6 = (pNVar13->fields).KJNPENJKBKD;
    if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
      if (0 < (pSVar6->fields)._size) {
        pUVar7 = (__this->fields)._Keys;
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_03397960;
        pUVar12 = (__this->fields)._KeyIconPrefab;
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                           (StringLiteral_4510/*"ComboButtons.icon_plus"*/,0.0,pUVar12,pUVar8,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
        pSVar10 = (__this->fields).CHKIKLICNBL;
        if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) goto LAB_03397960;
        pNVar11 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar11 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) goto LAB_03397960;
        uVar1 = (pSVar10->fields)._size;
        if (uVar1 < (uint)pNVar11->max_length) {
          (pSVar10->fields)._size = uVar1 + 1;
          pNVar11->m_Items[(int)uVar1] = pNVar9;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      pSVar6 = (pNVar13->fields).OOIGOEAHPMA;
      if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__GetEnumerator
                  (&local_98,pSVar6,Method_System_Collections_Generic_List<int>_GetEnumerator__);
        local_80._8_4_ = local_98.fields._index;
        local_80._12_4_ = local_98.fields._version;
        local_80._0_8_ = local_98.fields._list;
        local_70 = local_98.fields._current;
        while( true ) {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                              ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                               Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<int>__Dispose
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                         Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
              return;
            }
            pUVar7 = (__this->fields)._Keys;
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar3 = (int32_t)local_70;
            pUVar12 = (__this->fields)._KeyIconPrefab;
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                               (iVar3,pUVar12,pUVar8,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
          } while (!bVar4);
          pSVar10 = (__this->fields).CHKIKLICNBL;
          if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pNVar11 = (pSVar10->fields)._items;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (pNVar11 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) break;
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar11->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar11->m_Items[(int)uVar1] = pNVar9;
            thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,pNVar9);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_03397960:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BDIDKFGDFIL()  [RVA 0x32973FC]
// Nekki.SF2.GUI.Profile.PerkContent$$BDIDKFGDFIL @ RVA 0x32973FC

void Nekki_SF2_GUI_Profile_PerkContent__BDIDKFGDFIL
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool value;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Profile_PerkContent__IEFEHKIGBFG(__this,method);
  if (((__this->fields).GGGJLIBFAOI == (ECENNHNBAME_o *)0x0) ||
     ((__this->fields).PABIMIFJJKF != false)) {
    __this_00 = (__this->fields)._Keys;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
LAB_03397448:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value = false;
  }
  else {
    Nekki_SF2_GUI_Profile_PerkContent__GDBCBFBCBLL(__this,method_00);
    __this_00 = (__this->fields)._Keys;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03397448;
    value = true;
  }
  UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
  return;
}

