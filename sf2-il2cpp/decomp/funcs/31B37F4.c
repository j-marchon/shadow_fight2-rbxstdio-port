// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$JBMIBJCLDDH @ RVA 0x31B37F4

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JBMIBJCLDDH
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *IMMNELPBGIF,MethodInfo *method)

{
  void **ppvVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  ProgressBar_o *pPVar4;
  EEGDOGKBLNG_o *__this_00;
  System_String_o *pSVar5;
  System_String_o *str2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  MethodInfo *method_00;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar7;
  int32_t iStack_24;
  
  if ((DAT_04566b95 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04566b95 = 1;
  }
  pJVar7 = (__this->fields).MHDJAEILAJL;
  if ((pJVar7 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) ||
     (bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pJVar7->fields).LIJCIBIOOOH,
                         Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_int>>__), bVar2)) {
    return;
  }
  pJVar7 = (__this->fields).MHDJAEILAJL;
  if ((pJVar7 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
     ((pIVar3 = DJNBJHPDKDP__PHPELPFMOII<object>
                          ((System_Collections_Generic_List_T__o *)(pJVar7->fields).LIJCIBIOOOH,
                           Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__),
      pIVar3 != (Il2CppObject *)0x0 &&
      (pPVar4 = (__this->fields)._barPrice, pPVar4 != (ProgressBar_o *)0x0)))) {
    ppvVar1 = &pIVar3[1].monitor;
    (*(pPVar4->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,(float)*(int *)ppvVar1,pPVar4,(pPVar4->klass->vtable)._11_SetValueBorders.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iStack_24 = EEGDOGKBLNG__APFFEAJBAEK
                            (__this_00,(System_String_o *)pIVar3[1].klass,(MethodInfo *)0x0);
      pPVar4 = (__this->fields)._barPrice;
      if (pPVar4 != (ProgressBar_o *)0x0) {
        (*(pPVar4->klass->vtable)._8_SetValue.methodPtr)
                  ((float)iStack_24,0,pPVar4,0,(pPVar4->klass->vtable)._8_SetValue.method);
        pSVar5 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
        str2 = System_Int32__ToString((int32_t)ppvVar1,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,StringLiteral_1492,str2,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._itemShineBorder;
        (__this->fields).IKLIGGACIMH = *(int *)ppvVar1 <= iStack_24;
        if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_02,(__this->fields).IKLIGGACIMH,(MethodInfo *)0x0);
          if ((__this->fields).IKLIGGACIMH != false) {
            Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__GFAPFHOKBCB(__this,method_00);
          }
          pNVar6 = (__this->fields)._infoCoins;
          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                      (pNVar6,pSVar5,(pNVar6->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

