// KHIBJFLBJNH$$FLEFGBHOBHP @ RVA 0x31DC810

void KHIBJFLBJNH__FLEFGBHOBHP(KHIBJFLBJNH_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EEGDOGKBLNG_o *__this_00;
  MAEAAOFOANA_o *__this_01;
  ADJEBFOPFFF_o *__this_02;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  UnityEngine_Events_UnityAction_o *call;
  CPNHNIKFGFB_o *__this_03;
  System_Action_object__o *CPECAEHDDDB;
  MethodInfo *method_00;
  LabelButton_o *pLVar4;
  int32_t CEOLOKFCKIG;
  UnityEngine_Events_UnityEvent_o *__this_04;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04566d1e & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<BKMLILFFPIH>__);
    FUN_01bab630(&Method_KHIBJFLBJNH_DPHMBNEFAAI__);
    FUN_01bab630(&Method_KHIBJFLBJNH_NLMLNPPIMCJ__);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566d1e = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    __this_03 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = 0x29c4;
  }
  else {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<BKMLILFFPIH>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        LLJHKLPGMGC = pIVar2[2].klass;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
          EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)LLJHKLPGMGC,(MethodInfo *)0x0);
          __this_01 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
          MAEAAOFOANA___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (MAEAAOFOANA_o *)0x0) {
            (__this_01->fields).EBBNAOLNKGD = pIVar2[1].monitor;
            thunk_FUN_01c20e04();
            __this_02 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
            if (__this_02 != (ADJEBFOPFFF_o *)0x0) {
              ADJEBFOPFFF__AEADCLCKCEL(__this_02,pIVar2[1].monitor,false,(MethodInfo *)0x0);
              pNVar3 = JJPNLEPEAFM__EFLNJLIDLEF(__this_01,(MethodInfo *)0x0);
              if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) &&
                 (pLVar4 = (pNVar3->fields)._btnOK, pLVar4 != (LabelButton_o *)0x0)) {
                __this_04 = (UnityEngine_Events_UnityEvent_o *)
                            (pLVar4->fields).super.super.super.m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_032dca38;
    }
    if ((IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField == 1) {
      KHIBJFLBJNH__OMIAMBPBEGA(__this,method_00);
      return;
    }
    __this_03 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
  }
  CPECAEHDDDB = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_03 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_03,CEOLOKFCKIG,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
LAB_032dca38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

