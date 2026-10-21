// TypeDefIndex 1290
// Namespace: Nekki.SF2.GUI.Dialogs
// public class StrangerBigDialog : StrangerDialog
// Fields:
//   private const int EJCDNAELAFM = 88;
//   private const float EPFIMMLBFJM = 1.2;
//   private const int KHGPIKADEFG = 65;
//   private const int MLDJBFADIMA = -30;
//   private const int CPCCOHFCGJG = 90;
//   private const int OGAEHBOPNCP = 20;
//   private const int AFGACJAKNAH = 100;
//   private const int IFBMGIBCNDK = 200;
//   private const int OKFLPPLHIDK = -20;
//   private const int GJCOKHPEPCD = 100;

// ===== protected override void GLANJNFACKI()  [RVA 0x3152500]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$GLANJNFACKI @ RVA 0x3152500

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  
  Nekki_SF2_GUI_Dialogs_StrangerDialog__GLANJNFACKI
            ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields).super.super.super._bottomStripe;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super.super._bottomStripe;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar2,UVar3.fields.y + -20.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x3152560]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$UpdateHeaderPosition @ RVA 0x3152560

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *transform;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__UpdateHeaderPosition
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.super.super._header;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__AddLocalPositionY(transform,-30.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BDDKKBAOAMO(float JGMCOMCBLPG)  [RVA 0x3152594]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$BDDKKBAOAMO @ RVA 0x3152594

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__BDDKKBAOAMO
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,float JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *original;
  UnityEngine_Transform_o *parent;
  ProfitViewer_o *__this_00;
  System_String_o *OOKEKJMFKPE;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector2_o UVar5;
  
  if ((DAT_04566817 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProfitViewer>__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10397/*"Prefabs/Common/ProfitView"*/);
    FUN_01bab630(&StringLiteral_10510/*"ProfitShine"*/);
    FUN_01bab630(&StringLiteral_10457/*"PriceBackground"*/);
    DAT_04566817 = 1;
  }
  pUVar2 = (__this->fields).super.super._footerTextsSprite;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields).super.super._footerTextsSprite;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,JGMCOMCBLPG,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.JIFBFBEEBDB,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pUVar2 = (__this->fields).super.super._footerTextsSprite;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,StringLiteral_10457/*"PriceBackground"*/,(MethodInfo *)0x0);
                    /* try { // try from 032526a0 to 033526af has its CatchHandler @ 032526b0 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03252334 with catch @ 032526b0
                       catch() { ... } // from try @ 032526a0 with catch @ 032526b0 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 032526b4 to 033526b7 has its CatchHandler @ 032526c0 */
                    /* try { // try from 032526b8 to 033526c3 has its CatchHandler @ 0325225c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032526b4 with catch @ 032526c0
                        */
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* try { // try from 032526c4 to 0335270f has its CatchHandler @ 032526c4
                       catch() { ... } // from try @ 032526c4 with catch @ 032526c4
                       catch() { ... } // from try @ 03252744 with catch @ 032526c4
                       catch() { ... } // from try @ 03252794 with catch @ 032526c4
                       catch() { ... } // from try @ 032529c4 with catch @ 032526c4
                       catch() { ... } // from try @ 032529d0 with catch @ 032526c4 */
        if (!bVar1) {
          return;
        }
        original = UnityEngine_Resources__Load<object>
                             (StringLiteral_10397/*"Prefabs/Common/ProfitView"*/,Method_UnityEngine_Resources_Load<GameObject>__);
        pUVar2 = (__this->fields).super.super._footerTextsSprite;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03252710 to 03352713 has its CatchHandler @ 0325275c */
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
                    /* try { // try from 03252720 to 0335272b has its CatchHandler @ 03252764 */
          pUVar2 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             (original,parent,Method_UnityEngine_Object_Instantiate<GameObject>__);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0325273c to 03352743 has its CatchHandler @ 03252760 */
            __this_00 = (ProfitViewer_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar2,Method_UnityEngine_GameObject_GetComponent<ProfitViewer>__
                                  );
                    /* try { // try from 03252744 to 0335277b has its CatchHandler @ 032526c4 */
            if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03252710 with catch @ 0325275c
                        */
              thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325273c with catch @ 03252760
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03252720 with catch @ 03252764
                        */
            OOKEKJMFKPE = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
                    /* try { // try from 0325277c to 03352793 has its CatchHandler @ 032529c8 */
            if ((__this_00 != (ProfitViewer_o *)0x0) &&
               (ProfitViewer__Init(__this_00,OOKEKJMFKPE,(__this->fields).super.JIFBFBEEBDB,
                                   StringLiteral_10510/*"ProfitShine"*/,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 03252794 to 033529b3 has its CatchHandler @ 032526c4 */
              __this_01 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar3,
                                     Method_UnityEngine_Component_GetComponent<RectTransform>__);
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                UVar4 = UnityEngine_Transform__get_localPosition
                                  ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar3,UVar4.fields.x + UVar5.fields.x * -0.5,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                UVar4 = UnityEngine_Transform__get_localPosition
                                  ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionY
                          (pUVar3,UVar4.fields.y,(MethodInfo *)0x0);
                return;
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


// ===== protected override void GLJGIJNALCA()  [RVA 0x3152844]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$GLJGIJNALCA @ RVA 0x3152844

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector3_o UVar6;
  
  pUVar1 = (__this->fields).super.super.super._content;
  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_StrangerDialog__GLJGIJNALCA
              ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.super.super._content;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar2,UVar6.fields.y,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                         ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        pUVar3 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                           ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            UVar5.fields.y = UVar5.fields.y + 200.0;
            UVar5.fields.x = UVar4.fields.x;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_StrangerBigDialog__IEIGNFCOIOF(__this,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NEGIBLNMKPH(Transform JNPCENEINON, int CBBJMNGHMIF)  [RVA 0x3152EB4]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$NEGIBLNMKPH @ RVA 0x3152EB4

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__NEGIBLNMKPH
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,
               UnityEngine_Transform_o *JNPCENEINON,int32_t CBBJMNGHMIF,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (JNPCENEINON != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 03252ed0 to 03352edb has its CatchHandler @ 03253620 */
    UVar1 = UnityEngine_Transform__get_localPosition(JNPCENEINON,(MethodInfo *)0x0);
                    /* try { // try from 03252ee0 to 03352ee7 has its CatchHandler @ 03253614 */
    UnityEngine_TransformExtensions__SetLocalPositionY
              (JNPCENEINON,UVar1.fields.y + (float)CBBJMNGHMIF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03252ef0 to 03352eff has its CatchHandler @ 0325361c */
  FUN_01bab8c8();
}


// ===== private void IEIGNFCOIOF()  [RVA 0x3152918]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$IEIGNFCOIOF @ RVA 0x3152918

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__IEIGNFCOIOF
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *__this_02;
  System_Collections_Generic_List_Transform__o *NLKBNMDMJEB;
  UnityEngine_Component_o *pUVar8;
  Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *extraout_x0_00;
  Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Transform_array *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  UnityEngine_Vector2_o UVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Vector3_o UVar19;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_04566818 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_get_Count__);
                    /* try { // try from 032529b4 to 033529c3 has its CatchHandler @ 032529c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<Transform>_TypeInfo);
                    /* try { // try from 032529c4 to 033529cb has its CatchHandler @ 032526c4 */
                    /* catch() { ... } // from try @ 0325277c with catch @ 032529c8
                       catch() { ... } // from try @ 032529b4 with catch @ 032529c8 */
    DAT_04566818 = 1;
  }
                    /* try { // try from 032529cc to 033529cf has its CatchHandler @ 032529d8 */
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* try { // try from 032529d0 to 033529db has its CatchHandler @ 032526c4 */
  local_a0.fields._current = (Il2CppObject *)0x0;
  pUVar5 = (__this->fields).super.super._textsSprite;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032529cc with catch @ 032529d8
                        */
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    iVar4 = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
    if (iVar4 < 1) {
                    /* try { // try from 03252dec to 03352dfb has its CatchHandler @ 03253658 */
      return;
    }
    pUVar5 = (__this->fields).super.super._textsSprite;
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY(pUVar7,0.0,(MethodInfo *)0x0);
      UVar17 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
      __this_02 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UVar18 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
        UVar18.fields.x = UVar17.fields.x;
                    /* try { // try from 03252a6c to 03352d27 has its CatchHandler @ 03252a6c
                       catch() { ... } // from try @ 03252a6c with catch @ 03252a6c
                       catch() { ... } // from try @ 03252fdc with catch @ 03252a6c
                       catch() { ... } // from try @ 03253354 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253438 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253558 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253574 with catch @ 03252a6c
                       catch() { ... } // from try @ 032535d4 with catch @ 03252a6c
                       catch() { ... } // from try @ 032535f0 with catch @ 03252a6c
                       catch() { ... } // from try @ 03253778 with catch @ 03252a6c
                       catch() { ... } // from try @ 0325381c with catch @ 03252a6c */
        UnityEngine_RectTransform__set_sizeDelta(__this_01,UVar18,(MethodInfo *)0x0);
        NLKBNMDMJEB = (System_Collections_Generic_List_Transform__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<Transform>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                   Method_System_Collections_Generic_List<Transform>__ctor__);
        iVar4 = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
        if (iVar4 < 1) {
          if (NLKBNMDMJEB == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_03252e04;
        }
        else {
          iVar16 = 0;
          do {
            pUVar7 = UnityEngine_Transform__GetChild(pUVar6,iVar16,(MethodInfo *)0x0);
            if (((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar5 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                pUVar5 == (UnityEngine_GameObject_o *)0x0)) ||
               (pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
               lVar2 = Method_System_Collections_Generic_List<Transform>_Add__,
               NLKBNMDMJEB == (System_Collections_Generic_List_Transform__o *)0x0))
            goto LAB_03252e04;
            pUVar9 = (NLKBNMDMJEB->fields)._items;
            (NLKBNMDMJEB->fields)._version = (NLKBNMDMJEB->fields)._version + 1;
            if (pUVar9 == (UnityEngine_Transform_array *)0x0) goto LAB_03252e04;
            uVar1 = (NLKBNMDMJEB->fields)._size;
            if (uVar1 < (uint)pUVar9->max_length) {
              (NLKBNMDMJEB->fields)._size = uVar1 + 1;
              pUVar9->m_Items[(int)uVar1] = pUVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            iVar16 = iVar16 + 1;
            iVar4 = UnityEngine_Transform__get_childCount(pUVar6,(MethodInfo *)0x0);
          } while (iVar16 < iVar4);
        }
        pUVar8 = (UnityEngine_Component_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,0,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<Transform>_get_Item__);
        if ((pUVar8 != (UnityEngine_Component_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
          fVar11 = UVar19.fields.y;
          pUVar8 = (UnityEngine_Component_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,0,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<Transform>_get_Item__);
          if ((pUVar8 != (UnityEngine_Component_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_Transform_o *)0x0)) {
            UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
            fVar13 = UVar19.fields.y;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_b8,(System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                       Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
            local_a0.fields._index = local_b8.fields._index;
            local_a0.fields._version = local_b8.fields._version;
            local_a0.fields._list = local_b8.fields._list;
            local_a0.fields._current = local_b8.fields._current;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_a0,
                                      Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__
                                     ), __this_00 = local_a0.fields._current, bVar3) {
              if ((UnityEngine_Component_o *)local_a0.fields._current ==
                  (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)local_a0.fields._current,
                                  (MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              if (UVar19.fields.y < fVar11) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03252e14 to 03352e1b has its CatchHandler @ 0325365c */
                  FUN_01bab8c8();
                }
                UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
                fVar11 = UVar19.fields.y;
              }
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              if (fVar13 < UVar19.fields.y) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
                fVar13 = UVar19.fields.y;
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
            method_01 = Method_System_Collections_Generic_List<Transform>_get_Item__;
            pUVar8 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,0,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<Transform>_get_Item__);
            if ((pUVar8 != (UnityEngine_Component_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar19 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              fVar15 = (__this->fields).super.super.OAMNJIMNBAC;
              fVar14 = (__this->fields).super.super.NBGPOPHLIFC;
              iVar16 = (NLKBNMDMJEB->fields)._size;
              UVar17 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
              UVar18 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
              __this_03 = extraout_x0;
              if (0 < (NLKBNMDMJEB->fields)._size) {
                fVar15 = fVar15 * 0.9;
                fVar10 = (fVar13 - fVar11) * 0.20000005 * 0.5;
                    /* try { // try from 03252d28 to 03352d4f has its CatchHandler @ 032536c4 */
                fVar13 = fVar13 + fVar10;
                fVar12 = (float)iVar16;
                fVar11 = fVar13 - (fVar11 - fVar10);
                iVar16 = 0;
                do {
                  method_01 = Method_System_Collections_Generic_List<Transform>_get_Item__;
                  pUVar8 = (UnityEngine_Component_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                                      iVar16,(MethodInfo_26E4ADC *)
                                             Method_System_Collections_Generic_List<Transform>_get_Item__
                                     );
                  if (pUVar8 == (UnityEngine_Component_o *)0x0) goto LAB_03252e04;
                  pUVar6 = UnityEngine_Component__get_transform(pUVar8,(MethodInfo *)0x0);
                    /* try { // try from 03252d84 to 03352daf has its CatchHandler @ 032536c0 */
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar6,((UVar19.fields.x + 65.0) - fVar15 * 0.5) +
                                    fVar15 * fVar14 * 0.5,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (pUVar6,UVar18.fields.y * 0.25 + 100.0 +
                                    (fVar13 - ((fVar11 + fVar11 / fVar12) / fVar12) * (float)iVar16)
                             ,(MethodInfo *)0x0);
                  iVar16 = iVar16 + 1;
                  __this_03 = extraout_x0_00;
                } while (iVar16 < (NLKBNMDMJEB->fields)._size);
              }
              Nekki_SF2_GUI_Dialogs_StrangerBigDialog__MFGKHNNAJEM(__this_03,NLKBNMDMJEB,method_01);
              Nekki_SF2_GUI_Dialogs_StrangerBigDialog__BDDKKBAOAMO
                        (__this,-20.0 - UVar17.fields.x * 0.5,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_03252e04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MFGKHNNAJEM(List<Transform> NLKBNMDMJEB)  [RVA 0x3152EF4]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$MFGKHNNAJEM @ RVA 0x3152EF4

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__MFGKHNNAJEM
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,
               System_Collections_Generic_List_Transform__o *NLKBNMDMJEB,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  System_String_o *pSVar7;
  System_String_o *str2;
  ulong uVar8;
  System_String_o *__this_02;
  ulong uVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined4 local_84;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03252f20 to 03352f23 has its CatchHandler @ 03253608 */
                    /* try { // try from 03252f24 to 03352f3b has its CatchHandler @ 03253628 */
  if ((DAT_04566819 & 1) == 0) {
                    /* try { // try from 03252f40 to 03352f63 has its CatchHandler @ 03253674 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1640);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1641);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1642);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1643);
                    /* try { // try from 03252f78 to 03352f7b has its CatchHandler @ 03253604 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1644);
                    /* try { // try from 03252f7c to 03352f8b has its CatchHandler @ 0325362c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1645);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1646);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1647);
                    /* try { // try from 03252fa4 to 03352fa7 has its CatchHandler @ 03253600 */
                    /* try { // try from 03252fa8 to 03352faf has its CatchHandler @ 0325360c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1648);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1649);
                    /* try { // try from 03252fb8 to 03352fc3 has its CatchHandler @ 03253624 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1650);
                    /* try { // try from 03252fcc to 03352fdb has its CatchHandler @ 03253654 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1651);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1652);
                    /* try { // try from 03252fdc to 033531cb has its CatchHandler @ 03252a6c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1653);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1654);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1655);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Transform>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<LabelAlias>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04566819 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84 = 0;
  lVar3 = FUN_01bab718(string___TypeInfo,6);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1640,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1641,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = pSVar6;
      thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x20),pSVar6);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1642,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1643,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = pSVar6;
        thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x28),pSVar6);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1644,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1645,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if (2 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 032531cc to 033531f3 has its CatchHandler @ 0325377c */
          *(undefined8 *)(lVar3 + 0x30) = pSVar6;
          thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x30),pSVar6);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1646,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1647,
                     (MethodInfo *)0x0);
                    /* try { // try from 03253228 to 03353253 has its CatchHandler @ 03253778 */
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = pSVar6;
            thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x38),pSVar6);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1648,
                       (MethodInfo *)0x0);
                    /* try { // try from 03253288 to 03353297 has its CatchHandler @ 032536a0 */
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1649,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 032532b0 to 033532b7 has its CatchHandler @ 03253694 */
            if (4 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 032532c0 to 033532c7 has its CatchHandler @ 032536b0 */
                    /* try { // try from 032532c8 to 033532d3 has its CatchHandler @ 032536a4 */
              *(undefined8 *)(lVar3 + 0x40) = pSVar6;
              thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x40),pSVar6);
                    /* try { // try from 032532e4 to 033532eb has its CatchHandler @ 032536ac */
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032532f4 to 033532fb has its CatchHandler @ 032536b4 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1650,
                         (MethodInfo *)0x0);
                    /* try { // try from 032532fc to 03353307 has its CatchHandler @ 032536a8 */
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0325330c to 03353317 has its CatchHandler @ 0325369c */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1651,
                         (MethodInfo *)0x0);
                    /* try { // try from 0325331c to 03353323 has its CatchHandler @ 03253680 */
              pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0325332c to 0335333b has its CatchHandler @ 0325367c */
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(System_String_o **)(lVar3 + 0x48) = pSVar6;
                thunk_FUN_01c20e04();
                    /* try { // try from 03253344 to 03353353 has its CatchHandler @ 03253684 */
                if (NLKBNMDMJEB != (System_Collections_Generic_List_Transform__o *)0x0) {
                    /* try { // try from 03253354 to 033533c3 has its CatchHandler @ 03252a6c */
                  System_Collections_Generic_List<object>__GetEnumerator
                            (&local_a0,(System_Collections_Generic_List_object__o *)NLKBNMDMJEB,
                             Method_System_Collections_Generic_List<Transform>_GetEnumerator__);
                  local_80.fields._index = local_a0.fields._index;
                  local_80.fields._version = local_a0.fields._version;
                  local_80.fields._list = local_a0.fields._list;
                  local_80.fields._current = local_a0.fields._current;
                  while( true ) {
                    do {
                      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                        (&local_80,
                                         Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__
                                        );
                      if (!bVar1) {
                    /* try { // try from 0325356c to 0335356f has its CatchHandler @ 03253610 */
                    /* try { // try from 03253570 to 03353573 has its CatchHandler @ 032535f8 */
                    /* try { // try from 03253574 to 033535cf has its CatchHandler @ 03252a6c */
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (&local_80,
                                   Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__
                                  );
                        return;
                      }
                      if ((UnityEngine_Component_o *)local_80.fields._current ==
                          (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      __this_00 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)local_80.fields._current,
                                             (MethodInfo *)0x0);
                      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      __this_01 = (Nekki_SF2_GUI_LabelAlias_o *)
                                  UnityEngine_GameObject__GetComponent<object>
                                            (__this_00,
                                             Method_UnityEngine_GameObject_GetComponent<LabelAlias>__
                                            );
                    /* try { // try from 032533c4 to 033533cb has its CatchHandler @ 032535f0 */
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                    /* try { // try from 032533e4 to 03353437 has its CatchHandler @ 032535fc */
                      bVar1 = UnityEngine_Object__op_Equality
                                        ((UnityEngine_Object_o *)__this_01,
                                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    } while (bVar1);
                    if (__this_01 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    __this_02 = *(System_String_o **)&(__this_01->fields)._useLabelLineSpacing;
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1652,
                               (MethodInfo *)0x0);
                    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03253438 to 0335352b has its CatchHandler @ 03252a6c */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar5,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1653,
                               (MethodInfo *)0x0);
                    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    if (__this_02 == (System_String_o *)0x0) break;
                    bVar1 = System_String__Contains(__this_02,pSVar6,(MethodInfo *)0x0);
                    if ((!bVar1) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
                      uVar9 = 0;
                      bVar1 = false;
                      uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                      do {
                        if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8d0();
                        }
                        if (__this_02 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        pSVar6 = *(System_String_o **)(lVar3 + 0x20 + uVar9 * 8);
                        bVar2 = System_String__Contains(__this_02,pSVar6,(MethodInfo *)0x0);
                        if (bVar2) {
                          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar4,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1654
                                     ,(MethodInfo *)0x0);
                          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar5,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1655
                                     ,(MethodInfo *)0x0);
                          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                          local_84 = 0x58;
                          str2 = System_Int32__ToString((int32_t)&local_84,(MethodInfo *)0x0);
                          pSVar7 = System_String__Concat(pSVar6,pSVar7,str2,(MethodInfo *)0x0);
                          __this_02 = System_String__Replace
                                                (__this_02,pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 0325352c to 03353533 has its CatchHandler @ 032536bc */
                          bVar1 = true;
                        }
                    /* try { // try from 03253534 to 0335353b has its CatchHandler @ 032536b8 */
                        uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
                        uVar9 = uVar9 + 1;
                    /* try { // try from 0325353c to 0335353f has its CatchHandler @ 03253698 */
                    /* try { // try from 03253540 to 03353543 has its CatchHandler @ 03253690 */
                      } while ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18));
                    /* try { // try from 03253544 to 03353547 has its CatchHandler @ 0325368c */
                    /* try { // try from 03253548 to 0335354b has its CatchHandler @ 03253688 */
                    /* try { // try from 0325354c to 0335354f has its CatchHandler @ 03253678 */
                    /* try { // try from 03253550 to 03353553 has its CatchHandler @ 03253668 */
                    /* try { // try from 03253554 to 03353557 has its CatchHandler @ 03253664 */
                      if (bVar1) {
                    /* try { // try from 03253558 to 0335355b has its CatchHandler @ 03252a6c */
                    /* try { // try from 0325355c to 0335355f has its CatchHandler @ 03253648 */
                    /* try { // try from 03253560 to 03353563 has its CatchHandler @ 0325363c */
                    /* try { // try from 03253564 to 03353567 has its CatchHandler @ 03253634 */
                        Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,__this_02,(MethodInfo *)0x0);
                    /* try { // try from 03253568 to 0335356b has its CatchHandler @ 03253618 */
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                goto LAB_032535bc;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_032535bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x315369C]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$.ctor @ RVA 0x315369C

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog___ctor
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0325330c with catch @ 0325369c */
                    /* catch() { ... } // from try @ 03253288 with catch @ 032536a0 */
  Nekki_SF2_GUI_Dialogs_StrangerDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x31536A4]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$GKPJMHOFIOO @ RVA 0x31536A4

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_o UVar2;
  
                    /* catch() { ... } // from try @ 032532c8 with catch @ 032536a4 */
                    /* catch() { ... } // from try @ 032532fc with catch @ 032536a8 */
                    /* catch() { ... } // from try @ 032532e4 with catch @ 032536ac */
                    /* catch() { ... } // from try @ 032532c0 with catch @ 032536b0 */
                    /* catch() { ... } // from try @ 032532f4 with catch @ 032536b4 */
                    /* catch() { ... } // from try @ 03253534 with catch @ 032536b8 */
  (__this->fields).super.super.LPEFIPGJDJH = 0x5a;
                    /* catch() { ... } // from try @ 0325352c with catch @ 032536bc */
  Nekki_SF2_GUI_Dialogs_StrangerDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03252d84 with catch @ 032536c0 */
                    /* catch() { ... } // from try @ 03252d28 with catch @ 032536c4 */
  pUVar1 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                     ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar2 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032536e0 to 033536e3 has its CatchHandler @ 032536f4 */
    pUVar1 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                       ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032536e0 with catch @ 032536f4 */
    UnityEngine_TransformExtensions__SetLocalPositionY
              (pUVar1,UVar2.fields.y + 100.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03253704 to 03353777 has its CatchHandler @ 03253830 */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x3153708]
// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$EJHAPHAHMHG @ RVA 0x3153708

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  pNVar1 = (__this->fields).super.super.super._header;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    uVar2 = (*(pNVar1->klass->vtable)._22_get_color.methodPtr)
                      (pNVar1,(pNVar1->klass->vtable)._22_get_color.method);
    Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,EHNFGMGKCHO,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.super.super._header;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 03253228 with catch @ 03253778
                       try { // try from 03253778 to 03353793 has its CatchHandler @ 03252a6c */
                    /* catch() { ... } // from try @ 032531cc with catch @ 0325377c */
                    /* WARNING: Could not recover jumptable at 0x0325378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (uVar2,in_d1,in_d2,in_d3,pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

