// OHFEMEPFLLI$$MAHFCKJGBPP @ RVA 0x33CEA78

void OHFEMEPFLLI__MAHFCKJGBPP(OHFEMEPFLLI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  DNELIPCHKLK_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  OLKPEJMEBPJ_o *pOVar3;
  long lVar4;
  ACHLOMELAJE_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_o *x;
  System_String_o *pSVar5;
  
  if ((DAT_04567e49 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04567e49 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  DNELIPCHKLK__NDNPGAKJLHM(__this_00,method_00);
  pSVar5 = *(System_String_o **)&(__this->fields).LOEKILNCFAJ;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_01 = (MethodInfo *)0x0;
  pSVar5 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar5,(MethodInfo *)0x0);
  if (__this_00 == (DNELIPCHKLK_o *)0x0) goto LAB_034cecd0;
                    /* try { // try from 034ceb4c to 035ceb6b has its CatchHandler @ 034cf4e4 */
  DNELIPCHKLK__LGOFNFEIKFB(__this_00,pSVar5,method_01);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BANHBMINMMP = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
  if ((BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) &&
     (pOVar3 = (BANHBMINMMP->fields).LFJPDELEIHG, pOVar3 != (OLKPEJMEBPJ_o *)0x0)) {
    bVar1 = (__this->fields).super.field_0x51;
    bVar2 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar3,(MethodInfo *)0x0);
    if ((bool)(bVar1 ^ 1) != bVar2) {
      pOVar3 = (BANHBMINMMP->fields).LFJPDELEIHG;
      if (pOVar3 != (OLKPEJMEBPJ_o *)0x0) {
                    /* try { // try from 034cebb0 to 035cebd7 has its CatchHandler @ 034cf4c4 */
        OLKPEJMEBPJ__DPLIHJEANGE(pOVar3,bVar1 == 0,(MethodInfo *)0x0);
        lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01b81620();
        }
                    /* try { // try from 034cebe8 to 035cebef has its CatchHandler @ 034cf484 */
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar4 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034cec00 to 035cec0b has its CatchHandler @ 034cf480 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 034cec1c to 035cec27 has its CatchHandler @ 034cf47c */
          lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                    /* try { // try from 034cec38 to 035cec3f has its CatchHandler @ 034cf4bc */
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) ==
              (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_034cecd0;
                    /* try { // try from 034cec50 to 035cec7b has its CatchHandler @ 034cf4ec */
          Nekki_SF2_GUI_Map_MapScene__UpdateBattleButtonHidden
                    ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),BANHBMINMMP,
                     (MethodInfo *)0x0);
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
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_01 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
          goto LAB_034cecb8;
        }
      }
LAB_034cecd0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_034cecb8:
                    /* try { // try from 034cecc0 to 035ceccb has its CatchHandler @ 034cf4dc */
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

