// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$GetBattlePassReward @ RVA 0x3574608

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__GetBattlePassReward
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  int32_t HGIALBGPMAO;
  uint uVar1;
  long lVar2;
  bool bVar3;
  EGMONPGHHDP_o *__this_00;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Il2CppObject *pIVar5;
  System_Action_o *BLMFLPJJMPF;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_02;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  NBLEEDEAPHB_o *__this_03;
  System_Action_object__o *BLMFLPJJMPF_00;
  System_String_o *OOKEKJMFKPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_03;
  MethodInfo *in_x3;
  NBLEEDEAPHB_array *pNVar9;
  System_String_o *CADMJIKLNCN;
  
  if ((DAT_04568c75 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1564);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1565);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1566);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1567);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1568);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_ALBHLGLKFFI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_UpdateProgressBar__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568c75 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).IKLIGGACIMH == false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
                EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) {
      return;
    }
    Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__KIPDEKLDABN
              (__this_01,(JMDPBFOCHHP_CKEMIAEPGKD_o *)__this_01,(__this->fields).NJICOEOHBKA,in_x3);
    pNVar4 = (__this_01->fields)._hintText;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pNVar4,
                            (__this->fields).NJICOEOHBKA,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                           ), pIVar5 != (Il2CppObject *)0x0)) {
      if ((*(char *)&pIVar5[2].monitor == '\0') ||
         (bVar3 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0), bVar3)) {
        HGIALBGPMAO = (__this->fields).NJICOEOHBKA;
        BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        EGMONPGHHDP__MJPJLODOPOH
                  (__this_00,HGIALBGPMAO,BLMFLPJJMPF,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      method_00 = extraout_x1_00;
      if ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      if (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->static_fields->ABLFFDNPHDE != false
         ) {
        __this_02 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
        CADMJIKLNCN = (__this->fields).AIFCDABONKN;
        IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                   Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1563,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1564,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        __this_03 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
        NBLEEDEAPHB___ctor(__this_03,pSVar8,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,-1,
                           (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                           (MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
        if (IJIPABLCAKE == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) goto LAB_03674b2c;
        pNVar9 = (IJIPABLCAKE->fields)._items;
        (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
        if (pNVar9 == (NBLEEDEAPHB_array *)0x0) goto LAB_03674b2c;
        uVar1 = (IJIPABLCAKE->fields)._size;
        if (uVar1 < (uint)pNVar9->max_length) {
          (IJIPABLCAKE->fields)._size = uVar1 + 1;
          pNVar9->m_Items[(int)uVar1] = __this_03;
          thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar1,__this_03);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                     (Il2CppObject *)__this_03,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        BLMFLPJJMPF_00 =
             (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1565,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1566,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1567,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1568,
                   (MethodInfo *)0x0);
        OOKEKJMFKPE = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        if (__this_02 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) goto LAB_03674b2c;
        Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                  (__this_02,CADMJIKLNCN,IJIPABLCAKE,BLMFLPJJMPF_00,pSVar8,2,0.0,0,false,true,0.7,
                   OOKEKJMFKPE,(MethodInfo *)0x0);
        method_00 = extraout_x1_02;
      }
      pNVar4 = (__this_01->fields)._hintText;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        if ((__this->fields).NJICOEOHBKA ==
            *(int *)((long)&(pNVar4->fields).super.super.super.super.super.super + 8) + -1) {
          if ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method_00 = extraout_x1_03;
          }
          Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_TypeInfo->static_fields->ABLFFDNPHDE = false;
        }
        Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar(__this,method_00);
        return;
      }
    }
  }
LAB_03674b2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

