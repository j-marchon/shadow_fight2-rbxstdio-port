// TypeDefIndex 1139
// Namespace: Nekki.SF2.GUI.Shop
// public class ParametersPanelContent : SidePanelContent
// Fields:
//   private BaseScrollContent _baseScrollContent; // 0x28
//   private ItemsScroll _itemsScroll; // 0x30
//   private GameObject _scrollItemPrefab; // 0x38
//   private float _ScrollAnimationDelay; // 0x40
//   private float _ScrollAnimationDuration; // 0x44
//   private GameObject _renderRoot; // 0x48
//   private List<Graphic> PMHLGLALHLH; // 0x50
//   private Image <MBFMMJHFBBH>k__BackingField; // 0x58
//   private HOOAAGABMBL PCBECBEFJOI; // 0x60
//   private PJKHAJKEHEL GFGOPEKNBPF; // 0x68
//   private KKEKJDLEJIL MLHJCGAAFFG; // 0x70
//   private List<BaseScrollItem> DNHMKKDMGFA; // 0x78
//   private Sequence HNKEDPLJLJJ; // 0x80
//   private bool JBKOKFGICDL; // 0x88

// ===== public override void OnPanelOpened()  [RVA 0x30F8680]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnPanelOpened @ RVA 0x30F8680

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnPanelOpened
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  
  Nekki_SF2_GUI_Shop_SidePanelContent__OnPanelOpened
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
  method_02 = method_01;
  if ((__this->fields).JBKOKFGICDL != false) {
    Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this,0.0,method_01);
    method_02 = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__KDOOCENHKNC(__this,method_02);
  return;
}


// ===== public void NeedToUpdateParameters(HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x30F8AB4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$NeedToUpdateParameters @ RVA 0x30F8AB4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToUpdateParameters
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,HOOAAGABMBL_o *IHGFKLOLPOK,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).PCBECBEFJOI = IHGFKLOLPOK;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this,0.0,method_00);
  return;
}


// ===== private float OACHLIJPIKN()  [RVA 0x30F8AD4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OACHLIJPIKN @ RVA 0x30F8AD4

