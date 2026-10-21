// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$EIFGCFOKAND @ RVA 0x30AD47C

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EIFGCFOKAND
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  System_Action_CanvasGroup__o **ppSVar4;
  int iVar5;
  UnityEngine_CanvasGroup_array *pUVar6;
  System_Action_CanvasGroup__o *CPECAEHDDDB;
  float fVar7;
  float fVar8;
  
  if ((DAT_045661b7 & 1) == 0) {
    FUN_01bab630(&System_Action<CanvasGroup>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<CanvasGroup>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_ALHNLFAEKKF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo);
    DAT_045661b7 = 1;
  }
  iVar5 = (__this->fields).MKFJGPMCCHE;
  if (-1 < iVar5) {
    fVar8 = (__this->fields).LFAEONCHFPB;
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (fVar7 < fVar8) {
      return;
    }
    iVar5 = (__this->fields).MKFJGPMCCHE;
  }
  pUVar6 = (__this->fields)._layouts;
  iVar5 = iVar5 + 1;
  (__this->fields).MKFJGPMCCHE = iVar5;
  if (pUVar6 != (UnityEngine_CanvasGroup_array *)0x0) {
    iVar1 = (int)pUVar6->max_length;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar5 / iVar1;
    }
    (__this->fields).MKFJGPMCCHE = iVar5 - iVar3 * iVar1;
    if ((Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CPECAEHDDDB = Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->static_fields->
                  __9__21_0;
    if (CPECAEHDDDB == (System_Action_CanvasGroup__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CPECAEHDDDB = (System_Action_CanvasGroup__o *)
                    thunk_FUN_01bda818(System_Action<CanvasGroup>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar4 = &Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_<>c_TypeInfo->static_fields->
                 __9__21_0;
      *ppSVar4 = CPECAEHDDDB;
      thunk_FUN_01c20e04(ppSVar4,CPECAEHDDDB);
    }
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)pUVar6,
               (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<CanvasGroup>__);
    pUVar6 = (__this->fields)._layouts;
    if (pUVar6 != (UnityEngine_CanvasGroup_array *)0x0) {
      uVar2 = (__this->fields).MKFJGPMCCHE;
      if ((uint)pUVar6->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pUVar6->m_Items[(int)uVar2] != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(pUVar6->m_Items[(int)uVar2],1.0,(MethodInfo *)0x0);
        fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields).LFAEONCHFPB = fVar7 + (float)(__this->fields).CICGCNCOOPC;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

