// Original name: .BackKeyManager  (obfuscated BackKeyManager)
// TypeDefIndex 1560
// Namespace: 
// public class BackKeyManager : MonoBehaviour
// Fields:
//   private static BackKeyManager CBDMFFMCJBK; // 0x0
//   private List<HAFLPBGEGCI> EEFJHDPNBNG; // 0x20
//   private bool HAOGEDJMEGB; // 0x28

// ===== public void AddBackKeyController(HAFLPBGEGCI ELHFHAPBFMI)  [RVA 0x31AC064]
// BackKeyManager$$AddBackKeyController @ RVA 0x31AC064

void BackKeyManager__AddBackKeyController
               (BackKeyManager_o *__this,HAFLPBGEGCI_o *ELHFHAPBFMI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  
  if ((DAT_04566b48 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_Add__);
    DAT_04566b48 = 1;
  }
  BackKeyManager__RemoveBackKeyController(__this,ELHFHAPBFMI,method);
  lVar2 = Method_System_Collections_Generic_List<HAFLPBGEGCI>_Add__;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).EEFJHDPNBNG;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)ELHFHAPBFMI;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,ELHFHAPBFMI);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)ELHFHAPBFMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemoveBackKeyController(HAFLPBGEGCI ELHFHAPBFMI)  [RVA 0x31AC11C]
// BackKeyManager$$RemoveBackKeyController @ RVA 0x31AC11C

void BackKeyManager__RemoveBackKeyController
               (BackKeyManager_o *__this,HAFLPBGEGCI_o *ELHFHAPBFMI,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04566b49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_Remove__);
    DAT_04566b49 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).EEFJHDPNBNG;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              (__this_00,(Il2CppObject *)ELHFHAPBFMI,
               Method_System_Collections_Generic_List<HAFLPBGEGCI>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31AC174]
// BackKeyManager$$.ctor @ RVA 0x31AC174

