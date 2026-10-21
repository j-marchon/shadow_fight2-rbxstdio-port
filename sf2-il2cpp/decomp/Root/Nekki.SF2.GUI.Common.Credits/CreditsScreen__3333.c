// TypeDefIndex 3333
// Namespace: Nekki.SF2.GUI.Common.Credits
// public class CreditsScreen : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, HAFLPBGEGCI
// Fields:
//   private ScrollRect _ScrollRect; // 0x20
//   private Transform _ElementsParent; // 0x28
//   private CreditsScreenElement _ElementPrefab; // 0x30
//   private float _AutoScrollSpeed; // 0x38
//   private float _ManualSrollSpeed; // 0x3C
//   private Action MOIEPPGDHNH; // 0x40
//   private bool OHOKBELNEMO; // 0x48
//   private bool JEKONLDALMG; // 0x49

// ===== private void Awake()  [RVA 0x352C970]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$Awake @ RVA 0x352C970

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__Awake
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  Nekki_SF2_GUI_Common_Credits_CreditsScreen__DNDJHELACIG(__this,method);
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__AddBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x352CDC8]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$Update @ RVA 0x352CDC8

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__Update
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  if ((__this->fields).OHOKBELNEMO != false) {
    Nekki_SF2_GUI_Common_Credits_CreditsScreen__EMMBGNGIHED(__this,method);
    return;
  }
  if ((__this->fields).JEKONLDALMG != false) {
    Nekki_SF2_GUI_Common_Credits_CreditsScreen__ELPHBMJPJEI(__this,method);
    return;
  }
  Nekki_SF2_GUI_Common_Credits_CreditsScreen__CKEPJKFKCEG(__this,method);
  return;
}


// ===== private void ELPHBMJPJEI()  [RVA 0x352CE50]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$ELPHBMJPJEI @ RVA 0x352CE50

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__ELPHBMJPJEI
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568a32 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04568a32 = 1;
  }
  pUVar1 = (__this->fields)._ScrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar2 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
    fVar4 = (__this->fields)._ManualSrollSpeed;
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
              (pUVar1,fVar2 - fVar4 * fVar3,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ScrollRect;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      fVar2 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon < fVar2) {
        return;
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352D004]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$.ctor @ RVA 0x352D004

void Nekki_SF2_GUI_Common_Credits_CreditsScreen___ctor
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  (__this->fields)._AutoScrollSpeed = 0.01;
  (__this->fields)._ManualSrollSpeed = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x352D018]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$OnPointerClick @ RVA 0x352D018

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__OnPointerClick
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== private void CKEPJKFKCEG()  [RVA 0x352CF1C]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$CKEPJKFKCEG @ RVA 0x352CF1C

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__CKEPJKFKCEG
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04568a33 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04568a33 = 1;
  }
  pUVar1 = (__this->fields)._ScrollRect;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar2 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
    fVar4 = (__this->fields)._AutoScrollSpeed;
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
              (pUVar1,fVar2 - fVar4 * fVar3,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ScrollRect;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      fVar2 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon < fVar2) {
        return;
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string KCODMKBDGIA()  [RVA 0x352D034]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$KCODMKBDGIA @ RVA 0x352D034

System_String_o *
Nekki_SF2_GUI_Common_Credits_CreditsScreen__KCODMKBDGIA
          (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  System_String_o *str0;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  System_String_o *a;
  System_String_o *pSVar7;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04568a34 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_20635/*"rus"*/);
    FUN_01bab630(&StringLiteral_18048/*"eng.xml"*/);
    FUN_01bab630(&StringLiteral_20636/*"rus.xml"*/);
    FUN_01bab630(&StringLiteral_1511/*"/credits/"*/);
    DAT_04568a34 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  str0 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar7 = StringLiteral_1511/*"/credits/"*/;
  if (pIVar4 == (Il2CppObject *)0x0) {
    a = (System_String_o *)0x0;
  }
  else {
    pIVar8 = pIVar4->klass;
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar8->vtable + (*piVar10 + 6);
          goto LAB_0362d180;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_0362d180:
    lVar6 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    a = (System_String_o *)0x0;
    if (lVar6 != 0) {
      a = *(System_String_o **)(lVar6 + 0x10);
    }
  }
  bVar3 = System_String__op_Equality(a,StringLiteral_20635/*"rus"*/,(MethodInfo *)0x0);
  puVar1 = &StringLiteral_20636/*"rus.xml"*/;
  if (!bVar3) {
    puVar1 = &StringLiteral_18048/*"eng.xml"*/;
  }
  pSVar7 = System_String__Concat(str0,pSVar7,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return pSVar7;
}


// ===== public void OnBackKeyClicked(object OCMMDIHLKMH)  [RVA 0x352D1CC]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$OnBackKeyClicked @ RVA 0x352D1CC

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__OnBackKeyClicked
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,Il2CppObject *OCMMDIHLKMH,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x352D1E8]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$OnDestroy @ RVA 0x352D1E8

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__OnDestroy
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  System_Action_o *pSVar1;
  System_Action_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).MOIEPPGDHNH;
  pSVar1 = *ppSVar2;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    *ppSVar2 = (System_Action_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
  }
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Hide()  [RVA 0x352CFE8]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$Hide @ RVA 0x352CFE8

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__Hide
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}


