// TypeDefIndex 382
// Namespace: Nekki.SF2.GUI.Dialogs
// public class ItemSetDialog : BaseDialog
// Fields:
//   public ResolutionImage WeaponItem; // 0xC8
//   public ResolutionImage ArmorItem; // 0xD0
//   public ResolutionImage HelmItem; // 0xD8
//   public ResolutionImage RangedItem; // 0xE0
//   public ResolutionImage MagicItem; // 0xE8
//   public LabelAlias Description; // 0xF0
//   public HintBox HintBox; // 0xF8
//   public float HintCooldown; // 0x100
//   private HHKELHDGPDO PAAIEEFEBKK; // 0x108
//   private IEnumerator LKDFKLMLCBL; // 0x110
//   private List<Button> HFGPCJHGOCP; // 0x118
//   private const float NIKHNBMFLGC = 0.5;

// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x347BE98]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$EJHAPHAHMHG @ RVA 0x347BE98

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  long lVar1;
  HHKELHDGPDO_o *pHVar2;
  long lVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_String_o *pSVar4;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04568356 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_15861/*"^{0}^ ({1}/{2})"*/);
    DAT_04568356 = 1;
  }
  pHVar2 = (__this->fields).PAAIEEFEBKK;
  if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pHVar2->fields).JIJLBFGKNJK,
               (MethodInfo *)0x0);
    pHVar2 = (__this->fields).PAAIEEFEBKK;
    if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
      pSVar4 = (pHVar2->fields).JIJLBFGKNJK;
      local_34 = (pHVar2->fields).OJHKNOGKBDF;
      __this_00 = (__this->fields).super._header;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      pHVar2 = (__this->fields).PAAIEEFEBKK;
      if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
        local_38 = (pHVar2->fields).ICMILHJGAAC;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        pSVar4 = System_String__Format
                           (StringLiteral_15861/*"^{0}^ ({1}/{2})"*/,(Il2CppObject *)pSVar4,arg1,arg2,(MethodInfo *)0x0);
        lVar1 = Method_System_Array_Empty<object>__;
        lVar3 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
        if (lVar3 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<object>__);
          lVar3 = *(long *)(lVar1 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01b81620();
        }
        pSVar4 = System_String__Format
                           (pSVar4,(System_Object_array *)**(undefined8 **)(lVar1 + 0xb8),
                            (MethodInfo *)0x0);
        if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x347C000]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$UpdateHeaderPosition @ RVA 0x347C000

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void ELKFFHOCIAA(GameObject IKKAMAMLIKA)  [RVA 0x347C004]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$ELKFFHOCIAA @ RVA 0x347C004

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__ELKFFHOCIAA
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,UnityEngine_GameObject_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  Nekki_SF2_GUI_HintBox_o *pNVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  PBAKFOBIHEG_o *pPVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o *pSVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_04568357 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11921/*"SetUi_Hint"*/);
    DAT_04568357 = 1;
  }
  pNVar4 = (__this->fields).HintBox;
  if (pNVar4 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
    Nekki_SF2_GUI_HintBox__SetText
              (pNVar4,StringLiteral_1/*""*/,StringLiteral_11921/*"SetUi_Hint"*/,0x46,0x3c,4,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).HintBox;
    if (((pNVar4 != (Nekki_SF2_GUI_HintBox_o *)0x0) &&
        (__this_00 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
        IKKAMAMLIKA != (UnityEngine_GameObject_o *)0x0)) &&
       (__this_01 = UnityEngine_GameObject__get_transform(IKKAMAMLIKA,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UVar11 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar11.fields.y = UVar11.fields.y + -25.0;
        UnityEngine_Transform__set_position(__this_00,UVar11,(MethodInfo *)0x0);
        pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
          pPVar7 = pPVar5->klass;
          pSVar10 = (__this->fields).LKDFKLMLCBL;
          uVar2._0_1_ = (pPVar7->_2).rank;
          uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar6 = pPVar7->vtable + (*piVar9 + 1);
                goto LAB_0357c138;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,1);
LAB_0357c138:
          (*pVVar6->methodPtr)(pPVar5,pSVar10,pVVar6->method);
          pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar10 = Nekki_SF2_GUI_Dialogs_ItemSetDialog__LHHLFBBBJLD(__this,method_00);
          if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
            pPVar7 = pPVar5->klass;
            ppSVar1 = &(__this->fields).LKDFKLMLCBL;
            uVar3._0_1_ = (pPVar7->_2).rank;
            uVar3._1_1_ = (pPVar7->_2).minimumAlignment;
            uVar8 = (ulong)uVar3;
            if (uVar8 != 0) {
              piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar6 = pPVar7->vtable + *piVar9;
                  goto LAB_0357c1b4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_0357c1b4:
            pSVar10 = (System_Collections_IEnumerator_o *)
                      (*pVVar6->methodPtr)(pPVar5,pSVar10,1,pVVar6->method);
            *ppSVar1 = pSVar10;
            thunk_FUN_01c20e04(ppSVar1,pSVar10);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x347C254]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$OnDestroy @ RVA 0x347C254

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  System_Action_Button__o **ppSVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_IEnumerator_o *pSVar8;
  System_Action_Button__o *action;
  
  if ((DAT_04568358 & 1) == 0) {
    FUN_01bab630(&System_Action<Button>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_ForEach__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_NDHMHFKKIEH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo);
    DAT_04568358 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar5 = pPVar2->klass;
    pSVar8 = (__this->fields).LKDFKLMLCBL;
    uVar1._0_1_ = (pPVar5->_2).rank;
    uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar3 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_0357c328;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0357c328:
    (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
    __this_00 = (__this->fields).HFGPCJHGOCP;
    if ((Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->static_fields->__9__22_0;
    if (action == (System_Action_Button__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_Button__o *)thunk_FUN_01bda818(System_Action<Button>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &Nekki_SF2_GUI_Dialogs_ItemSetDialog_<>c_TypeInfo->static_fields->__9__22_0;
      *ppSVar4 = action;
      thunk_FUN_01c20e04(ppSVar4,action);
    }
    if (__this_00 != (System_Collections_Generic_List_Button__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<Button>_ForEach__);
                    /* try { // try from 0357c3dc to 0367c6af has its CatchHandler @ 0357c3dc
                       catch() { ... } // from try @ 0357c3dc with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357c89c with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357ccb4 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357cd18 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357cd20 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357ce08 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357ce58 with catch @ 0357c3dc
                       catch() { ... } // from try @ 0357cf2c with catch @ 0357c3dc */
      (__this->fields).HFGPCJHGOCP = (System_Collections_Generic_List_Button__o *)0x0;
      thunk_FUN_01c20e04(&(__this->fields).HFGPCJHGOCP,0);
      Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OCAPCHIKABJ()  [RVA 0x347C400]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$OCAPCHIKABJ @ RVA 0x347C400

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__OCAPCHIKABJ
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04568359 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04568359 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x347C470]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$Init @ RVA 0x347C470

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__Init
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  HHKELHDGPDO_c *pHVar2;
  LabelButton_o *__this_00;
  HHKELHDGPDO_o *pHVar3;
  HHKELHDGPDO_o **ppHVar4;
  
  if ((DAT_0456835a & 1) == 0) {
    FUN_01bab630(&HHKELHDGPDO_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    DAT_0456835a = 1;
  }
  pHVar2 = HHKELHDGPDO_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PAAIEEFEBKK = (HHKELHDGPDO_o *)0x0;
LAB_0357c524:
    ppHVar4 = &(__this->fields).PAAIEEFEBKK;
    thunk_FUN_01c20e04(ppHVar4,IMMNELPBGIF);
    __this_00 = (__this->fields).super._btnOK;
    if (__this_00 != (LabelButton_o *)0x0) {
      LabelButton__set_Alias(__this_00,StringLiteral_9679/*"OK"*/,(MethodInfo *)0x0);
      pHVar3 = *ppHVar4;
      if (pHVar3 != (HHKELHDGPDO_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pHVar3->fields).JIJLBFGKNJK,
                   StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (HHKELHDGPDO_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)HHKELHDGPDO_TypeInfo)) {
    (__this->fields).PAAIEEFEBKK = (HHKELHDGPDO_o *)IMMNELPBGIF;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pHVar2))
    goto LAB_0357c524;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(IMMNELPBGIF);
}


// ===== private IEnumerator LHHLFBBBJLD()  [RVA 0x347C1E8]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$LHHLFBBBJLD @ RVA 0x347C1E8

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_ItemSetDialog__LHHLFBBBJLD
          (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456835b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_TypeInfo);
    DAT_0456835b = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x347C5B4]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$LCGFJKFJKJK @ RVA 0x347C5B4

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method
               )

{
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x347C5B8]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$GLANJNFACKI @ RVA 0x347C5B8

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void GKJKNKCEMPN(ResolutionImage IKKAMAMLIKA, HOOAAGABMBL DKMMBMBMJBO, float JKOJPEKLBCI)  [RVA 0x347C5BC]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$GKJKNKCEMPN @ RVA 0x347C5BC

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IKKAMAMLIKA,HOOAAGABMBL_o *DKMMBMBMJBO,
               float JKOJPEKLBCI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool value;
  Il2CppObject *__this_00;
  long *plVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_o *item;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_Button__o *__this_04;
  HHKELHDGPDO_o *pHVar7;
  ACHLOMELAJE_o *pAVar8;
  UnityEngine_UI_Button_array *pUVar9;
  void **ppvVar10;
  UnityEngine_Events_UnityEvent_o *__this_05;
  float CJNHFNHJHPE;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  
  if ((DAT_0456835c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Button>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_LLKEKIALGPM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456835c = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ItemSetDialog_EPLOHOAMMND_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_0357c964;
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  ppvVar10 = &__this_00[1].monitor;
  *ppvVar10 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppvVar10,IKKAMAMLIKA);
  pIVar6 = (IGFGDDANEPE_o *)0x0;
  if (DKMMBMBMJBO != (HOOAAGABMBL_o *)0x0) {
    if (*ppvVar10 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0357c964;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (*ppvVar10,(DKMMBMBMJBO->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
    plVar3 = *ppvVar10;
    if (plVar3 == (long *)0x0) goto LAB_0357c964;
                    /* try { // try from 0357c6b0 to 0367c6d7 has its CatchHandler @ 0357ce94 */
    (**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410));
    if ((*ppvVar10 == (UnityEngine_UI_Graphic_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform(*ppvVar10,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0357c964;
    UVar11 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
    if (*ppvVar10 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_0357c964;
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform(*ppvVar10,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale
              ((UnityEngine_Transform_o *)pUVar4,JKOJPEKLBCI,(MethodInfo *)0x0);
    pHVar7 = (__this->fields).PAAIEEFEBKK;
    if (pHVar7 == (HHKELHDGPDO_o *)0x0) goto LAB_0357c964;
    if ((pHVar7->fields).EJGIHLJGJKC == false) {
      pIVar6 = (IGFGDDANEPE_o *)0x0;
    }
    else {
      if ((*ppvVar10 == (UnityEngine_Component_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_transform(*ppvVar10,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_0357c964;
                    /* try { // try from 0357c714 to 0367c73b has its CatchHandler @ 0357ce90 */
      pUVar5 = UnityEngine_Transform__GetChild(pUVar5,0,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0357c750 to 0367c757 has its CatchHandler @ 0357ce8c */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 0357c760 to 0367c767 has its CatchHandler @ 0357ce80 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0357c778 to 0367c77f has its CatchHandler @ 0357ce84 */
      pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0357c784 to 0367c78b has its CatchHandler @ 0357ce5c */
      if (((pAVar8 == (ACHLOMELAJE_o *)0x0) ||
          (__this_01 = (pAVar8->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0)) ||
         (pIVar6 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,DKMMBMBMJBO,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_0357c964;
                    /* try { // try from 0357c79c to 0367c7a3 has its CatchHandler @ 0357ce88 */
                    /* try { // try from 0357c7a4 to 0367c7b7 has its CatchHandler @ 0357ce68 */
      __this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      if (pIVar6 == (IGFGDDANEPE_o *)0x0) {
        value = false;
      }
      else {
        value = (pIVar6->fields).OFIKEBGDMBE != false;
      }
                    /* try { // try from 0357c7cc to 0367c7d3 has its CatchHandler @ 0357ce6c */
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_0357c964;
      UnityEngine_GameObject__SetActive(__this_02,value,(MethodInfo *)0x0);
                    /* try { // try from 0357c7e0 to 0367c7ef has its CatchHandler @ 0357ce74 */
      UnityEngine_TransformExtensions__SetLocalScale(pUVar5,1.0 / JKOJPEKLBCI,(MethodInfo *)0x0);
      UVar12 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
                    /* try { // try from 0357c800 to 0367c817 has its CatchHandler @ 0357ce70 */
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar5,(UVar11.fields.y * UVar12.fields.y) / JKOJPEKLBCI,(MethodInfo *)0x0);
      if (*ppvVar10 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0357c964;
      CJNHFNHJHPE = 0.5;
      if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
        CJNHFNHJHPE = 1.0;
      }
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(*ppvVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 0357c828 to 0367c837 has its CatchHandler @ 0357cdec */
  pHVar7 = (__this->fields).PAAIEEFEBKK;
  if (pHVar7 != (HHKELHDGPDO_o *)0x0) {
    if ((pIVar6 != (IGFGDDANEPE_o *)0x0) || ((pHVar7->fields).EJGIHLJGJKC == false)) {
      return;
    }
    if (((*ppvVar10 != (UnityEngine_Component_o *)0x0) &&
        (item = (UnityEngine_UI_Button_o *)
                UnityEngine_Component__GetComponent<object>
                          (*ppvVar10,Method_UnityEngine_Component_GetComponent<Button>__),
        item != (UnityEngine_UI_Button_o *)0x0)) &&
       (__this_03 = (item->fields).m_OnClick,
       __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
      __this_05 = (UnityEngine_Events_UnityEvent_o *)(item->fields).m_OnClick;
                    /* try { // try from 0357c878 to 0367c89b has its CatchHandler @ 0357ce58 */
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 0357c89c to 0367c95f has its CatchHandler @ 0357c3dc */
      if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
        __this_04 = (__this->fields).HFGPCJHGOCP;
        if (__this_04 != (System_Collections_Generic_List_Button__o *)0x0) {
          pUVar9 = (__this_04->fields)._items;
          (__this_04->fields)._version = (__this_04->fields)._version + 1;
          if (pUVar9 != (UnityEngine_UI_Button_array *)0x0) {
            uVar1 = (__this_04->fields)._size;
            if (uVar1 < (uint)pUVar9->max_length) {
              (__this_04->fields)._size = uVar1 + 1;
              pUVar9->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pUVar9->m_Items + (int)uVar1,item);
              return;
            }
                    /* try { // try from 0357c960 to 0367c967 has its CatchHandler @ 0357cdf4 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_0357c964:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x347C970]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$GLJGIJNALCA @ RVA 0x347C970

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x347C974]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$GKPJMHOFIOO @ RVA 0x347C974

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_HintBox_o *pNVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *in_x3;
  HHKELHDGPDO_o *pHVar2;
  LabelButton_o *pLVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
                    /* try { // try from 0357c984 to 0367c987 has its CatchHandler @ 0357cdbc */
                    /* try { // try from 0357c988 to 0367c98f has its CatchHandler @ 0357cdf0 */
  if ((DAT_0456835d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_OCAPCHIKABJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0357c9a4 to 0367c9ab has its CatchHandler @ 0357cdd4 */
    FUN_01bab630(&StringLiteral_22457/*"{0}{{img::{1}}} {{%{2}}}"*/);
                    /* try { // try from 0357c9b4 to 0367c9bb has its CatchHandler @ 0357cde8 */
    DAT_0456835d = 1;
  }
  pHVar2 = (__this->fields).PAAIEEFEBKK;
  if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357c9cc to 0367c9d3 has its CatchHandler @ 0357cdd8 */
    Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
              (__this,(__this->fields).WeaponItem,(pHVar2->fields).GNCBIPJFEGB,
               (pHVar2->fields).AAKCIMHACFK,in_x3);
    pHVar2 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 0357c9d8 to 0367c9df has its CatchHandler @ 0357cdd0 */
    if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                (__this,(__this->fields).ArmorItem,(pHVar2->fields).EIFDIMKJDMN,
                 (pHVar2->fields).PJBDNBPBCGN,in_x3);
                    /* try { // try from 0357c9f0 to 0367c9f7 has its CatchHandler @ 0357cdcc */
      pHVar2 = (__this->fields).PAAIEEFEBKK;
      if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357c9f8 to 0367ca0b has its CatchHandler @ 0357cdc4 */
        Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                  (__this,(__this->fields).HelmItem,(pHVar2->fields).CFJEFNDGHIP,
                   (pHVar2->fields).OLHBGKCMDNM,in_x3);
        pHVar2 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 0357ca10 to 0367ca1b has its CatchHandler @ 0357cddc */
        if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357ca1c to 0367ca27 has its CatchHandler @ 0357cde0 */
          Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                    (__this,(__this->fields).RangedItem,(pHVar2->fields).DLDBBBCMJOC,
                     (pHVar2->fields).KGIBFODAFEG,in_x3);
          pHVar2 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 0357ca2c to 0367ca33 has its CatchHandler @ 0357cde4 */
          if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_ItemSetDialog__GKJKNKCEMPN
                      (__this,(__this->fields).MagicItem,(pHVar2->fields).OGOPJDCOPDF,
                       (pHVar2->fields).HAPHNIMNDLG,in_x3);
            pHVar2 = (__this->fields).PAAIEEFEBKK;
            if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
                    /* try { // try from 0357ca4c to 0367ca53 has its CatchHandler @ 0357cdb8 */
                    /* try { // try from 0357ca5c to 0367ca63 has its CatchHandler @ 0357cdb4 */
              __this_00 = (__this->fields).Description;
              CJNHFNHJHPE = System_String__Format
                                      (StringLiteral_22457/*"{0}{{img::{1}}} {{%{2}}}"*/,
                                       (Il2CppObject *)(pHVar2->fields).BPCADJLKKGA,
                                       (Il2CppObject *)(pHVar2->fields).DHODPAHPFKN,
                                       (Il2CppObject *)(pHVar2->fields).CKPABMMCGGJ,
                                       (MethodInfo *)0x0);
              if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 0357ca74 to 0367ca7b has its CatchHandler @ 0357cd2c */
                Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0357ca80 to 0367ca87 has its CatchHandler @ 0357cdac */
                pNVar1 = (__this->fields).HintBox;
                if (pNVar1 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
                    /* try { // try from 0357ca98 to 0367ca9f has its CatchHandler @ 0357cdb0 */
                    /* try { // try from 0357caa0 to 0367cab3 has its CatchHandler @ 0357cd30 */
                  (*(pNVar1->klass->vtable)._4_Init.methodPtr)
                            (0x442f0000,0x43480000,pNVar1,(pNVar1->klass->vtable)._4_Init.method);
                  pLVar3 = (__this->fields).super._btnOK;
                  if (pLVar3 != (LabelButton_o *)0x0) {
                    /* try { // try from 0357cab8 to 0367cac3 has its CatchHandler @ 0357cd68 */
                    __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                (pLVar3->fields).super.super.super.m_OnClick;
                    /* try { // try from 0357cac4 to 0367cacf has its CatchHandler @ 0357cd88 */
                    call = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0357cae0 to 0367cae7 has its CatchHandler @ 0357cd34 */
                    /* try { // try from 0357caf0 to 0367caf7 has its CatchHandler @ 0357cd40 */
                      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x347CAFC]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$.ctor @ RVA 0x347CAFC

void Nekki_SF2_GUI_Dialogs_ItemSetDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Button__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0357cb08 to 0367cb0f has its CatchHandler @ 0357cd94 */
                    /* try { // try from 0357cb14 to 0367cb1b has its CatchHandler @ 0357cda4 */
  if ((DAT_0456835e & 1) == 0) {
                    /* try { // try from 0357cb2c to 0367cb33 has its CatchHandler @ 0357cda0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>__ctor__);
                    /* try { // try from 0357cb34 to 0367cb47 has its CatchHandler @ 0357cd3c */
    FUN_01bab630(&System_Collections_Generic_List<Button>_TypeInfo);
    DAT_0456835e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0357cb4c to 0367cb57 has its CatchHandler @ 0357cd4c */
  (__this->fields).HintCooldown = 5.0;
  __this_00 = (System_Collections_Generic_List_Button__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo,method);
                    /* try { // try from 0357cb58 to 0367cb63 has its CatchHandler @ 0357cd44 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Button>__ctor__);
  (__this->fields).HFGPCJHGOCP = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).HFGPCJHGOCP,__this_00);
                    /* try { // try from 0357cb74 to 0367cb7b has its CatchHandler @ 0357cd58 */
                    /* try { // try from 0357cb84 to 0367cb8b has its CatchHandler @ 0357cd38 */
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