void BackKeyManager___ctor(BackKeyManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_HAFLPBGEGCI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HAFLPBGEGCI>_TypeInfo);
    DAT_04566b4a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HAFLPBGEGCI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<HAFLPBGEGCI>__ctor__);
  ppSVar1 = &(__this->fields).EEFJHDPNBNG;
  *ppSVar1 = (System_Collections_Generic_List_HAFLPBGEGCI__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Clear()  [RVA 0x31AC1FC]
// BackKeyManager$$Clear @ RVA 0x31AC1FC

void BackKeyManager__Clear(BackKeyManager_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_HAFLPBGEGCI__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566b4b & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_Clear__);
    DAT_04566b4b = 1;
  }
  pSVar1 = (__this->fields).EEFJHDPNBNG;
  if (pSVar1 != (System_Collections_Generic_List_HAFLPBGEGCI__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void Update()  [RVA 0x31AC26C]
// BackKeyManager$$Update @ RVA 0x31AC26C

void BackKeyManager__Update(BackKeyManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  VideoPlayerController_o *pVVar3;
  
  if ((DAT_04566b4c & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b4c = 1;
    method = extraout_x1;
  }
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
    DAT_04566bb5 = '\x01';
  }
  pVVar3 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    pVVar3 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    if (pVVar3 == (VideoPlayerController_o *)0x0) goto LAB_032ac3ac;
    if ((pVVar3->fields)._LFALNJINAPO_k__BackingField != false) {
      return;
    }
  }
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    if (((pNVar2->fields).DBNNMLAONOF == false) &&
       (bVar1 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists((MethodInfo *)0x0), !bVar1)) {
      if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = EnterScreen__ExistsAnyEnterScreen((MethodInfo *)0x0);
      if ((!bVar1) &&
         (bVar1 = BackKeyManager__JCKPPNGMDLB((BackKeyManager_o *)0x0,method_00), bVar1)) {
        BackKeyManager__OnBackKeyClicked(__this,method_01);
        return;
      }
    }
    return;
  }
LAB_032ac3ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKKEKIKFFCJ(GLINEGMOOBM DKMMBMBMJBO)  [RVA 0x31AC61C]
// BackKeyManager$$NKKEKIKFFCJ @ RVA 0x31AC61C

void BackKeyManager__NKKEKIKFFCJ
               (BackKeyManager_o *__this,GLINEGMOOBM_o *DKMMBMBMJBO,MethodInfo *method)

{
  (__this->fields).HAOGEDJMEGB = true;
  return;
}


// ===== public static BackKeyManager get_Instance()  [RVA 0x31AC628]
// BackKeyManager$$get_Instance @ RVA 0x31AC628

BackKeyManager_o * BackKeyManager__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  MethodInfo *method_00;
  BackKeyManager_o *pBVar2;
  
  if ((DAT_04566b4d & 1) == 0) {
    FUN_01bab630(&BackKeyManager_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<BackKeyManager>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15427/*"[BackKeyManager]"*/);
    DAT_04566b4d = 1;
  }
  pBVar2 = BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pBVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15427/*"[BackKeyManager]"*/,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pBVar2 = (BackKeyManager_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<BackKeyManager>__);
      BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK = pBVar2;
      thunk_FUN_01c20e04(BackKeyManager_TypeInfo->static_fields,pBVar2);
      pBVar2 = BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pBVar2 != (BackKeyManager_o *)0x0) {
        BackKeyManager__GIENGNEGHPJ(pBVar2,method_00);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        goto LAB_032ac74c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_032ac74c:
  return BackKeyManager_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public void OnBackKeyClicked()  [RVA 0x31AC3D4]
// BackKeyManager$$OnBackKeyClicked @ RVA 0x31AC3D4

void BackKeyManager__OnBackKeyClicked(BackKeyManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *EDEHNHIHDDH;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  NDPMLPGANCI_o *__this_00;
  long lVar6;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  UnityEngine_Object_o *x;
  undefined4 local_14;
  
  if ((DAT_04566b4e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<HAFLPBGEGCI>__);
    FUN_01bab630(&HAFLPBGEGCI_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04566b4e = 1;
    method = extraout_x1;
  }
  EDEHNHIHDDH = (System_Collections_Generic_List_T__o *)(__this->fields).EEFJHDPNBNG;
  if (EDEHNHIHDDH == (System_Collections_Generic_List_T__o *)0x0) {
LAB_032ac618:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((EDEHNHIHDDH->fields)._size < 1) {
    if ((__this->fields).HAOGEDJMEGB == false) {
      if (DAT_04565e5a == '\0') {
        FUN_01bab630(&SceneManagerSF_TypeInfo,method);
        DAT_04565e5a = '\x01';
      }
      switch(SceneManagerSF_TypeInfo->static_fields->DLOIHNBNGDB) {
      case 3:
                    /* try { // try from 032ac58c to 033ac89b has its CatchHandler @ 032ac58c
                       catch() { ... } // from try @ 032ac58c with catch @ 032ac58c
                       catch() { ... } // from try @ 032aca4c with catch @ 032ac58c
                       catch() { ... } // from try @ 032acb38 with catch @ 032ac58c
                       catch() { ... } // from try @ 032acb40 with catch @ 032ac58c
                       catch() { ... } // from try @ 032acc24 with catch @ 032ac58c */
        DialogsOpener__OFBBGLDBEOK((MethodInfo *)0x0);
        return;
      case 4:
      case 5:
      case 7:
        __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EKPAFDJIAGI
                    (__this_00,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                     (MethodInfo *)0x0);
          return;
        }
        goto LAB_032ac618;
      case 6:
        lVar6 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01b81620();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01b81620();
        }
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar6 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (x == (UnityEngine_Object_o *)0x0) goto LAB_032ac618;
          if ((Fight_o *)x[6].klass != (Fight_o *)0x0) {
            Fight__BLONDPEMNHJ((Fight_o *)x[6].klass,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pIVar3 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                       (EDEHNHIHDDH,Method_DJNBJHPDKDP_KIKGKKGDCKK<HAFLPBGEGCI>__);
    local_14 = 0;
    uVar4 = thunk_FUN_01bda448(int_TypeInfo,&local_14);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_032ac618;
    pIVar7 = pIVar3->klass;
    uVar1._0_1_ = (pIVar7->_2).rank;
    uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HAFLPBGEGCI_TypeInfo) {
          pVVar5 = pIVar7->vtable + *piVar9;
          goto LAB_032ac564;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,HAFLPBGEGCI_TypeInfo,0);
LAB_032ac564:
    (*pVVar5->methodPtr)(pIVar3,uVar4,pVVar5->method);
  }
  return;
}


// ===== private void AMHCCGMLBOE(DBMPKPJGIPI ACCIHBHMFPN)  [RVA 0x31AC86C]
// BackKeyManager$$AMHCCGMLBOE @ RVA 0x31AC86C

void BackKeyManager__AMHCCGMLBOE(BackKeyManager_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  (__this->fields).HAOGEDJMEGB = false;
  return;
}


// ===== private void GIENGNEGHPJ()  [RVA 0x31AC768]
// BackKeyManager$$GIENGNEGHPJ @ RVA 0x31AC768

void BackKeyManager__GIENGNEGHPJ(BackKeyManager_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *pNVar1;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  
  if ((DAT_04566b4f & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_BackKeyManager_AMHCCGMLBOE__);
    FUN_01bab630(&Method_BackKeyManager_NKKEKIKFFCJ__);
    DAT_04566b4f = 1;
  }
  pNVar1 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar1 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__IIOPONEHEGP(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pNVar1 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EAPNEKLDLLM(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool JCKPPNGMDLB()  [RVA 0x31AC3B0]
// BackKeyManager$$JCKPPNGMDLB @ RVA 0x31AC3B0

bool BackKeyManager__JCKPPNGMDLB(BackKeyManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyDown
                      (__this_00,0x1b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

