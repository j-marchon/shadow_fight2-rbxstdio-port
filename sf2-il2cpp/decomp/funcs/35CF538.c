// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$SetIcon @ RVA 0x35CF538

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetIcon
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar7;
  ulong uVar8;
  
  if ((DAT_04568fcb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fcb = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pMVar7 = extraout_x1;
  if (bVar3) {
LAB_036cf5ac:
    NEJHIEOHMCF = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__KBKOLEJMGAB(__this,pMVar7);
    if (NEJHIEOHMCF == (System_String_o *)0x0) goto LAB_036cf6d8;
  }
  else {
    if (NEJHIEOHMCF == (System_String_o *)0x0) goto LAB_036cf6d8;
    bVar3 = System_String__Contains(NEJHIEOHMCF,0x2c,(MethodInfo *)0x0);
    pMVar7 = extraout_x1_00;
    if (!bVar3) goto LAB_036cf5ac;
  }
  pMVar7 = (MethodInfo *)0x0;
  pSVar6 = System_String__Split(NEJHIEOHMCF,0x2c,0,(MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    uVar4 = (uint)pSVar6->max_length;
    uVar2 = uVar4;
    if (2 < (int)uVar4) {
      uVar2 = 3;
    }
    if (0 < (int)uVar4) {
      uVar8 = 0;
      if ((int)uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        __this_00 = (__this->fields).PEIHFKHLGMO;
        if (__this_00 ==
            (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0)
        goto LAB_036cf6d8;
        __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                    System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (int32_t)uVar8,
                               Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Item__
                              );
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        pMVar7 = (MethodInfo *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          if ((uint)pSVar6->max_length <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar4 = PCOEHCPGBBG__JBGCINPPLAC(pSVar6->m_Items[uVar8],0,(MethodInfo *)0x0);
          if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0)
          goto LAB_036cf6d8;
          iVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetItemsCount
                            (__this_01,(MethodInfo *)0x0);
          iVar1 = iVar5;
          if (iVar5 < 0) {
            iVar1 = iVar5 + 1;
          }
          if (iVar5 <= (int)uVar4 || 0x7fffffff < uVar4) {
            uVar4 = iVar1 >> 1;
          }
          pMVar7 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ScrollToItem
                    (__this_01,uVar4,(MethodInfo *)0x0);
        }
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__FKFPKOGCLFP(__this,NEJHIEOHMCF,pMVar7);
    return;
  }
LAB_036cf6d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

