// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$Init @ RVA 0x32CDAFC

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog__Init
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar2;
  int64_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  int64_t iVar4;
  System_IObservable_CFEFALDOEMD__o *source;
  System_Action_T__o *pSVar5;
  Il2CppObject *pIVar6;
  System_IObservable_object__o *source_00;
  CloseButton_o *__this_01;
  bool DLOGMDGABJH;
  
                    /* catch() { ... } // from try @ 033cdae8 with catch @ 033cdb14 */
                    /* try { // try from 033cdb24 to 034cdb2b has its CatchHandler @ 033cdb40 */
                    /* try { // try from 033cdb2c to 034cdb37 has its CatchHandler @ 033cd790 */
                    /* try { // try from 033cdb38 to 034cdb3f has its CatchHandler @ 033cdb40 */
  if ((DAT_04567533 & 1) == 0) {
                    /* catch() { ... } // from try @ 033cdabc with catch @ 033cdb40
                       catch() { ... } // from try @ 033cdb24 with catch @ 033cdb40
                       catch() { ... } // from try @ 033cdb38 with catch @ 033cdb40 */
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_DGGOJPBDGJC__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&OPAAGMJJLCN_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_13827);
    FUN_01bab630(&StringLiteral_3640);
    DAT_04567533 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_13827,StringLiteral_9679,
             StringLiteral_3640,0,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (OPAAGMJJLCN_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)OPAAGMJJLCN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  pNVar2 = (__this->fields)._buyItemContent1;
  if (pNVar2 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
    (*(pNVar2->klass->vtable)._5_Init.methodPtr)(pNVar2,(pNVar2->klass->vtable)._5_Init.method);
    if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
       (pNVar2 = (__this->fields)._buyItemContent1,
       pNVar2 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) {
      Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo
                (pNVar2,(HOOAAGABMBL_o *)IMMNELPBGIF[1].klass,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._buyItemContent1;
      if (pNVar2 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
        iVar3 = Nekki_SF2_GUI_Shop_InfoPanelContent__GetItemTimer(pNVar2,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._buyItemContent2;
        DLOGMDGABJH = 0 < iVar3;
        if ((pNVar2 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_00,IMMNELPBGIF[1].monitor != (void *)0x0,(MethodInfo *)0x0);
          if (IMMNELPBGIF[1].monitor != (void *)0x0) {
            pNVar2 = (__this->fields)._buyItemContent2;
            if (pNVar2 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_033cde24;
            (*(pNVar2->klass->vtable)._5_Init.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._5_Init.method);
            pNVar2 = (__this->fields)._buyItemContent2;
            if (pNVar2 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_033cde24;
            Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo
                      (pNVar2,IMMNELPBGIF[1].monitor,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._buyItemContent2;
            if (pNVar2 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_033cde24;
            iVar4 = Nekki_SF2_GUI_Shop_InfoPanelContent__GetItemTimer(pNVar2,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._buyItemContent2;
            if (pNVar2 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_033cde24;
            DLOGMDGABJH = 0 < iVar3 || 0 < iVar4;
            Nekki_SF2_GUI_Shop_InfoPanelContent__ShowImage(pNVar2,DLOGMDGABJH,(MethodInfo *)0x0);
          }
          pNVar2 = (__this->fields)._buyItemContent1;
          if (pNVar2 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
            Nekki_SF2_GUI_Shop_InfoPanelContent__ShowImage(pNVar2,DLOGMDGABJH,(MethodInfo *)0x0);
            if (DAT_045655e8 == '\0') {
              FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
              DAT_045655e8 = '\x01';
            }
            source = LKHEKMAGHDH__MBNHFJCHHAH
                               (KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField,
                                (MethodInfo *)0x0);
            pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
            System_Action<object>___ctor();
            pIVar6 = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               ((System_IObservable_T__o *)source,pSVar5,
                                Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
            UniRx_DisposableExtensions__AddTo<object>
                      (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                              (__this->fields).HBJPBPBIOOB,
                       Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
            source_00 = HABIFHOHHOF__ELOBMGDKLPK((__this->fields)._closeButton,(MethodInfo *)0x0);
            pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            pIVar6 = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               ((System_IObservable_T__o *)source_00,pSVar5,
                                Method_UniRx_ObservableExtensions_Subscribe<object>__);
            UniRx_DisposableExtensions__AddTo<object>
                      (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                              (__this->fields).HBJPBPBIOOB,
                       Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
            __this_01 = (__this->fields)._closeButton;
            if (__this_01 != (CloseButton_o *)0x0) {
              CloseButton__PlayIdleAnimation(__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_033cde24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

