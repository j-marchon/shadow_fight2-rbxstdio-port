// TypeDefIndex 3361
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class TopMedalsInfoView : RaidPlayerInfoView
// Fields:
//   private const float PKJCEIJHBBK = 20;
//   private LabelAlias _medalLabel; // 0x30
//   private SimpleScroll _simpleScroll; // 0x38
//   private Transform _maxHintY; // 0x40
//   private Transform _minHintY; // 0x48
//   private LabelAlias _lblGoldCount; // 0x50
//   private LabelAlias _lblSilverCount; // 0x58
//   private GameObject _cellPrefab; // 0x60
//   private GameObject _hintPrefab; // 0x68
//   private List<MedalsScrollItem.FALGLCABJFN> JILLAJIPGFH; // 0x70

// ===== public void Init(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x3538C28]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$Init @ RVA 0x3538C28

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  BHEDGAKGKPO_StaticFields *pBVar2;
  EOLFEKNCPLM_o **ppEVar3;
  
  if ((DAT_04568ab0 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_8911/*"MedalLabel"*/);
    DAT_04568ab0 = 1;
  }
  ppEVar3 = &(__this->fields).super.MLAAJICBOAD;
  *ppEVar3 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar3,HEHMPFLAEGE);
  __this_00 = (__this->fields)._simpleScroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._medalLabel;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,StringLiteral_8911/*"MedalLabel"*/,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._medalLabel;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar2->FHIAKPJBBCB).fields.r,(pBVar2->FHIAKPJBBCB).fields.g,
                   (pBVar2->FHIAKPJBBCB).fields.b,(pBVar2->FHIAKPJBBCB).fields.a,pNVar1,
                   (pNVar1->klass->vtable)._23_set_color.method);
                    /* WARNING: Could not recover jumptable at 0x03638d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._19_UpdateContent.methodPtr)
                  (__this,0,(__this->klass->vtable)._19_UpdateContent.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHHLFBBBJLD(MedalsScrollItem.BDLDLFJALKC OLBADKJBAEM)  [RVA 0x3538D0C]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$LHHLFBBBJLD @ RVA 0x3538D0C

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_BDLDLFJALKC_o *OLBADKJBAEM,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *pNVar8;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  undefined8 uVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  
  if ((DAT_04568ab1 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_7110/*"HintMedal"*/);
    DAT_04568ab1 = 1;
  }
  if ((OLBADKJBAEM != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_BDLDLFJALKC_o *)0x0) &&
     (pUVar3 = (__this->fields)._minHintY, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    fVar14 = (OLBADKJBAEM->fields).GIDBDJLFEBO.fields.y;
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      if (fVar14 < UVar15.fields.y) {
        return;
      }
      pUVar3 = (__this->fields)._maxHintY;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        fVar14 = (OLBADKJBAEM->fields).GIDBDJLFEBO.fields.y;
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          if (UVar15.fields.y < fVar14) {
            return;
          }
          pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar5 = Method_System_Array_Empty<string>__;
          lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
          if (lVar9 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<string>__);
            lVar9 = *(long *)(lVar5 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01b81620();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01b81620();
          }
          uVar2 = StringLiteral_7110/*"HintMedal"*/;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar10 = pIVar4->klass;
            uVar13 = **(undefined8 **)(lVar5 + 0xb8);
            uVar1._0_1_ = (pIVar10->_2).rank;
            uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
            uVar11 = (ulong)uVar1;
            if (uVar11 != 0) {
              piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar6 = pIVar10->vtable + (*piVar12 + 0xc);
                  goto LAB_03638eb0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03638eb0:
            pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar13,pVVar6->method);
            pSVar7 = System_String__Concat
                               (pSVar7,StringLiteral_167/*" "*/,(OLBADKJBAEM->fields).LKHLLEMIENA,
                                (MethodInfo *)0x0);
            DKIDCBPNMPD = (__this->fields)._hintPrefab;
            pNVar8 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
            if ((pNVar8 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) &&
               (__this_00 = (pNVar8->fields)._screen,
               __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *)0x0)) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                                    (DKIDCBPNMPD,pUVar3,
                                     (UnityEngine_Vector3_o)(OLBADKJBAEM->fields).GIDBDJLFEBO.fields
                                     ,20.0,-1.0,-1.0,(MethodInfo *)0x0);
              if (__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) {
                Nekki_SF2_GUI_HintBoxAutoKilled__SetDescText(__this_01,pSVar7,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x3538F48]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$.ctor @ RVA 0x3538F48

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *__this_00;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ab2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_TypeInfo);
    DAT_04568ab2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>__ctor__);
  ppSVar1 = &(__this->fields).JILLAJIPGFH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerInfoView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private MedalsScrollItem JALIJKAKFIA(int JDEFJPHCNMM)  [RVA 0x3538FD0]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$JALIJKAKFIA @ RVA 0x3538FD0

Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *
Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__JALIJKAKFIA
          (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,int32_t JDEFJPHCNMM,
          MethodInfo *method)

