// LJNJDFEAIOH$$MDFHMNAMALM @ RVA 0x303A68C

void LJNJDFEAIOH__MDFHMNAMALM
               (LJNJDFEAIOH_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  CNLGMNIEGFG_o *pCVar4;
  FCBPECGCJLN_o *__this_00;
  int64_t iVar5;
  OHDDKGHEEPA_o **ppOVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *method_00;
  OHDDKGHEEPA_o *__this_02;
  AADKBCFCLKK_o *DKMMBMBMJBO;
  
  if ((DAT_04565d73 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&FCBPECGCJLN_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_KNNGEFCLLDP__);
    FUN_01bab630(&LJNJDFEAIOH_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04565d73 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IMMNELPBGIF,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar2) {
    DKMMBMBMJBO = (__this->fields).IHODMKCBNKJ;
    iVar3 = (__this->fields).EIMPNFFLONC;
    if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = LJNJDFEAIOH__APFDLGPHDBN(DKMMBMBMJBO,iVar3,method_00);
    if (pCVar4 == (CNLGMNIEGFG_o *)0x0) {
LAB_0313a920:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (OHDDKGHEEPA_o *)(pCVar4->fields).super.IFJLLGPGMHM;
    if (__this_02 != (OHDDKGHEEPA_o *)0x0) {
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
        __this_00 = (FCBPECGCJLN_o *)thunk_FUN_01bda818(FCBPECGCJLN_TypeInfo);
        FCBPECGCJLN___ctor(__this_00,(MethodInfo *)0x0);
        iVar5 = OOBBAGLCFPF__ACNOPBOADGE((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
        if (__this_00 != (FCBPECGCJLN_o *)0x0) {
          (__this_00->fields).CFGEFEGPPEI = iVar5;
          (__this_00->fields).IGMDDJFPIJL = (__this->fields).IHODMKCBNKJ;
          thunk_FUN_01c20e04();
          ppOVar6 = &(__this_00->fields).MIFNFJDIPBL;
          *ppOVar6 = __this_02;
          thunk_FUN_01c20e04(ppOVar6,__this_02);
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)
                      JJPNLEPEAFM__FONHJEMPEEC(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
            bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo->_2).
                    naturalAligment;
            if (((__this_01->klass->_2).naturalAligment < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(__this_01);
            }
          }
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            return;
          }
          if (((__this_02 != (OHDDKGHEEPA_o *)0x0) &&
              (iVar3 = OHDDKGHEEPA__MFPFLDMMJII(__this_02,(MethodInfo *)0x0),
              __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0)) &&
             (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__SetBtnFightValueBorders_MS
                        (__this_01,0,(long)(iVar3 * 1000),(MethodInfo *)0x0),
             IMMNELPBGIF != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
            iVar5 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GetCooldownFinishTime
                              (IMMNELPBGIF,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__UpdateCooldownFinishTime
                      (__this_01,iVar5,(MethodInfo *)0x0);
            IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,1,IELDNEAAPBE,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
            return;
          }
        }
        goto LAB_0313a920;
      }
    }
  }
  return;
}

