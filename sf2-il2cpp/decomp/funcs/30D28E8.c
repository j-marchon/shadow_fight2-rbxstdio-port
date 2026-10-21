// MKIBNAAANPO$$LEDDOEKOGHA @ RVA 0x30D28E8

void MKIBNAAANPO__LEDDOEKOGHA
               (MKIBNAAANPO_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,int32_t JGHIJMJNJLE,
               bool GEOCJFAJLHD,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  long lVar2;
  ACHLOMELAJE_o *pAVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x5;
  DNELIPCHKLK_o *local_38;
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_0456631a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_5623);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_15957);
    DAT_0456631a = 1;
  }
  local_38 = (DNELIPCHKLK_o *)0x0;
  bVar1 = MKIBNAAANPO__BHNHPKAALOC(method_00);
  bVar1 = MKIBNAAANPO__FMELMDFPPHI(__this,BHHBEIACGPB,bVar1,&local_38,JGHIJMJNJLE,in_x5);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_031d2adc;
    Nekki_SF2_GUI_Map_MapScene__ReloadZones
              ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
  }
  if (local_38 == (DNELIPCHKLK_o *)0x0) {
    return;
  }
  if (!GEOCJFAJLHD) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 == (ACHLOMELAJE_o *)0x0) goto LAB_031d2adc;
    pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(pAVar3,StringLiteral_15957,0,(MethodInfo *)0x0);
    if ((pMVar4 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) &&
       (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar4->fields).JAICMIMBIOA,(MethodInfo *)0x0), !bVar1)) {
      return;
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (local_38 != (DNELIPCHKLK_o *)0x0) {
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    CJNHFNHJHPE = (System_String_o *)
                  (*(local_38->klass->vtable)._3_ToString.methodPtr)
                            (local_38,(local_38->klass->vtable)._3_ToString.method);
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__LMJFPPDAPBF(pAVar3,StringLiteral_5623,CJNHFNHJHPE,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d2adc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

