// Nekki.SF2.GUI.Dialogs.StrangerDialog$$Init @ RVA 0x317B0B8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__Init
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *GKLEODLEPMA;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  int32_t iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 *puVar14;
  System_Action_Action__o **ppSVar15;
  System_IObservable_Unit__o *source;
  System_Action_T__o *pSVar16;
  Il2CppObject *pIVar17;
  CloseButton_o *pCVar18;
  UnityEngine_GameObject_o *__this_00;
  System_IObservable_object__o *source_00;
  System_String_o *pSVar19;
  IGNEHHMICKB_o *pIVar20;
  System_String_o *pSVar21;
  System_Action_Action__o *addHandler;
  System_String_o *pSVar22;
  System_Action_Action__o *removeHandler;
  System_String_o *pSVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((DAT_04566985 & 1) == 0) {
    FUN_01bab630(&ADDCOJMHMHE_TypeInfo);
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_LGMDDECHGGA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_KLBBGDAOOEO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_PNHGONJELKG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17765);
    FUN_01bab630(&StringLiteral_17836);
    DAT_04566985 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (ADDCOJMHMHE_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    puVar14 = (undefined8 *)thunk_FUN_01bda96c();
    pSVar19 = (System_String_o *)*puVar14;
    iVar1 = *(int32_t *)(puVar14 + 8);
    iVar2 = *(int32_t *)((long)puVar14 + 0x44);
    fVar24 = *(float *)(puVar14 + 4);
    pSVar3 = (System_String_o *)puVar14[5];
    pSVar6 = (System_String_o *)puVar14[6];
    GKLEODLEPMA = (System_String_o *)puVar14[1];
    pSVar23 = (System_String_o *)puVar14[7];
    pSVar4 = (System_String_o *)puVar14[10];
    pSVar7 = (System_String_o *)puVar14[0xb];
    pSVar21 = (System_String_o *)puVar14[0xc];
    pIVar20 = (IGNEHHMICKB_o *)puVar14[3];
    pSVar22 = (System_String_o *)puVar14[0xe];
    fVar25 = *(float *)(puVar14 + 0xf);
    fVar26 = *(float *)((long)puVar14 + 0x7c);
    pSVar5 = (System_String_o *)puVar14[0x10];
    pSVar16 = (System_Action_T__o *)puVar14[0x11];
    iVar8 = *(int32_t *)(puVar14 + 9);
    bVar9 = *(byte *)(puVar14 + 0xd);
    bVar10 = *(byte *)((long)puVar14 + 0x69);
    bVar11 = *(byte *)((long)puVar14 + 0x6a);
    bVar12 = *(byte *)((long)puVar14 + 0x6b);
    bVar13 = *(byte *)((long)puVar14 + 0x6c);
    (__this->fields).super.NMBDHGCKNII =
         (System_Collections_Generic_List_NBLEEDEAPHB__o *)puVar14[2];
    thunk_FUN_01c20e04(&(__this->fields).super.NMBDHGCKNII);
    (__this->fields).JIFBFBEEBDB = pSVar5;
    thunk_FUN_01c20e04(&(__this->fields).JIFBFBEEBDB,pSVar5);
    (__this->fields).AKEBMCCPPPA = iVar2;
    (__this->fields).DHJBABHLNFP = pSVar6;
    thunk_FUN_01c20e04(&(__this->fields).DHJBABHLNFP,pSVar6);
    (__this->fields).EMHKJPJIHBK = pSVar7;
    thunk_FUN_01c20e04(&(__this->fields).EMHKJPJIHBK,pSVar7);
    (__this->fields).FAAJIPNANGB = pSVar23;
    (__this->fields).KLFHDAPPGGD = iVar8;
    thunk_FUN_01c20e04(&(__this->fields).FAAJIPNANGB,pSVar23);
    (__this->fields).FGGKLAINKKA = pSVar21;
    thunk_FUN_01c20e04(&(__this->fields).FGGKLAINKKA,pSVar21);
    (__this->fields).IIGDDBBHJEN = pSVar3;
    (__this->fields).BIOGAAPDOHK = iVar1;
    thunk_FUN_01c20e04(&(__this->fields).IIGDDBBHJEN,pSVar3);
    (__this->fields).CKOILAHDKCN = pSVar4;
    thunk_FUN_01c20e04(&(__this->fields).CKOILAHDKCN,pSVar4);
    (__this->fields).JMLOHCGHBIJ = fVar24;
    (__this->fields).JCLHNHKKPNP = (bool_conflict)(bVar9 & 1);
    (__this->fields).super.NHNBEPIDGIB = (bool_conflict)(bVar10 & 1);
    (__this->fields).KGEDEAGBKGB = (bool_conflict)(bVar11 & 1);
    (__this->fields).PKGLLMLHGPC = (bool_conflict)(bVar12 & 1);
    (__this->fields).JKBAACEKGJF = pSVar22;
    thunk_FUN_01c20e04(&(__this->fields).JKBAACEKGJF,pSVar22);
    (__this->fields).AAGFFOEHDHI = fVar25;
    (__this->fields).super.JADIONKCDCB = fVar26;
    if (pSVar16 != (System_Action_T__o *)0x0) {
      (__this->fields).DNPHBCPFMPB = (System_Action_object__o *)pSVar16;
      thunk_FUN_01c20e04(&(__this->fields).DNPHBCPFMPB,pSVar16);
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,pSVar16,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
    if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    addHandler = Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_0;
    if (addHandler == (System_Action_Action__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar15 = &Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_0;
      *ppSVar15 = addHandler;
      thunk_FUN_01c20e04(ppSVar15,addHandler);
    }
    if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    removeHandler = Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_1;
    if (removeHandler == (System_Action_Action__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar15 = &Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c_TypeInfo->static_fields->__9__50_1;
      *ppSVar15 = removeHandler;
      thunk_FUN_01c20e04(ppSVar15,removeHandler);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    pSVar16 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
    System_Action<Unit>___ctor();
    pIVar17 = (Il2CppObject *)
              UniRx_ObservableExtensions__Subscribe<Unit>
                        ((System_IObservable_T__o *)source,pSVar16,
                         Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar17,(System_Collections_Generic_ICollection_IDisposable__o *)
                       (__this->fields).HBJPBPBIOOB,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    (__this->fields).super.DHLCIGNKKPP = pSVar19;
    thunk_FUN_01c20e04(&(__this->fields).super.DHLCIGNKKPP);
    (__this->fields).super.MEELBFGHELO = pIVar20;
    thunk_FUN_01c20e04(&(__this->fields).super.MEELBFGHELO);
    if ((bVar13 & 1) == 0) {
LAB_0327b588:
      Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,GKLEODLEPMA,StringLiteral_17765,
                 StringLiteral_17836,0,(MethodInfo *)0x0);
      return;
    }
    pCVar18 = (__this->fields)._closeButton;
    if ((pCVar18 != (CloseButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pCVar18,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      source_00 = HABIFHOHHOF__ELOBMGDKLPK((__this->fields)._closeButton,(MethodInfo *)0x0);
      pSVar16 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      pIVar17 = (Il2CppObject *)
                UniRx_ObservableExtensions__Subscribe<object>
                          ((System_IObservable_T__o *)source_00,pSVar16,
                           Method_UniRx_ObservableExtensions_Subscribe<object>__);
      UniRx_DisposableExtensions__AddTo<object>
                (pIVar17,(System_Collections_Generic_ICollection_IDisposable__o *)
                         (__this->fields).HBJPBPBIOOB,
                 Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      pCVar18 = (__this->fields)._closeButton;
      if (pCVar18 != (CloseButton_o *)0x0) {
        CloseButton__PlayIdleAnimation(pCVar18,(MethodInfo *)0x0);
        pCVar18 = (__this->fields)._closeButton;
        if (pCVar18 != (CloseButton_o *)0x0) {
          (pCVar18->fields).super.super.ButtonId = 100;
          goto LAB_0327b588;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

