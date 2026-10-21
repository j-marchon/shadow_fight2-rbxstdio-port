// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$OnAccept @ RVA 0x353A204

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__OnAccept
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  int32_t iVar6;
  CNLGMNIEGFG_o *FBFPLEFCDOK;
  EEOMEMBBGNA_o *pEVar7;
  System_Action_NLFLMJPNOLF__o *IELDNEAAPBE;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar8;
  EEGDOGKBLNG_o *__this_01;
  System_String_o *pSVar9;
  Il2CppObject *arg0;
  Il2CppObject *arg2;
  JMDPBFOCHHP_o *__this_02;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar10;
  System_String_o *pSVar11;
  System_Action_object__o *IELDNEAAPBE_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar12;
  ADJEBFOPFFF_o *__this_03;
  LabelButton_o *__this_04;
  MethodInfo *extraout_x1;
  CJFBGEEIPBA_o *__this_05;
  System_String_o *pSVar13;
  OHDDKGHEEPA_o *__this_06;
  UnityEngine_Color_o CJNHFNHJHPE;
  MethodInfo *in_stack_ffffffffffffffa8;
  int32_t local_48;
  undefined4 local_44;
  
  if ((DAT_04568abf & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_CEOEIJFKMOG__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_MGOANPBKOCK__)
    ;
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_22511);
    FUN_01bab630(&StringLiteral_10994);
    FUN_01bab630(&StringLiteral_10873);
    FUN_01bab630(&StringLiteral_10992);
    FUN_01bab630(&StringLiteral_16814);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_18941);
    DAT_04568abf = 1;
    method = extraout_x1;
  }
  iVar6 = (__this->fields).EIMPNFFLONC;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  FBFPLEFCDOK = MGNPHCAAEIO__MJDCGINJMOP(iVar6,false,(MethodInfo *)0x0);
  if ((FBFPLEFCDOK != (CNLGMNIEGFG_o *)0x0) &&
     (__this_06 = (OHDDKGHEEPA_o *)(FBFPLEFCDOK->fields).super.IFJLLGPGMHM,
     __this_06 != (OHDDKGHEEPA_o *)0x0)) {
    bVar3 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
    if ((bVar3 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
      if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LPGPNBGHDBD__CFBCMMEBKHN((MethodInfo *)0x0);
      bVar5 = OHDDKGHEEPA__EPLDDILOPAJ(__this_06,(AFFHKININGD_o *)FBFPLEFCDOK,(MethodInfo *)0x0);
      if (bVar5) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar7 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (pEVar7 != (EEOMEMBBGNA_o *)0x0) {
          __this_05 = (pEVar7->fields).GMNJEBCECDA;
          iVar4 = (__this->fields).GPLBBNOPMID;
          IELDNEAAPBE = (System_Action_NLFLMJPNOLF__o *)
                        thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_05 != (CJFBGEEIPBA_o *)0x0) {
            CJFBGEEIPBA__DCBIBAGFAIG(__this_05,(long)iVar4,IELDNEAAPBE,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        __this_00 = (System_Collections_Generic_List_object__o *)
                    (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                              (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          if ((0 < (__this_00->fields)._size) &&
             (pIVar8 = System_Collections_Generic_List<object>__get_Item
                                 (__this_00,0,
                                  Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__),
             pIVar8 != (Il2CppObject *)0x0)) {
            bVar3 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
            if ((bVar3 <= (pIVar8->klass->_2).naturalAligment) &&
               ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                (Il2CppClass *)FPLOLKHJIAF_TypeInfo)) {
              pSVar13 = pIVar8[5].monitor;
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
                iVar6 = EEGDOGKBLNG__APFFEAJBAEK(__this_01,pSVar13,(MethodInfo *)0x0);
                uVar2 = *(undefined4 *)&pIVar8[6].klass;
                pSVar13 = OFFIONDOEPM__CDGICMOFKHE(pSVar13,(MethodInfo *)0x0);
                pSVar9 = System_String__Concat(StringLiteral_18941,pSVar13,(MethodInfo *)0x0);
                pSVar13 = StringLiteral_10992;
                local_44 = uVar2;
                arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
                local_48 = iVar6;
                arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
                pSVar9 = System_String__Format
                                   (StringLiteral_10994,arg0,(Il2CppObject *)pSVar9,arg2,
                                    (MethodInfo *)0x0);
                __this_02 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (__this_02 != (JMDPBFOCHHP_o *)0x0) {
                  pJVar10 = JMDPBFOCHHP__DIFLKMKBENA
                                      (__this_02,pIVar8[6].monitor,false,(MethodInfo *)0x0);
                  if (pJVar10 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    JJPNLEPEAFM__OJEGBDGIKGH
                              (0x154,pSVar13,pSVar9,StringLiteral_9679,StringLiteral_1,
                               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,
                               true,true,true,in_stack_ffffffffffffffa8);
                    return;
                  }
                  piVar1 = &(pJVar10->fields).NGMFKGGBHND;
                  pSVar11 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
                  pSVar11 = System_String__Concat
                                      (StringLiteral_16814,pSVar11,StringLiteral_22511,
                                       (MethodInfo *)0x0);
                  IELDNEAAPBE_00 =
                       (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo)
                  ;
                  System_Action<object>___ctor();
                  pNVar12 = JJPNLEPEAFM__OJEGBDGIKGH
                                      (0x154,pSVar13,pSVar9,pSVar11,StringLiteral_3640,
                                       IELDNEAAPBE_00,2,1,false,false,StringLiteral_1,true,true,true
                                       ,true,in_stack_ffffffffffffffa8);
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                  }
                  __this_03 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                  if (__this_03 != (ADJEBFOPFFF_o *)0x0) {
                    bVar5 = ADJEBFOPFFF__MIBNBHKOIEI(__this_03,*piVar1,false,(MethodInfo *)0x0);
                    if (bVar5) {
                      return;
                    }
                    if ((pNVar12 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) &&
                       (__this_04 = (pNVar12->fields)._btnOK, __this_04 != (LabelButton_o *)0x0)) {
                      CJNHFNHJHPE.fields.b = 0.02745098;
                      CJNHFNHJHPE.fields.a = 1.0;
                      CJNHFNHJHPE.fields.r = 0.60784316;
                      CJNHFNHJHPE.fields.g = 0.10980392;
                      LabelButton__set_Color(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
              goto LAB_0363a7a8;
            }
          }
          return;
        }
      }
LAB_0363a7a8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_10873,(MethodInfo *)0x0);
  return;
}

