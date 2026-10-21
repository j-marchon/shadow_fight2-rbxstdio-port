// BANPLPOPIGI$$LPNCEHPFOAF @ RVA 0x33C8998

void BANPLPOPIGI__LPNCEHPFOAF
               (BANPLPOPIGI_o *__this,JCFJFJCKLKG_o *DJFFMPLBCKC,System_Action_o *NAKEOECMGIG,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  System_Action_o **ppSVar1;
  JCFJFJCKLKG_o **ppJVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  
  method_00 = (MethodInfo *)DJFFMPLBCKC;
  if ((DAT_04567e05 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidTopPlayerCell>__);
    FUN_01bab630(&StringLiteral_13880);
    DAT_04567e05 = 1;
    method_00 = extraout_x1;
  }
  BANPLPOPIGI__JOIFLMJEEJK(__this,method_00);
  __this_00 = (__this->fields).DGEDNGEEBOP;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pNVar4 = (__this->fields).PDHMLFAMNCO;
    DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_00,
                             Method_UnityEngine_GameObject_GetComponent<RaidTopPlayerCell>__);
    if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                (pNVar4,StringLiteral_13880,DKIDCBPNMPD,(MethodInfo *)0x0);
      ppSVar1 = &(__this->fields).NDHBLOHOEFK;
      *ppSVar1 = NAKEOECMGIG;
      thunk_FUN_01c20e04(ppSVar1,NAKEOECMGIG);
      ppJVar2 = &(__this->fields).FHPFEDKOMBA;
      if (*ppJVar2 == DJFFMPLBCKC) {
        BANPLPOPIGI__NCDOMAGEGCF(__this,method_01);
        pSVar3 = (__this->fields).NDHBLOHOEFK;
        if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034c8a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
          return;
        }
        return;
      }
      (__this->fields).FHPFEDKOMBA = DJFFMPLBCKC;
      thunk_FUN_01c20e04(ppJVar2,DJFFMPLBCKC);
      pNVar4 = (__this->fields).PDHMLFAMNCO;
      if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar4,(MethodInfo *)0x0);
        BANPLPOPIGI__GECPCINCJGC(__this,method_02);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