{
  System_Action_MedalsScrollItem_BDLDLFJALKC__o **ppSVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *__this_00;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *DKMMBMBMJBO;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  UnityEngine_GameObject_o *pUVar4;
  System_Action_MedalsScrollItem_BDLDLFJALKC__o *pSVar5;
  System_Action_MedalsScrollItem_BDLDLFJALKC__c *pSVar6;
  
  if ((DAT_04568ab3 & 1) == 0) {
    FUN_01bab630(&System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MedalsScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_LHHLFBBBJLD__);
    DAT_04568ab3 = 1;
  }
  pUVar4 = (__this->fields)._cellPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (pUVar4,Method_UnityEngine_GameObject_GetComponent<MedalsScrollItem>__);
    __this_02 = (__this->fields)._simpleScroll;
    if ((__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (Nekki_SF2_GUI_SimpleScroll__AddItem
                  (__this_02,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0),
       __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *)0x0)) {
      pSVar5 = (__this_00->fields).OnMedalClick;
      ppSVar1 = &(__this_00->fields).OnMedalClick;
      pSVar2 = (System_Delegate_o *)
               thunk_FUN_01bda818(System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
      System_Action<object>___ctor();
      pSVar2 = System_Delegate__Combine((System_Delegate_o *)pSVar5,pSVar2,(MethodInfo *)0x0);
      pSVar6 = System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo;
      if (pSVar2 == (System_Delegate_o *)0x0) {
        lVar3 = 0;
        *ppSVar1 = (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)0x0;
      }
      else {
        pSVar5 = (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)
                 thunk_FUN_01bda71c(pSVar2,System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
        if (pSVar5 == (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)0x0) {
LAB_03639124:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar2,pSVar6);
        }
        *ppSVar1 = pSVar5;
        pSVar6 = System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo;
        lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
        if (lVar3 == 0) goto LAB_03639124;
      }
      thunk_FUN_01c20e04(ppSVar1,lVar3);
      __this_01 = (__this->fields).JILLAJIPGFH;
      if (__this_01 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
        DKMMBMBMJBO = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,JDEFJPHCNMM,
                                 Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_get_Item__
                                );
        Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem__Init(__this_00,DKMMBMBMJBO,(MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<KMDOLFBIGNC> OOIMKCKLBAI()  [RVA 0x3539188]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$OOIMKCKLBAI @ RVA 0x3539188

System_Collections_Generic_List_KMDOLFBIGNC__o *
Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__OOIMKCKLBAI
          (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_00;
  KMDOLFBIGNC_o *__this_01;
  PGICCMFLDPI_o *__this_02;
  PGICCMFLDPI_o **ppPVar3;
  MethodInfo *extraout_x1;
  KMDOLFBIGNC_array *pKVar4;
  int iVar5;
  
  if ((DAT_04568ab4 & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568ab4 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
  __this_01 = (KMDOLFBIGNC_o *)thunk_FUN_01bda818(KMDOLFBIGNC_TypeInfo);
  KMDOLFBIGNC___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (KMDOLFBIGNC_o *)0x0) {
    (__this_01->fields).HCBJCMDLODI = 1;
    (__this_01->fields).PDOMCPONBNB = 1;
    __this_02 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
    PGICCMFLDPI___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (PGICCMFLDPI_o *)0x0) {
      (__this_02->fields).GDKPGIBMFPA = 1;
      ppPVar3 = &(__this_01->fields).PNGGPPDKHPH;
      *ppPVar3 = __this_02;
      thunk_FUN_01c20e04(ppPVar3,__this_02);
      if (__this_00 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) {
        iVar5 = 10;
        while( true ) {
          lVar2 = Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__;
          pKVar4 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pKVar4 == (KMDOLFBIGNC_array *)0x0) break;
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pKVar4->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pKVar4->m_Items[(int)uVar1] = __this_01;
            thunk_FUN_01c20e04(pKVar4->m_Items + (int)uVar1,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            return __this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<KMDOLFBIGNC> FKNCNBACLKL(List<KMDOLFBIGNC> LBELDDAPIMD)  [RVA 0x35392F8]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$FKNCNBACLKL @ RVA 0x35392F8

System_Collections_Generic_List_KMDOLFBIGNC__o *
Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__FKNCNBACLKL
          (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,
          System_Collections_Generic_List_KMDOLFBIGNC__o *LBELDDAPIMD,MethodInfo *method)

{
  System_Func_KMDOLFBIGNC__long__o **ppSVar1;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_KMDOLFBIGNC__o *pSVar2;
  System_Func_KMDOLFBIGNC__long__o *keySelector;
  
  if ((DAT_04568ab5 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderByDescending<KMDOLFBIGNC,_long>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KMDOLFBIGNC>__);
    FUN_01bab630(&System_Func<KMDOLFBIGNC,_long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_BFEHMDENABN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo);
    DAT_04568ab5 = 1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  keySelector = Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->static_fields->__9__13_0
  ;
  if (keySelector == (System_Func_KMDOLFBIGNC__long__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    keySelector = (System_Func_KMDOLFBIGNC__long__o *)
                  thunk_FUN_01bda818(System_Func<KMDOLFBIGNC,_long>_TypeInfo);
    System_Func<object,_long>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = keySelector;
    thunk_FUN_01c20e04(ppSVar1,keySelector);
  }
  source = System_Linq_Enumerable__OrderByDescending<object,_long>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)LBELDDAPIMD,
                      (System_Func_TSource__TKey__o *)keySelector,
                      Method_System_Linq_Enumerable_OrderByDescending<KMDOLFBIGNC,_long>__);
  pSVar2 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      Method_System_Linq_Enumerable_ToList<KMDOLFBIGNC>__);
  return pSVar2;
}


// ===== private void LLCEDKDCDCM(List<KMDOLFBIGNC> LBELDDAPIMD)  [RVA 0x3539414]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$LLCEDKDCDCM @ RVA 0x3539414

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__LLCEDKDCDCM
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,
               System_Collections_Generic_List_KMDOLFBIGNC__o *LBELDDAPIMD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *extraout_x0;
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_01;
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_02;
  KMDOLFBIGNC_o *item;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *pNVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  PLIIGOCLJDL_o *pPVar5;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar6;
  Il2CppObject *pIVar7;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar8;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *pSVar10;
  KMDOLFBIGNC_array *pKVar11;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_array *pNVar12;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  int iVar14;
  int index;
  int iVar15;
  undefined8 local_68;
  
  __this_00 = __this;
  if ((DAT_04568ab6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *)
                FUN_01bab630(&StringLiteral_22052/*"x"*/);
    DAT_04568ab6 = 1;
  }
  local_68 = 0;
  pSVar10 = (__this->fields).JILLAJIPGFH;
  if (pSVar10 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
    uVar1 = (pSVar10->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar10->fields)._size = 0;
    (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,uVar1,(MethodInfo *)0x0);
      __this_00 = extraout_x0;
    }
    __this_01 = Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__FKNCNBACLKL
                          (__this_00,LBELDDAPIMD,method_00);
    if (__this_01 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) {
      if (0 < (__this_01->fields)._size) {
        iVar15 = 0;
        do {
          __this_02 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
          iVar14 = 0;
          do {
            if ((__this_01->fields)._size <= iVar15 + iVar14) break;
            method_00 = Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__;
            item = (KMDOLFBIGNC_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar15 + iVar14
                              ,(MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
            lVar2 = Method_System_Collections_Generic_List<KMDOLFBIGNC>_Add__;
            if (__this_02 == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)
            goto LAB_036398d4;
            pKVar11 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pKVar11 == (KMDOLFBIGNC_array *)0x0) goto LAB_036398d4;
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pKVar11->max_length) {
              (__this_02->fields)._size = uVar1 + 1;
              pKVar11->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04();
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item
                         ,(MethodInfo_26E4DAC *)method_00);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != 3);
          pSVar10 = (__this->fields).JILLAJIPGFH;
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)
                   thunk_FUN_01bda818(
                                     Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_TypeInfo
                                     );
          Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN___ctor(pNVar3,(MethodInfo *)0x0);
          if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0)
          goto LAB_036398d4;
          (pNVar3->fields).PCAAANOFKNG = __this_02;
          thunk_FUN_01c20e04(&pNVar3->fields,__this_02);
          lVar2 = Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Add__;
          if (pSVar10 == (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0)
          goto LAB_036398d4;
          pNVar12 = (pSVar10->fields)._items;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (pNVar12 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_array *)0x0)
          goto LAB_036398d4;
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar12->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar12->m_Items[(int)uVar1] = pNVar3;
            thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,pNVar3);
          }
          else {
            method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar3,
                       (MethodInfo_26E4DAC *)method_00);
          }
          iVar15 = iVar15 + 3;
        } while (iVar15 < (__this_01->fields)._size);
      }
      pSVar10 = (__this->fields).JILLAJIPGFH;
      pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)
               thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_TypeInfo)
      ;
      Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN___ctor(pNVar3,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Add__;
      if (pSVar10 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
        pNVar12 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar12 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_array *)0x0) {
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar12->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar12->m_Items[(int)uVar1] = pNVar3;
            thunk_FUN_01c20e04(pNVar12->m_Items + (int)uVar1,pNVar3);
          }
          else {
            method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar3,
                       (MethodInfo_26E4DAC *)method_00);
          }
          pNVar4 = (__this->fields)._simpleScroll;
          if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
            Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar4,(MethodInfo *)0x0);
            pSVar10 = (__this->fields).JILLAJIPGFH;
            if (pSVar10 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
              iVar15 = 0;
              do {
                if ((pSVar10->fields)._size <= iVar15) {
                  pNVar4 = (__this->fields)._simpleScroll;
                  if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar4,0,0.0,8,(MethodInfo *)0x0);
                    local_68 = 0;
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                    if (pPVar5 != (PLIIGOCLJDL_o *)0x0) {
                      pJVar6 = PLIIGOCLJDL__LPCLGCOCEEA(pPVar5,1,(MethodInfo *)0x0);
                      if ((__this_01->fields)._size < 1) goto LAB_03639834;
                      iVar14 = 0;
                      iVar15 = 0;
                      index = 0;
                      goto LAB_036397c0;
                    }
                  }
                  break;
                }
                Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__JALIJKAKFIA(__this,iVar15,method_00);
                pSVar10 = (__this->fields).JILLAJIPGFH;
                iVar15 = iVar15 + 1;
              } while (pSVar10 !=
                       (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0);
            }
          }
        }
      }
    }
  }
  goto LAB_036398d4;
  while( true ) {
    pJVar8 = PLIIGOCLJDL__LPCLGCOCEEA(pPVar5,*(int32_t *)&pIVar7[2].monitor,(MethodInfo *)0x0);
    if (pJVar8 != (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
      if (pJVar8 == pJVar6) {
        iVar14 = iVar14 + 1;
        local_68 = CONCAT44(iVar14,(undefined4)local_68);
      }
      else {
        iVar15 = iVar15 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar15);
      }
    }
    index = index + 1;
    if ((__this_01->fields)._size <= index) break;
LAB_036397c0:
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    pIVar7 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,index,
                        (MethodInfo_26E4ADC *)
                        Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    if ((pIVar7 == (Il2CppObject *)0x0) || (pPVar5 == (PLIIGOCLJDL_o *)0x0)) goto LAB_036398d4;
  }
