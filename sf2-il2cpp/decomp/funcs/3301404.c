// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$EAIIDFHIBHB @ RVA 0x3301404

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__EAIIDFHIBHB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  int32_t PGGOPJDLPDI;
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_c *pNVar2;
  bool bVar3;
  ulong uVar4;
  JMDPBFOCHHP_o *pJVar5;
  ADJEBFOPFFF_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar6;
  BKKENCMPLLF_o *pBVar7;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  ClanLogoImage_o *pCVar10;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar11;
  EEHFEPPDBHL_o *pEVar12;
  ClanLogoImage_o **ppCVar13;
  Nekki_SF2_GUI_Dialogs_SimpleDialog_o **ppNVar14;
  float __this_03;
  undefined4 local_24;
  
                    /* try { // try from 03401408 to 0350140b has its CatchHandler @ 03401418 */
                    /* catch() { ... } // from try @ 03401408 with catch @ 03401418 */
  if ((DAT_04567722 & 1) == 0) {
                    /* try { // try from 03401428 to 03501497 has its CatchHandler @ 034014ac */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_AJNAFLOFLMF__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_133);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17850);
                    /* try { // try from 03401498 to 035014a3 has its CatchHandler @ 03400db0 */
    FUN_01bab630(&StringLiteral_17011);
                    /* try { // try from 034014a4 to 035014ab has its CatchHandler @ 034014ac */
    FUN_01bab630(&StringLiteral_374);
                    /* catch() { ... } // from try @ 03401428 with catch @ 034014ac
                       catch() { ... } // from try @ 034014a4 with catch @ 034014ac */
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_22231);
    DAT_04567722 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FNMNFEGFOEK(__this,method);
  uVar4 = (*(__this->klass->vtable)._39_LLKLEHBDELH.methodPtr)
                    (__this,(__this->klass->vtable)._39_LLKLEHBDELH.method);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((pJVar5 != (JMDPBFOCHHP_o *)0x0) &&
     (pJVar11 = (pJVar5->fields)._LGFNDLOCGPB_k__BackingField,
     pJVar11 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) {
    PGGOPJDLPDI = (pJVar11->fields).DDBGOGFKEBF;
    __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_00 != (ADJEBFOPFFF_o *)0x0) {
      bVar3 = ADJEBFOPFFF__MIBNBHKOIEI(__this_00,PGGOPJDLPDI,true,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = StringLiteral_22231;
          __this_03 = (float)thunk_FUN_01c20e04(values->m_Items);
          local_24 = 0x43160000;
          pSVar6 = System_Single__ToString(__this_03,(MethodInfo *)&stack0xffffffffffffffdc);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar6;
            thunk_FUN_01c20e04(values->m_Items + 1,pSVar6);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_374;
              thunk_FUN_01c20e04();
              pBVar7 = (__this->fields).FLLHHEODKPH;
              if (pBVar7 == (BKKENCMPLLF_o *)0x0) goto LAB_0340184c;
              pSVar6 = BKKENCMPLLF__MJBHKOJAFOH(pBVar7,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar6;
                thunk_FUN_01c20e04(values->m_Items + 3,pSVar6);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_133;
                  thunk_FUN_01c20e04();
                  pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
                  pSVar6 = System_String__Concat(StringLiteral_17011,pSVar6,(MethodInfo *)0x0);
                  IELDNEAAPBE = (System_Action_object__o *)
                                thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                  System_Action<object>___ctor();
                  pNVar8 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)
                           JJPNLEPEAFM__JNDPLPKDPCP
                                     (StringLiteral_17850,pSVar6,StringLiteral_9679,
                                      StringLiteral_3640,IELDNEAAPBE,2,0,false,false,StringLiteral_1
                                      ,true,true,true,true,(MethodInfo *)0x0);
                  pNVar2 = Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo;
                  if (pNVar8 == (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
                    (__this->fields).LBFACKCBBOD = (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0;
                  }
                  else {
                    bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
                    if (((pNVar8->klass->_2).naturalAligment < bVar1) ||
                       ((pNVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
LAB_0340174c:
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64(pNVar8);
                    }
                    (__this->fields).LBFACKCBBOD = pNVar8;
                    if (((pNVar8->klass->_2).naturalAligment < bVar1) ||
                       ((pNVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pNVar2
                       )) goto LAB_0340174c;
                  }
                  ppNVar14 = &(__this->fields).LBFACKCBBOD;
                  thunk_FUN_01c20e04(ppNVar14,pNVar8);
                  if (*ppNVar14 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
                    pUVar9 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*ppNVar14,(MethodInfo *)0x0);
                    pBVar7 = (__this->fields).FLLHHEODKPH;
                    if ((pBVar7 != (BKKENCMPLLF_o *)0x0) &&
                       (pEVar12 = (pBVar7->fields)._OGOHLLOEANF_k__BackingField,
                       pEVar12 != (EEHFEPPDBHL_o *)0x0)) {
                      pCVar10 = KFCFGKEHPNK__LEIGOOFFFPE
                                          (pUVar9,(pEVar12->fields).JAAACMPGMKJ,0,1.5,
                                           (MethodInfo *)0x0);
                      ppCVar13 = &(__this->fields).NCEGFHDDGOO;
                      *ppCVar13 = pCVar10;
                      thunk_FUN_01c20e04(ppCVar13,pCVar10);
                      if (*ppCVar13 != (ClanLogoImage_o *)0x0) {
                        pUVar9 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)*ppCVar13,(MethodInfo *)0x0);
                        if (DAT_0455fa77 == '\0') {
                          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                          DAT_0455fa77 = '\x01';
                        }
                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__set_localPosition
                                    (pUVar9,(UnityEngine_Vector3_o)
                                            (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector
                                            ).fields,(MethodInfo *)0x0);
                          if ((*ppCVar13 != (ClanLogoImage_o *)0x0) &&
                             (__this_01 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)*ppCVar13,
                                                     (MethodInfo *)0x0),
                             __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                            method_00 = (MethodInfo *)0x0;
                            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                            if (*ppNVar14 != (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)0x0) {
                              Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FPCFNCJADKF
                                        (__this_02,((*ppNVar14)->fields).super._btnOK,method_00);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0340184c;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_0340184c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