// ===== private void DNDJHELACIG()  [RVA 0x352C99C]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$DNDJHELACIG @ RVA 0x352C99C

/* WARNING: Removing unreachable block (ram,0x0362cce4) */

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__DNDJHELACIG
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  System_Xml_XmlNode_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *pNVar9;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *OPIPLFKCFPA;
  undefined8 *puVar10;
  System_Collections_IEnumerator_c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = method;
  auVar16._0_8_ = __this;
  if ((DAT_04568a35 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<CreditsScreenElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_4889/*"Credits"*/);
    auVar16 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568a35 = 1;
  }
  pSVar4 = Nekki_SF2_GUI_Common_Credits_CreditsScreen__KCODMKBDGIA(auVar16._0_8_,auVar16._8_8_);
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_1/*""*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar5 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  __this_00 = (System_Xml_XmlNode_o *)
              (*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar5,StringLiteral_4889/*"Credits"*/,(pSVar5->klass->vtable)._51_get_Item.method);
  if (__this_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = System_Xml_XmlNode__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar11 = pSVar6->klass;
    uVar2._0_1_ = (pSVar11->_2).rank;
    uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar2;
    if (uVar13 != 0) {
      piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar11->vtable + *piVar14;
          goto LAB_0362cb04;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0362cb04:
    uVar13 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if ((uVar13 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_0362cc80;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    pSVar11 = pSVar6->klass;
    uVar3._0_1_ = (pSVar11->_2).rank;
    uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
    uVar13 = (ulong)uVar3;
    if (uVar13 != 0) {
      piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar11->vtable + (*piVar14 + 1);
          goto LAB_0362cb64;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0362cb64:
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if (plVar8 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
    }
    parent = (__this->fields)._ElementsParent;
    pNVar9 = (__this->fields)._ElementPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar9 = (Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar9,parent,false,
                        Method_UnityEngine_Object_Instantiate<CreditsScreenElement>__);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_01,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    OPIPLFKCFPA = (System_String_o *)
                  (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
    if (pNVar9 == (Nekki_SF2_GUI_Common_Credits_CreditsScreenElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Common_Credits_CreditsScreenElement__Refresh
              (pNVar9,pSVar4,OPIPLFKCFPA,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0362cc9c;
    }
  }
LAB_0362cc80:
  puVar10 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0362cc9c:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
  return;
}


// ===== public static CreditsScreen Create(Action CONGNMGDFPP)  [RVA 0x352D244]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$Create @ RVA 0x352D244

Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *
Nekki_SF2_GUI_Common_Credits_CreditsScreen__Create(System_Action_o *CONGNMGDFPP,MethodInfo *method)

{
  Il2CppObject *original;
  Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *pNVar1;
  System_Action_o **ppSVar2;
  
  if ((DAT_04568a36 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<CreditsScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<CreditsScreen>__);
    FUN_01bab630(&StringLiteral_10398/*"Prefabs/Credits/CreditsScreen"*/);
    DAT_04568a36 = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10398/*"Prefabs/Credits/CreditsScreen"*/,Method_UnityEngine_Resources_Load<CreditsScreen>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  pNVar1 = (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,Method_UnityEngine_Object_Instantiate<CreditsScreen>__);
  if (pNVar1 != (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *)0x0) {
    ppSVar2 = &(pNVar1->fields).MOIEPPGDHNH;
    *ppSVar2 = CONGNMGDFPP;
    thunk_FUN_01c20e04(ppSVar2,CONGNMGDFPP);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EMMBGNGIHED()  [RVA 0x352CDE4]
// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$EMMBGNGIHED @ RVA 0x352CDE4

/* WARNING: Removing unreachable block (ram,0x0362ce30) */

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__EMMBGNGIHED
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar1 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
  fVar3 = (__this->fields)._ManualSrollSpeed;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 + fVar3 * fVar2;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,fVar1,(MethodInfo *)0x0);
  return;
}