LAB_03639834:
  pNVar13 = (__this->fields)._lblGoldCount;
  pSVar9 = System_Int32__ToString((int)&local_68 + 4,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat(StringLiteral_22052/*"x"*/,pSVar9,(MethodInfo *)0x0);
  if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
              (pNVar13,pSVar9,(pNVar13->klass->vtable)._75_set_text.method);
    pNVar13 = (__this->fields)._lblSilverCount;
    pSVar9 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(StringLiteral_22052/*"x"*/,pSVar9,(MethodInfo *)0x0);
    if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar13->klass->vtable)._75_set_text.methodPtr)
                (pNVar13,pSVar9,(pNVar13->klass->vtable)._75_set_text.method);
      return;
    }
  }
LAB_036398d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x35398D8]
// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$UpdateContent @ RVA 0x35398D8

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_KMDOLFBIGNC__o *LBELDDAPIMD;
  System_Collections_Generic_List_KMDOLFBIGNC__o *collection;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Il2CppObject *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_00;
  EOLFEKNCPLM_o *pEVar3;
  FGKGKDEJCOG_o *pFVar4;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *pSVar5;
  OBCMNBDBNFO_o *pOVar6;
  
  if ((DAT_04568ab7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22116/*"x0"*/);
    DAT_04568ab7 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pEVar3 = (__this->fields).super.MLAAJICBOAD;
  if (pEVar3 != (EOLFEKNCPLM_o *)0x0) {
    pOVar6 = (pEVar3->fields).PLJJCOHGICK;
    if (pOVar6 == (OBCMNBDBNFO_o *)0x0) {
      return;
    }
    LBELDDAPIMD = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo,
                                     IMMNELPBGIF);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)LBELDDAPIMD,
               Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_IList_T__o *)(pOVar6->fields).CFIKNGMJBLI,
                       Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
    method_00 = extraout_x1_00;
    if (!bVar1) {
      if (LBELDDAPIMD == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) goto LAB_03639b0c;
      method = Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)LBELDDAPIMD,
                 (System_Collections_Generic_IEnumerable_T__o *)(pOVar6->fields).CFIKNGMJBLI,
                 (MethodInfo_26E4FB8 *)
                 Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__);
      method_00 = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_02;
    }
    if (DAT_04565e59 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565e59 = '\x01';
      method_00 = extraout_x1_03;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_04;
    }
    pFVar4 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
    if (pFVar4 != (FGKGKDEJCOG_o *)0x0) {
      if ((pFVar4->fields).LFINLNAPHFL != false) {
        collection = Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__OOIMKCKLBAI
                               ((Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *)
                                NLPJLHOEAOE_TypeInfo,method_00);
        if (LBELDDAPIMD == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) goto LAB_03639b0c;
        method = Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)LBELDDAPIMD,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_26E4FB8 *)
                   Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__);
      }
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)LBELDDAPIMD,
                         Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
      if (!bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__LLCEDKDCDCM(__this,LBELDDAPIMD,method);
        return;
      }
      __this_00 = (__this->fields)._simpleScroll;
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
        pSVar5 = (__this->fields).JILLAJIPGFH;
        if (pSVar5 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
          length = (pSVar5->fields)._size;
          (pSVar5->fields)._size = 0;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0
                               );
          }
          pNVar2 = (__this->fields)._lblGoldCount;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,StringLiteral_22116/*"x0"*/,(pNVar2->klass->vtable)._75_set_text.method);
            pNVar2 = (__this->fields)._lblSilverCount;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03639ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                        (pNVar2,StringLiteral_22116/*"x0"*/,(pNVar2->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_03639b0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

