// TypeDefIndex 2118
// Namespace: Nekki.SF2.GUI.Dialogs
// public class ChooseBuyItemDialog : BaseDialog
// Fields:
//   private InfoPanelContent _buyItemContent1; // 0xC8
//   private InfoPanelContent _buyItemContent2; // 0xD0
//   private CloseButton _closeButton; // 0xD8
//   private readonly CompositeDisposable HBJPBPBIOOB; // 0xE0

// ===== public override void UpdateHeaderPosition()  [RVA 0x32CDA88]
// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$UpdateHeaderPosition @ RVA 0x32CDA88

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x32CDA8C]
// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$.ctor @ RVA 0x32CDA8C

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033cda90 to 034cda93 has its CatchHandler @ 033cdab4 */
                    /* try { // try from 033cda94 to 034cdabb has its CatchHandler @ 033cd790 */
  if ((DAT_04567532 & 1) == 0) {
                    /* catch() { ... } // from try @ 033cda90 with catch @ 033cdab4 */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
                    /* try { // try from 033cdabc to 034cdacf has its CatchHandler @ 033cdb40 */
    DAT_04567532 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
                    /* catch() { ... } // from try @ 033cd9e4 with catch @ 033cdad0
                       try { // try from 033cdad0 to 034cdae7 has its CatchHandler @ 033cd790 */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).HBJPBPBIOOB;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
                    /* try { // try from 033cdae8 to 034cdaeb has its CatchHandler @ 033cdb14 */
                    /* try { // try from 033cdaec to 034cdb23 has its CatchHandler @ 033cd790 */
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x32CDAF8]
// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$GLANJNFACKI @ RVA 0x32CDAF8

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x32CDAFC]
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
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_13827/*"TitleChooseGems"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    DAT_04567533 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_13827/*"TitleChooseGems"*/,StringLiteral_9679/*"OK"*/,
             StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
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


// ===== protected override void OnDestroy()  [RVA 0x32CDE30]
// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$OnDestroy @ RVA 0x32CDE30

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x32CDE58]
// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$GLJGIJNALCA @ RVA 0x32CDE58

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void DGGOJPBDGJC(CFEFALDOEMD HOKBHLPPCAH)  [RVA 0x32CDE5C]
// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$DGGOJPBDGJC @ RVA 0x32CDE5C

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog__DGGOJPBDGJC
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,CFEFALDOEMD_o *HOKBHLPPCAH,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x033cde68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  return;
}

