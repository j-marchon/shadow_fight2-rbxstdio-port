// Nekki.SF2.GUI.Profile.TrickSubItem$$Init @ RVA 0x31A623C

void Nekki_SF2_GUI_Profile_TrickSubItem__Init
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,System_String_o *DFMPBHNIPLA,
               KCLPNDAPADO_o *EKBENIDNAEE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GODDDLLLOLB_o *pGVar3;
  KCLPNDAPADO_o *pKVar4;
  Nekki_SF2_GUI_Profile_TrickSubItem_c *pNVar5;
  GODDDLLLOLB_Fields GVar6;
  undefined8 uVar7;
  
  if ((DAT_04566b0e & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    DAT_04566b0e = 1;
  }
  Nekki_SF2_GUI_Profile_SubItem__Init((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.COCAGDPOPLL = DFMPBHNIPLA;
  thunk_FUN_01c20e04(&(__this->fields).super.COCAGDPOPLL,DFMPBHNIPLA);
  (__this->fields).MGHHBGMPDEI = EKBENIDNAEE;
  thunk_FUN_01c20e04(&(__this->fields).MGHHBGMPDEI,EKBENIDNAEE);
  pUVar2 = (__this->fields)._Keys;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._KeysDescription;
    if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pGVar3 = FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
      if (pGVar3 != (GODDDLLLOLB_o *)0x0) {
        GVar6 = pGVar3->fields;
        pKVar4 = (__this->fields).MGHHBGMPDEI;
        uVar7 = NEON_rev64(CONCAT44(GVar6.HFBHMJBLLOI / 255.0,GVar6.AKPNOPAEKEF / 255.0),4);
                    /* try { // try from 032a6320 to 033a640b has its CatchHandler @ 032a6320
                       catch() { ... } // from try @ 032a6320 with catch @ 032a6320
                       catch() { ... } // from try @ 032a6530 with catch @ 032a6320
                       catch() { ... } // from try @ 032a65c8 with catch @ 032a6320
                       catch() { ... } // from try @ 032a65d0 with catch @ 032a6320
                       catch() { ... } // from try @ 032a6684 with catch @ 032a6320 */
        (__this->fields).super.GJFHNJFGBKE = (float)(int)uVar7;
        (__this->fields).super.NAPGLBIIEJP = (float)(int)((ulong)uVar7 >> 0x20);
        bVar1 = false;
        if (pKVar4 != (KCLPNDAPADO_o *)0x0) {
          bVar1 = (pKVar4->fields).HAEBIACJLHP != false;
        }
        pNVar5 = __this->klass;
        (__this->fields).KANKDJLJMMO = bVar1;
        (*(pNVar5->vtable)._57_UpdateIcon.methodPtr)(__this,(pNVar5->vtable)._57_UpdateIcon.method);
        (*(__this->klass->vtable)._51_SetActive.methodPtr)
                  (__this,1,(__this->klass->vtable)._51_SetActive.method);
        Nekki_SF2_GUI_Profile_TrickSubItem__BDIDKFGDFIL(__this,method_00);
        Nekki_SF2_GUI_Profile_TrickSubItem__BFPADNIMBFK(__this,method_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

