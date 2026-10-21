// Nekki.SF2.GUI.Common.HintCanvas$$ShowHint @ RVA 0x32335E4

bool Nekki_SF2_GUI_Common_HintCanvas__ShowHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,MMDPHPGAGAP_o *FDLJCNLNCOC,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_HintBox_o *pNVar3;
  UnityEngine_Transform_o *__this_00;
  System_TimeSpan_o dueTime;
  System_IObservable_long__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Object_o *pUVar4;
  UniRx_SerialDisposable_o *__this_01;
  UnityEngine_GameObject_o **ppUVar5;
  UnityEngine_Object_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  
  if ((DAT_04566ff9 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_HintCanvas_ODPFCGPCMJJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566ff9 = 1;
  }
  ppUVar5 = &(__this->fields).EMFLDKEFCLG;
  pUVar4 = (UnityEngine_Object_o *)*ppUVar5;
  if (FDLJCNLNCOC == (MMDPHPGAGAP_o *)0x0) goto LAB_033338b0;
  pUVar6 = (UnityEngine_Object_o *)(FDLJCNLNCOC->fields).LLMLOCGKBHH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar4,pUVar6,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Common_HintCanvas__HideHint(__this,method_00);
    goto LAB_03333890;
  }
  pUVar4 = (UnityEngine_Object_o *)*ppUVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = (UnityEngine_Object_o *)*ppUVar5;
    pUVar6 = (UnityEngine_Object_o *)(FDLJCNLNCOC->fields).LLMLOCGKBHH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,pUVar6,(MethodInfo *)0x0);
    if ((bVar2) &&
       (bVar2 = Nekki_SF2_GUI_Common_HintCanvas__get_IsShowingAnyHint(__this,method_01), bVar2)) {
      Nekki_SF2_GUI_Common_HintCanvas__HideHint(__this,method_02);
    }
  }
  (__this->fields).EMFLDKEFCLG = (FDLJCNLNCOC->fields).LLMLOCGKBHH;
  thunk_FUN_01c20e04(ppUVar5);
  pNVar3 = (__this->fields).DMKLEIPIGKO;
  if (pNVar3 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
    method_04 = (MethodInfo *)(FDLJCNLNCOC->fields).BPCADJLKKGA;
    Nekki_SF2_GUI_HintBox__SetText
              (pNVar3,(FDLJCNLNCOC->fields).IKIINEOIIAK,(System_String_o *)method_04,
               (FDLJCNLNCOC->fields).BODPNOBPJDK,(FDLJCNLNCOC->fields).KEBFGEPCBMC,
               (FDLJCNLNCOC->fields).CPPABOCOPAD,(MethodInfo *)0x0);
    bVar2 = Nekki_SF2_GUI_Common_HintCanvas__NPJLDEDLLCE
                      (__this,(UnityEngine_Vector2_o)(FDLJCNLNCOC->fields).NMFDFHKAIHG.fields,
                       (UnityEngine_Vector2_o)(FDLJCNLNCOC->fields).BOICIIOEOKN.fields,method_03);
    pNVar3 = (__this->fields).DMKLEIPIGKO;
    if (pNVar3 != (Nekki_SF2_GUI_HintBox_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      fVar7 = (FDLJCNLNCOC->fields).NMFDFHKAIHG.fields.x;
      fVar8 = (FDLJCNLNCOC->fields).NMFDFHKAIHG.fields.y;
      fVar9 = (FDLJCNLNCOC->fields).BOICIIOEOKN.fields.x;
      fVar10 = (FDLJCNLNCOC->fields).BOICIIOEOKN.fields.y;
      if (bVar2) {
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_033338b0;
        value_00.fields.y = fVar8 - fVar10;
        value_00.fields.x = fVar7 - fVar9;
        value_00.fields.z = 0.0;
        UnityEngine_Transform__set_position(__this_00,value_00,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).DMKLEIPIGKO;
        if (pNVar3 == (Nekki_SF2_GUI_HintBox_o *)0x0) goto LAB_033338b0;
        Nekki_SF2_GUI_HintBox__Flip(pNVar3,(MethodInfo *)0x0);
      }
      else {
        if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_033338b0;
        value_01.fields.y = fVar8 + fVar10;
        value_01.fields.x = fVar7 + fVar9;
        value_01.fields.z = 0.0;
        UnityEngine_Transform__set_position(__this_00,value_01,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).DMKLEIPIGKO;
        if (pNVar3 == (Nekki_SF2_GUI_HintBox_o *)0x0) goto LAB_033338b0;
        Nekki_SF2_GUI_HintBox__ResetFlip(pNVar3,(MethodInfo *)0x0);
      }
      Nekki_SF2_GUI_Common_HintCanvas__PKEJAJKKOAN(__this,true,method_04);
      if ((FDLJCNLNCOC->fields).HDNPGLLCNEF == false) {
        __this_01 = (__this->fields).MEKKEAIEELM;
        fVar7 = (__this->fields)._timeToHide;
        if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        dueTime = System_TimeSpan__FromSeconds((double)fVar7,(MethodInfo *)0x0);
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
        }
        source = UniRx_Observable__Timer(dueTime,(MethodInfo *)0x0);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 0333385c to 03433923 has its CatchHandler @ 0333385c
                       catch() { ... } // from try @ 0333385c with catch @ 0333385c
                       catch() { ... } // from try @ 033339fc with catch @ 0333385c
                       catch() { ... } // from try @ 03333ab0 with catch @ 0333385c
                       catch() { ... } // from try @ 03333ab8 with catch @ 0333385c
                       catch() { ... } // from try @ 03333b74 with catch @ 0333385c */
        System_Action<long>___ctor();
        value = UniRx_ObservableExtensions__Subscribe<long>
                          ((System_IObservable_T__o *)source,onNext,
                           Method_UniRx_ObservableExtensions_Subscribe<long>__);
        if (__this_01 == (UniRx_SerialDisposable_o *)0x0) goto LAB_033338b0;
        UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
      }
LAB_03333890:
      return (bool)(~bVar1 & 1);
    }
  }
LAB_033338b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

