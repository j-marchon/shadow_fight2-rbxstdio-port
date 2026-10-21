// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$FOBFPEHKHAF @ RVA 0x313D2C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__FOBFPEHKHAF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  OHDDKGHEEPA_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_StaticFields *pNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t local_24;
  
  if ((DAT_0456673e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456673e = 1;
  }
  __this_00 = (__this->fields)._battle;
  if (__this_00 != (OHDDKGHEEPA_o *)0x0) {
    iVar1 = OHDDKGHEEPA__GOKIINPLKFL(__this_00,(MethodInfo *)0x0);
    local_24 = iVar1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      iVar2 = EEGDOGKBLNG__IGIHHCEONEM(__this_01,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._icon;
      fVar11 = 1.0;
      fVar10 = 1.0;
      fVar9 = 1.0;
      fVar8 = 1.0;
      (__this->fields).IBFFNCBFPGB = iVar2 < iVar1;
      if (iVar2 < iVar1) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
        }
        pNVar5 = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->static_fields;
        fVar8 = (pNVar5->MOHHGKNGNLN).fields.r;
        fVar9 = (pNVar5->MOHHGKNGNLN).fields.g;
        fVar10 = (pNVar5->MOHHGKNGNLN).fields.b;
        fVar11 = (pNVar5->MOHHGKNGNLN).fields.a;
      }
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar6->klass->vtable)._23_set_color.methodPtr)
                  (fVar8,fVar9,fVar10,fVar11,pNVar6,(pNVar6->klass->vtable)._23_set_color.method);
        pNVar6 = (__this->fields)._danRestrictionIcon;
        if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,(__this->fields).IBFFNCBFPGB,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._danRestrictionLabel;
          pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
          if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                      (pNVar7,pSVar4,(pNVar7->klass->vtable)._75_set_text.method);
            pNVar7 = (__this->fields)._danRestrictionLabel;
            if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive
                        (pUVar3,(__this->fields).IBFFNCBFPGB,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

