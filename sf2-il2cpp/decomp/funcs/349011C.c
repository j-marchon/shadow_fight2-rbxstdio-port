// PBHDPJBLDLG$$LPNCEHPFOAF @ RVA 0x349011C

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG__LPNCEHPFOAF
               (PBHDPJBLDLG_o *__this,JCFJFJCKLKG_o *DJFFMPLBCKC,System_Action_o *NAKEOECMGIG,
               MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  System_Action_o **ppSVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_02;
  System_Collections_Generic_IEnumerator_T__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OJKCDJCBOBL_o *pOVar4;
  System_Collections_Generic_IEnumerator_T__c *pSVar5;
  System_Action_o *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  JCFJFJCKLKG_o **ppJVar9;
  Nekki_SF2_GUI_SimpleScroll_o *__this_03;
  
  method_00 = (MethodInfo *)DJFFMPLBCKC;
  if ((DAT_04568411 & 1) == 0) {
    FUN_01bab630(&System_Action<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidTopClanCell>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_PBHDPJBLDLG_HAFBJDICOGK__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clear__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&StringLiteral_13879);
    DAT_04568411 = 1;
    method_00 = extraout_x1;
  }
  PBHDPJBLDLG__DNNPDIPCCEN(__this,method_00);
  __this_00 = (__this->fields).DDOFFEJPFMP;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_03 = (__this->fields).PDHMLFAMNCO;
    DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_GetComponent<RaidTopClanCell>__
                            );
    if (__this_03 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                (__this_03,StringLiteral_13879,DKIDCBPNMPD,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NDHBLOHOEFK;
      *ppSVar2 = NAKEOECMGIG;
      thunk_FUN_01c20e04(ppSVar2,NAKEOECMGIG);
      if (DJFFMPLBCKC == (JCFJFJCKLKG_o *)0x0) {
        PBHDPJBLDLG__NCDOMAGEGCF(__this,method_01);
        pSVar6 = (__this->fields).NDHBLOHOEFK;
        if (pSVar6 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035904c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,(pSVar6->fields).super.super.method);
          return;
        }
        return;
      }
      ppJVar9 = &(__this->fields).FHPFEDKOMBA;
      *ppJVar9 = DJFFMPLBCKC;
      thunk_FUN_01c20e04(ppJVar9,DJFFMPLBCKC);
      pOVar4 = (__this->fields).BAKEIGFACAG;
      if ((pOVar4 != (OJKCDJCBOBL_o *)0x0) &&
         (__this_01 = (pOVar4->fields).OHMDCKEDOGH,
         __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
        Google_Protobuf_Collections_RepeatedField<long>__Clear
                  (__this_01,Method_Google_Protobuf_Collections_RepeatedField<long>_Clear__);
        if ((*ppJVar9 != (JCFJFJCKLKG_o *)0x0) &&
           (__this_02 = ((*ppJVar9)->fields).LFOCACIGEFK,
           __this_02 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0)) {
          pSVar3 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                              Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_GetEnumerator__
                             );
          if (pSVar3 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = pSVar3->klass;
          uVar1._0_1_ = (pSVar5->_2).rank;
          uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                halt_unimplemented();
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

