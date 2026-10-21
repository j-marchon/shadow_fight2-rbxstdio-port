// TypeDefIndex 3262
// Namespace: Nekki.SF2.GUI.Common.Hints
// public class HintList : UIModule
// Fields:
//   private LayoutGroup _Layout; // 0x28
//   private LabelAlias _Description; // 0x30
//   private int _TrackingDeviceID; // 0x38
//   private BECNIAAJCFO _HintGroupType; // 0x3C
//   private HintList.HAMPHJMMJFE _OnHintSchemeChanged; // 0x40
//   private int JJOBECCEMMI; // 0x48
//   private string OHENCPAHBDH; // 0x50
//   private ODLJFAIHELG AKOLAICNIJF; // 0x58
//   private List<HintGroup> DEDJHBCOMCJ; // 0x60

// ===== public int get_TrackingDeviceID()  [RVA 0x3514530]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_TrackingDeviceID @ RVA 0x3514530

int32_t Nekki_SF2_GUI_Common_Hints_HintList__get_TrackingDeviceID
                  (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  return (__this->fields)._TrackingDeviceID;
}


// ===== public void set_Offset(int CJNHFNHJHPE)  [RVA 0x3514538]
// Nekki.SF2.GUI.Common.Hints.HintList$$set_Offset @ RVA 0x3514538

void Nekki_SF2_GUI_Common_Hints_HintList__set_Offset
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method
               )

