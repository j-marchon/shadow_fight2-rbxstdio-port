// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CHPPPEONOME @ RVA 0x3288180

void Nekki_SF2_GUI_Dialogs_LotteryDialog__CHPPPEONOME
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  undefined8 uVar4;
  System_String_o *DFEGBKMFBMM;
  System_String_o *MEJEDBBGECM;
  int32_t HGDGDPODNLL;
  System_Int32_array *IMMNELPBGIF;
  MethodInfo *in_x6;
  LPGLKMNHELJ_o *pLVar5;
  MFFKCPDBFPG_o *pMVar6;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_045672cc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFFKCPDBFPG_GDIIDMDOIDK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8687);
    FUN_01bab630(&StringLiteral_8684);
    FUN_01bab630(&StringLiteral_8686);
    FUN_01bab630(&StringLiteral_8680);
    FUN_01bab630(&StringLiteral_8688);
    FUN_01bab630(&StringLiteral_8685);
    FUN_01bab630(&StringLiteral_8681);
    FUN_01bab630(&StringLiteral_8682);
    FUN_01bab630(&StringLiteral_14560);
    FUN_01bab630(&StringLiteral_8683);
    DAT_045672cc = 1;
  }
  __this_00 = (__this->fields).ScrollShadow;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pLVar5 = (__this->fields).DKMMBMBMJBO;
    if ((pLVar5 != (LPGLKMNHELJ_o *)0x0) &&
       (pMVar6 = (pLVar5->fields).FGCJFGHMIOL, pMVar6 != (MFFKCPDBFPG_o *)0x0)) {
      iVar1 = (pMVar6->fields).BGHFADDGPAD;
      if (iVar1 == 2) {
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IMMNELPBGIF = Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->EJKOCKOCCCI;
        HGDGDPODNLL = 0xe0;
        pSVar2 = StringLiteral_8685;
        DFEGBKMFBMM = StringLiteral_8686;
        MEJEDBBGECM = StringLiteral_8681;
      }
      else if (iVar1 == 1) {
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IMMNELPBGIF = Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->MPMNNILPAAE;
        HGDGDPODNLL = 0xdc;
        pSVar2 = StringLiteral_8687;
        DFEGBKMFBMM = StringLiteral_8688;
        MEJEDBBGECM = StringLiteral_8682;
      }
      else {
        if (iVar1 != 0) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          pLVar5 = (__this->fields).DKMMBMBMJBO;
          if ((pLVar5 != (LPGLKMNHELJ_o *)0x0) &&
             (pMVar6 = (pLVar5->fields).FGCJFGHMIOL, pMVar6 != (MFFKCPDBFPG_o *)0x0)) {
            local_38.klass = (System_Enum_c *)MFFKCPDBFPG_GDIIDMDOIDK_TypeInfo;
            local_38.monitor = (void *)0xffffffffffffffff;
            local_28 = (pMVar6->fields).BGHFADDGPAD;
            pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
            if (args != (System_Object_array *)0x0) {
              if ((pSVar2 != (System_String_o *)0x0) &&
                 (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class),
                 lVar3 == 0)) {
                uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar4,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar2;
                thunk_FUN_01c20e04(args->m_Items,pSVar2);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_14560,args,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          goto LAB_03388450;
        }
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IMMNELPBGIF = Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->static_fields->IJDEBLDLODL;
        HGDGDPODNLL = 0xd7;
        pSVar2 = StringLiteral_8683;
        DFEGBKMFBMM = StringLiteral_8684;
        MEJEDBBGECM = StringLiteral_8680;
      }
      Nekki_SF2_GUI_Dialogs_LotteryDialog__GCOBGDGKBFN
                (__this,pSVar2,DFEGBKMFBMM,MEJEDBBGECM,HGDGDPODNLL,IMMNELPBGIF,in_x6);
      return;
    }
  }
LAB_03388450:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

