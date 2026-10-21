// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$UpdateRaidItemPack @ RVA 0x31B3530

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateRaidItemPack
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar2;
  ProgressBar_o *pPVar3;
  JMDPBFOCHHP_o *__this_00;
  Il2CppObject *pIVar4;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar5;
  SFButton_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  JMDPBFOCHHP_ENBCJNLAHAC_o **ppJVar6;
  Nekki_SF2_GUI_ResolutionImage_o *__this_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  UnityEngine_Color_o UVar8;
  
  if ((DAT_04566b94 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_1456);
    FUN_01bab630(&StringLiteral_1457);
    FUN_01bab630(&StringLiteral_1458);
    FUN_01bab630(&StringLiteral_1460);
    FUN_01bab630(&StringLiteral_1482);
    DAT_04566b94 = 1;
    method = extraout_x1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
  }
  pJVar1 = LPGPNBGHDBD__OICLMNIHIJJ((MethodInfo *)0x0);
  ppJVar6 = &(__this->fields).MHDJAEILAJL;
  *ppJVar6 = pJVar1;
  thunk_FUN_01c20e04(ppJVar6,pJVar1);
  if (*ppJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    pNVar2 = (__this->fields)._border;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                (pNVar2,(float)((*ppJVar6)->fields).JIALOHAOPAO,(MethodInfo *)0x0);
      pJVar1 = (__this->fields).MHDJAEILAJL;
      if ((pJVar1 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
         (pNVar2 = (__this->fields)._back, pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                  (pNVar2,(float)(pJVar1->fields).JIALOHAOPAO,(MethodInfo *)0x0);
        pJVar1 = (__this->fields).MHDJAEILAJL;
        if ((pJVar1 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
           (pNVar2 = (__this->fields)._strip, pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0))
        {
          Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                    (pNVar2,(float)(pJVar1->fields).JIALOHAOPAO,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._border,
                     StringLiteral_1457,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._back,
                     StringLiteral_1456,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._strip,
                     StringLiteral_1458,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(__this->fields)._itemPicture,StringLiteral_1460,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(__this->fields)._itemShineBorder,StringLiteral_1482,in_x3);
          pPVar3 = (__this->fields)._barPrice;
          if (pPVar3 != (ProgressBar_o *)0x0) {
            (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,0x3f800000,pPVar3,(pPVar3->klass->vtable)._11_SetValueBorders.method);
            pPVar3 = (__this->fields)._barPrice;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._8_SetValue.methodPtr)
                        (0x3f800000,0,pPVar3,0,(pPVar3->klass->vtable)._8_SetValue.method);
              __this_03 = (__this->fields)._currencyIcon;
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
              if ((((*ppJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
                   (pIVar4 = DJNBJHPDKDP__PHPELPFMOII<object>
                                       ((System_Collections_Generic_List_T__o *)
                                        ((*ppJVar6)->fields).LIJCIBIOOOH,
                                        Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__),
                   pIVar4 != (Il2CppObject *)0x0)) && (__this_00 != (JMDPBFOCHHP_o *)0x0)) &&
                 ((pJVar5 = JMDPBFOCHHP__BHJOLIJDBLO
                                      (__this_00,(System_String_o *)pIVar4[1].klass,
                                       (MethodInfo *)0x0),
                  pJVar5 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0 &&
                  (__this_03 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)))) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          (__this_03,(pJVar5->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
                pJVar1 = (__this->fields).MHDJAEILAJL;
                if (pJVar1 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                  pNVar7 = (__this->fields)._infoCoins;
                  UVar8 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar1->fields).DPNFGBFFNAJ,(MethodInfo *)0x0);
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
                              (UVar8.fields.r,UVar8.fields.g,UVar8.fields.b,UVar8.fields.a,pNVar7,
                               (pNVar7->klass->vtable)._23_set_color.method);
                    __this_01 = (__this->fields)._itemButton;
                    if (__this_01 != (SFButton_o *)0x0) {
                      __this_02 = SFButton__get_RectTransform(__this_01,(MethodInfo *)0x0);
                      if ((*ppJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
                         (__this_02 != (UnityEngine_RectTransform_o *)0x0)) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (__this_02,
                                   (UnityEngine_Vector2_o)((*ppJVar6)->fields).MJPMEGEPHCK.fields,
                                   (MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

