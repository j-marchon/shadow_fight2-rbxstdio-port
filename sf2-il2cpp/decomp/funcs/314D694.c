// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$PlayVideo @ RVA 0x314D694

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked__PlayVideo
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,MethodInfo *method)

{
  long lVar1;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  KAKGABBLHGP_o *__this_00;
  System_Action_KHODJHFHCDE__o **ppSVar2;
  undefined8 *puVar3;
  MethodInfo *in_x4;
  OOMHDDBCBJP_o *pOVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  System_String_o *pSVar8;
  System_Action_KHODJHFHCDE__o *pSVar9;
  
  if ((DAT_045667da & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_PackType___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_DDLAAAOPMGM__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo);
    DAT_045667da = 1;
  }
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  lVar1 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  pOVar4 = (__this->fields).ACMHOIKOLBE;
  if (pOVar4 != (OOMHDDBCBJP_o *)0x0) {
    pSVar8 = (pOVar4->fields).ICPECIILDFJ;
    plVar7 = (long *)**(undefined8 **)(lVar1 + 0xb8);
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = NGFEKJBMGEB__JCKBLNHNAHE(pSVar8,(MethodInfo *)0x0);
    LFADLKGPBHC = (Core_Configs_Models_PackType_array *)
                  FUN_01bab718(Core_Configs_Models_PackType___TypeInfo,1);
    if (LFADLKGPBHC != (Core_Configs_Models_PackType_array *)0x0) {
      if ((int)LFADLKGPBHC->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      LFADLKGPBHC->m_Items[0] = 2;
      __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
      KAKGABBLHGP___ctor(__this_00,false,pSVar8,LFADLKGPBHC,in_x4);
      if ((Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->static_fields->__9__8_0;
      if (pSVar9 == (System_Action_KHODJHFHCDE__o *)0x0) {
        if ((Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = (System_Action_KHODJHFHCDE__o *)
                 thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &Nekki_SF2_GUI_Map_ContentCompleteOrLocked_<>c_TypeInfo->static_fields->__9__8_0;
        *ppSVar2 = pSVar9;
        thunk_FUN_01c20e04(ppSVar2,pSVar9);
      }
      if (plVar7 != (long *)0x0) {
        lVar1 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0324d8bc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar7,JNDFOKIMHPB_TypeInfo,0);
LAB_0324d8bc:
                    /* WARNING: Could not recover jumptable at 0x0324d8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(plVar7,__this_00,pSVar9,puVar3[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