float Nekki_SF2_GUI_Shop_ParametersPanelContent__OACHLIJPIKN
                (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ItemsScroll_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._itemsScroll;
  if (__this_00 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition
                      ((Nekki_SF2_GUI_SFScrollRect_o *)__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PFFPCAEKIDC(IHDFIJGDCBL BHOLKPLJMNI)  [RVA 0x30F8AF0]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$PFFPCAEKIDC @ RVA 0x30F8AF0

void Nekki_SF2_GUI_Shop_ParametersPanelContent__PFFPCAEKIDC
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,IHDFIJGDCBL_o *BHOLKPLJMNI,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_00;
  FPLCEOJCPOD_o *__this_01;
  UnityEngine_Object_o *__this_02;
  System_Collections_Generic_List_BaseScrollItem__o *__this_03;
  PJKHAJKEHEL_o *pPVar4;
  Nekki_SF2_GUI_BaseScrollItem_array *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  int32_t local_24;
  
  if ((DAT_04566482 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10128/*"ParameterScrollItem({0})"*/);
    DAT_04566482 = 1;
  }
  pUVar6 = (__this->fields)._scrollItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar6 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar6,Method_UnityEngine_Object_Instantiate<GameObject>__);
  __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)0x0;
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (pUVar6,Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__)
    ;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)(ulong)bVar3;
    if (!bVar3) {
      return;
    }
    local_24 = 0;
    pPVar4 = (__this->fields).GFGOPEKNBPF;
    if ((pPVar4 != (PJKHAJKEHEL_o *)0x0) && (BHOLKPLJMNI != (IHDFIJGDCBL_o *)0x0)) {
      __this_01 = (pPVar4->fields).ACHJNNOKEDK;
      __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)0x0;
      if (__this_01 != (FPLCEOJCPOD_o *)0x0) {
        bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                          (__this_01,(BHOLKPLJMNI->fields).NPFMOEOIEKM,&local_24,true,false,
                           (MethodInfo *)0x0);
        __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)(ulong)bVar3;
        if (__this_00 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) {
          __this_02 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          __this_03 = (System_Collections_Generic_List_BaseScrollItem__o *)
                      System_String__Format
                                (StringLiteral_10128/*"ParameterScrollItem({0})"*/,
                                 (Il2CppObject *)(BHOLKPLJMNI->fields).NPFMOEOIEKM,(MethodInfo *)0x0
                                );
          if (__this_02 != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_name(__this_02,(System_String_o *)__this_03,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                      (__this_00,(BHOLKPLJMNI->fields).NPFMOEOIEKM,(BHOLKPLJMNI->fields).OPBJKMDPKLG
                       ,local_24,local_24,false,(System_String_o *)0x0,1.0,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<BaseScrollItem>_Add__;
            __this_03 = (__this->fields).DNHMKKDMGFA;
            if (__this_03 != (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
              pNVar5 = (__this_03->fields)._items;
              (__this_03->fields)._version = (__this_03->fields)._version + 1;
              if (pNVar5 != (Nekki_SF2_GUI_BaseScrollItem_array *)0x0) {
                uVar1 = (__this_03->fields)._size;
                if (uVar1 < (uint)pNVar5->max_length) {
                  (__this_03->fields)._size = uVar1 + 1;
                  pNVar5->m_Items[(int)uVar1] = (Nekki_SF2_GUI_BaseScrollItem_o *)__this_00;
                  thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,__this_00);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this_03);
}


// ===== private void FBPHKFLELNP()  [RVA 0x30F86B8]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$FBPHKFLELNP @ RVA 0x30F86B8

void Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool CJNHFNHJHPE;
  bool bVar1;
  System_Collections_Generic_List_Graphic__o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566483 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566483 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    CJNHFNHJHPE = (__this->fields).super._JHGIPNHGGOK_k__BackingField != false;
  }
  else {
    CJNHFNHJHPE = true;
  }
  Util__IHPDCBOFHPA((__this->fields)._renderRoot,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields).PMHLGLALHLH;
  if (__this_00 != (System_Collections_Generic_List_Graphic__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Graphic>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<Graphic>_MoveNext__)
          , x = local_60.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)x,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Graphic>_Dispose__);
    pUVar2 = (__this->fields)._MBFMMJHFBBH_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar2 = (__this->fields)._MBFMMJHFBBH_k__BackingField;
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_031f8854;
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    return;
  }
LAB_031f8854:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FJHEDBMBEFI()  [RVA 0x30F8CC4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$FJHEDBMBEFI @ RVA 0x30F8CC4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__FJHEDBMBEFI
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  HOOAAGABMBL_o *pHVar2;
  ACHLOMELAJE_o *pAVar3;
  PJKHAJKEHEL_o *pPVar4;
  
  if ((DAT_04566484 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566484 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (pPVar4 = (pAVar3->fields).MFLNIMCFPDK, pPVar4 != (PJKHAJKEHEL_o *)0x0)) {
    (*(pPVar4->klass->vtable)._8_KMKKECDCBEF.methodPtr)
              (pPVar4,(__this->fields).MLHJCGAAFFG,(pPVar4->klass->vtable)._8_KMKKECDCBEF.method);
    pPVar1 = (__this->fields).GFGOPEKNBPF;
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
      (*(pPVar1->klass->vtable)._6_BCEGONIKBAK.methodPtr)
                (pPVar1,(__this->fields).MLHJCGAAFFG,(pPVar1->klass->vtable)._6_BCEGONIKBAK.method);
      pHVar2 = (__this->fields).PCBECBEFJOI;
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        pPVar1 = (__this->fields).GFGOPEKNBPF;
        if (pPVar1 == (PJKHAJKEHEL_o *)0x0) goto LAB_031f8dc8;
        (*(pPVar1->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                  (pPVar1,(pHVar2->fields)._GMPAEDFIIHF_k__BackingField,pHVar2,
                   (pPVar1->klass->vtable)._9_CGNPHPDFKJG.method);
      }
      (*(pPVar4->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                (pPVar4,(pPVar4->klass->vtable)._7_LBNKPLKIIOP.method);
      pPVar4 = (__this->fields).GFGOPEKNBPF;
      if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031f8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pPVar4->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                  (pPVar4,(pPVar4->klass->vtable)._7_LBNKPLKIIOP.method);
        return;
      }
    }
  }
LAB_031f8dc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_PanelBackground(Image CJNHFNHJHPE)  [RVA 0x30F8DCC]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$set_PanelBackground @ RVA 0x30F8DCC

void Nekki_SF2_GUI_Shop_ParametersPanelContent__set_PanelBackground
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,
               UnityEngine_UI_Image_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MBFMMJHFBBH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x30F8DD4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$.ctor @ RVA 0x30F8DD4

void Nekki_SF2_GUI_Shop_ParametersPanelContent___ctor
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Graphic__o *__this_00;
  System_Collections_Generic_List_Graphic__o **ppSVar1;
  KKEKJDLEJIL_o *__this_01;
  KKEKJDLEJIL_o **ppKVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_02;
  System_Collections_Generic_List_BaseScrollItem__o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566485 & 1) == 0) {
    FUN_01bab630(&KKEKJDLEJIL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Graphic>_TypeInfo);
    DAT_04566485 = 1;
    method = extraout_x1;
  }
  (__this->fields)._ScrollAnimationDelay = 0.5;
  (__this->fields)._ScrollAnimationDuration = 6.0;
  __this_00 = (System_Collections_Generic_List_Graphic__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Graphic>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Graphic>__ctor__);
  ppSVar1 = &(__this->fields).PMHLGLALHLH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (KKEKJDLEJIL_o *)thunk_FUN_01bda818(KKEKJDLEJIL_TypeInfo);
  KKEKJDLEJIL___ctor(__this_01,(MethodInfo *)0x0);
  ppKVar2 = &(__this->fields).MLHJCGAAFFG;
  *ppKVar2 = __this_01;
  thunk_FUN_01c20e04(ppKVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_BaseScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BaseScrollItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<BaseScrollItem>__ctor__);
  ppSVar3 = &(__this->fields).DNHMKKDMGFA;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  Nekki_SF2_GUI_Shop_SidePanelContent___ctor
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MIBHDMONJLC(float OOGPLJBADCD)  [RVA 0x30F8EF4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$MIBHDMONJLC @ RVA 0x30F8EF4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__MIBHDMONJLC
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,float OOGPLJBADCD,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ItemsScroll_o *__this_00;
  
  __this_00 = (__this->fields)._itemsScroll;
  if (__this_00 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
    Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnPanelClosed()  [RVA 0x30F8F10]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnPanelClosed @ RVA 0x30F8F10

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnPanelClosed
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_SidePanelContent__OnPanelClosed
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB(__this,true,in_x2);
  return;
}


// ===== private void JGBBHPHIJNB(bool NADPOGKBDKD)  [RVA 0x30F8F38]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$JGBBHPHIJNB @ RVA 0x30F8F38

void Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,bool NADPOGKBDKD,
               MethodInfo *method)

{
  DG_Tweening_Sequence_o *t;
  Nekki_SF2_GUI_ItemsScroll_o *__this_00;
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).HNKEDPLJLJJ;
  t = *ppDVar1;
  if (t == (DG_Tweening_Sequence_o *)0x0) {
    return;
  }
  if (NADPOGKBDKD) {
    __this_00 = (__this->fields)._itemsScroll;
    if (__this_00 == (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this_00,1.0,(MethodInfo *)0x0);
    t = *ppDVar1;
  }
  DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
  *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
  thunk_FUN_01c20e04(ppDVar1,0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x30F8F94]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnDestroy @ RVA 0x30F8F94

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnDestroy
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB(__this,false,in_x2);
  return;
}


// ===== public override void Init()  [RVA 0x30F8FA4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$Init @ RVA 0x30F8FA4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__Init
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollContent_o *__this_00;
  Nekki_SF2_GUI_ItemsScroll_o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BaseScrollItem__o *GHAAKPDHIJJ;
  MethodInfo *method_00;
  
  if ((DAT_04566486 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10132/*"ParametersPanelContent.Init _items is null"*/);
    DAT_04566486 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__LGJMJMJJGIM(__this,method);
  GHAAKPDHIJJ = (__this->fields).DNHMKKDMGFA;
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10132/*"ParametersPanelContent.Init _items is null"*/,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (__this->fields)._baseScrollContent;
                    /* try { // try from 031f8ff0 to 032f9087 has its CatchHandler @ 031f8ff0
                       catch() { ... } // from try @ 031f8ff0 with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f90ac with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f90e4 with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f910c with catch @ 031f8ff0
                       catch() { ... } // from try @ 031f914c with catch @ 031f8ff0 */
    if (__this_00 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031f904c;
    Nekki_SF2_GUI_BaseScrollContent__SetItems(__this_00,GHAAKPDHIJJ,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._itemsScroll;
  if (__this_01 != (Nekki_SF2_GUI_ItemsScroll_o *)0x0) {
    Nekki_SF2_GUI_ItemsScroll__Init(__this_01,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
    return;
  }
LAB_031f904c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnStartClosing()  [RVA 0x30F9290]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnStartClosing @ RVA 0x30F9290

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnStartClosing
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Shop_SidePanelContent__OnStartClosing
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
  return;
}


// ===== private void JGBBHPHIJNB()  [RVA 0x30F8F9C]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$JGBBHPHIJNB @ RVA 0x30F8F9C

void Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB(__this,false,in_x2);
  return;
}


// ===== private void LGJMJMJJGIM()  [RVA 0x30F9050]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$LGJMJMJJGIM @ RVA 0x30F9050

void Nekki_SF2_GUI_Shop_ParametersPanelContent__LGJMJMJJGIM
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  ABCMPMHNMAP_o *pAVar4;
  PJKHAJKEHEL_o *JOHFLOEABJL;
  PJKHAJKEHEL_o **ppPVar5;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566487 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
                    /* try { // try from 031f9088 to 032f908f has its CatchHandler @ 031f90f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
                    /* try { // try from 031f90a0 to 032f90ab has its CatchHandler @ 031f90ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
                    /* try { // try from 031f90ac to 032f90df has its CatchHandler @ 031f8ff0 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04566487 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 031f90e0 to 032f90e3 has its CatchHandler @ 031f90e8 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031f90e4 to 032f9107 has its CatchHandler @ 031f8ff0 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f90e0 with catch @ 031f90e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f90a0 with catch @ 031f90ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f9088 with catch @ 031f90f0
                        */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 031f9108 to 032f910b has its CatchHandler @ 031f9134 */
                    /* try { // try from 031f910c to 032f9143 has its CatchHandler @ 031f8ff0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    JOHFLOEABJL = (pAVar3->fields).MFLNIMCFPDK;
                    /* catch() { ... } // from try @ 031f9108 with catch @ 031f9134 */
    pPVar2 = (PJKHAJKEHEL_o *)thunk_FUN_01bda818(PJKHAJKEHEL_TypeInfo);
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 031f9144 to 032f914b has its CatchHandler @ 031f9160 */
    PJKHAJKEHEL___ctor(pPVar2,JOHFLOEABJL,(MethodInfo *)0x0);
    ppPVar5 = &(__this->fields).GFGOPEKNBPF;
                    /* try { // try from 031f914c to 032f9157 has its CatchHandler @ 031f8ff0 */
    *ppPVar5 = pPVar2;
                    /* try { // try from 031f9158 to 032f915f has its CatchHandler @ 031f9160 */
    thunk_FUN_01c20e04(ppPVar5,pPVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f9144 with catch @ 031f9160
                       catch(type#2 @ 00000000) { ... } // from try @ 031f9158 with catch @ 031f9160
                        */
    pPVar2 = *ppPVar5;
    if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
      (*(pPVar2->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                (pPVar2,(pPVar2->klass->vtable)._7_LBNKPLKIIOP.method);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
      if ((pAVar4 != (ABCMPMHNMAP_o *)0x0) &&
         (__this_00 = (pAVar4->fields).ACHJNNOKEDK,
         __this_00 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_38,
                             Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                            );
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
            return;
          }
          if ((IHDFIJGDCBL_o *)local_38.fields._current == (IHDFIJGDCBL_o *)0x0) break;
          if ((((IHDFIJGDCBL_Fields *)((long)local_38.fields._current + 0x10))->CHLMHEGKKNH == false
              ) && (((IHDFIJGDCBL_Fields *)((long)local_38.fields._current + 0x10))->OOBNCDKIDFK ==
                    false)) {
            Nekki_SF2_GUI_Shop_ParametersPanelContent__PFFPCAEKIDC
                      (__this,(IHDFIJGDCBL_o *)local_38.fields._current,method_00);
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


// ===== private Image HGBDMINNICE()  [RVA 0x30F92AC]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$HGBDMINNICE @ RVA 0x30F92AC

UnityEngine_UI_Image_o *
Nekki_SF2_GUI_Shop_ParametersPanelContent__HGBDMINNICE
          (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._MBFMMJHFBBH_k__BackingField;
}


// ===== public override void OnStartOpening()  [RVA 0x30F92B4]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$OnStartOpening @ RVA 0x30F92B4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__OnStartOpening
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Shop_SidePanelContent__OnStartOpening
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP(__this,method_00);
  if ((__this->fields).JBKOKFGICDL != false) {
    Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this,0.0,method_01);
    return;
  }
  return;
}


// ===== public void NeedToRefresh(float GGMALJLKHHB = 0)  [RVA 0x30F88DC]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$NeedToRefresh @ RVA 0x30F88DC

void Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,float GGMALJLKHHB,
               MethodInfo *method)

{
  if (((__this->fields).super._HLLLGIDPLEN_k__BackingField == false) &&
     ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) {
    Nekki_SF2_GUI_Shop_ParametersPanelContent__FJHEDBMBEFI(__this,method);
    (__this->fields).JBKOKFGICDL = true;
    return;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__ONGPLJHECGE(__this,GGMALJLKHHB,method);
  return;
}


// ===== private void KDOOCENHKNC()  [RVA 0x30F8918]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$KDOOCENHKNC @ RVA 0x30F8918

void Nekki_SF2_GUI_Shop_ParametersPanelContent__KDOOCENHKNC
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  MethodInfo *in_x2;
  DG_Tweening_Sequence_o **ppDVar2;
  
  if ((DAT_04566488 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParametersPanelContent_MIBHDMONJLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParametersPanelContent_OACHLIJPIKN__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04566488 = 1;
  }
  Nekki_SF2_GUI_Shop_ParametersPanelContent__JGBBHPHIJNB(__this,true,in_x2);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                     (pDVar1,(__this->fields)._ScrollAnimationDelay,(MethodInfo *)0x0);
  getter = (DG_Tweening_Core_DOGetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
  DG_Tweening_Core_DOGetter<float>___ctor();
  setter = (DG_Tweening_Core_DOSetter_float__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
  DG_Tweening_Core_DOSetter<float>___ctor();
  t = DG_Tweening_DOTween__To
                (getter,setter,0.0,(__this->fields)._ScrollAnimationDuration,(MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__Append
                     (pDVar1,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                     (pDVar1,(__this->fields)._ScrollAnimationDelay,(MethodInfo *)0x0);
  t_00 = DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                   ((Il2CppObject *)pDVar1,-1,1,
                    Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  pDVar1 = (DG_Tweening_Sequence_o *)
           DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     (t_00,10,Method_DG_Tweening_TweenSettingsExtensions_SetEase<Sequence>__);
  ppDVar2 = &(__this->fields).HNKEDPLJLJJ;
  *ppDVar2 = pDVar1;
  thunk_FUN_01c20e04(ppDVar2);
  return;
}


// ===== private void ONGPLJHECGE(float PNEIGGOFIOA)  [RVA 0x30F92EC]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$ONGPLJHECGE @ RVA 0x30F92EC

void Nekki_SF2_GUI_Shop_ParametersPanelContent__ONGPLJHECGE
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,float PNEIGGOFIOA,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_01;
  FPLCEOJCPOD_o *pFVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  PJKHAJKEHEL_o *pPVar5;
  PJKHAJKEHEL_o *pPVar6;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  int32_t local_68 [2];
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566489 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ParameterScrollItem_TypeInfo);
    FUN_01bab630(&StringLiteral_10133/*"ParametersPanelContent::ForceUpdateParameters: Check whether need to update shop model from ParametersPanelContent"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566489 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  (__this->fields).JBKOKFGICDL = false;
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,method);
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10133/*"ParametersPanelContent::ForceUpdateParameters: Check whether need to update shop model from ParametersPanelContent"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FJHEDBMBEFI(__this,method_00);
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
  if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
     (__this_01 = (__this->fields).DNHMKKDMGFA,
     __this_01 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = (pAVar4->fields).MFLNIMCFPDK;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_80,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  local_60.fields._index = local_80.fields._index;
  local_60.fields._version = local_80.fields._version;
  local_60.fields._list = local_80.fields._list;
  local_60.fields._current = local_80.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    __this_00 = local_60.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      return;
    }
    if ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)local_60.fields._current ==
        (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) break;
    bVar1 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_TypeInfo->_2).naturalAligment;
    if (((((Nekki_SF2_GUI_Shop_ParameterScrollItem_c *)(local_60.fields._current)->klass)->_2).
         naturalAligment < bVar1) ||
       ((((Nekki_SF2_GUI_Shop_ParameterScrollItem_c *)(local_60.fields._current)->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_ParameterScrollItem_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(local_60.fields._current);
    }
    local_68[0] = 0;
    local_68[1] = 0;
    if (pPVar6 == (PJKHAJKEHEL_o *)0x0) goto LAB_031f9564;
    pFVar3 = (pPVar6->fields).ACHJNNOKEDK;
    if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                      (pFVar3,((Nekki_SF2_GUI_Shop_ParameterScrollItem_Fields *)
                              ((long)local_60.fields._current + 0x10))->LBMOMAIHCEM,local_68 + 1,
                       true,false,(MethodInfo *)0x0);
    pPVar5 = (__this->fields).GFGOPEKNBPF;
    if (pPVar5 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(bVar2);
    }
    pFVar3 = (pPVar5->fields).ACHJNNOKEDK;
    if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    FPLCEOJCPOD__KNMENIBLFGF
              (pFVar3,((Nekki_SF2_GUI_Shop_ParameterScrollItem_Fields *)((long)__this_00 + 0x10))->
                      LBMOMAIHCEM,local_68,true,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ParameterScrollItem__SetValue
              ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)__this_00,local_68[1],local_68[0],
               PNEIGGOFIOA,(MethodInfo *)0x0);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031f9564:
  local_68[0] = 0;
  local_68[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AdditionalRootGraphics(bool CBBJMNGHMIF, Graphic[] NPGBEDGMDNG)  [RVA 0x30F9600]
// Nekki.SF2.GUI.Shop.ParametersPanelContent$$AdditionalRootGraphics @ RVA 0x30F9600

void Nekki_SF2_GUI_Shop_ParametersPanelContent__AdditionalRootGraphics
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,bool CBBJMNGHMIF,
               UnityEngine_UI_Graphic_array *NPGBEDGMDNG,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_Graphic__o *pSVar1;
  
  if ((DAT_0456648a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_Clear__);
    DAT_0456648a = 1;
  }
  if (!CBBJMNGHMIF) {
    pSVar1 = (__this->fields).PMHLGLALHLH;
    if (pSVar1 == (System_Collections_Generic_List_Graphic__o *)0x0) goto LAB_031f96b8;
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  if ((NPGBEDGMDNG == (UnityEngine_UI_Graphic_array *)0x0) || (NPGBEDGMDNG->max_length == 0)) {
    return;
  }
  pSVar1 = (__this->fields).PMHLGLALHLH;
  if (pSVar1 != (System_Collections_Generic_List_Graphic__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)NPGBEDGMDNG,
               Method_System_Collections_Generic_List<Graphic>_AddRange__);
    return;
  }
LAB_031f96b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

