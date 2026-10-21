// TypeDefIndex 1608
// Namespace: 
// public class BBJEEHDMNGJ : QuestAction
// Fields:
//   private ForgePanel PMMMEDPGNFO; // 0x68
//   private LabelButton MEIDNEHHHKI; // 0x70

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31B7468]
// BBJEEHDMNGJ$$MAHFCKJGBPP @ RVA 0x31B7468

void BBJEEHDMNGJ__MAHFCKJGBPP(BBJEEHDMNGJ_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  long lVar1;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar2;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  LabelButton_o **ppLVar3;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_04566bbe & 1) == 0) {
                    /* catch() { ... } // from try @ 032b7460 with catch @ 032b748c */
    FUN_01bab630(&Method_BBJEEHDMNGJ_OANGGKCBAOJ__);
                    /* try { // try from 032b749c to 033b74a3 has its CatchHandler @ 032b74b8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 032b74a4 to 033b74af has its CatchHandler @ 032b736c */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b74b0 to 033b74b7 has its CatchHandler @ 032b74b8 */
    DAT_04566bbe = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b749c with catch @ 032b74b8
                       catch(type#2 @ 00000000) { ... } // from try @ 032b74b0 with catch @ 032b74b8
                        */
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01b81620();
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      (__this->fields).PMMMEDPGNFO =
           *(Nekki_SF2_GUI_Shop_Forge_ForgePanel_o **)(**(long **)(lVar1 + 0xb8) + 0x110);
      thunk_FUN_01c20e04();
      lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) &&
         (pNVar2 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
                             ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar1 + 0xb8),
                              (MethodInfo *)0x0),
         pNVar2 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0)) {
        ppLVar3 = &(__this->fields).MEIDNEHHHKI;
        *ppLVar3 = (pNVar2->fields)._ForgeOpenButton;
        thunk_FUN_01c20e04(ppLVar3);
        if (*ppLVar3 != (LabelButton_o *)0x0) {
          SFButton__set_IsFlashing((SFButton_o *)*ppLVar3,true,(MethodInfo *)0x0);
          if (*ppLVar3 != (LabelButton_o *)0x0) {
            __this_02 = (UnityEngine_Events_UnityEvent_o *)
                        ((*ppLVar3)->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
              TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppLVar3,(MethodInfo *)0x0);
              __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
              if ((*ppLVar3 != (LabelButton_o *)0x0) &&
                 (INPDGILCEBL = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)*ppLVar3,(MethodInfo *)0x0),
                 __this_01 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
                Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                          (__this_01,INPDGILCEBL,(UnityEngine_Vector2_o)0x43820000,90.0,
                           (MethodInfo *)0x0);
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


// ===== private IEnumerator JFCJCGGLKPP()  [RVA 0x31B7640]
// BBJEEHDMNGJ$$JFCJCGGLKPP @ RVA 0x31B7640

System_Collections_IEnumerator_o *
BBJEEHDMNGJ__JFCJCGGLKPP(BBJEEHDMNGJ_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bbf & 1) == 0) {
    FUN_01bab630(&BBJEEHDMNGJ_MHEHCBIJHGA_TypeInfo);
    DAT_04566bbf = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(BBJEEHDMNGJ_MHEHCBIJHGA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void JCLJEFPCGPK(ForgePanel.AHMDMAAJAJN ICJLHMDFMKG)  [RVA 0x31B76D4]
// BBJEEHDMNGJ$$JCLJEFPCGPK @ RVA 0x31B76D4

void BBJEEHDMNGJ__JCLJEFPCGPK(BBJEEHDMNGJ_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_TableView_o *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_02;
  
  if ((DAT_04566bc0 & 1) == 0) {
    FUN_01bab630(&Method_BBJEEHDMNGJ_JCLJEFPCGPK__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_RemoveListener__);
    DAT_04566bc0 = 1;
  }
  if (ICJLHMDFMKG != 0) {
    return;
  }
  pNVar6 = (__this->fields).PMMMEDPGNFO;
  if (pNVar6 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    __this_02 = (pNVar6->fields)._OnStateChange;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_02 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
                 Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_RemoveListener__);
      pNVar6 = (__this->fields).PMMMEDPGNFO;
      if ((pNVar6 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) &&
         (__this_00 = (pNVar6->fields)._TableView, __this_00 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
        bVar2 = Nekki_SF2_GUI_TableView__get_IsMoving(__this_00,(MethodInfo *)0x0);
        if (bVar2) {
          pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar4 = BBJEEHDMNGJ__JFCJCGGLKPP(__this,method_00);
          if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
            pPVar7 = pPVar3->klass;
            uVar1._0_1_ = (pPVar7->_2).rank;
            uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
            uVar8 = (ulong)uVar1;
            if (uVar8 != 0) {
              piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar5 = pPVar7->vtable + *piVar9;
                  goto LAB_032b7844;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_032b7844:
                    /* WARNING: Could not recover jumptable at 0x032b785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
            return;
          }
        }
        else {
          __this_01 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
          if (__this_01 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
            Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_01,false,(MethodInfo *)0x0);
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OANGGKCBAOJ()  [RVA 0x31B7864]
// BBJEEHDMNGJ$$OANGGKCBAOJ @ RVA 0x31B7864

void BBJEEHDMNGJ__OANGGKCBAOJ(BBJEEHDMNGJ_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *call_00;
  LabelButton_o *pLVar1;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_02;
  
  if ((DAT_04566bc1 & 1) == 0) {
    FUN_01bab630(&Method_BBJEEHDMNGJ_JCLJEFPCGPK__);
    FUN_01bab630(&Method_BBJEEHDMNGJ_OANGGKCBAOJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_AddListener__);
    DAT_04566bc1 = 1;
  }
  TutorialExtension__HJDDBKPCAFJ
            ((UnityEngine_UI_Selectable_o *)(__this->fields).MEIDNEHHHKI,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).MEIDNEHHHKI;
  if (pLVar1 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      pLVar1 = (__this->fields).MEIDNEHHHKI;
      if (pLVar1 != (LabelButton_o *)0x0) {
        SFButton__set_IsFlashing((SFButton_o *)pLVar1,false,(MethodInfo *)0x0);
        __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
        if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
          Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).PMMMEDPGNFO;
          if (pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
            __this_02 = (pNVar2->fields)._OnStateChange;
            call_00 = (UnityEngine_Events_UnityAction_T0__o *)
                      thunk_FUN_01bda818(
                                        UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo
                                        );
            UnityEngine_Events_UnityAction<Int32Enum>___ctor();
            if (__this_02 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
              UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                        ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call_00,
                         Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_AddListener__)
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31B79A0]
// BBJEEHDMNGJ$$.ctor @ RVA 0x31B79A0

void BBJEEHDMNGJ___ctor(BBJEEHDMNGJ_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

