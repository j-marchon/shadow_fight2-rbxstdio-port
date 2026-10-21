// TypeDefIndex 1578
// Namespace: Nekki.SF2.GUI.Profile
// public class TrickContent : MonoBehaviour
// Fields:
//   private const float IDOICBFJHNI = 400;
//   private const float GCJBHEDBBBK = -20;
//   private LabelAlias _DescriptionLabel; // 0x20
//   private LabelAlias _DamageLabel; // 0x28
//   private LabelButton _ShowButton; // 0x30
//   private Vector2 KLDFHOEMIPJ; // 0x38
//   private KCLPNDAPADO MGHHBGMPDEI; // 0x40
//   private List<float> LHBGKMGNOEP; // 0x48

// ===== public void Refresh(KCLPNDAPADO EKBENIDNAEE, List<float> CAJGNGGLJDF)  [RVA 0x31B1804]
// Nekki.SF2.GUI.Profile.TrickContent$$Refresh @ RVA 0x31B1804

void Nekki_SF2_GUI_Profile_TrickContent__Refresh
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,KCLPNDAPADO_o *EKBENIDNAEE,
               System_Collections_Generic_List_float__o *CAJGNGGLJDF,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  LabelButton_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  KCLPNDAPADO_o *pKVar5;
  ECENNHNBAME_o *pEVar6;
  KCLPNDAPADO_o **ppKVar7;
  System_Collections_Generic_List_float__o **ppSVar8;
  
  if ((DAT_04566b7f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Count__);
    DAT_04566b7f = 1;
  }
  ppKVar7 = &(__this->fields).MGHHBGMPDEI;
  *ppKVar7 = EKBENIDNAEE;
  thunk_FUN_01c20e04(ppKVar7,EKBENIDNAEE);
  ppSVar8 = &(__this->fields).LHBGKMGNOEP;
  *ppSVar8 = CAJGNGGLJDF;
  thunk_FUN_01c20e04(ppSVar8,CAJGNGGLJDF);
  pNVar2 = (__this->fields)._DescriptionLabel;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    if ((*ppKVar7 != (KCLPNDAPADO_o *)0x0) &&
       (bVar1 = System_String__IsNullOrEmpty(((*ppKVar7)->fields).PMOIHBCFLLK,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      method_02 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._DescriptionLabel;
                    /* try { // try from 032b18a8 to 033b18cf has its CatchHandler @ 032b1ad0 */
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
          pKVar5 = (__this->fields).MGHHBGMPDEI;
          if ((pKVar5 == (KCLPNDAPADO_o *)0x0) ||
             (pNVar2 = (__this->fields)._DescriptionLabel,
             pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_032b19a8;
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pKVar5->fields).PMOIHBCFLLK,method_02);
        }
        pNVar2 = (__this->fields)._DamageLabel;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
          if ((*ppSVar8 != (System_Collections_Generic_List_float__o *)0x0) &&
             (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032b1904 to 033b192f has its CatchHandler @ 032b1acc */
            UnityEngine_GameObject__SetActive
                      (pUVar3,0 < ((*ppSVar8)->fields)._size,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._DamageLabel;
            if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (bVar1) {
                pNVar2 = (__this->fields)._DamageLabel;
                pSVar4 = Nekki_SF2_GUI_Profile_TrickContent__CDOMELDIPFI(__this,method_00);
                if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032b19a8;
                (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                          (pNVar2,pSVar4,(pNVar2->klass->vtable)._75_set_text.method);
              }
              __this_00 = (__this->fields)._ShowButton;
              if (__this_00 != (LabelButton_o *)0x0) {
                pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (*ppKVar7 != (KCLPNDAPADO_o *)0x0) {
                    /* try { // try from 032b196c to 033b19df has its CatchHandler @ 032b1ae8 */
                  pEVar6 = ((*ppKVar7)->fields).FLIONKHMLLB;
                  if (pEVar6 == (ECENNHNBAME_o *)0x0) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = (pEVar6->fields).DKGPOGCGINF != false;
                  }
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Profile_TrickContent__FHDMIIOMAJN(__this,method_01);
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
LAB_032b19a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FHDMIIOMAJN()  [RVA 0x31B1BDC]
// Nekki.SF2.GUI.Profile.TrickContent$$FHDMIIOMAJN @ RVA 0x31B1BDC

void Nekki_SF2_GUI_Profile_TrickContent__FHDMIIOMAJN
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  pNVar2 = (__this->fields)._DamageLabel;
  if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032b1cf8;
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._DamageLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._DescriptionLabel;
                    /* catch() { ... } // from try @ 032b1490 with catch @ 032b1c38
                       try { // try from 032b1c38 to 033b1c47 has its CatchHandler @ 032b122c */
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 032b1c48 to 033b1c4b has its CatchHandler @ 032b1c60 */
        pNVar2 = (__this->fields)._DescriptionLabel;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b1c48 with catch @ 032b1c60 */
                    /* try { // try from 032b1c68 to 033b1ccf has its CatchHandler @ 032b1ce4 */
          if (400.0 <= UVar6.fields.m_Height + UVar7.fields.m_Height) {
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_032b1cf8;
                    /* try { // try from 032b1cd0 to 033b1cdb has its CatchHandler @ 032b122c */
                    /* try { // try from 032b1cdc to 033b1ce3 has its CatchHandler @ 032b1ce4 */
            fVar5 = 155.0;
          }
          else {
            pNVar2 = (__this->fields)._DamageLabel;
            if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
               pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_032b1cf8;
            UVar6 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_032b1cf8;
            fVar5 = UVar6.fields.m_Height * 0.5 + -20.0;
          }
          fVar4 = 0.0;
          goto LAB_032b1ce4;
        }
      }
    }
LAB_032b1cf8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar2 = (__this->fields)._DescriptionLabel;
  if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_032b1cf8;
  fVar4 = (__this->fields).KLDFHOEMIPJ.fields.x;
  fVar5 = (__this->fields).KLDFHOEMIPJ.fields.y;
LAB_032b1ce4:
                    /* catch() { ... } // from try @ 032b1b14 with catch @ 032b1ce4
                       catch() { ... } // from try @ 032b1bc4 with catch @ 032b1ce4
                       catch() { ... } // from try @ 032b1c68 with catch @ 032b1ce4
                       catch() { ... } // from try @ 032b1cdc with catch @ 032b1ce4 */
  value.fields.y = fVar5;
  value.fields.x = fVar4;
  value.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
  return;
}


// ===== private string CDOMELDIPFI()  [RVA 0x31B19AC]
// Nekki.SF2.GUI.Profile.TrickContent$$CDOMELDIPFI @ RVA 0x31B19AC

System_String_o *
Nekki_SF2_GUI_Profile_TrickContent__CDOMELDIPFI
          (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  int index;
  int32_t value;
  int iVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_float__o *pSVar3;
  int index_00;
  float fVar4;
  float fVar5;
  int local_64;
  
  if ((DAT_04566b80 & 1) == 0) {
                    /* try { // try from 032b19e0 to 033b1a73 has its CatchHandler @ 032b122c */
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Item__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_571/*" x "*/);
    FUN_01bab630(&StringLiteral_2423/*"<quad name=ComboButtons.base_damage usedsize=100 > "*/);
    DAT_04566b80 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  local_64 = 1;
  pSVar3 = (__this->fields).LHBGKMGNOEP;
  if (pSVar3 != (System_Collections_Generic_List_float__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
                    /* try { // try from 032b1a74 to 033b1a7b has its CatchHandler @ 032b1ae4 */
                    /* try { // try from 032b1a7c to 033b1a83 has its CatchHandler @ 032b1b90 */
      index_00 = 0;
      do {
                    /* try { // try from 032b1a84 to 033b1a8b has its CatchHandler @ 032b1ad4 */
        index = index_00 + 1;
                    /* try { // try from 032b1a8c to 033b1a93 has its CatchHandler @ 032b1ac8 */
        if (index < iVar1) {
          pSVar3 = (__this->fields).LHBGKMGNOEP;
                    /* try { // try from 032b1a94 to 033b1a9b has its CatchHandler @ 032b1ad8 */
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
                    /* try { // try from 032b1a9c to 033b1aa7 has its CatchHandler @ 032b122c */
          fVar4 = System_Collections_Generic_List<float>__get_Item
                            (pSVar3,index_00,
                             Method_System_Collections_Generic_List<float>_get_Item__);
          pSVar3 = (__this->fields).LHBGKMGNOEP;
                    /* try { // try from 032b1aa8 to 033b1aab has its CatchHandler @ 032b1ac4 */
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
                    /* try { // try from 032b1aac to 033b1aaf has its CatchHandler @ 032b1ac0 */
                    /* try { // try from 032b1ab0 to 033b1ab3 has its CatchHandler @ 032b1abc */
                    /* try { // try from 032b1ab4 to 033b1af7 has its CatchHandler @ 032b122c */
          fVar5 = System_Collections_Generic_List<float>__get_Item
                            (pSVar3,index,Method_System_Collections_Generic_List<float>_get_Item__);
                    /* catch() { ... } // from try @ 032b1ab0 with catch @ 032b1abc */
                    /* catch() { ... } // from try @ 032b1aac with catch @ 032b1ac0 */
          if (fVar4 != fVar5) goto LAB_032b1ad4;
                    /* catch() { ... } // from try @ 032b1aa8 with catch @ 032b1ac4 */
                    /* catch() { ... } // from try @ 032b1a8c with catch @ 032b1ac8 */
          local_64 = local_64 + 1;
                    /* catch() { ... } // from try @ 032b1904 with catch @ 032b1acc */
                    /* catch() { ... } // from try @ 032b18a8 with catch @ 032b1ad0 */
        }
        else {
LAB_032b1ad4:
                    /* catch() { ... } // from try @ 032b1a84 with catch @ 032b1ad4 */
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032b1bd8;
                    /* catch() { ... } // from try @ 032b1a94 with catch @ 032b1ad8 */
                    /* catch() { ... } // from try @ 032b16bc with catch @ 032b1adc */
                    /* catch() { ... } // from try @ 032b1660 with catch @ 032b1ae0 */
                    /* catch() { ... } // from try @ 032b1a74 with catch @ 032b1ae4 */
          System_Text_StringBuilder__Append(__this_00,StringLiteral_2423/*"<quad name=ComboButtons.base_damage usedsize=100 > "*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b196c with catch @ 032b1ae8 */
          pSVar3 = (__this->fields).LHBGKMGNOEP;
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
                    /* try { // try from 032b1af8 to 033b1afb has its CatchHandler @ 032b1b0c */
          fVar4 = System_Collections_Generic_List<float>__get_Item
                            (pSVar3,index_00,
                             Method_System_Collections_Generic_List<float>_get_Item__);
                    /* catch() { ... } // from try @ 032b1af8 with catch @ 032b1b0c */
          value = -0x80000000;
          if (fVar4 * 100.0 != INFINITY) {
            value = (int)(fVar4 * 100.0);
          }
                    /* try { // try from 032b1b14 to 033b1b87 has its CatchHandler @ 032b1ce4 */
          System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
          if (1 < local_64) {
            pSVar2 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
            pSVar2 = System_String__Concat(StringLiteral_571/*" x "*/,pSVar2,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(__this_00,pSVar2,(MethodInfo *)0x0);
            local_64 = 1;
          }
          pSVar3 = (__this->fields).LHBGKMGNOEP;
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
          if (index_00 < (pSVar3->fields)._size + -1) {
                    /* catch() { ... } // from try @ 032b1428 with catch @ 032b1b88
                       try { // try from 032b1b88 to 033b1ba3 has its CatchHandler @ 032b122c */
                    /* catch() { ... } // from try @ 032b13cc with catch @ 032b1b8c */
                    /* catch() { ... } // from try @ 032b1a7c with catch @ 032b1b90 */
                    /* catch() { ... } // from try @ 032b1720 with catch @ 032b1b94 */
            System_Text_StringBuilder__Append(__this_00,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
          }
        }
        index_00 = index;
      } while (iVar1 != index);
    }
                    /* try { // try from 032b1ba4 to 033b1ba7 has its CatchHandler @ 032b1bbc */
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar2 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                    /* catch() { ... } // from try @ 032b1ba4 with catch @ 032b1bbc */
                    /* try { // try from 032b1bc4 to 033b1c37 has its CatchHandler @ 032b1ce4 */
      return pSVar2;
    }
  }
LAB_032b1bd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnShowButtonClick()  [RVA 0x31B1CFC]
// Nekki.SF2.GUI.Profile.TrickContent$$OnShowButtonClick @ RVA 0x31B1CFC

void Nekki_SF2_GUI_Profile_TrickContent__OnShowButtonClick
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar2;
  
  if ((DAT_04566b81 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04566b81 = 1;
  }
  if ((__this->fields).MGHHBGMPDEI == (KCLPNDAPADO_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._ShowButton;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
      Nekki_SF2_GUI_Profile_ProfileScene__PlayTrick
                ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                 (__this->fields).MGHHBGMPDEI,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31B1DB0]
// Nekki.SF2.GUI.Profile.TrickContent$$.ctor @ RVA 0x31B1DB0

void Nekki_SF2_GUI_Profile_TrickContent___ctor
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_float__o *__this_00;
  System_Collections_Generic_List_float__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b82 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    DAT_04566b82 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo,method);
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  ppSVar1 = &(__this->fields).LHBGKMGNOEP;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public LabelButton get_ShowButton()  [RVA 0x31B1E38]
// Nekki.SF2.GUI.Profile.TrickContent$$get_ShowButton @ RVA 0x31B1E38

LabelButton_o *
Nekki_SF2_GUI_Profile_TrickContent__get_ShowButton
          (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._ShowButton;
}


// ===== private void Awake()  [RVA 0x31B1E40]
// Nekki.SF2.GUI.Profile.TrickContent$$Awake @ RVA 0x31B1E40

void Nekki_SF2_GUI_Profile_TrickContent__Awake
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields)._DescriptionLabel;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar1 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
    (__this->fields).KLDFHOEMIPJ.fields.x = UVar1.fields.x;
    (__this->fields).KLDFHOEMIPJ.fields.y = UVar1.fields.y;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