{
  if ((__this->fields).JJOBECCEMMI == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).JJOBECCEMMI = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintList__JODPCNMCILH(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public HintList.HAMPHJMMJFE get_OnHintSchemeChanged()  [RVA 0x3514608]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_OnHintSchemeChanged @ RVA 0x3514608

Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *
Nekki_SF2_GUI_Common_Hints_HintList__get_OnHintSchemeChanged
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnHintSchemeChanged;
}


// ===== public void SetHintGroupDescription(FEEECOADFNH AEIKGKKKFMM, string EPGABDICNIO)  [RVA 0x3514610]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupDescription @ RVA 0x3514610

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupDescription
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,
               System_String_o *EPGABDICNIO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)EPGABDICNIO;
  if ((DAT_04568915 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568915 = 1;
  }
  x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((x != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
     (__this_00 = (x->fields)._Description, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,EPGABDICNIO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3514798]
// Nekki.SF2.GUI.Common.Hints.HintList$$.ctor @ RVA 0x3514798

void Nekki_SF2_GUI_Common_Hints_HintList___ctor
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o **ppNVar1;
  System_Collections_Generic_List_HintGroup__o *__this_01;
  System_Collections_Generic_List_HintGroup__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04568916 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintGroup>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568916 = 1;
    method = extraout_x1;
  }
  (__this->fields)._TrackingDeviceID = -1;
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnHintSchemeChanged;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  (__this->fields).OHENCPAHBDH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_01 = (System_Collections_Generic_List_HintGroup__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HintGroup>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HintGroup>__ctor__);
  ppSVar2 = &(__this->fields).DEDJHBCOMCJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x35148F4]
// Nekki.SF2.GUI.Common.Hints.HintList$$GIENGNEGHPJ @ RVA 0x35148F4

void Nekki_SF2_GUI_Common_Hints_HintList__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_RectOffset_o *pUVar4;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_LayoutGroup_o **ppUVar5;
  UnityEngine_UI_LayoutGroup_o *pUVar6;
  
  if ((DAT_04568917 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintList_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568917 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  ppUVar5 = &(__this->fields)._Layout;
  pUVar6 = *ppUVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar6 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    (__this->fields)._Layout = pUVar6;
    thunk_FUN_01c20e04(ppUVar5,pUVar6);
  }
  if ((*ppUVar5 != (UnityEngine_UI_LayoutGroup_o *)0x0) &&
     (pUVar4 = ((*ppUVar5)->fields).m_Padding, pUVar4 != (UnityEngine_RectOffset_o *)0x0)) {
    iVar2 = UnityEngine_RectOffset__get_right(pUVar4,(MethodInfo *)0x0);
    if ((*ppUVar5 != (UnityEngine_UI_LayoutGroup_o *)0x0) &&
       (pUVar4 = ((*ppUVar5)->fields).m_Padding, pUVar4 != (UnityEngine_RectOffset_o *)0x0)) {
      iVar3 = UnityEngine_RectOffset__get_left(pUVar4,(MethodInfo *)0x0);
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      (__this->fields).JJOBECCEMMI = iVar2;
      Nekki_SF2_GUI_Common_Hints_HintList__GMGNDMJDBAL(__this,method_00);
      CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                    thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
      System_Action<int,_object,_Int32Enum>___ctor();
      method_01 = extraout_x1;
      if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_01 = extraout_x1_00;
      }
      JLEKKANADII__HFKKKKBAMGE(CJNHFNHJHPE,method_01);
      Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(__this,method_02);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_DescriptionAlias(string CJNHFNHJHPE)  [RVA 0x3514DEC]
// Nekki.SF2.GUI.Common.Hints.HintList$$set_DescriptionAlias @ RVA 0x3514DEC

void Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionAlias
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568918 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568918 = 1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Description;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._Description;
      if (((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
          (pUVar2 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void set_DescriptionActive(bool CJNHFNHJHPE)  [RVA 0x3514ED4]
// Nekki.SF2.GUI.Common.Hints.HintList$$set_DescriptionActive @ RVA 0x3514ED4

void Nekki_SF2_GUI_Common_Hints_HintList__set_DescriptionActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568919 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568919 = 1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Description;
    if ((((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
        (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
        pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetHintGroupActive(FEEECOADFNH AEIKGKKKFMM, bool GKGCMGDFHAH)  [RVA 0x3514F90]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupActive @ RVA 0x3514F90

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,bool GKGCMGDFHAH,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)GKGCMGDFHAH;
  if ((DAT_0456891a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456891a = 1;
  }
  x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((x != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,GKGCMGDFHAH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LayoutGroup get_Layout()  [RVA 0x3515048]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_Layout @ RVA 0x3515048

UnityEngine_UI_LayoutGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__get_Layout
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  return (__this->fields)._Layout;
}


// ===== public void set_HintAlignment(TextAnchor CJNHFNHJHPE)  [RVA 0x3515050]
// Nekki.SF2.GUI.Common.Hints.HintList$$set_HintAlignment @ RVA 0x3515050

void Nekki_SF2_GUI_Common_Hints_HintList__set_HintAlignment
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method
               )

{
  UnityEngine_UI_LayoutGroup_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._Layout;
  if (__this_00 == (UnityEngine_UI_LayoutGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields).m_ChildAlignment == CJNHFNHJHPE) {
    return;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_Hints_HintList__JODPCNMCILH(__this,method_00);
  return;
}


// ===== private void GMGNDMJDBAL()  [RVA 0x3514A64]
// Nekki.SF2.GUI.Common.Hints.HintList$$GMGNDMJDBAL @ RVA 0x3514A64

void Nekki_SF2_GUI_Common_Hints_HintList__GMGNDMJDBAL
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_Generic_List_HintGroup__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_0456891b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<HintGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    DAT_0456891b = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).DEDJHBCOMCJ;
  if (pSVar3 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).DEDJHBCOMCJ;
    }
    UnityEngine_Component__GetComponentsInChildren<object>
              ((UnityEngine_Component_o *)__this,true,(System_Collections_Generic_List_T__o *)pSVar3
               ,Method_UnityEngine_Component_GetComponentsInChildren<HintGroup>__);
    pSVar3 = (__this->fields).DEDJHBCOMCJ;
    if (pSVar3 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
      while( true ) {
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_40,
                             Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__
                            );
          __this_00 = local_40.fields._current;
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_40,
                       Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
            return;
          }
          if ((UnityEngine_Component_o *)local_40.fields._current == (UnityEngine_Component_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)local_40.fields._current,(MethodInfo *)0x0)
          ;
          if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
        } while (bVar1);
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) break;
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowHints(List<FEEECOADFNH> EJHNEHKMEOB)  [RVA 0x351508C]
// Nekki.SF2.GUI.Common.Hints.HintList$$ShowHints @ RVA 0x351508C

void Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,
               System_Collections_Generic_List_FEEECOADFNH__o *EJHNEHKMEOB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456891c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FEEECOADFNH>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    DAT_0456891c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DEDJHBCOMCJ;
  if (__this_00 == (System_Collections_Generic_List_HintGroup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    pIVar1 = local_60.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
      return;
    }
    if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0);
    if (EJHNEHKMEOB == (System_Collections_Generic_List_FEEECOADFNH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      ((System_Collections_Generic_List_T__o *)EJHNEHKMEOB,
                       *(int32_t *)
                        ((long)&((UnityEngine_Component_o *)((long)pIVar1 + 0x48))->klass + 4),
                       Method_System_Collections_Generic_List<FEEECOADFNH>_Contains__);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(__this_01,bVar2,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetHintGroupHintsActive(FEEECOADFNH AEIKGKKKFMM, bool BALACEGEDBN)  [RVA 0x3515244]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupHintsActive @ RVA 0x3515244

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHintsActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,bool BALACEGEDBN,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  System_Collections_Generic_List_HintUI__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)(ulong)BALACEGEDBN;
  if ((DAT_0456891d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456891d = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((x == (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) ||
       (__this_00 = (x->fields).DEDJHBCOMCJ,
       __this_00 == (System_Collections_Generic_List_HintUI__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__),
          bVar1) {
      if ((UnityEngine_Component_o *)local_48.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_01,BALACEGEDBN,(MethodInfo *)0x0);
    }
                    /* try { // try from 03615358 to 0371535f has its CatchHandler @ 03615548 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
  }
                    /* try { // try from 03615370 to 0371537b has its CatchHandler @ 03615544 */
                    /* try { // try from 0361537c to 03715533 has its CatchHandler @ 03615234 */
  return;
}


// ===== private void JODPCNMCILH()  [RVA 0x3514550]
// Nekki.SF2.GUI.Common.Hints.HintList$$JODPCNMCILH @ RVA 0x3514550

void Nekki_SF2_GUI_Common_Hints_HintList__JODPCNMCILH
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_LayoutGroup_o *pUVar2;
  UnityEngine_RectOffset_o *pUVar3;
  
  pUVar2 = (__this->fields)._Layout;
  if ((pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) &&
     (pUVar3 = (pUVar2->fields).m_Padding, pUVar3 != (UnityEngine_RectOffset_o *)0x0)) {
    UnityEngine_RectOffset__set_right(pUVar3,0,(MethodInfo *)0x0);
    UnityEngine_RectOffset__set_left(pUVar3,0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._Layout;
    if (pUVar2 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
      uVar1 = (pUVar2->fields).m_ChildAlignment;
      if (8 < uVar1) {
        return;
      }
      uVar1 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar1 & 0x49) == 0) {
        if ((uVar1 & 0x124) == 0) {
          return;
        }
        pUVar3 = (pUVar2->fields).m_Padding;
        if (pUVar3 != (UnityEngine_RectOffset_o *)0x0) {
          UnityEngine_RectOffset__set_right(pUVar3,(__this->fields).JJOBECCEMMI,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar3 = (pUVar2->fields).m_Padding;
        if (pUVar3 != (UnityEngine_RectOffset_o *)0x0) {
          UnityEngine_RectOffset__set_left(pUVar3,(__this->fields).JJOBECCEMMI,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_DescriptionActive()  [RVA 0x3515410]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_DescriptionActive @ RVA 0x3515410

bool Nekki_SF2_GUI_Common_Hints_HintList__get_DescriptionActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456891e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456891e = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Description;
    if ((((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
        (pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0),
        pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public TextAnchor get_HintAlignment()  [RVA 0x35154BC]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_HintAlignment @ RVA 0x35154BC

int32_t Nekki_SF2_GUI_Common_Hints_HintList__get_HintAlignment
                  (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  UnityEngine_UI_LayoutGroup_o *pUVar1;
  
  pUVar1 = (__this->fields)._Layout;
  if (pUVar1 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
    return (pUVar1->fields).m_ChildAlignment;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_DescriptionAlias()  [RVA 0x35154D8]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_DescriptionAlias @ RVA 0x35154D8

System_String_o *
Nekki_SF2_GUI_Common_Hints_HintList__get_DescriptionAlias
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  bool_conflict *pbVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456891f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456891f = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._Description;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03615534 to 03715537 has its CatchHandler @ 03615540 */
                    /* try { // try from 03615538 to 0371555f has its CatchHandler @ 03615234 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615534 with catch @ 03615540
                        */
    pNVar3 = (__this->fields)._Description;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615370 with catch @ 03615544
                        */
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615358 with catch @ 03615548
                        */
    pbVar2 = &(pNVar3->fields)._useLabelLineSpacing;
  }
  else {
    pbVar2 = (bool_conflict *)&StringLiteral_1/*""*/;
  }
                    /* try { // try from 03615560 to 03715563 has its CatchHandler @ 0361558c */
                    /* try { // try from 03615564 to 0371559b has its CatchHandler @ 03615234 */
  return *(System_String_o **)pbVar2;
}


// ===== public void SetHintGroupHints(FEEECOADFNH AEIKGKKKFMM, List<MIBHAJBEMIK> LMAPGNIDHFE)  [RVA 0x351556C]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupHints @ RVA 0x351556C

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,
               System_Collections_Generic_List_MIBHAJBEMIK__o *LMAPGNIDHFE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_00;
  System_Collections_Generic_List_T__o *__this_01;
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 03615560 with catch @ 0361558c */
  method_00 = (MethodInfo *)LMAPGNIDHFE;
  if ((DAT_04568920 & 1) == 0) {
                    /* try { // try from 0361559c to 037155a3 has its CatchHandler @ 036155b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
                    /* try { // try from 036155a4 to 037155af has its CatchHandler @ 03615234 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
                    /* try { // try from 036155b0 to 037155b7 has its CatchHandler @ 036155b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361559c with catch @ 036155b8
                       catch(type#2 @ 00000000) { ... } // from try @ 036155b0 with catch @ 036155b8
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568920 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return;
  }
                    /* try { // try from 03615614 to 037157a3 has its CatchHandler @ 03615614
                       catch() { ... } // from try @ 03615614 with catch @ 03615614
                       catch() { ... } // from try @ 03615870 with catch @ 03615614
                       catch() { ... } // from try @ 036158a0 with catch @ 03615614
                       catch() { ... } // from try @ 036158ec with catch @ 03615614
                       catch() { ... } // from try @ 03615920 with catch @ 03615614
                       catch() { ... } // from try @ 0361596c with catch @ 03615614
                       catch() { ... } // from try @ 036159a4 with catch @ 03615614 */
  if ((__this_00 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_List_T__o *)(__this_00->fields)._DefaultHintIDs,
     __this_01 != (System_Collections_Generic_List_T__o *)0x0)) {
    (__this_01->fields)._size = 0;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    System_Collections_Generic_List<Int32Enum>__AddRange
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)LMAPGNIDHFE,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    Nekki_SF2_GUI_Common_Hints_HintGroup__RefreshHintIDs(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3515654]
// Nekki.SF2.GUI.Common.Hints.HintList$$CLNAOMIIBLH @ RVA 0x3515654

void Nekki_SF2_GUI_Common_Hints_HintList__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04568921 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintList_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_04568921 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  method_00 = extraout_x1;
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,method_00);
  return;
}


// ===== public void SetHintGroupAnimationAvailable(FEEECOADFNH AEIKGKKKFMM, bool EOAIBJMEPND)  [RVA 0x35157F0]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupAnimationAvailable @ RVA 0x35157F0

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,bool EOAIBJMEPND,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 036157f0 to 037157f7 has its CatchHandler @ 03615934 */
  method_00 = (MethodInfo *)(ulong)EOAIBJMEPND;
                    /* try { // try from 0361580c to 03715813 has its CatchHandler @ 0361587c */
  if ((DAT_04568922 & 1) == 0) {
                    /* try { // try from 03615824 to 0371582f has its CatchHandler @ 03615874 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568922 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03615850 to 03715857 has its CatchHandler @ 0361592c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
                    /* try { // try from 0361586c to 0371586f has its CatchHandler @ 03615878 */
                    /* try { // try from 03615870 to 0371589b has its CatchHandler @ 03615614 */
                    /* catch() { ... } // from try @ 03615824 with catch @ 03615874 */
    return;
  }
                    /* catch() { ... } // from try @ 0361586c with catch @ 03615878 */
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 0361580c with catch @ 0361587c */
    Nekki_SF2_GUI_Common_Hints_HintGroup__set_IsAnimationAvailable
              (__this_00,EOAIBJMEPND,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HintGroup GetHintGroupByHintIDs(List<MIBHAJBEMIK> GLIELCCFAGL)  [RVA 0x351589C]
// Nekki.SF2.GUI.Common.Hints.HintList$$GetHintGroupByHintIDs @ RVA 0x351589C

/* WARNING: Removing unreachable block (ram,0x03615ab8) */

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,
          System_Collections_Generic_List_MIBHAJBEMIK__o *GLIELCCFAGL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_01;
  uint uVar2;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0361589c to 0371589f has its CatchHandler @ 03615920 */
                    /* try { // try from 036158a0 to 037158e3 has its CatchHandler @ 03615614 */
  if ((DAT_04568923 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
                    /* try { // try from 036158e4 to 037158e7 has its CatchHandler @ 03615948 */
                    /* try { // try from 036158e8 to 037158eb has its CatchHandler @ 03615944 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
                    /* try { // try from 036158ec to 037158fb has its CatchHandler @ 03615614 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
                    /* try { // try from 036158fc to 03715913 has its CatchHandler @ 036159b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
                    /* try { // try from 03615914 to 0371591b has its CatchHandler @ 03615938 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
                    /* try { // try from 0361591c to 0371591f has its CatchHandler @ 03615930 */
                    /* catch() { ... } // from try @ 0361589c with catch @ 03615920
                       try { // try from 03615920 to 03715967 has its CatchHandler @ 03615614 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
                    /* catch() { ... } // from try @ 03615850 with catch @ 0361592c */
    DAT_04568923 = 1;
  }
                    /* catch() { ... } // from try @ 0361591c with catch @ 03615930 */
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
                    /* catch() { ... } // from try @ 036157f0 with catch @ 03615934 */
  local_70.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 03615914 with catch @ 03615938 */
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
                    /* catch() { ... } // from try @ 036157c0 with catch @ 0361593c */
  local_90.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 036157d8 with catch @ 03615940 */
  __this_00 = (__this->fields).DEDJHBCOMCJ;
                    /* catch() { ... } // from try @ 036158e8 with catch @ 03615944 */
  if (__this_00 == (System_Collections_Generic_List_HintGroup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 036158e4 with catch @ 03615948 */
                    /* catch() { ... } // from try @ 036157c4 with catch @ 0361594c */
                    /* catch() { ... } // from try @ 036157a4 with catch @ 03615950 */
                    /* try { // try from 03615968 to 0371596b has its CatchHandler @ 03615994 */
                    /* try { // try from 0361596c to 0371599b has its CatchHandler @ 03615614 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
                    /* catch() { ... } // from try @ 03615968 with catch @ 03615994 */
                    /* try { // try from 0361599c to 037159a3 has its CatchHandler @ 036159b8 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    __this_01 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)local_70.fields._current;
    if (!bVar1) {
      __this_01 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
      break;
    }
                    /* try { // try from 036159a4 to 037159af has its CatchHandler @ 03615614 */
    if (GLIELCCFAGL == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 036159b0 to 037159b7 has its CatchHandler @ 036159b8 */
                    /* catch() { ... } // from try @ 036158fc with catch @ 036159b8
                       catch() { ... } // from try @ 0361599c with catch @ 036159b8
                       catch() { ... } // from try @ 036159b0 with catch @ 036159b8 */
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_T__o *)GLIELCCFAGL,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
      if (!bVar1) {
        __this_01 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
        uVar2 = 2;
        goto LAB_03615a0c;
      }
      if (__this_01 == (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__ContainsHintID
                        (__this_01,(int32_t)local_90.fields._current,(MethodInfo *)0x0);
    } while (!bVar1);
    uVar2 = 6;
LAB_03615a0c:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
  } while ((uVar2 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
  return __this_01;
}


// ===== public HintGroup GetHintGroupByID(FEEECOADFNH AEIKGKKKFMM)  [RVA 0x35146C0]
// Nekki.SF2.GUI.Common.Hints.HintList$$GetHintGroupByID @ RVA 0x35146C0

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar1;
  System_Collections_Generic_List_HintGroup__o *__this_01;
  
  if ((DAT_04568924 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_Find__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintList_NOKNNEFCPBP_CEFIIBHKFBE__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintList_NOKNNEFCPBP_TypeInfo);
    FUN_01bab630(&System_Predicate<HintGroup>_TypeInfo);
    DAT_04568924 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_Hints_HintList_NOKNNEFCPBP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AEIKGKKKFMM;
    __this_01 = (__this->fields).DEDJHBCOMCJ;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HintGroup>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
      pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<HintGroup>_Find__);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ODLJFAIHELG get_HintScheme()  [RVA 0x3515B54]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_HintScheme @ RVA 0x3515B54

int32_t Nekki_SF2_GUI_Common_Hints_HintList__get_HintScheme
                  (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  return (__this->fields).AKOLAICNIJF;
}


// ===== public bool IsTutorialBlockActive(FEEECOADFNH AEIKGKKKFMM)  [RVA 0x3515B5C]
// Nekki.SF2.GUI.Common.Hints.HintList$$IsTutorialBlockActive @ RVA 0x3515B5C

bool Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_00;
  
                    /* try { // try from 03615b64 to 03715bf7 has its CatchHandler @ 03615b64
                       catch() { ... } // from try @ 03615b64 with catch @ 03615b64
                       catch() { ... } // from try @ 03615c1c with catch @ 03615b64
                       catch() { ... } // from try @ 03615c5c with catch @ 03615b64
                       catch() { ... } // from try @ 03615c84 with catch @ 03615b64
                       catch() { ... } // from try @ 03615cbc with catch @ 03615b64 */
  if ((DAT_04568925 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568925 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* try { // try from 03615bf8 to 03715bff has its CatchHandler @ 03615c68 */
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsTutorialBlockActive
                      (__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LMKOIEJBCLO(ODLJFAIHELG CJNHFNHJHPE)  [RVA 0x3515C04]
// Nekki.SF2.GUI.Common.Hints.HintList$$LMKOIEJBCLO @ RVA 0x3515C04

void Nekki_SF2_GUI_Common_Hints_HintList__LMKOIEJBCLO
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 03615c10 to 03715c1b has its CatchHandler @ 03615c60 */
                    /* try { // try from 03615c1c to 03715c57 has its CatchHandler @ 03615b64 */
  if ((DAT_04568926 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
                    /* try { // try from 03615c58 to 03715c5b has its CatchHandler @ 03615c64 */
    DAT_04568926 = 1;
  }
                    /* try { // try from 03615c5c to 03715c7f has its CatchHandler @ 03615b64 */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615c10 with catch @ 03615c60
                        */
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615c58 with catch @ 03615c64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615bf8 with catch @ 03615c68
                        */
  if (((__this->fields).AKOLAICNIJF != CJNHFNHJHPE) &&
     ((__this->fields).AKOLAICNIJF = CJNHFNHJHPE, CJNHFNHJHPE != 0x67)) {
    __this_00 = (__this->fields).DEDJHBCOMCJ;
                    /* try { // try from 03615c80 to 03715c83 has its CatchHandler @ 03615cac */
    if (__this_00 == (System_Collections_Generic_List_HintGroup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03615c84 to 03715cb3 has its CatchHandler @ 03615b64 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
                    /* catch() { ... } // from try @ 03615c80 with catch @ 03615cac */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 03615cb4 to 03715cbb has its CatchHandler @ 03615cd0 */
      if ((Nekki_SF2_GUI_Common_Hints_HintGroup_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03615cbc to 03715cc7 has its CatchHandler @ 03615b64 */
      Nekki_SF2_GUI_Common_Hints_HintGroup__set_HintScheme
                ((Nekki_SF2_GUI_Common_Hints_HintGroup_o *)local_38.fields._current,
                 (__this->fields).AKOLAICNIJF,(MethodInfo *)0x0);
    }
                    /* try { // try from 03615cc8 to 03715ccf has its CatchHandler @ 03615cd0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03615cb4 with catch @ 03615cd0
                       catch(type#2 @ 00000000) { ... } // from try @ 03615cc8 with catch @ 03615cd0
                        */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
  }
  return;
}


// ===== public void ShowHints(FEEECOADFNH[] EJHNEHKMEOB)  [RVA 0x3515D70]
// Nekki.SF2.GUI.Common.Hints.HintList$$ShowHints @ RVA 0x3515D70

void Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,FEEECOADFNH_array *EJHNEHKMEOB,
               MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *EJHNEHKMEOB_00;
  
  if ((DAT_04568927 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<FEEECOADFNH>__);
    DAT_04568927 = 1;
  }
  EJHNEHKMEOB_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)EJHNEHKMEOB,
                  Method_System_Linq_Enumerable_ToList<FEEECOADFNH>__);
  Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
            (__this,(System_Collections_Generic_List_FEEECOADFNH__o *)EJHNEHKMEOB_00,method);
  return;
}


// ===== public HintGroup GetHintGroupByHintIDs(MIBHAJBEMIK[] GLIELCCFAGL)  [RVA 0x3515DD0]
// Nekki.SF2.GUI.Common.Hints.HintList$$GetHintGroupByHintIDs @ RVA 0x3515DD0

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MIBHAJBEMIK_array *GLIELCCFAGL,
          MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *GLIELCCFAGL_00;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar1;
  
  if ((DAT_04568928 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
    DAT_04568928 = 1;
  }
  GLIELCCFAGL_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)GLIELCCFAGL,
                  Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
  pNVar1 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs
                     (__this,(System_Collections_Generic_List_MIBHAJBEMIK__o *)GLIELCCFAGL_00,method
                     );
  return pNVar1;
}


// ===== private void JCDGMAEDFIF(int BMPJIDHGCBN, string LOAHEPDBFAO, ODLJFAIHELG CGLFKKMBHCN)  [RVA 0x3515E30]
// Nekki.SF2.GUI.Common.Hints.HintList$$JCDGMAEDFIF @ RVA 0x3515E30

void Nekki_SF2_GUI_Common_Hints_HintList__JCDGMAEDFIF
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t BMPJIDHGCBN,
               System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_01;
  undefined8 uVar5;
  MethodInfo *method_00;
  System_String_o **ppSVar6;
  int32_t local_34;
  
  method_00 = (MethodInfo *)LOAHEPDBFAO;
  if ((DAT_04568929 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ODLJFAIHELG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_Invoke__);
    FUN_01bab630(&StringLiteral_15486/*"[HintList]: '{0}'.OnSchemeChanged (device.Name={1}, HintScheme={2})"*/);
    DAT_04568929 = 1;
  }
  iVar1 = (__this->fields)._TrackingDeviceID;
  if ((iVar1 == -1) || (iVar1 != BMPJIDHGCBN)) {
    return;
  }
  ppSVar6 = &(__this->fields).OHENCPAHBDH;
  *ppSVar6 = LOAHEPDBFAO;
  thunk_FUN_01c20e04(ppSVar6,LOAHEPDBFAO);
  Nekki_SF2_GUI_Common_Hints_HintList__LMKOIEJBCLO(__this,CGLFKKMBHCN,method_00);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 == (UnityEngine_Object_o *)0x0) ||
     (pSVar2 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
     args == (System_Object_array *)0x0)) {
LAB_0361602c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar2 != (System_String_o *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03616030:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar2;
    thunk_FUN_01c20e04(args->m_Items,pSVar2);
    pSVar2 = *ppSVar6;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_03616030;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar2);
      local_34 = (__this->fields).AKOLAICNIJF;
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(ODLJFAIHELG_TypeInfo,&local_34);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_03616030;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogFormat(StringLiteral_15486/*"[HintList]: '{0}'.OnSchemeChanged (device.Name={1}, HintScheme={2})"*/,args,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._OnHintSchemeChanged;
        if (__this_01 != (Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *)0x0) {
          UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).AKOLAICNIJF,
                     Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_Invoke__);
          return;
        }
        goto LAB_0361602c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void set_TrackingDeviceID(int CJNHFNHJHPE)  [RVA 0x351603C]
// Nekki.SF2.GUI.Common.Hints.HintList$$set_TrackingDeviceID @ RVA 0x351603C

void Nekki_SF2_GUI_Common_Hints_HintList__set_TrackingDeviceID
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method
               )

{
  if ((__this->fields)._TrackingDeviceID == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._TrackingDeviceID = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public string get_TrackingDeviceName()  [RVA 0x3516054]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_TrackingDeviceName @ RVA 0x3516054

System_String_o *
Nekki_SF2_GUI_Common_Hints_HintList__get_TrackingDeviceName
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  return (__this->fields).OHENCPAHBDH;
}


// ===== public void SetHintGroupHints(FEEECOADFNH AEIKGKKKFMM, MIBHAJBEMIK[] LMAPGNIDHFE)  [RVA 0x351605C]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupHints @ RVA 0x351605C

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,
               MIBHAJBEMIK_array *LMAPGNIDHFE,MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *LMAPGNIDHFE_00;
  
  if ((DAT_0456892a & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
    DAT_0456892a = 1;
  }
  LMAPGNIDHFE_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)LMAPGNIDHFE,
                  Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
  Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHints
            (__this,AEIKGKKKFMM,(System_Collections_Generic_List_MIBHAJBEMIK__o *)LMAPGNIDHFE_00,
             method);
  return;
}


// ===== public void SetHintGroupActive(MIBHAJBEMIK OHLKNCPBCBL, bool GKGCMGDFHAH)  [RVA 0x35160C4]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupActive @ RVA 0x35160C4

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t OHLKNCPBCBL,bool GKGCMGDFHAH,
               MethodInfo *method)

{
  bool bVar1;
  MIBHAJBEMIK_array *GLIELCCFAGL;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)GKGCMGDFHAH;
  if ((DAT_0456892b & 1) == 0) {
    FUN_01bab630(&MIBHAJBEMIK___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456892b = 1;
  }
  GLIELCCFAGL = (MIBHAJBEMIK_array *)FUN_01bab718(MIBHAJBEMIK___TypeInfo,1);
  if (GLIELCCFAGL != (MIBHAJBEMIK_array *)0x0) {
    if ((int)GLIELCCFAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    GLIELCCFAGL->m_Items[0] = OHLKNCPBCBL;
    x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs(__this,GLIELCCFAGL,method_00);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((x != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,GKGCMGDFHAH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_Offset()  [RVA 0x35161B0]
// Nekki.SF2.GUI.Common.Hints.HintList$$get_Offset @ RVA 0x35161B0

int32_t Nekki_SF2_GUI_Common_Hints_HintList__get_Offset
                  (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  return (__this->fields).JJOBECCEMMI;
}


// ===== public void SetHintGroupExtraImageActive(FEEECOADFNH AEIKGKKKFMM, bool BALACEGEDBN)  [RVA 0x35161B8]
// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupExtraImageActive @ RVA 0x35161B8

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupExtraImageActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,bool BALACEGEDBN,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  method_00 = (MethodInfo *)(ulong)BALACEGEDBN;
  if ((DAT_0456892c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456892c = 1;
  }
  x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (x != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
    pNVar2 = (x->fields)._ExtraImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      return;
    }
    pNVar2 = (x->fields)._ExtraImage;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,BALACEGEDBN,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NNCDBOLMLHK()  [RVA 0x3514D74]
// Nekki.SF2.GUI.Common.Hints.HintList$$NNCDBOLMLHK @ RVA 0x3514D74

void Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  
  if ((DAT_0456892d & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_0456892d = 1;
    method = extraout_x1;
  }
  BMPJIDHGCBN = (__this->fields)._TrackingDeviceID;
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo,method);
  }
  pMVar1 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
  if (pMVar1 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    Nekki_SF2_GUI_Common_Hints_HintList__JCDGMAEDFIF
              (__this,(__this->fields)._TrackingDeviceID,(pMVar1->fields).PHPELPFMOII,
               (pMVar1->fields).DOKHHBGJICA,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HideAll()  [RVA 0x351629C]
// Nekki.SF2.GUI.Common.Hints.HintList$$HideAll @ RVA 0x351629C

void Nekki_SF2_GUI_Common_Hints_HintList__HideAll
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456892e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456892e = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DEDJHBCOMCJ;
  if (__this_00 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_50.fields._current,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    pNVar3 = (__this->fields)._Description;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._Description;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036163f0;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    return;
  }
LAB_036163f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

